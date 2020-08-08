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
#include <sensor_msgs/JointState.h>

// Function Declarations
#define PI 3.14159265
#define CON_T 0.020
static double argInit_real_T();
static void main_headIK_rotm();
float angMA[4][5];
float sumMA[4];
uint8_T itteration = 0;
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
ros::NodeHandle nh;
sensor_msgs :: JointState kumara_feedback_head_pose;
void poseCb(const std_msgs::Float32MultiArray& msg)
{
  Qx = msg.data[0];
  Qy = msg.data[1];
  Qz = msg.data[2];
  Qw = msg.data[3];
  // r  = msg.data[4];
}
ros::Subscriber<std_msgs::Float32MultiArray> sub("kumara/head/pose/mbed",&poseCb);
ros::Publisher chatter("kumara/feedback/head_pose", &kumara_feedback_head_pose);

DigitalOut led(LED2);
Serial pc(PC_6,PA_12);
// Serial pc(USBTX,USBRX);

SPI spi(PB_15,PB_14, PB_13); // mosi, miso, sclk
//Serial pc(USBTX,USBRX);
//L = 108mm
// D11 ???????? MOSI ??? Encoder
// D12 ???????? MISO ??? Encoder
// D13 ???????? CLK ??? Encoder
int w_offset[4]={0,0,0,0};
// D10 ???????? CS ??? Encoder
// CS ???????? chip select ????????????????????????????????? slave
Ticker control_In;
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
// double l_1 = 102.5;
// double l_2 = 38;
// double l_3 = 34.5;
// double l_4 = 14.5;
// double l_5 = 38;
// double l_6 = 108;
// double head_x = 0.0;
double T,F,L,R;
volatile char c =  '\0';

// char *name_pid[] = {"drive_top","real_top","drive_left","real_left","drive_right","real_right","drive_neck","real_neck"};
char *name[] = {"real_top","real_left","real_right","real_neck"};
double pos[4] ;
double vel[4]  ;
double eff[4]  ;
Myencoder encoder[4]={A0,A1,A2,A4};//(A0,A1,A2,A4);
Motor top_motor(D12,D13,D5);
Motor neck_motor(D10,D11,D2); // true
Motor left_motor(D8,D9,D4);
Motor right_motor(D6,D7,D3);
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
  
  headIK_rotm(Qw,Qx,Qy,Qz,r,&F,&T,&R,&L);
    
    int enc = encoder[0].read_enc(spi);
    //wait_us(5);
    int enc2 = encoder[1].read_enc(spi);
    //wait_us(5);
    int enc3 = encoder[2].read_enc(spi);
    //wait_us(5);
    int enc4 = encoder[3].read_enc(spi);
    //wait_us(5);
    if(enc != 0.00 && enc2!=0 && enc3 != 0 && enc4!=0)
    {
      head_top_ang = -((enc*360.00/(16384.00*3.25))-((w_offset[0])*360.00/(16384.00*3.25)));
      head_left_ang = ((w_offset[1])*360.00/(16384.00*2.00))-(enc2*360.00/(16384.00*2.00));
      head_right_ang = (enc3*360.00/(16384.00*2.00))-((w_offset[2])*360.00/(16384.00*2.00));
      neck_ang = (enc4*360.00/16384.00)-((w_offset[3])*360.00/16384.00);
    }

  if(set_top_ang > 45 ){
    set_top_ang = 45;
  }else if(set_top_ang < -45 ){
    set_top_ang = -45;
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
  else if(set_left_ang > 20){
    set_left_ang = 20 ;
  } 
  if(set_right_ang < -20){
    set_right_ang = -20;
  }
  else if(set_right_ang > 20){
    set_right_ang = 20 ;
  }
// --------- top motor control --------//
  //  float top_drive = pid_controller(1.6,0.0,5,set_top_ang,head_top_ang,pre_error[0],i_term[0],d_term[0]);
  float top_drive = pid_controller(1.43,0.001,4.0,set_top_ang,head_top_ang,pre_error[0],i_term[0],d_term[0]);
  top_motor.drive(top_drive/100.00);//1.65,0.0001,0.3
  top = top_drive;
  // --------- left motor control --------//1
  
  if((set_left_ang > head_left_ang )&& head_left_ang > 20.0)// head down
  {
    float left_drive = pid_controller(0.6,0.01,1.3,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
    left_motor.drive(left_drive/100.00);
    left = left_drive;

  }
  else if((set_left_ang < head_left_ang )&& head_left_ang > 20.0)//head up
  {
    float left_drive = pid_controller(1.8,0.01,1.7,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
    left_motor.drive(left_drive/100.00);
    left = left_drive;
  }
  else // normal
  {
    float left_drive = pid_controller(2.10,0.015,1.7,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
    left_motor.drive(left_drive/100.00);
    left = left_drive;
  }

  if((set_right_ang > head_left_ang) && head_right_ang >20.0)// down
  {
    float right_drive = pid_controller(0.6,0.01,1.3,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
    right_motor.drive(right_drive/100.00);
    right =right_drive;
  }
  else if((set_right_ang < head_left_ang) && head_right_ang >20.0)// down
  {
    float right_drive = pid_controller(1.8,0.01,1.7,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
    right_motor.drive(right_drive/100.00);
    right =right_drive;
  }
  else //normal
  {
    float right_drive = pid_controller(2.10,0.015,1.7,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
    right_motor.drive(right_drive/100.00);
    right =right_drive;
  }

    float neck_drive = pid_controller(2.9,0.15,4.0,set_neck_ang,neck_ang,pre_error[3],i_term[3],d_term[3]);
    // neck_motor.drive(neck_drive/100.00); //2.9 0.15 4.0    1.6 0.0 0.0
    neck =neck_drive;
    nh.spinOnce();
}

void kumara_fb_headpose_update_variable(double real_top, double real_left, double real_right, double real_neck)
{  
  pos[0] = real_top; 
  pos[1] = real_left; 
  pos[2] = real_right;
  pos[3] = real_neck;
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
  set_neck_ang = 0.0;
  set_left_ang = 0.0; //a1
  set_right_ang = 0.0;//a2
  set_top_ang = 0.0;
  control_In.attach(&head_control,CON_T);
  nh.getHardware()->setBaud(512000);
  nh.initNode();
  nh.subscribe(sub);
  nh.advertise(chatter);
  kumara_feedback_head_pose.header.frame_id = "kumara_feedback_head_pose";
  kumara_feedback_head_pose.name_length = 4;
  kumara_feedback_head_pose.velocity_length = 4;
  kumara_feedback_head_pose.position_length = 4; 
  kumara_feedback_head_pose.effort_length = 4; 
  kumara_feedback_head_pose.name = name;
  while (1)
  {
    float value[4] = {T*180.00/PI,F*180.00/PI,L*180.00/PI,R*180.00/PI};
    for(int i=0;i<4;i++){
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
  
  // set_neck_ang = (set_left_ang + set_right_ang) /2.00; 


    kumara_fb_headpose_update_variable( head_top_ang,
                                        head_left_ang,
                                        head_right_ang,
                                        neck_ang);
    kumara_feedback_head_pose.position = pos;
    kumara_feedback_head_pose.velocity = vel;
    kumara_feedback_head_pose.effort   = eff;
    kumara_feedback_head_pose.header.stamp = nh.now();
    
    pc.printf("%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t : ",Qx,Qy,Qz,Qw,r);
    
    pc.printf("%.3f\t%.3f\t%.3f\t%.3f\t:",set_top_ang,set_left_ang,set_right_ang,set_neck_ang);
    // pc.printf("%.3f\t%.3f\t%.3f\n",set_right_ang,head_right_ang,right);
    pc.printf("%.3f\t%.3f\t%.3f\t%.3f\t:",head_top_ang,head_left_ang,head_right_ang,neck_ang);
    pc.printf("\n");
    // pc.printf("%.3f\t%.3f\t%.3f\t\n",top,left,right);
    // pc.printf("%d\t%d\t%d\t%d\t",w_offset[0],w_offset[1],w_offset[2],w_offset[3]);
    // pc.printf("%d\t%d\t%d\t%d\t\n",encoder.read_enc(0),encoder.read_enc(1),encoder.read_enc(2),encoder.read_enc(3));
    // chatter.publish( &kumara_feedback_head_pose );
  }
  // Terminate the application.
  // You do not need to do this more than one time.
  headIK_rotm_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//