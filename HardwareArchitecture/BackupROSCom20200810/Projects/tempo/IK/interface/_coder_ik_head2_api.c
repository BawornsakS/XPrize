/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_ik_head2_api.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 07-Jul-2020 11:48:05
 */

/* Include Files */
#include "_coder_ik_head2_api.h"
#include "_coder_ik_head2_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131483U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "ik_head2",                          /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Qw, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Qw
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Qw, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(Qw), &thisId);
  emlrtDestroyArray(&Qw);
  return y;
}

/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

/*
 * Arguments    : const mxArray * const prhs[11]
 *                int32_T nlhs
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void ik_head2_api(const mxArray * const prhs[11], int32_T nlhs, const mxArray
                  *plhs[4])
{
  real_T Qw;
  real_T Qx;
  real_T Qy;
  real_T Qz;
  real_T r;
  real_T l_1;
  real_T l_2;
  real_T l_3;
  real_T l_4;
  real_T l_5;
  real_T l_6;
  real_T theta_T;
  real_T theta_F;
  real_T theta_L;
  real_T theta_R;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  Qw = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Qw");
  Qx = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "Qx");
  Qy = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Qy");
  Qz = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Qz");
  r = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "r");
  l_1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "l_1");
  l_2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "l_2");
  l_3 = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "l_3");
  l_4 = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "l_4");
  l_5 = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "l_5");
  l_6 = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "l_6");

  /* Invoke the target function */
  ik_head2(Qw, Qx, Qy, Qz, r, l_1, l_2, l_3, l_4, l_5, l_6, &theta_T, &theta_F,
           &theta_L, &theta_R);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(theta_T);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(theta_F);
  }

  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(theta_L);
  }

  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(theta_R);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void ik_head2_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  ik_head2_xil_terminate();
  ik_head2_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void ik_head2_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void ik_head2_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_ik_head2_api.c
 *
 * [EOF]
 */
