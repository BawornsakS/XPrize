#include <mbed.h>
#include <math.h> 
#include <Matrix.h>
#include <MatrixMath.h>
int16_t dt = 1;
float covariance = 1.0;
float Vk =1.0;
float Rk = 0.0; // covariance of w
float S_11= 1.0;
Matrix X_predict_k0(2,1);
Matrix X_predict_k1(2,1);
Matrix X_estimate_k0(2,1);
Matrix X_estimate_k1(2,1);
Matrix P_predict_k0(2,2);
Matrix P_predict_k1(2,2);
Matrix P_estimate_k(2,2);
Matrix K;
int main() {
  // Matrix myMatrix(2,2);
  // Matrix K;
  // myMatrix  <<1<<2
  //           <<3<<4 ;
  // K = MatrixMath :: Inv( myMatrix );
  // K.print();
  // //printf("\n");

  // Identity Matrix
  Matrix I(2,2);
  I <<1<<0
    <<0<<1;
 
  // State Equation
  Matrix F(2,2);
  F << 1 << dt
    << 0 << 1 ;

  Matrix G(2,1);
  G << pow(dt,2)/2
    << dt ;
  
  Matrix G_T;
  G_T =  MatrixMath :: Transpose( G );

  Matrix F_T;
  F_T =  MatrixMath :: Transpose( F );

  Matrix Q;
  Q = (G * G_T) * pow(covariance,2);

  Matrix H(1,2);
  H <<0 <<1 ;

  Matrix H_T(1,2);
  H_T = MatrixMath :: Transpose( H );
  // State - transition matrix
  X_predict_k1 = ( F * X_predict_k0 ) + 0;
  P_predict_k1 = ( F * P_predict_k0 * F_T ) + Q;

  // Input 
  Matrix Z = ( H * X_estimate_k1 ) + Vk ; 
  
  // update estimate value
  Matrix S;
  Matrix S_Inv(1,1);
  S = (H * ( P_predict_k1 * H_T )) + Rk;
  S_11 = S.getNumber(1,1);
  if (S_11 != 0){
    S_Inv << 1/S_11;
  }else{
    printf("error\n");
  }
  //Matrix S_Inv;
  //S_Inv = MatrixMath :: Inv( S );
  
  Matrix y_residual;
  y_residual = Z - ( H * X_estimate_k1 );

  K = P_predict_k1 * ( H_T * S_Inv );

  X_estimate_k1 = X_estimate_k0 + ( K * y_residual );

  // current become previous and output
  P_estimate_k = ( I - ( K * H ) ) * P_predict_k1;
  // and X_estimate_k1 too
  // output = P_estimate_k and X_estimate_k1
  
  while(1) {
    // put your main code here, to run repeatedly:
  }
}