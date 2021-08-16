/*
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "fce_data.h"
#include "blas.h"

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T k;
  int32_T exitg2;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gh_emlrtRSI;
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
      if (x->size[k] != 0) {
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

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &hc_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = true;
  b_st.site = &yb_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k <= x->size[1])) {
    if (!x->data[k - 1]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (all.c) */
