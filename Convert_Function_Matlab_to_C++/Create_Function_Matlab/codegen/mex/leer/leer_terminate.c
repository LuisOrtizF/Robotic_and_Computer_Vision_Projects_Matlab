/*
 * leer_terminate.c
 *
 * Code generation for function 'leer_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "leer.h"
#include "leer_terminate.h"
#include "_coder_leer_mex.h"
#include "leer_data.h"

/* Function Definitions */
void leer_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void leer_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (leer_terminate.c) */
