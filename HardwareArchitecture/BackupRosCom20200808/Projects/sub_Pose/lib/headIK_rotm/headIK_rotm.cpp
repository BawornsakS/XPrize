//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: headIK_rotm.cpp
//
// MATLAB Coder version            : 5.0
// C/C++ source code generated on  : 23-Jul-2020 13:13:19
//

// Include Files
#include "headIK_rotm.h"
#include "axang2rotm.h"
#include "headIK_rotm_data.h"
#include "headIK_rotm_initialize.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <cmath>
#include <cstring>
#include <math.h>

// Function Declarations
static double rt_atan2d_snf(double u0, double u1);

// Function Definitions

//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int b_u0;
    int b_u1;
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }

    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }

    y = atan2(static_cast<double>(b_u0), static_cast<double>(b_u1));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

//
// HEADIK computes all actuated joint variables from the given orientation
// and stretch distance
//    [theta_F,theta_T,theta_R,theta_L] = HEADIK(R_H,r) computes all acutated
//    configuration (theta_F,theta_T,theta_R,theta_L) from the given
//    head's orientation R_H and stretch distance r [mm].
// Arguments    : double qw
//                double qx
//                double qy
//                double qz
//                double r
//                double *theta_F
//                double *theta_T
//                double *theta_R
//                double *theta_L
// Return Type  : void
//
void headIK_rotm(double qw, double qx, double qy, double qz, double r, double
                 *theta_F, double *theta_T, double *theta_R, double *theta_L)
{
  double sx;
  double sF;
  double cF;
  double cy;
  double tempR_tmp;
  double b_tempR_tmp;
  double c_tempR_tmp;
  double tempR[9];
  double d_tempR_tmp;
  double e_tempR_tmp;
  double f_tempR_tmp;
  double g_tempR_tmp;
  double h_tempR_tmp;
  double i_tempR_tmp;
  double cx;
  double R_H[9];
  int k;
  int R_H_tmp;
  double q[4];
  double dv[9];
  double p_H[3];
  static const signed char iv[3] = { 0, 0, 1 };

  double p_A_R[3];
  if (!isInitialized_headIK_rotm) {
    headIK_rotm_initialize();
  }

  //  Standard Unit Vectors
  //  Kinematic Parameters
  // 70/2
  // 30/2
  // 104.4330
  //  convert quaternion to rotation matrix
  sx = 1.0 / std::sqrt(((qw * qw + qx * qx) + qy * qy) + qz * qz);
  sF = qw * sx;
  cF = qx * sx;
  cy = qy * sx;
  sx *= qz;
  tempR_tmp = sx * sx;
  b_tempR_tmp = cy * cy;
  c_tempR_tmp = 1.0 - 2.0 * (b_tempR_tmp + tempR_tmp);
  tempR[0] = c_tempR_tmp;
  d_tempR_tmp = cF * cy;
  e_tempR_tmp = sF * sx;
  f_tempR_tmp = 2.0 * (d_tempR_tmp - e_tempR_tmp);
  tempR[1] = f_tempR_tmp;
  g_tempR_tmp = cF * sx;
  h_tempR_tmp = sF * cy;
  i_tempR_tmp = 2.0 * (g_tempR_tmp + h_tempR_tmp);
  tempR[2] = i_tempR_tmp;
  d_tempR_tmp = 2.0 * (d_tempR_tmp + e_tempR_tmp);
  tempR[3] = d_tempR_tmp;
  e_tempR_tmp = cF * cF;
  tempR_tmp = 1.0 - 2.0 * (e_tempR_tmp + tempR_tmp);
  tempR[4] = tempR_tmp;
  cx = cy * sx;
  sx = sF * cF;
  cy = 2.0 * (cx - sx);
  tempR[5] = cy;
  g_tempR_tmp = 2.0 * (g_tempR_tmp - h_tempR_tmp);
  tempR[6] = g_tempR_tmp;
  h_tempR_tmp = 2.0 * (cx + sx);
  tempR[7] = h_tempR_tmp;
  b_tempR_tmp = 1.0 - 2.0 * (e_tempR_tmp + b_tempR_tmp);
  tempR[8] = b_tempR_tmp;
  R_H[0] = c_tempR_tmp;
  R_H[1] = f_tempR_tmp;
  R_H[2] = i_tempR_tmp;
  R_H[3] = d_tempR_tmp;
  R_H[4] = tempR_tmp;
  R_H[5] = cy;
  R_H[6] = g_tempR_tmp;
  R_H[7] = h_tempR_tmp;
  R_H[8] = b_tempR_tmp;
  for (k = 0; k < 3; k++) {
    R_H_tmp = 3 * k;
    R_H[k] = tempR[R_H_tmp];
    R_H[k + 3] = tempR[R_H_tmp + 1];
    R_H[k + 6] = tempR[R_H_tmp + 2];
  }

  //  Calculation
  sF = r / 102.5;

  //  both in millimeters
  cF = std::sqrt(1.0 - sF * sF);
  sx = R_H[8] * cF + R_H[6] * sF;
  cy = std::sqrt(R_H[7] * R_H[7] + sx * sx);
  cx = sx / cy;
  sx = -R_H[7] / cy;
  *theta_T = rt_atan2d_snf(R_H[1] * cx + (R_H[2] * cF + R_H[0] * sF) * sx, R_H[4]
    * cx + (R_H[5] * cF + R_H[3] * sF) * sx);
  *theta_F = rt_atan2d_snf(sF, cF);
  q[0] = 0.0;
  q[1] = 1.0;
  q[2] = 0.0;
  q[3] = *theta_F;
  axang2rotm(q, tempR);
  std::memcpy(&dv[0], &tempR[0], 9U * sizeof(double));
  for (k = 0; k < 3; k++) {
    p_H[k] = (dv[k] * 0.0 + dv[k + 3] * 0.0) + dv[k + 6] * 102.5;
    q[k] = iv[k];
  }

  q[3] = *theta_T;
  axang2rotm(q, tempR);
  std::memcpy(&dv[0], &tempR[0], 9U * sizeof(double));
  for (k = 0; k < 3; k++) {
    sx = R_H[k + 3];
    cy = R_H[k + 6];
    for (R_H_tmp = 0; R_H_tmp < 3; R_H_tmp++) {
      tempR[k + 3 * R_H_tmp] = (R_H[k] * dv[R_H_tmp] + sx * dv[R_H_tmp + 3]) +
        cy * dv[R_H_tmp + 6];
    }
  }

  for (k = 0; k < 3; k++) {
    p_A_R[k] = p_H[k] + ((tempR[k] * -38.0 + tempR[k + 3] * -34.5) + tempR[k + 6]
                         * -0.0);
  }

  sx = p_A_R[0] * p_A_R[0];
  cy = p_A_R[2] * p_A_R[2];
  cx = (11664.0 - (((sx + (p_A_R[1] + 14.5) * (p_A_R[1] + 14.5)) + cy) + 1444.0))
    / 76.0;
  *theta_R = 2.0 * std::atan((-p_A_R[2] + std::sqrt((sx + cy) - cx * cx)) / (cx
    + p_A_R[0]));
  for (k = 0; k < 3; k++) {
    p_A_R[k] = p_H[k] + ((tempR[k] * -38.0 + tempR[k + 3] * 34.5) + tempR[k + 6]
                         * 0.0);
  }

  sx = p_A_R[0] * p_A_R[0];
  cy = p_A_R[2] * p_A_R[2];
  cx = (11664.0 - (((sx + (p_A_R[1] - 14.5) * (p_A_R[1] - 14.5)) + cy) + 1444.0))
    / 76.0;
  *theta_L = 2.0 * std::atan((-p_A_R[2] + std::sqrt((sx + cy) - cx * cx)) / (cx
    + p_A_R[0]));
}

//
// File trailer for headIK_rotm.cpp
//
// [EOF]
//
