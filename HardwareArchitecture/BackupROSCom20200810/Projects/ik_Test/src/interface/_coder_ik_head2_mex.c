/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_ik_head2_mex.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 07-Jul-2020 11:48:05
 */

/* Include Files */
#include "_coder_ik_head2_mex.h"
#include "_coder_ik_head2_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void ik_head2_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[11]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[4]
 *                int32_T nrhs
 *                const mxArray *prhs[11]
 * Return Type  : void
 */
void ik_head2_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs, const
  mxArray *prhs[11])
{
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 11, 4,
                        8, "ik_head2");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "ik_head2");
  }

  /* Call the function. */
  ik_head2_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(ik_head2_atexit);

  /* Module initialization. */
  ik_head2_initialize();

  /* Dispatch the entry-point. */
  ik_head2_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  ik_head2_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_ik_head2_mex.c
 *
 * [EOF]
 */
