#include <mbed.h>
#include "MPU9250.h"
#include <math.h>

Serial pc(USBTX, USBRX);
DigitalIn sw(USER_BUTTON);
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
char buffyon[3];
char buffyx[5];
char buffyy[5];

#define PI 3.141592
float FL=0;
float FR=0;
float BL=0;
float BR=0;
float Vx;
float Vy;

  void GO(float Vx,float Vy)
  {
    FL =(Vx - Vy)/200.0; 
    FR =(Vx + Vy)/200.0; 
    BL =(Vx + Vy)/200.0; 
    BR =(Vx - Vy)/200.0;
    pc.printf("%.2f\t%.2f\t%.2f\t%.2f\n",FL,FR,BL,BR);
  
    ///FL***
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
    ///FR***
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
    ///BL***
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
    ///BR***
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
  
int main()
{
  char command[8];
  Vx=0;
  Vy=0;
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

  MPU9250 imu;
  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  pc.printf("I AM 0x%x\n\r", whoami);
  if (whoami == 0x73) // WHO_AM_I should always be 0x73
  {
    pc.printf("MPU9250 is online...\n\r");
    wait(1);
    imu.resetMPU9250();            // Reset registers to default in preparation for device calibration
    imu.MPU9250SelfTest(SelfTest); // Start by performing self test and reporting values
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias); // Calibrate gyro and accelerometers, load biases in bias registers
    wait(2);
    imu.initMPU9250();
    imu.initAK8963(imu.magCalibration);
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
  while (1)
  {
    imu.readimu();
    pc.printf("\nAcce  %.2f\t%.2f\t%.2f\tGyro  %d \t%d\t%d\tMag  %.2f\t \t%.2f\t \t%.2f\ttemp %.2f", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
    if (pc.readable()) {
      pc.gets(command, 8);
      for (int i=0; i<8; i++) {
        pc.printf("%x ", command[i]);
      }
    pc.printf("\n");
    }
  }
}