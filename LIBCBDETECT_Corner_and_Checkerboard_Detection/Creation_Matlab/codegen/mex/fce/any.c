/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo xb_emlrtRSI = { 12, "any",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T k;
  int32_T exitg2;
  int32_T i8;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = false;
  p = false;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 2) {
      if (k + 1 <= 1) {
        i8 = x->size[0];
      } else {
        i8 = 1;
      }

      if (i8 != 0) {
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &gc_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &hc_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  b_st.site = &yb_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k <= x->size[0])) {
    overflow = !x->data[k - 1];
    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (any.c) */
