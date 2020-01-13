#include <mbed.h>
#include <math.h>
#include <Matrix.h>
#include <MatrixMath.h>
#include "MPU9250.h"
#define PI 3.141592
Serial pc(USBTX, USBRX);
MPU9250 imu;
float dt = 0;
Timer t;
float covariance = 0;
float Rk = 0.0; // covariance of w
float mean_w =0;
float amount_w=0;
float sigma_Rk =0;
float sigma_mean =0;
float S_11 = 1.0;
float theta_estimate =0;
float w_sensor =0;
Matrix X_predict_k0(2, 1);
Matrix X_predict_k1(2, 1);
Matrix X_estimate_k(2, 1);

Matrix P_predict_k0(2, 2);
Matrix P_predict_k1(2, 2);
Matrix P_estimate_k(2, 2);
Matrix K;
int main()
{
  uint8_t whoami = imu.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250);
  pc.printf("I AM 0x%x\n\r", whoami);
  if (whoami == 0x71) // WHO_AM_I should always be 0x73
  {
    wait_ms(10.0);
    imu.resetMPU9250();                                // Reset registers to default in preparation for device calibration
    imu.MPU9250SelfTest(SelfTest);                     // Start by performing self test and reporting values
    imu.calibrateMPU9250(imu.gyroBias, imu.accelBias); // Calibrate gyro and accelerometers, load biases in bias registers
    wait_ms(20.0);
    imu.initMPU9250();
    imu.initAK8963(imu.magCalibration);
    wait_ms(10.0);
  }
  else
  {
    while (1)
      pc.printf("Karn"); // Loop forever if communication doesn't happen
  }
  imu.getAres(); // Get accelerometer sensitivity
  imu.getGres(); // Get gyro sensitivity
  imu.getMres(); // Get magnetometer sensitivity
  

  // Identity Matrix
  Matrix I(2, 2);
  I << 1 << 0
    << 0 << 1;

  Matrix H(1, 2);
  H << 0 << 1;

  X_estimate_k << theta_estimate
               << w_sensor ;
  P_estimate_k << 1 << 0
               << 0 << 0.1 ;
  t.start();
  while (1)
  {
    dt = t.read_ms();
    
    if (dt >= 20)
    {
      //pc.printf("%f",dt);
      //dt *= (1/1000);
      float W_now = (imu.readz() * PI )/180;// Input
      pc.printf("%f\n",W_now);
      // Set up
      Matrix F(2, 2);
      F << 1 << dt
        << 0 << 1;
      //F.print();
      Matrix G(2, 1);
      G << pow(dt, 2) / 2
        << dt;

      Matrix G_T;
      G_T = MatrixMath ::Transpose(G);

      Matrix F_T;
      F_T = MatrixMath ::Transpose(F);

      Matrix Q;
      Q = (G * G_T) * pow(covariance, 2);

      Matrix H_T(1, 2);
      H_T = MatrixMath ::Transpose(H);


      // update estimate value
      sigma_mean += W_now;
      amount_w +=1 ;
      mean_w = sigma_mean / amount_w; // ค่า w จาก sensor
      sigma_Rk += pow((mean_w - W_now),2) ;
      Rk = sigma_Rk / amount_w ;
      Matrix S;
      Matrix S_Inv(1, 1);
      S = (H * (P_predict_k1 * H_T)) + Rk;
      S_11 = S.getNumber(1, 1);
      if (S_11 != 0)
      {
        S_Inv << 1 / S_11;
      }
      else
      {
        printf("error\n");
      }
      
      Matrix y_residual;
      y_residual = W_now - (H * X_predict_k1);
      K = P_predict_k1 * (H_T * S_Inv);

      X_estimate_k = X_predict_k1 + (K * y_residual);
      // current become previous and output
      P_estimate_k = (I - (K * H)) * P_predict_k1;
      // and X_estimate_k1 too

      X_predict_k0 = X_estimate_k;
      P_predict_k0 = P_estimate_k;

      // output = P_estimate_k and X_estimate_k1
      //X_estimate_k.print();
      //pc.printf("\n");

      /////////////////////////////////////////////////////////////////////////

      // State - transition matrix
      X_predict_k1 = (F * X_predict_k0) ; //+0
      P_predict_k1 = (F * P_predict_k0 * F_T) + Q;
      //X_predict_k1.print();
      
      
      t.reset();
    }
  }
}
