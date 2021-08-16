/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "dCP_data.h"

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&st, &xm_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  b_st.site = &hg_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &pb_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    overflow = !x->data[ix - 1];
    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/* End of code generation (any.c) */
