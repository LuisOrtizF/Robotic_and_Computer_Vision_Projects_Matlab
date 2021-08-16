/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "mean.h"

/* Variable Definitions */
static emlrtRTEInfo an_emlrtRTEI = { 17,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

/* Function Definitions */
real32_T mean(const emlrtStack *sp, const emxArray_real32_T *x)
{
  real32_T y;
  boolean_T b1;
  int32_T firstBlockLength;
  int32_T nblocks;
  int32_T lastBlockLength;
  int32_T k;
  int32_T xblockoffset;
  real32_T bsum;
  int32_T hi;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    emlrtErrorWithMessageIdR2012b(sp, &an_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x->size[0] == 0) {
    y = 0.0F;
  } else {
    if (x->size[0] <= 1024) {
      firstBlockLength = x->size[0];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[0] / 1024;
      lastBlockLength = x->size[0] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }

    y = x->data[0];
    for (k = 2; k <= firstBlockLength; k++) {
      y += x->data[k - 1];
    }

    for (firstBlockLength = 2; firstBlockLength <= nblocks; firstBlockLength++)
    {
      xblockoffset = (firstBlockLength - 1) << 10;
      bsum = x->data[xblockoffset];
      if (firstBlockLength == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }

      for (k = 2; k <= hi; k++) {
        bsum += x->data[(xblockoffset + k) - 1];
      }

      y += bsum;
    }
  }

  y /= (real32_T)x->size[0];
  return y;
}

/* End of code generation (mean.c) */
