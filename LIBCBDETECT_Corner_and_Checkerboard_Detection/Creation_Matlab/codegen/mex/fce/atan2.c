/*
 * atan2.c
 *
 * Code generation for function 'atan2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "atan2.h"
#include "eml_int_forloop_overflow_check.h"
#include "fce_emxutil.h"
#include "scalexpAlloc.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sg_emlrtRSI = { 12, "atan2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"
};

static emlrtRSInfo tg_emlrtRSI = { 179, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

/* Function Definitions */
void b_atan2(const real_T y[921600], const real_T x[921600], real_T r[921600])
{
  int32_T k;
  for (k = 0; k < 921600; k++) {
    r[k] = muDoubleScalarAtan2(y[k], x[k]);
  }
}

void c_atan2(const emlrtStack *sp, const emxArray_real_T *y, const
             emxArray_real_T *x, emxArray_real_T *r)
{
  int32_T k;
  int32_T i20;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &hf_emlrtRSI;
  if (y->size[0] <= x->size[0]) {
    k = y->size[0];
  } else {
    k = x->size[0];
  }

  i20 = r->size[0];
  r->size[0] = k;
  emxEnsureCapacity(&b_st, (emxArray__common *)r, i20, (int32_T)sizeof(real_T),
                    &ab_emlrtRTEI);
  if (b_dimagree(r, y, x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &rc_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  b_st.site = &tg_emlrtRSI;
  overflow = ((!(1 > y->size[0])) && (y->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= y->size[0]; k++) {
    r->data[k] = muDoubleScalarAtan2(y->data[k], x->data[k]);
  }
}

/* End of code generation (atan2.c) */
