/*
 * chessboardsFromCorners_mex_terminate.c
 *
 * Code generation for function 'chessboardsFromCorners_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "chessboardsFromCorners_mex_terminate.h"
#include "_coder_chessboardsFromCorners_mex_mex.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Function Definitions */
void chessboardsFromCorners_mex_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void chessboardsFromCorners_mex_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (chessboardsFromCorners_mex_terminate.c) */
