//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: ik_head2.cpp
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 07-Jul-2020 11:48:05
//

// Include Files
#include "ik_head2.h"
#include "axang2rotm.h"
#include <cmath>

// Function Definitions

//
// Arguments    : double Qw
//                double Qx
//                double Qy
//                double Qz
//                double r
//                double l_1
//                double l_2
//                double l_3
//                double l_4
//                double l_5
//                double l_6
//                double *theta_T
//                double *theta_F
//                double *theta_L
//                double *theta_R
// Return Type  : void
//
void ik_head2(double Qw, double Qx, double Qy, double Qz, double r, double l_1,
              double l_2, double l_3, double l_4, double l_5, double l_6, double
              *theta_T, double *theta_F, double *theta_L, double *theta_R)
{
  double K_L;
  double R_H[9];
  double K_R;
  double R_H_tmp;
  double b_R_H_tmp;
  double c_R_H_tmp;
  double dv[4];
  double dv1[9];
  int i;
  double p_H[3];
  static const signed char iv[3] = { 0, 0, 1 };

  int b_i;
  double p_A_R[3];
  double R_p[9];
  double p_A_R_tmp[3];
  double b_p_A_R_tmp[3];
  double c_p_A_R_tmp[3];
  static const signed char b[3] = { 1, 0, 0 };

  double K_R_tmp;
  static const signed char b_b[3] = { 0, 1, 0 };

  // R_H = axang2rotm([z' Rz])*axang2rotm([y' Ry])*axang2rotm([x' Rx]);
  K_L = 2.0 * (Qw * Qw) - 1.0;
  R_H[0] = K_L + 2.0 * (Qx * Qx);
  K_R = 2.0 * Qx * Qy;
  R_H_tmp = 2.0 * Qw * Qz;
  R_H[3] = K_R - R_H_tmp;
  b_R_H_tmp = 2.0 * Qx * Qz;
  c_R_H_tmp = 2.0 * Qw * Qy;
  R_H[6] = b_R_H_tmp + c_R_H_tmp;
  R_H[1] = K_R + R_H_tmp;
  R_H[4] = K_L + 2.0 * (Qy * Qy);
  K_R = 2.0 * Qy * Qz;
  R_H_tmp = 2.0 * Qw * Qx;
  R_H[7] = K_R - R_H_tmp;
  R_H[2] = b_R_H_tmp - c_R_H_tmp;
  R_H[5] = K_R + R_H_tmp;
  R_H[8] = K_L + 2.0 * (Qz * Qz);
  *theta_T = std::atan(R_H[1] / R_H[4]);
  *theta_F = std::asin(r / l_1);
  dv[0] = 0.0;
  dv[1] = 1.0;
  dv[2] = 0.0;
  dv[3] = *theta_F;
  axang2rotm(dv, dv1);
  for (i = 0; i < 3; i++) {
    p_H[i] = (dv1[i] * (l_1 * 0.0) + dv1[i + 3] * (l_1 * 0.0)) + dv1[i + 6] *
      l_1;
    dv[i] = iv[i];
  }

  dv[3] = *theta_T;
  axang2rotm(dv, dv1);
  for (b_i = 0; b_i < 3; b_i++) {
    K_L = R_H[b_i + 3];
    K_R = R_H[b_i + 6];
    for (i = 0; i < 3; i++) {
      R_p[b_i + 3 * i] = (R_H[b_i] * dv1[i] + K_L * dv1[i + 3]) + K_R * dv1[i +
        6];
    }

    K_L = -l_2 * static_cast<double>(b[b_i]);
    b_p_A_R_tmp[b_i] = K_L;
    K_R = l_3 * static_cast<double>(b_b[b_i]);
    c_p_A_R_tmp[b_i] = K_R;
    p_A_R_tmp[b_i] = K_L - K_R;
  }

  for (i = 0; i < 3; i++) {
    p_A_R[i] = p_H[i] + ((R_p[i] * p_A_R_tmp[0] + R_p[i + 3] * p_A_R_tmp[1]) +
                         R_p[i + 6] * p_A_R_tmp[2]);
    b_p_A_R_tmp[i] += c_p_A_R_tmp[i];
  }

  c_R_H_tmp = p_A_R[1] + l_4;
  R_H_tmp = p_A_R[0] * p_A_R[0];
  b_R_H_tmp = p_A_R[2] * p_A_R[2];
  K_L = l_5 * l_5;
  K_R_tmp = l_6 * l_6;
  K_R = (K_R_tmp - (((R_H_tmp + c_R_H_tmp * c_R_H_tmp) + b_R_H_tmp) + K_L)) /
    (2.0 * l_5);
  *theta_R = 2.0 * std::atan((-p_A_R[2] + std::sqrt((R_H_tmp + b_R_H_tmp) - K_R *
    K_R)) / (K_R + p_A_R[0]));
  for (i = 0; i < 3; i++) {
    p_A_R[i] = p_H[i] + ((R_p[i] * b_p_A_R_tmp[0] + R_p[i + 3] * b_p_A_R_tmp[1])
                         + R_p[i + 6] * b_p_A_R_tmp[2]);
  }

  c_R_H_tmp = p_A_R[1] - l_4;
  R_H_tmp = p_A_R[0] * p_A_R[0];
  b_R_H_tmp = p_A_R[2] * p_A_R[2];
  K_L = (K_R_tmp - (((R_H_tmp + c_R_H_tmp * c_R_H_tmp) + b_R_H_tmp) + K_L)) /
    (2.0 * l_5);
  *theta_L = 2.0 * std::atan((-p_A_R[2] + std::sqrt((R_H_tmp + b_R_H_tmp) - K_L *
    K_L)) / (K_L + p_A_R[0]));
}

//
// File trailer for ik_head2.cpp
//
// [EOF]
//
