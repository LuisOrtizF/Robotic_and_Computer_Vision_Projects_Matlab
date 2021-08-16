/*
 * _coder_chessboardsFromCorners_mex_mex.c
 *
 * Code generation for function '_coder_chessboardsFromCorners_mex_mex'
 *
 */

/* Include files */
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "_coder_chessboardsFromCorners_mex_mex.h"
#include "chessboardsFromCorners_mex_terminate.h"
#include "_coder_chessboardsFromCorners_mex_api.h"
#include "chessboardsFromCorners_mex_initialize.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[3] = { "chessboardsFromCorners",
  "extractuv", "findCorners" };

static c_chessboardsFromCorners_mexSta *d_chessboardsFromCorners_mexSta = NULL;

/* Function Declarations */
static void c_chessboardsFromCorners_mexFun(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void extractuv_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
  const mxArray *prhs[2]);
static void findCorners_mexFunction(c_chessboardsFromCorners_mexSta *SD, int32_T
  nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void c_chessboardsFromCorners_mexFun(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        22, "chessboardsFromCorners");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "chessboardsFromCorners");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  chessboardsFromCorners_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  chessboardsFromCorners_mex_terminate();
}

static void extractuv_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
  const mxArray *prhs[2])
{
  int32_T n;
  const mxArray *inputs[2];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4, 9,
                        "extractuv");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "extractuv");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  extractuv_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  chessboardsFromCorners_mex_terminate();
}

static void findCorners_mexFunction(c_chessboardsFromCorners_mexSta *SD, int32_T
  nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3])
{
  int32_T n;
  const mxArray *inputs[3];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        11, "findCorners");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "findCorners");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  findCorners_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  chessboardsFromCorners_mex_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL, NULL, NULL };

  d_chessboardsFromCorners_mexSta = (c_chessboardsFromCorners_mexSta *)mxCalloc
    (1, 1U * sizeof(c_chessboardsFromCorners_mexSta));
  mexAtExit(chessboardsFromCorners_mex_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  chessboardsFromCorners_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 3)) {
   case 0:
    c_chessboardsFromCorners_mexFun(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 1:
    extractuv_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 2:
    findCorners_mexFunction(d_chessboardsFromCorners_mexSta, nlhs, plhs, nrhs -
      1, &prhs[1]);
    break;
  }

  mxFree(d_chessboardsFromCorners_mexSta);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_chessboardsFromCorners_mex_mex.c) */
