#include <mbed.h>
#include "MPU9250.h"
#include <math.h>
#include <Matrix.h>
#include <MatrixMath.h>

Serial pc(USBTX, USBRX,1000000);
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
int covariance = 1.0718;//1.0718   (1.0715,1.0720) ไม่ได้     s1.072    1.0   0.146 ///1.07195   1.0  0.1451
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

Matrix P_predict_k0(2,2);  /// ลองเอาการกำหนดมิติบางตัวออก
Matrix P_predict_k1(2,2);
Matrix P_estimate_k(2, 2);
Matrix K;
Matrix Re_P(2,2);
#define PI 3.141592
#define G 9.782970341
int radius = 49;//mm
int Velocity = 0;
int16_t Vx =0;
int16_t Vy =0;
int16_t Wz =0;
int16_t Vx1 =0;
int16_t Vy1=0;
int16_t Wz1 =0;
float integral_error = 0;
float error_before = 0;
float distances = 0;
float distanceX  = 0;
float distanceY = 0;
float O = 0;
int dt = 100;


void GO(float Vx=0.00,float Vy=0.00,float Wz=0.00){
  float FL=0;
  float FR=0;
  float BL=0;
  float BR=0;
    FL=(Vx - Vy + (Wz*(-0.28)))/200.0; 
    FR =(Vx + Vy + (Wz*(0.28)))/200.0; 
    BL =(Vx + Vy + (Wz*(-0.28)))/200.0; 
    BR =(Vx - Vy + (Wz*(0.28)))/200.0;
    // pc.printf("\n%.2f\t%.2f\t%.2f\t%.2f\n",FL,FR,BL,BR);
  
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
  GO(0.00,0.00,0.00);
  
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
  // X_predict_k0 << theta_estimate
  //              << w_sensor ;
  
  P_estimate_k << 1.0 << 0.0
               << 0.0 << 0.1451 ; //0.145
  Re_P << 1.0 << 0.0
       << 0.0 << 0.1451;
  X_predict_k0 = X_estimate_k;
  P_predict_k0 = P_estimate_k;

  theta_now =0.0;
  t_kaman.start();
  t.start();

  while (1)
  {
    time = t.read_ms();
    timer_slow.reset();
    
    if (bluetooth.readable()) {
      
      // pc.printf("Karn\n");
      //pc.scanf("%s", command);
      // float Vx = (((command[1]-'0')*100)+((command[2]-'0')*10)+(command[3]-'0'));
      // float Vy = (((command[5]-'0')*100)+((command[6]-'0')*10)+(command[7]-'0'));
      // float Wz = (((command[9]-'0')*100)+((command[10]-'0')*10)+(command[11]-'0'));
      int16_t receive_start = (bluetooth.getc());
      // if(receive_start!=0)pc.printf("%X\n",receive_start);
      if(receive_start == 0xFF){
        
        while (!bluetooth.readable());
        int16_t receive_start2 = (bluetooth.getc());
        // receive_start = (int16_t) receive_start<<8|(int16_t)receive_start2;
        // if(receive_start!=0)pc.printf("%X\n",receive_start);
        // if(receive_start!=0)pc.printf("%X  %X\n",receive_start<<8,receive_start<<8|receive_start2);
        
        
        if(receive_start2 == 0xFF){
          
          int16_t command[3][2];
          int calculated_checksum = 0;
          for(int i=0;i<3;i++){
            while (!bluetooth.readable());
            command[i][0] = bluetooth.getc();
            while (!bluetooth.readable());
            command[i][1] = bluetooth.getc();
            calculated_checksum = (calculated_checksum + command[i][0] +  command[i][1])%256; // เอาhigh + low  แล้ว เอาbyteหลังสุด
            
          }
          while (!bluetooth.readable());
          
          if(calculated_checksum == bluetooth.getc()){
            //pc.printf("Karn\n");
            Vx = getvalue(command[0]);
            Vy = getvalue(command[1]);
            Wz = getvalue(command[2],true);
            //pc.printf("%d   %d   %d\n",Vx,Vy,Wz);  ปริ้น 5
          }
        }
      }
      continue;
    }

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
    // }

    dt_kaman = t_kaman.read_ms();
    
    if (dt_kaman >= 20)
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
      theta_now += X_estimate_k.getNumber(1,1) ;
      orientation = theta_now ;
      if (orientation >= 360.00 && orientation <= -360.00){
        theta_now = 0.00;
        //P_estimate_k = Re_P;
      }
      if (orientation == 90.00 || orientation == 180.00 || orientation == 270.00 || orientation == -90.00 || orientation == -180.00 || orientation == -270.00 ){
        P_estimate_k = Re_P;
        sigma_mean =0;
        sigma_Rk =0;
      }
      // K.print();
      // pc.printf("\n");
      //pc.printf("%f\n",orientation);
      //pc.printf("%f     %f\n",W_now,X_estimate_k.getNumber(1,1));
      float Wz_in = Wz;
    Wz_in = Wz_in - 180.00;
    //while(orientation<0) orientation += 360;
    float a = (-Wz_in - ( orientation ));
    if(a<-180)a+=360;
    if(a>180)a-=360;
    float error_trata = ((a)*PI) /180;
    float error_trata2  = atan2(sin(error_trata),cos(error_trata)) * 180.00 / PI;
    integral_error = integral_error + (error_trata2 * (dt_kaman));
    float diff = (error_trata2 - error_before)/(dt_kaman);
    float Wz2 = (error_trata2 * 3.5)  + (integral_error * 1) + (diff * 1); //มุม
    error_before = error_trata2;
    pc.printf("\t\t\t%f\t%f\t%f\t%f\t%f\t%f\n",-Wz_in,(orientation),error_trata,error_trata2,Wz2,integral_error);
    GO(0,0,Wz2);



    }
    
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