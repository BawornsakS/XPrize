#include <mbed.h>
#include "MPU9250.h"
#include <math.h>
#include <Wheel.h>
#include <ros.h>
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/Float32.h>
using namespace baseDrive;

#define PI 3.14159265
#define G 9.782970341
#define CON_T 0.025
// #define reFIFO_T 1.0
Serial ttl(PC_6, PA_12 ,9600);
Driver driver;
MPU9250 imu;
// Timer timer_slow;
Timer IMU_timer;
Ticker base_In;
// Ticker reFIFO_In;
bool base_control_flag;
#pragma region Kalman  
  float w_update =0;
  float w_inKalman = 0;
  float w_outKalman = 0; 
  float orientation =0;
  float Q,R;
  float sigma_a = 8.5;
  float sigma_w = 1.0; 
  float x1_in = 0;
  float x2_in = 0;
  float x1 = 0; // orientation
  float x2 = 0; // w_outKalman
  float p11 = 1.0;
  float p12 = 0;
  float p21 = 0;
  float p22 = 0.9;
#pragma endregion Kalman

#pragma region pid 
  // Encoder and imu
  float pre_error = 0;
  float i_term =0;
  float d_term =0;
#pragma endregion pid
int radius = 51;//mm
// int Velocity = 0;
float ang =0;
//int16_t Wz =0;
float Vx_Front =0;
float Vy_Side =0;
float speed_satuated=0.8f;
float Vx,Vy,Vz,Theta,Qx,Qy,Qz,Qw;
float kumara_theta=0;
ros::NodeHandle nh;
std_msgs::Float32MultiArray kumara_feedback_pose_for_odom;

void twist_pose_callback(const std_msgs::Float32MultiArray& twist_pose_msg)
{
  Vx    = twist_pose_msg.data[0];
  Vy    = twist_pose_msg.data[1];
  Theta = twist_pose_msg.data[2];
}
ros::Subscriber<std_msgs::Float32MultiArray> sub_base_control("kumara/base/control",&twist_pose_callback);
ros::Publisher odom("kumara/feedback/pose_for_odom",&kumara_feedback_pose_for_odom);

float set_odom()
{
  return 0;
}

// void GO(float Vx=0.00,float Vy=0.00,float ang=0.00)
// {
//     driver.drive(Vx,Vy,ang,speed_satuated);
// } 

void task_sent() {
  imu.readimu();
}

float kmfupdatelight(int16_t w_inKalman,float &p11,float &p12,float &p21,float &p22,float &x1_in,float &x2_in,float sigma_a,float sigma_w,float &x1,float &x2){
    Q = pow(sigma_a,2);
    R = pow(sigma_w,2);

    float x1_new = x1_in+x2_in*CON_T;
    float x2_new = 0+x2_in;
    float ye = w_inKalman-x2_new;
    p11 = p11 + CON_T*p21 + (Q*pow(abs(CON_T),4))/4 + (pow(abs(CON_T),2)*(p12 + CON_T*p22))/CON_T;
    p12 = p12 + CON_T*p22 + (Q*CON_T*pow(abs(CON_T),2))/2;
    p21 = (2*CON_T*p21 + Q*pow(abs(CON_T),4) + 2*p22*pow(abs(CON_T),2))/(2*CON_T);
    p22 = Q*pow(abs(CON_T),2) + p22;
    x1_new = x1_new + (p12*ye)/(R + p22);
    x2_new = x2_new + (p22*ye)/(R + p22);
    p11 = p11 - (p12*p21)/(R + p22);
    p12 = p12 - (p12*p22)/(R + p22);
    p21 = -p21*(p22/(R + p22) - 1);
    p22 = -p22*(p22/(R + p22) - 1);
    x1 = x1_new;
    x2 = x2_new;
    return x2;
}

float pid_controller(float k_p,float k_i,float k_d,float setpoint,float feedback,float &pre_error,float &i_term,float &d_term){
  float pre_pwm;
  float new_error = setpoint - feedback;
  if (new_error >= 180.00){ // 350 - 2 = 348 --> -12
      new_error -= 360.00;
  }
  else if (new_error <= -180.00){ //2-358 = -356 --> +4
      new_error += 360.00;
  }
  if(k_i != 0.0){
    i_term += new_error;
  }
  d_term = new_error - pre_error;
  pre_pwm = k_p*new_error + k_i*i_term + k_d*d_term ;
  pre_error = new_error;
  return pre_pwm;
} 


void base_control()
{
 //อ่าน imu
//  imu.readGyroData();
//  task_sent();
base_control_flag = true;
// IMU_timer.start();
}

int main()
{ 
  #pragma region main_setup
  #pragma region rosserial setup
    nh.getHardware()->setBaud(512000);
    nh.initNode();
    nh.advertise(odom);
    nh.subscribe(sub_base_control);

  #pragma endregion rosserial setup
  driver.setWheel(2,D9,D10,PB_10); //BL
  
  driver.setWheel(3,D12,D13,PA_7); // BR
  
  driver.setWheel(1,D7,D8,PB_4); //FR

  driver.setWheel(0,D4,D2,PB_3); //FL

  // driver.hwsetWheel(0,D3,D2,PB_6);//FL
  
  driver.drive(0.0f,0.0f,0.0f,speed_satuated);
  
  //imu
  wait(3);
  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  ttl.printf("I AM 0x%x\n\r", whoami);
  
  // ttl.printf("Hello");
  
  if (whoami == 0x71) // WHO_AM_I should always be 0x73
  {
    wait_ms(10.0);
    imu.resetMPU9250();            // Reset registers to default in preparation for device calibration
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias);
    imu.MPU9250SelfTest(SelfTest); // Start by performing self test and reporting values
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias); // Calibrate gyro and accelerometers, load biases in bias registers
    wait_ms(20.0);
    //imu.config(ttl,true);
    imu.initMPU9250();
    imu.initAK8963(imu.magCalibration);
    wait_ms(10.0);
  }
  else
  {
    while (1); // Loop forever if communication doesn't happen
  }

  imu.getAres(); // Get accelerometer sensitivity
  imu.getGres(); // Get gyro sensitivity
  imu.getMres(); // Get magnetometer sensitivity
  // ttl.printf("Hi");
  // timer_slow.start();
  // IMU_timer.start();
  base_In.attach(&base_control,CON_T);
  // reFIFO_In.attach(&reFIFO_trig,reFIFO_T);
  #pragma endregion main_setup
  kumara_feedback_pose_for_odom.data_length = 3;
  while (1)
  {
    // ttl.printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", Vx,Vy,driver.value[0],driver.value[1],driver.value[2],driver.value[3]);
    // imu.readimu();
    // if (bluetooth.readable()){
    //   char temp = bluetooth.getc();
    //   switch(temp)
    //   {
    //     case 's':
    //     Vx = -1.00;
    //     Vy = 0.00;
    //     break;
    //     default:
    //       break;
    //   }
    // }
    
    IMU_timer.start();
    if (IMU_timer.read()>=0.025){
      w_inKalman = imu.readz();
      IMU_timer.reset();
    }

    if(base_control_flag){
      //ทำ kalman
      #pragma region Kalman_filter
      //  float w_update = w_inKalman;
      x1_in = x1;
      x2_in = x2;
      w_outKalman = kmfupdatelight(w_inKalman,p11,p12,p21,p22,x1_in,x2_in,sigma_a,sigma_w,x1,x2);
      orientation = x1;
      if (orientation >= 360.00 || orientation <= -360.00){
          x1 = 0.0;
          orientation = 0.0;
      }
      #pragma endregion get w and theta from kalman
      kumara_theta = Theta;
      // ang = pid_controller(0.23,0.0,1.8,kumara_theta,orientation,pre_error,i_term,d_term); // Infact this is orientation
      ang = pid_controller(0.0975,0.0000,2.295,kumara_theta,orientation,pre_error,i_term,d_term); // Infact this is orientation
      // ang = pid_controller(0.19,0.000,0.0,kumara_theta,orientation,pre_error,i_term,d_term); // Infact this is orientation
      /* move and Rotate */
      Vx_Front = (Vx * cos((ang * PI)/180)) - (Vy * sin((ang*PI)/180)); 
      Vy_Side  = (Vx * sin((ang * PI)/180)) + (Vy * cos((ang * PI)/180));
      if (abs(Theta - orientation) <= 1.0f){
        driver.drive(0,0,0,speed_satuated);
      }
      else{
        driver.drive(Vx_Front,Vy_Side,ang,speed_satuated);
      }
      base_control_flag =false;
    }
    
      
    // ttl.printf("%.2f\t%.2f\t%.2f\n",w_inKalman,w_outKalman,orientation);
    // ttl.printf("%.2f\t%.2f\t%.2f\t: %.2f\t%.2f\t \n",w_outKalman,Theta,orientation,Vx,Vy);
     ttl.printf("%.2f\t%.2f\t%.2f\n",Theta,orientation,abs(Theta - orientation));
    // ttl.printf("%.2f\t%.2f",Vx,Vy);
    // ttl.printf("\n");
    kumara_feedback_pose_for_odom.data[0] = 0.0; // pose.x
    kumara_feedback_pose_for_odom.data[1] = 0.0; // pose.y
    kumara_feedback_pose_for_odom.data[2] = 180.0; // yaw.robot
    odom.publish(&kumara_feedback_pose_for_odom);
    nh.spinOnce();
    wait_ms(10);


    // if (IMU_timer.read()>=0.1){
    //   // task_sent();
      
    //   double eiei_output2 = timer_slow.read();
    //   timer_slow.reset();
    //   // ttl.printf("ax:%f\tay:%f\taz:%f\tgx:%f\tgy:%f\tgz:%f\tmx:%f\tmy:%f\tmz:%f\t\n",imu.ax, imu.ay, imu.az, imu.gx, imu.gy, imu.gz, imu.mx, imu.my, imu.mz);
    //   // ttl.printf("\t\t\t time: %f\n",eiei_output2);
    //   IMU_timer.reset();
    // }
    // timer_slow.reset();
  }
  }
  