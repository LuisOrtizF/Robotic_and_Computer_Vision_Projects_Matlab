/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "mean.h"
#include "isequal.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo ic_emlrtRTEI = { 17, 15, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo jc_emlrtRTEI = { 21, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo kc_emlrtRTEI = { 30, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T b2;
  int32_T k;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    b2 = true;
  } else {
    b2 = false;
  }

  if (b2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ic_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b2 = !isequal(x);
  if (b2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &jc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b2 = !isequal(x);
  if (b2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &kc_emlrtRTEI,
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
