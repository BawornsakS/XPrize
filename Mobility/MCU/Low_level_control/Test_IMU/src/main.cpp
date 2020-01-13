#include <mbed.h>
#include "MPU9250.h"
#include <math.h>

Serial pc(USBTX, USBRX);

int main()
{
  MPU9250 imu;

  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  pc.printf("I AM 0x%x\n\r", whoami);
  if (whoami == 0x73) // WHO_AM_I should always be 0x73
  {
    pc.printf("MPU9250 WHO_AM_I is 0x%x\n\r", whoami);
    pc.printf("MPU9250 is online...\n\r");
    wait(1);

    imu.resetMPU9250();            // Reset registers to default in preparation for device calibration
    imu.MPU9250SelfTest(SelfTest); // Start by performing self test and reporting values
    pc.printf("x-axis self test: acceleration trim within : %f  of factory value\n\r", SelfTest[0]);
    pc.printf("y-axis self test: acceleration trim within : %f  of factory value\n\r", SelfTest[1]);
    pc.printf("z-axis self test: acceleration trim within : %f  of factory value\n\r", SelfTest[2]);
    pc.printf("x-axis self test: gyration trim within : %f  of factory value\n\r", SelfTest[3]);
    pc.printf("y-axis self test: gyration trim within : %f  of factory value\n\r", SelfTest[4]);
    pc.printf("z-axis self test: gyration trim within : %f  of factory value\n\r", SelfTest[5]);
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias); // Calibrate gyro and accelerometers, load biases in bias registers
    pc.printf("x gyro bias = %f\n\r", imu.gyroBias[0]);
    pc.printf("y gyro bias = %f\n\r", imu.gyroBias[1]);
    pc.printf("z gyro bias = %f\n\r", imu.gyroBias[2]);
    pc.printf("x accel bias = %f\n\r", imu.accelBias[0]);
    pc.printf("y accel bias = %f\n\r", imu.accelBias[1]);
    pc.printf("z accel bias = %f\n\r", imu.accelBias[2]);
    wait(2);
    imu.initMPU9250();
    pc.printf("MPU9250 initialized for active data mode....\n\r"); // Initialize device for active mode read of acclerometer, gyroscope, and temperature
    imu.initAK8963(imu.magCalibration);
    pc.printf("AK8963 initialized for active data mode....\n\r"); // Initialize device for active mode read of magnetometer
    pc.printf("Accelerometer full-scale range = %f  g\n\r", 2.0f * (float)(1 << Ascale));
    pc.printf("Gyroscope full-scale range = %f  deg/s\n\r", 250.0f * (float)(1 << Gscale));
    if (Mscale == 0)
      pc.printf("Magnetometer resolution = 14  bits\n\r");
    if (Mscale == 1)
      pc.printf("Magnetometer resolution = 16  bits\n\r");
    if (Mmode == 2)
      pc.printf("Magnetometer ODR = 8 Hz\n\r");
    if (Mmode == 6)
      pc.printf("Magnetometer ODR = 100 Hz\n\r");
    wait(1);
  }
  else
  {
    pc.printf("Could not connect to MPU9250: \n\r");
    pc.printf("%#x \n", whoami);

    while (1)
      ; // Loop forever if communication doesn't happen
  }

  imu.getAres(); // Get accelerometer sensitivity
  imu.getGres(); // Get gyro sensitivity
  imu.getMres(); // Get magnetometer sensitivity
  pc.printf("Accelerometer sensitivity is %f LSB/g \n\r", 1.0f / aRes);
  pc.printf("Gyroscope sensitivity is %f LSB/deg/s \n\r", 1.0f / gRes);
  pc.printf("Magnetometer sensitivity is %f LSB/G \n\r", 1.0f / mRes);
  // imu.magbias[0] = +470.; // User environmental x-axis correction in milliGauss, should be automatically calculated
  // imu.magbias[1] = +120.; // User environmental x-axis correction in milliGauss
  // imu.magbias[2] = +125.; // User environmental x-axis correction in milliGauss

  while (1)
  {
    imu.readimu();
    pc.printf("\nAcce  %.2f\t%.2f\t%.2f\tGyro  %d \t%d\t%d\tMag  %.2f\t \t%.2f\t \t%.2f\ttemp %.2f", imu.ax, imu.ay, imu.az, int(imu.gx), int(imu.gy), int(imu.gz),imu.mx,imu.my,imu.mz, (imu.readTempData() / 100.00));
    imu.MadgwickQuaternionUpdate(imu.ax, imu.ay, imu.az, imu.gx * PI / 180.0f, imu.gy * PI / 180.0f, imu.gz * PI / 180.0f, imu.mx, imu.my, imu.mz);
    
    
    
    
    
    // pc.printf("%f %f %f %f,",imu.q[0],imu.q[1],imu.q[2],imu.q[3]);
    // imu.yaw = atan2(2.0f * (imu.q[1] * imu.q[2] + imu.q[0] * imu.q[3]), imu.q[0] * imu.q[0] + imu.q[1] * imu.q[1] - imu.q[2] * imu.q[2] - imu.q[3] * imu.q[3]);
    // imu.pitch = -asin(2.0f * (imu.q[1] * imu.q[3] - imu.q[0] * imu.q[2]));
    // imu.roll = atan2(2.0f * (imu.q[0] * imu.q[1] + imu.q[2] * imu.q[3]), imu.q[0] * imu.q[0] - imu.q[1] * imu.q[1] - imu.q[2] * imu.q[2] + imu.q[3] * imu.q[3]);
    // imu.pitch *= 180.0f / PI;
    // imu.yaw *= 180.0f / PI;
    // imu.yaw -= 13.8f; // Declination at Danville, California is 13 degrees 48 minutes and 47 seconds on 2014-04-04
    // imu.roll *= 180.0f / PI;


    // float roll = atan(imu.ax/sqrt((imu.ay*imu.ay)+(imu.az*imu.az)));
    // float pitch = atan(imu.ay/sqrt((imu.ax*imu.ax)+(imu.az*imu.az)));
    //pc.printf("\t Roll Pitch : %f %f", roll,pitch);
  }
}