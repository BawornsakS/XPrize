//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: headIK_rotm_initialize.cpp
//
// MATLAB Coder version            : 5.0
// C/C++ source code generated on  : 23-Jul-2020 13:13:19
//

// Include Files
#include "headIK_rotm_initialize.h"
#include "headIK_rotm.h"
#include "headIK_rotm_data.h"
#include "rt_nonfinite.h"

// Function Definitions

//
// Arguments    : void
// Return Type  : void
//
void headIK_rotm_initialize()
{
  rt_InitInfAndNaN();
  isInitialized_headIK_rotm = true;
}

//
// File trailer for headIK_rotm_initialize.cpp
//
// [EOF]
//
