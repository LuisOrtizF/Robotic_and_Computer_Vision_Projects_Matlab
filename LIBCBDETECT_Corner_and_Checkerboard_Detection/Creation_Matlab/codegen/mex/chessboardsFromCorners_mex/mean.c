/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "mean.h"
#include "isequal.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo fc_emlrtRTEI = { 17, 15, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo gc_emlrtRTEI = { 21, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo hc_emlrtRTEI = { 30, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T b6;
  int32_T k;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    b6 = true;
  } else {
    b6 = false;
  }

  if (b6) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &fc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b6 = !isequal(x);
  if (b6) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &gc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b6 = !isequal(x);
  if (b6) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &hc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  y /= (real_T)x->size[0];
  return y;
}

/* End of code generation (mean.c) */
