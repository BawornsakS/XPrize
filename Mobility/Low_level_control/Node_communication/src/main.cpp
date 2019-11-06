#include <mbed.h>
#include "MPU9250.h"
#include <math.h>

Serial pc(USBTX, USBRX,400000);
Serial bluetooth(PA_11, PA_12 ,400000);
PwmOut FLWheel(D5);
PwmOut FRWheel(D4);
PwmOut BLWheel(D3);
PwmOut BRWheel(D2);
DigitalOut FrontLF(D13); // front left forword
DigitalOut FrontLB(D12); // front left backword
DigitalOut FrontRF(D11);
DigitalOut FrontRB(D10);
DigitalOut BackLF(D9);
DigitalOut BackLB(D8);
DigitalOut BackRF(D7);
DigitalOut BackRB(D6);

MPU9250 imu;
Timer timer_slow;
Timer IMU_timer;
#define PI 3.141592

void GO(float Vx=0.00,float Vy=-0.00,float Wz=0.00){
  float FL=0;
  float FR=0;
  float BL=0;
  float BR=0;
    FL =(Vx - Vy + (Wz*(-0.28)))/200.0; 
    FR =(Vx + Vy + (Wz*(0.28)))/200.0; 
    BL =(Vx + Vy + (Wz*(-0.28)))/200.0; 
    BR =(Vx - Vy + (Wz*(0.28)))/200.0;
    pc.printf("\n%.2f\t%.2f\t%.2f\t%.2f\n",FL,FR,BL,BR);
  
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

void task_sent() {
  imu.readimu();
  //pc.printf("\nAcce  %.2f\t%.2f\t%.2f\tGyro  %d \t%d\t%d\tMag  %.2f\t \t%.2f\t \t%.2f\ttemp %.2f", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
  pc.printf("%.2f,%.2f,%.2f,%d,%d,%d,%.2f,%.2f,%.2f,%.2f", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
}

int main()
{
  GO(0.00,0.00,0.00);
  
  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  pc.printf("I AM 0x%x\n\r", whoami);
  if (whoami == 0x73) // WHO_AM_I should always be 0x73
  {
    pc.printf("MPU9250 WHO_AM_I is 0x%x\n\r", whoami);
    pc.printf("MPU9250 is online...\n\r");
    wait(1);
    imu.resetMPU9250();            // Reset registers to default in preparation for device calibration
    imu.MPU9250SelfTest(SelfTest); // Start by performing self test and reporting values
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias); // Calibrate gyro and accelerometers, load biases in bias registers
    wait(2);
    imu.initMPU9250();
    imu.initAK8963(imu.magCalibration);
    wait(1);
  }
  else
  {
    pc.printf("Could not connect to MPU9250: \n\r");
    pc.printf("%#x \n", whoami);

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

  char command[13];
  pc.printf("Hello World");
  while (1)
  {
  wait_ns(5);
  timer_slow.reset();
  if (pc.readable()) {
    pc.gets(command, 13);
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
    }

  if (bluetooth.readable()) {
    bluetooth.gets(command, 13);
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
    }
    if (IMU_timer.read()>0.05){
      double eiei_output1 = timer_slow.read();
      pc.printf("time: %f \t\t\t",eiei_output1);
      timer_slow.reset();
      task_sent();
      double eiei_output2 = timer_slow.read();
      timer_slow.reset();
      pc.printf("\t\t\t time: %f\n",eiei_output2);
      IMU_timer.reset();
    }
  }
}