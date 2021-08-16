/*
 * _coder_dCP_mex.c
 *
 * Code generation for function '_coder_dCP_mex'
 *
 */

/* Include files */
#include "dCP.h"
#include "_coder_dCP_mex.h"
#include "dCP_terminate.h"
#include "_coder_dCP_api.h"
#include "dCP_initialize.h"
#include "dCP_data.h"

/* Function Declarations */
static void dCP_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs, const
  mxArray *prhs[1]);

/* Function Definitions */
static void dCP_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs, const
  mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[2];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4, 3,
                        "dCP");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "dCP");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  dCP_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    n = 1;
  } else {
    n = nlhs;
  }

  emlrtReturnArrays(n, plhs, outputs);

  /* Module termination. */
  dCP_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(dCP_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  dCP_initialize();

  /* Dispatch the entry-point. */
  dCP_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_dCP_mex.c) */
