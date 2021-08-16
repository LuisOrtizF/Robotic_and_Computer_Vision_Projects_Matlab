#ifndef _CODER_DCP_MEX_H
#define _CODER_DCP_MEX_H
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "_coder_dCP_api.h"

extern void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const
  mxArray *prhs[]);
extern emlrtCTX mexFunctionCreateRootTLS(void);

#endif
