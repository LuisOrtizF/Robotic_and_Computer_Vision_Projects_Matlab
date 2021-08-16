/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "sum.h"
#include "isequal.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo nf_emlrtRSI = { 9, "sum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 20, 15, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 48, 9, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

/* Function Definitions */
real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T b4;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nf_emlrtRSI;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    b4 = true;
  } else {
    b4 = false;
  }

  if (b4) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b4 = !isequal(x);
  if (b4) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
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

  return y;
}

/* End of code generation (sum.c) */
