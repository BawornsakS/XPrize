/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_ik_head2_api.h
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 07-Jul-2020 11:48:05
 */

#ifndef _CODER_IK_HEAD2_API_H
#define _CODER_IK_HEAD2_API_H

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
extern void ik_head2(real_T Qw, real_T Qx, real_T Qy, real_T Qz, real_T r,
                     real_T l_1, real_T l_2, real_T l_3, real_T l_4, real_T l_5,
                     real_T l_6, real_T *theta_T, real_T *theta_F, real_T
                     *theta_L, real_T *theta_R);
extern void ik_head2_api(const mxArray * const prhs[11], int32_T nlhs, const
  mxArray *plhs[4]);
extern void ik_head2_atexit(void);
extern void ik_head2_initialize(void);
extern void ik_head2_terminate(void);
extern void ik_head2_xil_shutdown(void);
extern void ik_head2_xil_terminate(void);

#endif

/*
 * File trailer for _coder_ik_head2_api.h
 *
 * [EOF]
 */
