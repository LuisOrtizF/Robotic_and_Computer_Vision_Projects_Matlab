/*
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "std.h"
#include "error.h"
#include "isequal.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo ic_emlrtRTEI = { 37, 19, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRTEInfo jc_emlrtRTEI = { 34, 19, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const emxArray_real_T *varargin_1)
{
  boolean_T b7;
  int32_T i19;
  int32_T d;
  int32_T ix;
  real_T x;
  real_T xbar;
  int32_T k;
  real_T r;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b7 = !isequal(varargin_1);
  if (b7) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &jc_emlrtRTEI,
      "Coder:toolbox:var_specialEmpty", 0);
  }

  if ((varargin_1->size[0] == 1) || (varargin_1->size[0] != 1)) {
    b7 = true;
  } else {
    b7 = false;
  }

  if (b7) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ic_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  i19 = varargin_1->size[0];
  if (varargin_1->size[0] > 1) {
    d = varargin_1->size[0] - 1;
  } else {
    d = varargin_1->size[0];
  }

  if (varargin_1->size[0] == 0) {
    x = 0.0;
  } else {
    ix = 0;
    xbar = varargin_1->data[0];
    for (k = 2; k <= i19; k++) {
      ix++;
      xbar += varargin_1->data[ix];
    }

    xbar /= (real_T)varargin_1->size[0];
    ix = 0;
    r = varargin_1->data[0] - xbar;
    x = r * r;
    for (k = 2; k <= i19; k++) {
      ix++;
      r = varargin_1->data[ix] - xbar;
      x += r * r;
    }

    x /= (real_T)d;
  }

  st.site = &wb_emlrtRSI;
  if (x < 0.0) {
    b_st.site = &ob_emlrtRSI;
    error(&b_st);
  }

  return muDoubleScalarSqrt(x);
}

/* End of code generation (std.c) */
