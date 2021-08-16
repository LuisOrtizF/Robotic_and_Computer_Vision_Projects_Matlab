/*
 * infocheck.c
 *
 * Code generation for function 'infocheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "infocheck.h"
#include "error.h"
#include "dCP_data.h"
#include "lapacke.h"

/* Function Definitions */
boolean_T infocheck(const emlrtStack *sp, int32_T info)
{
  boolean_T p;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (info < 0) {
    if (info == -1010) {
      st.site = &el_emlrtRSI;
      b_st.site = &el_emlrtRSI;
      d_error(&b_st);
    } else {
      st.site = &fl_emlrtRSI;
      b_st.site = &fl_emlrtRSI;
      f_error(&b_st, info);
    }
  } else {
    p = false;
  }

  return p;
}

/* End of code generation (infocheck.c) */
