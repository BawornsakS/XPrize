/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_headIK_rotm_mex.c
 *
 * MATLAB Coder version            : 5.0
 * C/C++ source code generated on  : 23-Jul-2020 13:13:19
 */

/* Include Files */
#include "_coder_headIK_rotm_mex.h"
#include "_coder_headIK_rotm_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void headIK_rotm_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[5]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[4]
 *                int32_T nrhs
 *                const mxArray *prhs[5]
 * Return Type  : void
 */
void headIK_rotm_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs, const
  mxArray *prhs[5])
{
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        11, "headIK_rotm");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "headIK_rotm");
  }

  /* Call the function. */
  headIK_rotm_api(prhs, nlhs, outputs);

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
  mexAtExit(&headIK_rotm_atexit);

  /* Module initialization. */
  headIK_rotm_initialize();

  /* Dispatch the entry-point. */
  headIK_rotm_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  headIK_rotm_terminate();
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
 * File trailer for _coder_headIK_rotm_mex.c
 *
 * [EOF]
 */
