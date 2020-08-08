/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_headIK_rotm_api.h
 *
 * MATLAB Coder version            : 5.0
 * C/C++ source code generated on  : 23-Jul-2020 13:13:19
 */

#ifndef _CODER_HEADIK_ROTM_API_H
#define _CODER_HEADIK_ROTM_API_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void headIK_rotm(real_T qw, real_T qx, real_T qy, real_T qz, real_T r,
  real_T *theta_F, real_T *theta_T, real_T *theta_R, real_T *theta_L);
extern void headIK_rotm_api(const mxArray * const prhs[5], int32_T nlhs, const
  mxArray *plhs[4]);
extern void headIK_rotm_atexit(void);
extern void headIK_rotm_initialize(void);
extern void headIK_rotm_terminate(void);
extern void headIK_rotm_xil_shutdown(void);
extern void headIK_rotm_xil_terminate(void);

#endif

/*
 * File trailer for _coder_headIK_rotm_api.h
 *
 * [EOF]
 */
