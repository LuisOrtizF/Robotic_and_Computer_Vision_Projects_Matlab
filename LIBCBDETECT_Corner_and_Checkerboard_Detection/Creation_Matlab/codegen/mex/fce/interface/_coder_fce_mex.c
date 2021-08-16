/*
 * _coder_fce_mex.c
 *
 * Code generation for function '_coder_fce_mex'
 *
 */

/* Include files */
#include "fce.h"
#include "_coder_fce_mex.h"
#include "fce_terminate.h"
#include "_coder_fce_api.h"
#include "fce_initialize.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static fceStackData *fceStackDataGlobal = NULL;

/* Function Declarations */
static void fce_mexFunction(fceStackData *SD, int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void fce_mexFunction(fceStackData *SD, int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4, 3,
                        "fce");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "fce");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  fce_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  fce_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  fceStackDataGlobal = (fceStackData *)mxCalloc(1, 1U * sizeof(fceStackData));
  mexAtExit(fce_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  fce_initialize();

  /* Dispatch the entry-point. */
  fce_mexFunction(fceStackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(fceStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_fce_mex.c) */
