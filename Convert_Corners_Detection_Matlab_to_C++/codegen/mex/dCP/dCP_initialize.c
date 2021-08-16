/*
 * dCP_initialize.c
 *
 * Code generation for function 'dCP_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "dCP_initialize.h"
#include "subPixelLocation.h"
#include "_coder_dCP_mex.h"
#include "dCP_data.h"

/* Function Declarations */
static void dCP_once(void);

/* Function Definitions */
static void dCP_once(void)
{
  covrtInstanceData *t0_data = NULL;
  emlrtCoverageInstance.data = t0_data;
  X_not_empty_init();

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "/home/luis/Desktop/CornersDetect_Matlab_C++/dCP.m", 0U, 1U,
                  1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "dCP", 0, -1, 105);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 47, -1, 100);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void dCP_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Video_and_Image_Blockset", 2);
  emlrtLicenseCheckR2012b(&st, "Image_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    dCP_once();
  }
}

/* End of code generation (dCP_initialize.c) */
