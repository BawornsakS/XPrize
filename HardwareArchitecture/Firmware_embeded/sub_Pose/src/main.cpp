// Include Files
#include "main.h"
// #include <stdio.h>
#include "mbed.h"
#include "math.h"
// #include "string.h"
#include "headIK_rotm.h"
#include "headIK_rotm_terminate.h"
#include "rt_nonfinite.h"
#include <ros.h>
#include <std_msgs/Float32MultiArray.h>
#include <geometry_msgs/PoseStamped.h>
#include <sensor_msgs/JointState.h>

// Function Declarations
#define PI 3.14159265
#define CON_T 0.022
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
PwmOut head_top_speed(D5);
PwmOut head_left_speed(D4);
PwmOut head_right_speed(D3);
PwmOut neck_speed(D2);
// float top_kalman,left_kalman,right,kalman
DigitalOut head_top_motorA(D12);
DigitalOut head_top_motorB(D13);
DigitalOut neck_motorB(D11);
DigitalOut neck_motorA(D10);
DigitalOut head_left_motorA(D9);
DigitalOut head_left_motorB(D8);
DigitalOut head_right_motorA(D7);
DigitalOut head_right_motorB(D6);
DigitalOut cs(A0);//???
DigitalOut cs2(A1);//????
DigitalOut cs3(A2);//???
DigitalOut cs4(A4);//?????
DigitalOut csA[4]={A0,A1,A2,A4};
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

char *name_pid[] = {"drive_top","real_top","drive_left","real_left","drive_right","real_right","drive_neck","real_neck"};
char *name[] = {"real_top","real_left","real_right","real_neck"};
double pos[8] ;
double vel[8]  ;
double eff[8]  ;


float pid_controller(float k_p,float k_i,float k_d,float setpoint,float feedback,float &pre_error,float &i_term,float &d_term){
  float pre_pwm;
  float new_error = setpoint - feedback;
  i_term += new_error;
  d_term = new_error - pre_error;
  pre_pwm = k_p*new_error + k_i*i_term + k_d*d_term ;
  pre_error = new_error;
  return pre_pwm;
} 
void neck_motor(float speed_neck)
{
  if(speed_neck < 0)
  {
    neck_motorA = 0;
    neck_motorB = 1;
    neck_speed.write(abs(speed_neck)); 
    if(abs(speed_neck)>1)
    {
      speed_neck = 1;
    }
    //pc.printf("neck front = %.3f : ",speed_neck);
  }
   else if(speed_neck > 0)
  {
    neck_motorA = 1;
    neck_motorB = 0;
    neck_speed.write(abs(speed_neck)); 
    if(abs(speed_neck)>1)
    {
      speed_neck = 1;
    }
    //pc.printf("neck back = %.3f : ",speed_neck);
  }
  else
  {
    neck_motorA = 1;
    neck_motorB = 1;
    neck_speed.write(0.500); 
    //pc.printf("neck stop : ");
  }
}
void left_motor(float speed_left)
{
  if(speed_left < 0)
  {
    head_left_motorA = 1;
    head_left_motorB = 0;
    head_left_speed.write(abs(speed_left)); 
    if(abs(speed_left)>1)
    {
      speed_left = 1;
    }
    //pc.printf("left front = %.3f : ",speed_left);
  }
   else if(speed_left > 0)
  {
    head_left_motorA = 0;
    head_left_motorB = 1;
    head_left_speed.write(abs(speed_left)); 
    if(abs(speed_left)>1)
    {
      speed_left = 1;
    }
    //pc.printf("left back = %.3f : ",speed_left);
  }
  else
  {
    head_left_motorA = 1;
    head_left_motorB = 1;
    head_left_speed.write(0.500); 
    //pc.printf("left stop : ");
  }
}
void right_motor(float speed_right)
{
  if(speed_right < 0)
  {
    head_right_motorA = 1;
    head_right_motorB = 0;
    head_right_speed.write(abs(speed_right)); 
    if(abs(speed_right)>1)
    {
      speed_right = 1;
    }
    //pc.printf("right front = %.3f : ",speed_right);
  }
   else if(speed_right > 0)
  {
    head_right_motorA = 0;
    head_right_motorB = 1;
    head_right_speed.write(abs(speed_right)); 
    if(abs(speed_right)>1)
    {
      speed_right = 1;
    }
    //pc.printf("right back = %.3f : ",speed_right);
  }
  else
  {
    head_right_motorA = 1;
    head_right_motorB = 1;
    head_right_speed.write(0.500); 
    //pc.printf("right stop : ");
  }
}
void top_motor(float speed_top)
{
  if(speed_top < 0)
  {
    head_top_motorA = 0;
    head_top_motorB = 1;
    head_top_speed.write(abs(speed_top)); 
    if(abs(speed_top)>1)
    {
      speed_top = 1;
    }
    //pc.printf("right top = %.3f : ",speed_top);
  }
   else if(speed_top > 0)
  {
    head_top_motorA = 1;
    head_top_motorB = 0;
    head_top_speed.write(abs(speed_top)); 
    if(abs(speed_top)>1)
    {
      speed_top = 1;
    }
    //pc.printf("left top = %.3f : ",speed_top);
  }
  else
  {
    head_top_motorA = 1;
    head_top_motorB = 1;
    head_top_speed.write(0.500); 
    //pc.printf("right stop : ");
  }
}
int encoder()
{
  static int w;
  cs = 1;
  cs = 0;
  spi.write(0xFFFF);
  cs = 1;
  wait_us(1);
  cs = 0;
  w = spi.write(0x0000);
  cs = 1;
  w = w & 0x3FF0;
  //w=w/2;
  //pc.printf("%X\n", w);
  return w;
}
int encoder2()
{
  static int w2;
  cs2 = 1;
  cs2 = 0;
  spi.write(0xFFFF);
  cs2 = 1;
  wait_us(1);
  cs2 = 0;
  w2 = spi.write(0x0000);
  cs2 = 1;
  w2 = (w2 & 0x3FF0);
  //w=w/2;
  //pc.printf("%X\n", w2);
  return w2;
}
int encoder3()
{
  static int w3;
  cs3 = 1;
  cs3 = 0;
  spi.write(0xFFFF);
  cs3 = 1;
  wait_us(1);
  cs3 = 0;
  w3 = spi.write(0x0000);
  cs3 = 1;
  w3 = w3 & 0x3FF0;
  //w=w/2;
 // pc.printf("%X\n", w3);
  return w3;
}
int encoder4()
{
  static int w4;
  cs4 = 1;
  cs4 = 0;
  spi.write(0xFFFF);
  cs4 = 1;
  wait_us(1);
  cs4 = 0;
  w4 = spi.write(0x0000);
  cs4 = 1;
  w4 = (w4 & 0x3FF0);
  //w=w/2;
  //pc.printf("%X\n", x);
  return w4;
}
void encoder_offset(){
  for (int i=0;i<4;i++){
    csA[i] = 1;
    csA[i] = 0;
    spi.write(0xFFFF);
    csA[i] = 1;
    wait_us(1);
    csA[i] = 0;
    w_offset[i] = spi.write(0x0000);
    csA[i] = 1;
    w_offset[i] = (w_offset[i] & 0x3FF0);
  }
  
}
void head_control(){
  
  headIK_rotm(Qw,Qx,Qy,Qz,r,&F,&T,&R,&L);
    
    int enc = encoder();
    //wait_us(5);
    int enc2 = encoder2();
    //wait_us(5);
    int enc3 = encoder3();
    //wait_us(5);
    int enc4 = encoder4();
    //wait_us(5);
    if(enc != 0.00 && enc2!=0 && enc3 != 0 && enc4!=0)
    {
      // head_top_ang = -((enc*360.00/(16384.00*3.25))-57.00);
      head_top_ang = -((enc*360.00/(16384.00*3.25))-(w_offset[0]*360.00/(16384.00*3.25)));
      // head_left_ang = 81.0-(enc2*360.00/(16384.00*2.00));
      head_left_ang = (w_offset[1]*360.00/(16384.00*2.00))-(enc2*360.00/(16384.00*2.00));
      // head_right_ang = (enc3*360.00/(16384.00*2.00))-104.800;
      head_right_ang = (enc3*360.00/(16384.00*2.00))-(w_offset[2]*360.00/(16384.00*2.00));
      // neck_ang = (enc4*360.00/16384.00)-177;
      neck_ang = (enc4*360.00/16384.00)-(w_offset[3]*360.00/16384.00);
    
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
  // --------- top motor control --------//0
   float top_drive = pid_controller(1.1,0.015,1.6,set_top_ang,head_top_ang,pre_error[0],i_term[0],d_term[0]);
  top_motor(top_drive/100.00);//1.65,0.0001,0.3
  // --------- left motor control --------//1
  
  if((set_left_ang > head_left_ang )&& head_left_ang > 20.0)//down
  {
    float left_drive = pid_controller(0.6,0.01,1.3,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
    left_motor(left_drive/100.00);

  }
  else if((set_left_ang < head_left_ang )&& head_left_ang > 20.0)//down
  {
    float left_drive = pid_controller(1.8,0.01,1.7,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
    left_motor(left_drive/100.00);

  }
  else // normal
  {
    float left_drive = pid_controller(2.10,0.015,1.7,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
    left_motor(left_drive/100.00);
  }

  if((set_right_ang > head_left_ang) && head_right_ang >20.0)// down
  {
    float right_drive = pid_controller(0.6,0.01,1.3,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
    right_motor(right_drive/100.00);
  }
  else if((set_right_ang < head_left_ang) && head_right_ang >20.0)// down
  {
    float right_drive = pid_controller(1.8,0.01,1.7,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
    right_motor(right_drive/100.00);
  }
  else //normal
  {
    float right_drive = pid_controller(2.10,0.015,1.7,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
    right_motor(right_drive/100.00);
  }

    float neck_drive = pid_controller(2.9,0.15,4.0,set_neck_ang,neck_ang,pre_error[3],i_term[3],d_term[3]);
    neck_motor(neck_drive/100.00); //2.9  0.13 3.9
  nh.spinOnce();
  
  
}

void kumara_fb_headpose_update_variable(double drive_top, double real_top, double drive_left, double real_left, double drive_right, double real_right, double drive_neck, double real_neck)
{  
  pos[0] = drive_top;
  pos[1] = real_top;
  pos[2] = drive_left;
  pos[3] = real_left;
  pos[4] = drive_right;
  pos[5] = real_right;
  pos[6] = drive_neck;
  pos[7] = real_neck;

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
  set_neck_ang = 0.0;
  set_left_ang = 0.0; //a1
  set_right_ang = 0.0;//a2
  set_top_ang = 0.0;
  cs = 1;
  cs2 = 1;
  cs3 = 1;
  cs4 = 1;
  spi.format(16,1);
  spi.frequency(10000000);
  encoder_offset();
  control_In.attach(&head_control,CON_T);
  nh.getHardware()->setBaud(512000);
  nh.initNode();
  nh.subscribe(sub);

  nh.advertise(chatter);
  kumara_feedback_head_pose.header.frame_id = "kumara_feedback_head_pose";
  kumara_feedback_head_pose.name_length = 8;
  kumara_feedback_head_pose.velocity_length = 8;
  kumara_feedback_head_pose.position_length = 8; 
  kumara_feedback_head_pose.effort_length = 8; 
  kumara_feedback_head_pose.name = name_pid;
  
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
  // set_neck_ang =sumMA[1]/5;
  set_left_ang = sumMA[2]/5;
  set_right_ang = sumMA[3]/5;
  set_neck_ang = (set_left_ang + set_right_ang) /2.00; 


    kumara_fb_headpose_update_variable( set_top_ang, head_top_ang,
                                        set_left_ang, head_left_ang,
                                        set_right_ang, head_right_ang,
                                        set_neck_ang, neck_ang);
    kumara_feedback_head_pose.position = pos;
    kumara_feedback_head_pose.velocity = vel;
    kumara_feedback_head_pose.effort   = eff;
    kumara_feedback_head_pose.header.stamp = nh.now();


    pc.printf("%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t : ",Qx,Qy,Qz,Qw,r);
    
    pc.printf("%.3f\t%.3f\t%.3f\t%.3f\t : ",set_top_ang,set_left_ang,set_right_ang,set_neck_ang);

    pc.printf("%.3f\t%.3f\t%.3f\t%.3f\t\n",head_top_ang,head_left_ang,head_right_ang,neck_ang);
    

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