// Include Files
#include "main.h"
// #include <stdio.h>
#include "mbed.h"
#include "math.h"
#include "Myencoder.h"
#include "headIK_rotm.h"
#include "headIK_rotm_terminate.h"
#include "rt_nonfinite.h"
#include <ros.h>
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/Int16MultiArray.h>
#include <sensor_msgs/JointState.h>

// Function Declarations
#define PI 3.14159265
#define CON_T 0.025
static double argInit_real_T();
static void main_headIK_rotm();
float angMA[4][5];
float sumMA[4];
int16_t data_head_pose[6];
uint8_T itteration = 0;
DigitalOut kuma_onled(PA_12);
DigitalOut ros_runled(PA_10);
DigitalOut enc_runled(PA_11);
DigitalOut kuma_runled(PA_9);

static double argInit_real_T()
{
  return 0.0;
}

static void main_headIK_rotm()
{
  double qw_tmp;
  double theta_F;
  double theta_T;
  double theta_R;
  double theta_L;

  // Initialize function 'headIK_rotm' input arguments.
  qw_tmp = argInit_real_T();

  // Call the entry-point 'headIK_rotm'.
  headIK_rotm(qw_tmp, qw_tmp, qw_tmp, qw_tmp, qw_tmp, &theta_F, &theta_T,
              &theta_R, &theta_L);
}

float Qx=0.0,Qy=0.0,Qz=0.0,Qw=1.0,r=0.0;
float KKK_p,KKK_i,KKK_d,KKK_reset,KKK_p2,KKK_i2,KKK_d2,KKK_reset2;
ros::NodeHandle nh;
std_msgs::Int16MultiArray kumara_feedback_head_pose;
void poseCb(const std_msgs::Int16MultiArray& msg)
{
  Qx = msg.data[0]/1000.0;
  Qy = msg.data[1]/1000.0;
  Qz = msg.data[2]/1000.0;
  Qw = msg.data[3]/1000.0;
  // r  = msg.data[4];
  ros_runled = 1;
}

void pidCb(const std_msgs::Float32MultiArray& msg)
{
  KKK_p = msg.data[0];
  KKK_i = msg.data[1];
  KKK_d = msg.data[2];
  KKK_reset = msg.data[3];
}
void pidCb2(const std_msgs::Float32MultiArray& msg)
{
  KKK_p2 = msg.data[0];
  KKK_i2 = msg.data[1];
  KKK_d2 = msg.data[2];
  KKK_reset2 = msg.data[3];
}

ros::Subscriber<std_msgs::Int16MultiArray> sub("kumara/head/control",&poseCb);
ros::Subscriber<std_msgs::Float32MultiArray> subpid("kumara/head/pid",&pidCb); //ก้ม +
ros::Subscriber<std_msgs::Float32MultiArray> subpid2("kumara/head/pid2",&pidCb2); // เงย -
ros::Publisher chatter("kumara/feedback/head_pose", &kumara_feedback_head_pose);

Serial deb_ug(PD_8,PD_9,115200);

SPI spi(PC_12,PC_11, PC_10); // mosi, miso, sclk
//L = 108mm
// D11 ???????? MOSI ??? Encoder
// D12 ???????? MISO ??? Encoder
// D13 ???????? CLK ??? Encoder
int w_offset[4]={0,0,0,0};
// D10 ???????? CS ??? Encoder
// CS ???????? chip select ????????????????????????????????? slave
Ticker control_In;
Ticker run_blynk_led;
float pre_error[4]={0,0,0,0};
float i_term[4]={0,0,0,0};
float d_term[4]={0,0,0,0};
float head_left_ang = 0.00;
float head_right_ang = 0.00;
float head_top_ang = 0.00;
float neck_ang = 0.00;
float set_neck_ang = 0.0;
float set_left_ang = 0.0; 
float set_right_ang = 0.0;
float set_top_ang = 0.0;

float prev_neck_ang =0.00;
float prev_left_ang = 0.00;
float prev_right_ang = 0.00;
float prev_top_ang = 0.00;
float theta = 0.00;
float alpha = 0.00;
double T,F,L,R;
volatile char c =  '\0';
float limit_left,limit_right;
bool head_control_flag;
Myencoder encoder[4]={PD_0,PD_1,PD_2,PD_3};//(A0,A1,A2,A4);
Motor top_motor(PA_7,PA_5,PA_1);
Motor neck_motor(PE_9,PE_8,PB_14); // PE_12,PE_11,PB_15
Motor left_motor(PE_11,PE_12,PB_15);   // PG_1,PG_0,PA_2
Motor right_motor(PG_1,PG_0,PA_2);  //PE_9,PE_8,PB_14

void runled(){
  kuma_runled = !kuma_runled;
}
float pid_controller(float k_p,float k_i,float k_d,float setpoint,float feedback,float &pre_error,float &i_term,float &d_term){
  float pre_pwm;
  float new_error = setpoint - feedback;
  i_term += new_error;
  d_term = new_error - pre_error;
  pre_pwm = k_p*new_error + k_i*i_term + k_d*d_term ;
  pre_error = new_error;
  return pre_pwm;
} 
float top,neck,left,right;

void head_control(){
  
  head_control_flag =true;
}

void kumara_feedback_head_pose_update_variable(double kp1, double ki1, double kd1, double kp2 ,double ki2 ,double kd2)
{  
  kumara_feedback_head_pose.data[0] = kp1*1000; 
  kumara_feedback_head_pose.data[1] = ki1*1000; 
  kumara_feedback_head_pose.data[2] = kd1*1000;
  kumara_feedback_head_pose.data[3] = kp2*1000;
  kumara_feedback_head_pose.data[4] =  ki2*1000;
  kumara_feedback_head_pose.data[5] =  kd2*1000;
}

int main(int, const char * const [])
{

  // The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. 
  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_headIK_rotm();
  // double Qw =0.866;
  // double Qx =0.0;
  // double Qy =0.5;
  // double Qz =0.0;
  kuma_onled = 1;
  ros_runled = 0;
  kuma_runled = 0;
  wait(3);
  spi.format(16,1);
  spi.frequency(10000000);
  encoder[0].enc_offset(spi);
  encoder[1].enc_offset(spi);
  encoder[2].enc_offset(spi);
  encoder[3].enc_offset(spi);
  encoder[0].enc_offset(spi);
  encoder[1].enc_offset(spi);
  encoder[2].enc_offset(spi);
  encoder[3].enc_offset(spi);
  for (int i=0;i<4;i++){
    w_offset[i] = encoder[i].setoffset;
  }
  enc_runled =1;
  set_neck_ang = 0.0;
  set_left_ang = 0.0; //a1
  set_right_ang = 0.0;//a2
  set_top_ang = 0.0;
  run_blynk_led.attach(&runled,0.5);
  control_In.attach(&head_control,CON_T);

  nh.getHardware()->setBaud(512000);
  kumara_feedback_head_pose.data_length = 6;
  kumara_feedback_head_pose.data = data_head_pose;

  nh.initNode();
  nh.subscribe(sub);
  nh.subscribe(subpid);
  nh.subscribe(subpid2);
  nh.advertise(chatter);
  // KKK_p = 0.5;
  // KKK_i = 0;
  // KKK_d = 0.2;
  // KKK_p2 = 0.5;
  // KKK_i2 = 0;
  // KKK_d2 = 0.2;

  while (1)
  {
    // *(top_motor.outa) = 1;
    // *(neck_motor.outa) = 1;
    // *(left_motor.outa) = 1;
    // *(right_motor.outa) = 1;
    float value[4] = {T*180/PI,F*180/PI,L*180/PI,R*180/PI};
    for(int i=0;i<4;i++)
    {
    sumMA[i] -= angMA[i][itteration];
    angMA[i][itteration] =  value[i];
    sumMA[i] += angMA[i][itteration];
    }

    itteration ++;
    itteration = itteration%5;
    set_top_ang = sumMA[0]/5;
    set_neck_ang =sumMA[1]/5;
    set_left_ang = sumMA[2]/5;
    set_right_ang = sumMA[3]/5;
    if(KKK_reset == 1){
        // i_term[0] = 0;
        i_term[1] = 0;
        // i_term[2] = 0;
        // i_term[3] = 0;
    }
    // int enc = encoder[0].read_enc(spi);
    //   //wait_us(5);
    // int enc2 = encoder[1].read_enc(spi);
    //   //wait_us(5);
    // int enc3 = encoder[2].read_enc(spi);
    //   //wait_us(5);
    // int enc4 = encoder[3].read_encchk(spi);
    // *(encoder[3].cs) = 1;
    // wait(1.5);
    // *(encoder[3].cs) = 0;
    // wait(1.5);

    if(head_control_flag){
      headIK_rotm(Qw,Qx,Qy,Qz,r,&F,&T,&R,&L);
      int enc = encoder[0].read_enc(spi);
      //wait_us(5);
      int enc2 = encoder[1].read_enc(spi);
      //wait_us(5);
      int enc3 = encoder[2].read_enc(spi);
      // wait_us(5);
      int enc4 = encoder[3].read_enc(spi);
      // wait_us(5);

      if(enc != 0.00 && enc2!=0 && enc3 != 0 && enc4!=0)
      {
        head_top_ang = -((enc*360.00/(16384.00*3.25))-((w_offset[0])*360.00/(16384.00*3.25)));
        head_left_ang = ((w_offset[1])*360.00/(16384.00*2.00))-(enc2*360.00/(16384.00*2.00));
        head_right_ang = (enc3*360.00/(16384.00*2.00))-((w_offset[2])*360.00/(16384.00*2.00));
        neck_ang = (enc4*360.00/16384.00)-((w_offset[3])*360.00/16384.00);
      }

      if(set_top_ang > 40 ){
        set_top_ang = 40;
      }else if(set_top_ang < -40 ){
        set_top_ang = -40;
      }
      else if(set_neck_ang > 45 ){
        set_neck_ang = 45;
      }
      else if(set_neck_ang < -45){
        set_neck_ang = -45;
      }
      if(set_left_ang < -20){
        set_left_ang = -20;
      }
      else if(set_left_ang > 30){
        set_left_ang = 30 ;
      } 
      if(set_right_ang < -20){
        set_right_ang = -20;
      }
      else if(set_right_ang > 30){
        set_right_ang = 30 ;
      }
      limit_left =set_left_ang;
      limit_right = set_right_ang;
    // --------- top motor control --------//
      float top_drive = pid_controller(0.8,0.01,0.5,set_top_ang,head_top_ang,pre_error[0],i_term[0],d_term[0]);
      top_motor.drive(top_drive/100.00);//1.65,0.0001,0.3  top_drive/100.00 0.8 0.001 0.5
      // top = top_drive;

      // --------- left motor control --------///

      // if(set_left_ang > head_left_ang ){ // ก้ม 0.6,0.01,1.3 +  1.0 0.003 4.0
        float left_drive = pid_controller(0.7,0.001,0.5,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
        left_motor.drive(left_drive/100.00); //1.4,0.01,3.0 0.5 0.02 0.2
      // }else if(set_left_ang < head_left_ang ){//เงย 1.8,0.01,1.7 -   2.2 0.01 4.0
      //   float left_drive = pid_controller(KKK_p,KKK_i,KKK_d,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
      //   left_motor.drive(left_drive/100.00);//3.0,0.01,2.3
      // }
    ///// --------- right motor control --------/////////
      // if(set_right_ang > head_right_ang ){ // ก้ม 0.6,0.01,1.3 +
        float right_drive = pid_controller(0.7,0.001,0.5,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
        right_motor.drive(right_drive/100.00);
      // }else if(set_right_ang < head_right_ang ){//เงย 1.8,0.01,1.7 -
      //   float right_drive = pid_controller(KKK_p2,KKK_i2,KKK_d2,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
      //   right_motor.drive(right_drive/100.00);
      // }
      ///// --------- neck motor control --------/////////
      float neck_drive = pid_controller(0.5,0.0,0.0,set_neck_ang,neck_ang,pre_error[3],i_term[3],d_term[3]);
      neck_motor.drive(neck_drive/100.00); //2.9 0.15 4.0    1.6 0.0 0.0
      // neck =neck_drive;
      nh.spinOnce();
      head_control_flag =false;
    }
    kumara_feedback_head_pose_update_variable(KKK_p,
                                        KKK_i,
                                        KKK_d,
                                        KKK_p2,
                                        KKK_i2,
                                        KKK_d2);

    
    // deb_ug.printf("%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t : ",Qx,Qy,Qz,Qw,r);
    // deb_ug.printf("%.3f\t%.3f\t%.3f\t%.3f\t:",set_top_ang,set_left_ang,set_right_ang,set_neck_ang);
    // deb_ug.printf("t:%.3f\tl:%.3f\tr:%.3f\tn:%.3f\t",head_top_ang,head_left_ang,head_right_ang,neck_ang);
    // ttl.printf("%.3f\t%.3f\t%.3f\n",set_right_ang,head_right_ang,right);
    deb_ug.printf("setleft:%.3f  \t",set_left_ang);
    deb_ug.printf(" left:%.3f",head_left_ang);
    // deb_ug.printf("t:%d\tl:%d\td:%d\tn:%d\t",enc,enc2,enc3,enc4);

    deb_ug.printf("\n");
    // ttl.printf("%.3f\t%.3f\t%.3f\t\n",top,left,right);
    // ttl.printf("%d\t%d\t%d\t%d\t",w_offset[0],w_offset[1],w_offset[2],w_offset[3]);
    // ttl.printf("%d\t%d\t%d\t%d\t\n",encoder.read_enc(0),encoder.read_enc(1),encoder.read_enc(2),encoder.read_enc(3));
    chatter.publish( &kumara_feedback_head_pose );
  }
  // Terminate the application.
  // You do not need to do this more than one time.
  headIK_rotm_terminate();
  return 0;
  wait_ms(10);
}

//
// File trailer for main.cpp
//
// [EOF]
//