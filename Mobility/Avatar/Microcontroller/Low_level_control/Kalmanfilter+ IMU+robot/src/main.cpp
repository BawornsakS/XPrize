#include <mbed.h>
#include "MPU9250.h"
#include <math.h>
#include <Matrix.h>
#include <MatrixMath.h>

Serial pc(USBTX, USBRX,115200);
Serial bluetooth(PA_11, PA_12 ,115200);
SPI spi(D11, D12, D13);

PwmOut FLWheel(D5);
PwmOut FRWheel(D4);
PwmOut BLWheel(D3);
PwmOut BRWheel(D2);
DigitalOut FrontLF(PB_1); // front left forword
DigitalOut FrontLB(PB_15); // front left backword
DigitalOut FrontRF(PB_14);
DigitalOut FrontRB(PB_13);
DigitalOut BackLF(D9);
DigitalOut BackLB(D8);
DigitalOut BackRF(D7);
DigitalOut BackRB(D6);

DigitalOut cs(A0);
DigitalOut cs2(A1);
DigitalOut cs3(A2);
DigitalOut cs4(A3);

MPU9250 imu;
Timer timer_slow;
Timer IMU_timer;
Timer t;
float dt_kaman = 0;
Timer t_kaman;
int covariance = 2.0;//1.0718   (5,10)
float Rk = 0.0; // covariance of w
float mean_w =0.0;
float amount_w=0.0;
float sigma_Rk =0.0;
float sigma_mean =0.0;
float S_11 = 1.0;
float theta_estimate = 0.0;
float theta_now ;
float orientation;
//float w_sensor =0.0;
Matrix X_predict_k0(2, 1);
Matrix X_predict_k1(2, 1);
Matrix X_estimate_k(2, 1);

Matrix P_predict_k0(2,2);  
Matrix P_predict_k1(2,2);
Matrix P_estimate_k(2, 2);
Matrix K;
Matrix Re_P(2,2);
#define PI 3.141592
#define G 9.782970341
int radius = 51;//mm
int Velocity = 0;
int16_t Vx =0;
int16_t Vy =0;
int16_t Wz =0;
int16_t Vx1 =0;
int16_t Vy1=0;
int16_t Wz1 =0;
int16_t Vx_Front =0;
int16_t Vy_Side =0;
float integral_error = 0;
float error_before = 0;
float distances = 0;
float distanceX  = 0;
float distanceY = 0;
float O = 0;
int dt = 100; 
int if_datacome =0;
float speed_satuated=80;
float W_temp;
int Wz_in;
float error_trata2;
int update_pause=0; // pause kalman filter if error is little.
float FL=0;
float FR=0;
float BL=0;
float BR=0;

void GO(float Vx=0.00,float Vy=0.00,float Wz=0.00){

   if (abs(Vx) >speed_satuated){
      Vx = speed_satuated * (abs(Vx)/Vx);
    }
    if (abs(Vy) >speed_satuated){
      Vy = speed_satuated * (abs(Vy)/Vy);
    }
    FL =((FL*19)+(Vx - Vy + (Wz*(-0.77)))/200.0)/20;  // 0.28 sum xy จากหลางล้อ ถึง origin
    FR =((FR*19)+(Vx + Vy + (Wz*(0.77)))/200.0)/20;  // รถใหม่ 0.77472 m.
    BL =((BL*19)+(Vx + Vy + (Wz*(-0.77)))/200.0)/20; 
    BR =((BR*19)+(Vx - Vy + (Wz*(0.77)))/200.0)/20;
    // if (abs(FL) >speed_satuated){
    //   FL = speed_satuated * (abs(FL)/FL);
    // }
    // if (abs(FR) >speed_satuated){
    //   FR = speed_satuated * (abs(FR)/FR);
    // }
    // if (abs(BL) >speed_satuated){
    //   BL = speed_satuated * (abs(BL)/BL);
    // }
    // if (abs(BR) >speed_satuated){
    //   BR = speed_satuated * (abs(BR)/BR);
    // }
    
    //pc.printf("\n%.2f\t%.2f\t%.2f\t%.2f\n",FL,FR,BL,BR);
    if (FL>0){
      FrontLF=1;
      FrontLB=0;
      FLWheel.write(FL);
    }
    else if (FL<0){
      FrontLF=0;
      FrontLB=1;
      FLWheel.write(-FL);
    }
    else if(FL == 0){
      FrontLF=0;
      FrontLB=0;
      FLWheel.write(0);
    }

    if (FR>0){
      FrontRF=1;
      FrontRB=0;
      FRWheel.write(FR);
    }
    else if (FR<0){
      FrontRF=0;
      FrontRB=1;
      FRWheel.write(-FR);
    }
    else if(FR == 0){
      FrontLF=0;
      FrontLB=0;
      FRWheel.write(0);
    }

    if (BL>0){
      BackLF=1;
      BackLB=0;
      BLWheel.write(BL);
    }
    else if (BL<0){
      BackLF=0;
      BackLB=1;
      BLWheel.write(-BL);
    }
    else if(BL == 0){
      BackLF=0;
      BackLB=0;
      BLWheel.write(0);
    }

    if (BR>0){
      BackRF=1;
      BackRB=0;
      BRWheel.write(BR);
    }
    else if (BR<0){
      BackRF=0;
      BackRB=1;
      BRWheel.write(-BR);
    }
    else if(BR == 0){
      BackRF=0;
      BackRB=0;
      BRWheel.write(0);
    }
  } 


int encoder()
{
  static int w;
  wait_us(1);
  cs = 0;
  spi.write(0xFFFF);
  cs = 1;
  wait_us(1);
  cs = 0;
  w = spi.write(0x0000);
  cs = 1;
  w = w & 0x3FF0;
  return w;
}
int encoder2()
{
  static int w2;
  wait_us(1);
  cs2 = 0;
  spi.write(0xFFFF);
  cs2 = 1;
  wait_us(1);
  cs2 = 0;
  w2 = spi.write(0x0000);
  cs2 = 1;
  w2 = -(w2 & 0x3FF0);
  return w2;
}

int encoder3()
{
  static int w3;
  wait_us(1);
  cs3 = 0;
  spi.write(0xFFFF);
  cs3 = 1;
  wait_us(1);
  cs3 = 0;
  w3 = spi.write(0x0000);
  cs3 = 1;
  w3 = -(w3 & 0x3FF0);
  return w3;
}

int encoder4()
{
  static int w4;
  wait_us(1);
  cs4 = 0;
  spi.write(0xFFFF);
  cs4 = 1;
  wait_us(1);
  cs4 = 0;
  w4 = spi.write(0x0000);
  cs4 = 1;
  w4 = w4 & 0x3FF0;
  return w4;
}

void task_sent() {
  imu.readimu();
  //pc.printf("\nAcce  %.2f\t%.2f\t%.2f\tGyro  %d \t%d\t%d\tMag  %.2f\t \t%.2f\t \t%.2f\ttemp %.2f", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
  //pc.printf("%.2f,%.2f,%.2f,%d,%d,%d,%.2f,%.2f,%.2f,%.2f\n", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
  //pc.printf("#%.2f,%.2f,%.2f,%d,%d,%d#\n", imu.ax*G, imu.ay*G, imu.az*G, int(imu.gx*PI/180), int(imu.gy*PI/180), int(imu.gz*PI/180)); // output 2
}
int16_t getvalue(int16_t *input,bool w = false){
  
  int sign = 1;
  uint8_t s;
  s = (*input)&128;
  if(w){
    *input = *input&0b01111111;
    return (*input<<8|*(input+1))/10;
  }
  
  //printf("__(%d[%d],%d)__",*input,s,*(input+1));      ปริ้น 2
  if(s == 128){
    sign = -1;
  }
  else
  {
    sign = 1;
  }
  
  *input = *input&0b00001111;
  //printf("\n%d %d\n",sign,*(input+1));   ปริ้น 3
  return (*input<<8|*(input+1))*sign;
}

int main()
{
  wait(2);
  GO(0.0,0.0,0.0);
  //imu
  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  // pc.printf("I AM 0x%x\n\r", whoami);
  if (whoami == 0x71) // WHO_AM_I should always be 0x73
  {
    wait_ms(10.0);
    imu.resetMPU9250();            // Reset registers to default in preparation for device calibration
    imu.MPU9250SelfTest(SelfTest); // Start by performing self test and reporting values
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias); // Calibrate gyro and accelerometers, load biases in bias registers
    wait_ms(20.0);
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

  FLWheel.write(0);
  FRWheel.write(0);
  BLWheel.write(0);
  BRWheel.write(0);
  FrontLF = 0;
  FrontLB = 0;
  FrontRF = 0;
  FrontRB = 0;
  BackLF = 0;
  BackLB = 0;
  BackRF = 0;
  BackRB = 0;
  timer_slow.start();
  IMU_timer.start();

  char command[15] ;
  int ang1 = 0;
  int ang2 = 0;
  int ang12 = 0;
  int ang22 = 0;
  int ang13 =0;
  int ang23 = 0;
  int ang14 = 0;
  int ang24 = 0;
  int diff;
  int diff2;
  int diff3;
  int diff4;
  int W;
  int W2;
  int W3;
  int W4;
  int time;
  int time_count;
  spi.format(16,1);
  spi.frequency(10000000);
  cs = 1;
  cs2 = 1;
  cs3 = 1;
  cs4 = 1;
  
  // Identity Matrix
  Matrix I(2, 2);
  I << 1.0 << 0.0
    << 0.0 << 1.0;

  Matrix H(1, 2);
  H << 1.0 << 0.0;

  X_estimate_k << 0.0
               << 0.0 ;
  
  P_estimate_k << 1.0 << 0.0
               << 0.0 << 1.0 ; //0.145   0.01
  Re_P << 1.0 << 0.0
       << 0.0 << 1.0;  // 0.01
  X_predict_k0 = X_estimate_k;
  P_predict_k0 = P_estimate_k;

  theta_now =0.0;
  t_kaman.start();
  t.start();
  
  //char temp;
////////////   ทิศรถ //////////////////
//         ด้านหน้าหัน เข้า ม่านสีดำ ครับ ///
  while (1)
  {
    time = t.read_ms();
    timer_slow.reset();
    /////////////////////////////////////test tune control/////////////// เปิดสำหรับทดสอบ
    // if(pc.readable()){
    //   temp = pc.getc();
    //   switch (temp)
    //   {
    //     case 'q':
    //     pc.printf("Turn Left\n");
    //     //Wz =300;
    //     W_temp =-90;
    //     break;

    //     case 'e':
    //     pc.printf("Turn Right\n");
    //     //Wz =-300;
    //     W_temp =90;
    //     break;

    //     case 's':
    //     pc.printf("Stop\n");
    //     //Wz =0;
    //     W_temp =0;
    //     default:
    //     break;
    //   }
    // }
///////////////////////////////////////test tune control//////////

    //pc.printf("%c\n",temp);
    //pc.printf("%.3f,%.3f\n",error_trata2,orientation);
    //pc.printf("\t\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",-Wz_in,(orientation),error_trata,error_trata2,Wz2,integral_error);

    if (pc.readable()) {   /// receieve data 
      int8_t receive_start = (pc.getc());

      //pc.printf("%x\n",receive_start);  
      if(!(receive_start & 0xF8)){
        long long buffers = 0;
        if_datacome = 1;
        int16_t calculated_checksum = 0;

        buffers |= receive_start;
        for (int i = 0; i < 4; i++)
        {
          while (!pc.readable());
          buffers = (buffers << 8) | pc.getc();   
          //pc.printf("%llx\n",buffers); 
        }

        int16_t pre_Vy = (buffers >> 11) & 0x0FFF;
        int16_t pre_Vx = (buffers >> 23) & 0x0FFF;
        Wz = (buffers >> 2) & 0x01FF; 
        

        // calculated_checksum = (pre_Vy+pre_Vx) % 4;
        
        // pc.printf("%d %d\n",calculated_checksum, buffers[1] & 0x03);

        // if (!(calculated_checksum - (buffers[1] & 0x03)))
        // {
          Vy = pre_Vy - 2000; // แก้ไข offset จากที่ส่งเป็น range 0 to 4000 เป็น -2000 to 2000
          Vx = pre_Vx - 2000;
          //Wz = 0;
          //pc.printf("%d\t %d\t %d\t\n",Vx,Vy,Wz);
          //GO(Vx,Vy,0);
        // }
        //pc.printf("\t\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",-Wz_in,(orientation),error_trata,error_trata2,Wz2,integral_error);
      }
      continue;
      if_datacome = 0;
    }


///////////////////////////////////////////////////////////////////////////////////////////////
  // if (bluetooth.readable()) {
  //   bluetooth.scanf("%s", command);
  //   pc.printf("%s\n",command);
  //   float Vx = (((command[1]-'0')*100)+((command[2]-'0')*10)+(command[3]-'0'));
  //   float Vy = (((command[5]-'0')*100)+((command[6]-'0')*10)+(command[7]-'0'));
  //   float Wz = (((command[9]-'0')*100)+((command[10]-'0')*10)+(command[11]-'0'));
  //   if (command[0] == '-'){
  //       Vx=-Vx;
  //     }
  //   if (command[4] == '-'){
  //       Vy=-Vy;
  //     }
  //   if (command[8] == '-'){
  //       Wz=-Wz;
  //     }
  //   GO(Vx,Vy,Wz);
  //   continue;
  //   }


    // if (bluetooth.readable()) {
    // bluetooth.scanf("%s", command);
    // pc.printf("%s",command);
    // float Vx = (((command[1]-'0')*100)+((command[2]-'0')*10)+(command[3]-'0'));
    // float Vy = (((command[5]-'0')*100)+((command[6]-'0')*10)+(command[7]-'0'));
    // float Wz = (((command[9]-'0')*100)+((command[10]-'0')*10)+(command[11]-'0'));
    // if (command[0] == '-'){
    //     Vx=-Vx;
    //   }
    // if (command[4] == '-'){
    //     Vy=-Vy;
    //   }
    // if (command[8] == '-'){
    //     Wz=-Wz;
    //   }
    // GO2(Vx,Vy,Wz);
    // continue;
    // }ไม่เกี่บว
//////////////////////////////////////////////////////////////////////////////////////////////////////////
  #pragma region Kalman_filter
    dt_kaman = t_kaman.read_ms();
    
    if (dt_kaman >= 17)
    {
      t_kaman.reset();
      dt_kaman *= (1.00f/1000.00f);
      //dt_kaman *= (-1.00);
      float W_now = (imu.readz()*PI)/180.00 ;// Input
      
      //pc.printf("%f\n",W_now);
      // Set up
      Matrix F(2, 2);
      F << 1.0 << dt_kaman
        << 0.0 << 1.0;
      //F.print();
      Matrix GG_T(2, 2);
      GG_T << (pow(dt_kaman, 4) / 4.0)  << (pow(dt_kaman, 3) / 2.0)
           << (pow(dt_kaman, 3) / 2.0)  << pow(dt_kaman, 2);

      Matrix F_T;
      F_T = MatrixMath ::Transpose(F);

      Matrix Q;
      Q = GG_T * pow(covariance, 2);

      Matrix H_T(1, 2);
      H_T = MatrixMath ::Transpose(H);

    // predict
     // X_predict_k1 = F *
    // update estimate value
      sigma_mean += W_now;
      amount_w += 1 ;
      mean_w = sigma_mean / amount_w; // ค่า w จาก sensor
      sigma_Rk += pow((mean_w - W_now),2) ;
      Rk = sigma_Rk / amount_w ;
      
      X_predict_k0 = X_estimate_k;
      P_predict_k0 = P_estimate_k;

      X_predict_k1 = (F * X_predict_k0) ;
      P_predict_k1 = (F * P_predict_k0 * F_T) + Q;
      Matrix S;
      Matrix S_Inv(1, 1);
      S = (H * P_predict_k1 * H_T) + Rk;
      S_11 = S.getNumber(1, 1);
      if (S_11 != 0)
      {
        S_Inv << 1.0 / S_11;
      }
      else
      {
        printf("error\n");
      }
      Matrix y_residual;
      Matrix W_new(1,1);
      W_new << W_now ;
      y_residual = W_new - (H * X_predict_k1);
      K = P_predict_k1 * H_T * S_Inv;
      
      X_estimate_k = X_predict_k1 + (K * y_residual);
      
      P_estimate_k = (I - (K * H)) * P_predict_k1;
      if( update_pause == 0 )
        theta_now += X_estimate_k.getNumber(1,1); 
      else 
        theta_now += 0;

      orientation = theta_now ;
      if (orientation >= 360.00 || orientation <= -360.00){
        theta_now = 0.00;
        //P_estimate_k = Re_P;
      }
      if (orientation == 90.00 || orientation == 180.00 || orientation == 270.00 || orientation == -90.00 || orientation == -180.00 || orientation == -270.00 ){
        P_estimate_k = Re_P;
        sigma_mean =0;
        sigma_Rk =0;
      }
  #pragma endregion get w and theta from kalman
      //pc.printf("%f, %f\n", Wz_in, orientation);
      //pc.printf("%f     %f\n",W_now,X_estimate_k.getNumber(1,1));
  #pragma region PID_Control  
      Wz_in = Wz;
      if(if_datacome == 1){
        Wz_in -= 180.00;
      }
    //while(orientation<0) orientation += 360;
    float a = (-Wz_in - ( orientation ));
    //float a = (-W_temp-(orientation));// test tune control
    if(a<-180)a+=360;
    if(a>180)a-=360;
    float error_trata = ((a)*PI) /180; //radian
    error_trata2  = atan2(sin(error_trata),cos(error_trata)) * 180.00 / PI;  // theta
    integral_error = integral_error + (error_trata2 * (dt_kaman));
    float diff = (error_trata2 - error_before)/(dt_kaman);
    int Wz2;
    if(abs(error_trata2) > 0.5){
      Wz2 = (error_trata2 * 7.0)  + (integral_error * 0) + (diff * 0); //มุม
      update_pause = 0;
    }
    else{
      Wz2 = 0; 
      update_pause = 1;
    }
    error_before = error_trata2;
    
    //pc.printf("\t\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",Wz_in,(orientation),error_trata,error_trata2,Wz2,integral_error);

    /* move and Rotate */
    
      //Vx_Front = (-Vy * cos((Wz_in * PI)/180)) - (Vx * sin((Wz_in*PI)/180));
      //Vy_Side  = (-Vy * sin((Wz_in * PI)/180)) + (Vx * cos((Wz_in * PI)/180));
      Vx_Front = (Vx * cos((Wz_in * PI)/180)) - (Vy * sin((Wz_in*PI)/180));
      Vy_Side  = (Vx * sin((Wz_in * PI)/180)) + (Vy * cos((Wz_in * PI)/180));
    //GO(Vx,Vy,0);
    GO(Vx_Front,Vy_Side,Wz2);
    //GO(0,0,Wz2);
    //pc.printf("\t%d\t%d\t%d\n",Vx_Front,Vy_Side,Wz_in);

    }
  #pragma endregion pid
    if (IMU_timer.read()>=0.1){
      task_sent();
      double eiei_output2 = timer_slow.read();
      timer_slow.reset();
      // pc.printf("\t\t\t time: %f\n",eiei_output2);
      IMU_timer.reset();
      continue;
    }
    if(time == 0)
    {
      ang1 = encoder();
      ang12 = encoder2();
      ang13 = encoder3();
      ang14 = encoder4();
      continue;
    }

    else if(time >= dt)
    {
      ang2 = encoder();
      ang22 = encoder2();
      ang23 = encoder3();
      ang24 = encoder4();

      diff = ang2-ang1;
      diff2 = ang22-ang12;
      diff3 = ang23-ang13;
      diff4 = ang24-ang14;

      if(diff > 16384/2)
      {
        diff = diff - 16384;
      }
      if(diff < -16384/2)
      {
        diff = (16384 + diff);
      }

      if(diff2 > 16384/2)
      {
        diff2 = diff2 - 16384;
      }
      if(diff2 < -16384/2)
      {
        diff2 = (16384 + diff2);
      }

      if(diff3 > 16384/2)
      {
        diff3 = diff3 - 16384;
      }
      if(diff3 < -16384/2)
      {
        diff3 = (16384 + diff3);
      }

      if(diff4 > 16384/2)
      {
        diff4 = diff4 - 16384;
      }
      if(diff4 < -16384/2)
      {
        diff4 = (16384 + diff4);
      }

      W = (diff*1000*2*PI)/(8192*3*time);//rad/s
      W2 = (diff2*1000*2*PI)/(8192*3*time);//rpm
      W3 = (diff3*1000*2*PI)/(8192*3*time);//rpm
      W4 = (diff4*1000*2*PI)/(8192*3*time);//rpm

      Vy1 = (W2 + W3 - W - W4) * radius/4;//mm/s
      Vx1 = (W + W2 + W3 + W4) * radius/4;
      Wz1 = (W2+W4-W-W3)*radius/(4*280);
      O = O + (Wz1*time/1000.000000000);

      float VposX =Vx*cos(O) - Vy*sin(O);
      float VposY = Vy*cos(O) + Vx*sin(O);
      distanceX = distanceX + (VposX*time/1000000.00000000);
      distanceY = distanceY + (VposY*time/1000000.00000000);

      Velocity = (W*radius*2*PI)/60;
      //distance = distance + (Velocity*time);
      //pc.printf("\t\t\t\t\t\t\t%d,%d,%d,%d\t\t\t",W,W2,W3,W4);
      //pc.printf("|%.5f,%.5f,%.5f|\n",distanceX,distanceY,O); // output 1 
      t.reset();
      double eiei_output1 = timer_slow.read();
      timer_slow.reset();
      continue;
    }
  }
}