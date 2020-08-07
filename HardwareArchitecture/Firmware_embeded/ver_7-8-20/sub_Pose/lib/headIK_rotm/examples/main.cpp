//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 5.0
// C/C++ source code generated on  : 23-Jul-2020 13:13:19
//

//***********************************************************************
// This automatically generated example C++ main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************

// Include Files
#include "main.h"
#include "headIK_rotm.h"
#include "headIK_rotm_terminate.h"
#include "rt_nonfinite.h"

// Function Declarations
static double argInit_real_T();
static void main_headIK_rotm();

// Function Definitions

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_headIK_rotm()
{
  double qw_tmp;
  double theta_F;
  double theta_T;
  double theta_R;
  double theta_L;

  // Initialize function 'headIK_rotm' input arguments.
  qw_tmp = argInit_real_T();

  // Call the entry-point 'headIK_rotm'.
  headIK_rotm(qw_tmp, qw_tmp, qw_tmp, qw_tmp, qw_tmp, &theta_F, &theta_T,
              &theta_R, &theta_L);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. 
  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_headIK_rotm();

  // Terminate the application.
  // You do not need to do this more than one time.
  headIK_rotm_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
