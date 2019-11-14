#include <mbed.h>
#include "MPU9250.h"
#include <math.h>

Serial pc(USBTX, USBRX,1000000);
Serial bluetooth(PA_11, PA_12 ,250000);
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
#define PI 3.141592
#define G 9.834565215
int radius = 8;//mm
int Velocity = 0;
int Vx;
int Vy;
int Wz;
float distances = 0;
float distanceX  = 0;
float distanceY = 0;
float O = 0;
int dt = 100;

void GO(float Vx=0.00,float Vy=-0.00,float Wz=0.00){
  float FL=0;
  float FR=0;
  float BL=0;
  float BR=0;
    FL =(Vx - Vy + (Wz*(-0.28)))/200.0; 
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
  cs3 = 0;
  spi.write(0xFFFF);
  cs3 = 1;
  wait_us(1);
  cs3 = 0;
  w3 = spi.write(0x0000);
  cs3 = 1;
  w3 = w3 & 0x3FF0;
  return w3;
}

int encoder4()
{
  static int w4;
  cs4 = 0;
  spi.write(0xFFFF);
  cs4 = 1;
  wait_us(1);
  cs4 = 0;
  w4 = spi.write(0x0000);
  cs4 = 1;
  w4 = -(w4 & 0x3FF0);
  //w=w/2;
  return w4;
}

void task_sent() {
  imu.readimu();
  //pc.printf("\nAcce  %.2f\t%.2f\t%.2f\tGyro  %d \t%d\t%d\tMag  %.2f\t \t%.2f\t \t%.2f\ttemp %.2f", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
  //pc.printf("%.2f,%.2f,%.2f,%d,%d,%d,%.2f,%.2f,%.2f,%.2f\n", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
  pc.printf("#%.2f,%.2f,%.2f,%d,%d,%d#\n", imu.ax*G, imu.ay*G, imu.az*G, int(imu.gx*PI/180), int(imu.gy*PI/180), int(imu.gz*PI/180));
}

int main()
{
  wait(2);
  GO(0.00,0.00,0.00);
  
  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  // pc.printf("I AM 0x%x\n\r", whoami);
  if (whoami == 0x73) // WHO_AM_I should always be 0x73
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

  char command[15];

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

  t.start();

  int radius = 49;//mm
  int Velocity = 0;
  int Vx;
  int Vy;
  int Wz;
  int distance = 0;

  while (1)
  {
  time = t.read_ms();
  timer_slow.reset();
  if (pc.readable()) {
    // pc.scanf("%s", command);
    float Vx = (((command[1]-'0')*100)+((command[2]-'0')*10)+(command[3]-'0'));
    float Vy = (((command[5]-'0')*100)+((command[6]-'0')*10)+(command[7]-'0'));
    float Wz = (((command[9]-'0')*100)+((command[10]-'0')*10)+(command[11]-'7'));
    if (command[0] == '-'){
        Vx=-Vx;
      }
    if (command[4] == '-'){
        Vy=-Vy;
      }
    if (command[8] == '-'){
        Wz=-Wz;
      }
    GO(Vx,Vy,Wz);
    continue;
    }

  if (bluetooth.readable()) {
    bluetooth.scanf("%s", command);
    // pc.printf("%s\n",command);
    float Vx = (((command[1]-'0')*100)+((command[2]-'0')*10)+(command[3]-'0'));
    float Vy = (((command[5]-'0')*100)+((command[6]-'0')*10)+(command[7]-'0'));
    float Wz = (((command[9]-'0')*100)+((command[10]-'0')*10)+(command[11]-'7'));
    if (command[0] == '-'){
        Vx=-Vx;
      }
    if (command[4] == '-'){
        Vy=-Vy;
      }
    if (command[8] == '-'){
        Wz=-Wz;
      }
    GO(Vx,Vy,Wz);
    continue;
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

      

       W = (diff*1000*3*PI)/(8192*2*time);//rad/s
       W2 = (diff2*1000*3*PI)/(8192*2*time);//rpm
       W3 = (diff3*1000*3*PI)/(8192*2*time);//rpm
       W4 = (diff4*1000*3*PI)/(8192*2*time);//rpm

      //W = (diff*2*3.14*1000)/(16383*time)/14;
      //W2 = (W2*2*3.14*1000)/(16383*time);
      //W3 = (W3*2*3.14*1000)/(16383*time);
      //W4 = (W4*2*3.15*1000)/(16383*time);

      Vy = (W2 + W3 - W - W4) * radius/4;//mm/s
      Vx = (W + W2 + W3 + W4) * radius/4;
      Wz = (W2+W4-W-W3)*radius/(4*280);

      distanceX = distanceX + (Vx*time/1000000.00000000);
      distanceY = distanceY + (Vy*time/1000000.00000000);
      O = O + (Wz*time/1000000.000000000);

      Velocity = (W*radius*2*PI)/60;
      distance = distance +(Velocity*time);
      // pc.printf("\t\t\t\t\t\t\t%d,%d,%d,%d\t\t\t",W,W2,W3,W4);
      pc.printf("|%.5f,%.5f,%.5f|\n",distanceX,distanceY,O);
      t.reset();
      double eiei_output1 = timer_slow.read();
      timer_slow.reset();
      continue;
    }
  }
}