/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "power.h"
#include "eml_int_forloop_overflow_check.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "scalexpAlloc.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 49, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo lb_emlrtRSI = { 58, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo nb_emlrtRSI = { 132, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

/* Function Definitions */
void b_power(const real_T a[921600], real_T y[921600])
{
  int32_T k;
  for (k = 0; k < 921600; k++) {
    y[k] = a[k] * a[k];
  }
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T a_idx_0;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &lb_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  a_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)a_idx_0;
  emxEnsureCapacity(&c_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  if (dimagree(y, a)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &rb_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  c_st.site = &nb_emlrtRSI;
  overflow = ((!(1 > a->size[0])) && (a->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= a->size[0]; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
