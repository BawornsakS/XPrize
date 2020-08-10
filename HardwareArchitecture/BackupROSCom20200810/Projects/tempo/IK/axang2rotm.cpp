//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: axang2rotm.cpp
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 07-Jul-2020 11:48:05
//

// Include Files
#include "axang2rotm.h"
#include "ik_head2.h"
#include <cmath>
#include <cstring>

// Function Definitions

//
// Arguments    : const double axang[4]
//                double R[9]
// Return Type  : void
//
void axang2rotm(const double axang[4], double R[9])
{
  double v_idx_2;
  double v_idx_0;
  double v_idx_1;
  double cth;
  double sth;
  double tempR[9];
  double tempR_tmp;
  double b_tempR_tmp;
  double c_tempR_tmp;
  double d_tempR_tmp;
  int k;
  int R_tmp;
  v_idx_2 = 1.0 / std::sqrt((axang[0] * axang[0] + axang[1] * axang[1]) + axang
    [2] * axang[2]);
  v_idx_0 = axang[0] * v_idx_2;
  v_idx_1 = axang[1] * v_idx_2;
  v_idx_2 *= axang[2];
  cth = std::cos(axang[3]);
  sth = std::sin(axang[3]);
  tempR[0] = v_idx_0 * v_idx_0 * (1.0 - cth) + cth;
  tempR_tmp = v_idx_1 * v_idx_0 * (1.0 - cth);
  b_tempR_tmp = v_idx_2 * sth;
  tempR[1] = tempR_tmp - b_tempR_tmp;
  c_tempR_tmp = v_idx_2 * v_idx_0 * (1.0 - cth);
  d_tempR_tmp = v_idx_1 * sth;
  tempR[2] = c_tempR_tmp + d_tempR_tmp;
  tempR[3] = tempR_tmp + b_tempR_tmp;
  tempR[4] = v_idx_1 * v_idx_1 * (1.0 - cth) + cth;
  tempR_tmp = v_idx_2 * v_idx_1 * (1.0 - cth);
  b_tempR_tmp = v_idx_0 * sth;
  tempR[5] = tempR_tmp - b_tempR_tmp;
  tempR[6] = c_tempR_tmp - d_tempR_tmp;
  tempR[7] = tempR_tmp + b_tempR_tmp;
  tempR[8] = v_idx_2 * v_idx_2 * (1.0 - cth) + cth;
  std::memcpy(&R[0], &tempR[0], 9U * sizeof(double));
  for (k = 0; k < 3; k++) {
    R_tmp = 3 * k;
    R[k] = tempR[R_tmp];
    R[k + 3] = tempR[R_tmp + 1];
    R[k + 6] = tempR[R_tmp + 2];
  }
}

//
// File trailer for axang2rotm.cpp
//
// [EOF]
//
