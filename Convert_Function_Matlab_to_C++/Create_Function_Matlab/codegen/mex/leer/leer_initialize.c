/*
 * leer_initialize.c
 *
 * Code generation for function 'leer_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "leer.h"
#include "leer_initialize.h"
#include "_coder_leer_mex.h"
#include "leer_data.h"

/* Function Declarations */
static void leer_once(void);

/* Function Definitions */
static void leer_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance, "C:\\Users\\Luisito\\Desktop\\leer.m",
                  0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "leer", 1, -1, 51);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 31, -1, 46);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void leer_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    leer_once();
  }
}

/* End of code generation (leer_initialize.c) */
