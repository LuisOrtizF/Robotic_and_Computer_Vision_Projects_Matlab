/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "abs.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo ub_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elfun/abs.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elfun/abs.m"/* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real32_T *x, emxArray_real32_T
           *y)
{
  int32_T nx;
  int32_T k;
  uint32_T uv0[2];
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nx = x->size[0] * x->size[1];
  for (k = 0; k < 2; k++) {
    uv0[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity_real32_T(&st, y, k, &ob_emlrtRTEI);
  b_st.site = &vb_emlrtRSI;
  overflow = ((!(1 > nx)) && (nx > 2147483646));
  if (overflow) {
    c_st.site = &pb_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= nx; k++) {
    y->data[k] = muSingleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
