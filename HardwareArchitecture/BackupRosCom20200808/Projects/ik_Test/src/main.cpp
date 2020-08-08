//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 07-Jul-2020 11:48:05
//

//***********************************************************************
// This automatically generated example C++ main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************

// Include Files
#include "main.h"
#include <stdio.h>
#include "mbed.h"
#include "math.h"
#include "string.h"
#include <ros.h>
#include <geometry_msgs/PoseStamped.h>
#include "ik_head2.h"
#include "ik_head2_terminate.h"
// Function Declarations
static double argInit_real_T();
static void main_ik_head2();

// Function Definitions

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_ik_head2()
{
  double Qw_tmp_tmp;
  double theta_T;
  double theta_F;
  double theta_L;
  double theta_R;

  // Initialize function 'ik_head2' input arguments.
  Qw_tmp_tmp = argInit_real_T();

  // Call the entry-point 'ik_head2'.
  ik_head2(Qw_tmp_tmp, Qw_tmp_tmp, Qw_tmp_tmp, argInit_real_T(), argInit_real_T(),
           argInit_real_T(), argInit_real_T(), argInit_real_T(), argInit_real_T(),
           argInit_real_T(), argInit_real_T(), &theta_T, &theta_F, &theta_L,
           &theta_R);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//

ros::NodeHandle nh;
DigitalOut led(LED2);
Serial pc(PA_11,PA_12);
float Qx=0.0,Qy=0.0,Qz=0.0,Qw=0.0,r=0.0;
void poseCb(const geometry_msgs::PoseStamped& msg)
{
  Qx = msg.pose.orientation.x;
  Qy = msg.pose.orientation.y;
  Qz = msg.pose.orientation.z;
  Qw = msg.pose.orientation.w;
  r = msg.pose.position.x;
  //led = 1;
}
ros::Subscriber<geometry_msgs::PoseStamped> sub("kumara/head/pose",&poseCb);
SPI spi(PB_15,PB_14, PB_13); // mosi, miso, sclk
//Serial pc(USBTX,USBRX);
//L = 108mm
// D11 ???????? MOSI ??? Encoder
// D12 ???????? MISO ??? Encoder
// D13 ???????? CLK ??? Encoder
#define PI 3.141592
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
//  int head_left_ang = 0;
//  int head_right_ang = 0;
//  int head_top_ang = 0;
//  int neck_ang = 0;
DigitalOut cs(A0);//???
DigitalOut cs2(A1);//????
DigitalOut cs3(A2);//???
DigitalOut cs4(A3);//?????
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
float set_neck_ang = 0;
float set_left_ang = 0;
float set_right_ang = 0;
float set_top_ang = 80;
float prev_neck_err =0.00;
float prev_left_err = 0.00;
float prev_right_err = 0.00;
float prev_top_err = 0.00;
float theta = 0.00;
float alpha = 0.00;
volatile char c =  '\0';
#pragma region Kalman 
float sigma_a[2] = {8.5,8.5};
float sigma_w[2] = {1.0,1.0}; 
float Q;
float R;
float x1_in[4] = {0,0,0,0};
float x2_in[4] = {0,0,0,0};
float x1[4] = {0,0,0,0};
float x2[4] = {0,0,0,0};
float p11[4] = {1.0,1.0,1.0,1.0};
float p12[4] = {0,0,0,0};
float p21[4] = {0,0,0,0};
float p22[4] = {1.0,1.0,1.0,1.0};
float v_time = 0.01;
float enc1,enc2,enc3,enc4;
#pragma endregion Kalman000

float kmfupdatelight(float vel,float &p11,float &p12,float &p21,float &p22,float &x1_in,float &x2_in,float sigma_a,float sigma_w,float &x1,float &x2){
    Q = pow(sigma_a,2);
    R = pow(sigma_w,2);
    float x1_new = x1_in+x2_in*v_time;
    float x2_new = 0+x2_in;
    float ye = vel-x2_new;
    p11 = p11 + v_time*p21 + (Q*pow(abs(v_time),4))/4 + (pow(abs(v_time),2)*(p12 + v_time*p22))/v_time;
    p12 = p12 + v_time*p22 + (Q*v_time*pow(abs(v_time),2))/2;
    p21 = (2*v_time*p21 + Q*pow(abs(v_time),4) + 2*p22*pow(abs(v_time),2))/(2*v_time);
    p22 = Q*pow(abs(v_time),2) + p22;
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
    head_top_motorA = 1;
    head_top_motorB = 0;
    head_top_speed.write(abs(speed_top)); 
    if(abs(speed_top)>1)
    {
      speed_top = 1;
    }
    //pc.printf("right top = %.3f : ",speed_top);
  }
   else if(speed_top > 0)
  {
    head_top_motorA = 0;
    head_top_motorB = 1;
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
void head_control(){
  head_top_ang = (encoder()*360.00/(16384.00*3.25))+30.00;
  head_left_ang = 90.0-(encoder2()*360.00/(16384.00*2.00));
  head_right_ang = (encoder3()*360.00/(16384.00*2.00))-90.00;
  neck_ang = encoder4()*360.00/16384.00;
  // --------- top motor control --------//0
   float top_drive = pid_controller(1.65,0.0001,0.3,set_top_ang,head_top_ang,pre_error[0],i_term[0],d_term[0]);
  top_motor(top_drive/100.00);
  // --------- left motor control --------//1
   float left_drive = pid_controller(1.30,0.0,0.0,set_left_ang,head_left_ang,pre_error[1],i_term[1],d_term[1]);
  left_motor(left_drive/100.00);
   //--------- right motor control --------//2
   float right_drive = pid_controller(1.30,0.0,0.0,set_right_ang,head_right_ang,pre_error[2],i_term[2],d_term[2]);
  right_motor(right_drive/100.00);
  // --------- head motor control --------//3
   float neck_drive = pid_controller(1.50,0.00,0.2,set_neck_ang,neck_ang,pre_error[3],i_term[3],d_term[3]);
  // neck_motor(neck_drive/100.00);
}


int main(int, const char * const [])
{
  // The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. 
  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_ik_head2();
  double Qw =0.866;
  double Qx =0.0;
  double Qy =0.5;
  double Qz =0.0;
  double l_1 = 102.5;
  double l_2 = 38;
  double l_3 = 34.5;
  double l_4 = 14.5;
  double l_5 = 38;
  double l_6 = 108;
  double r =1.0;
  double T,F,L,R; // angle
  set_neck_ang = 175;
  set_left_ang = 0.0; //a1
  set_right_ang = 0.0;//a2
  set_top_ang = 90.0;
  cs = 1;
  cs2 = 1;
  cs3 = 1;
  cs4 = 1;
  spi.format(16,1);
  spi.frequency(10000000);
  control_In.attach(head_control,v_time);
  nh.initNode();
  nh.getHardware()->setBaud(57600);
  nh.subscribe(sub);

  while (1)
  {
    nh.spinOnce();
    ik_head2(Qw,Qx,Qy,Qz,r,l_1,l_2,l_3,l_4,l_5,l_6,&T,&F,&L,&R);
    set_top_ang = T;
    set_neck_ang = F;
    set_left_ang = L;
    set_right_ang = R;
    //printf("%f\t%f\t%f\t%f\t\n",T,F,L,R);
    // -------- print enc ------------//
    pc.printf("%.3f : ",head_top_ang);
    pc.printf("%.3f : ",head_left_ang);
    pc.printf("%.3f : ",head_right_ang);
    pc.printf("%.3f : \n",neck_ang);
  }
  // Terminate the application.
  // You do not need to do this more than one time.
  ik_head2_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
