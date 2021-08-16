/*
 * hypot.c
 *
 * Code generation for function 'hypot'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "hypot.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo wf_emlrtRSI = { 12, /* lineNo */
  "hypot",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elfun/hypot.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 203,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "hypot",                             /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elfun/hypot.m"/* pName */
};

/* Function Definitions */
void b_hypot(const emlrtStack *sp, const emxArray_real32_T *x, const
             emxArray_real32_T *y, emxArray_real32_T *r)
{
  emxArray_real32_T *z;
  emxArray_real32_T *b_z;
  int32_T c;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T1(sp, &z, 1, &qb_emlrtRTEI, true);
  emxInit_real32_T1(sp, &b_z, 1, &pb_emlrtRTEI, true);
  st.site = &wf_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (x->size[0] <= y->size[0]) {
    c = x->size[0];
  } else {
    c = y->size[0];
  }

  k = b_z->size[0];
  b_z->size[0] = c;
  emxEnsureCapacity_real32_T1(&b_st, b_z, k, &pb_emlrtRTEI);
  k = z->size[0];
  z->size[0] = c;
  emxEnsureCapacity_real32_T1(&b_st, z, k, &qb_emlrtRTEI);
  if (!b_dimagree(z, x, y)) {
    emlrtErrorWithMessageIdR2012b(&b_st, &pm_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  emxFree_real32_T(&z);
  k = r->size[0];
  r->size[0] = c;
  emxEnsureCapacity_real32_T1(&st, r, k, &ne_emlrtRTEI);
  b_st.site = &fc_emlrtRSI;
  c_st.site = &xf_emlrtRSI;
  overflow = ((!(1 > b_z->size[0])) && (b_z->size[0] > 2147483646));
  emxFree_real32_T(&b_z);
  if (overflow) {
    d_st.site = &pb_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k + 1 <= c; k++) {
    r->data[k] = muSingleScalarHypot(x->data[k], y->data[k]);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_hypot(const emlrtStack *sp, const emxArray_real_T *x, const
             emxArray_real_T *y, emxArray_real_T *r)
{
  emxArray_real_T *z;
  emxArray_real_T *b_z;
  int32_T c;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T2(sp, &z, 1, &qb_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_z, 1, &pb_emlrtRTEI, true);
  st.site = &wf_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (x->size[0] <= y->size[0]) {
    c = x->size[0];
  } else {
    c = y->size[0];
  }

  k = b_z->size[0];
  b_z->size[0] = c;
  emxEnsureCapacity_real_T2(&b_st, b_z, k, &pb_emlrtRTEI);
  k = z->size[0];
  z->size[0] = c;
  emxEnsureCapacity_real_T2(&b_st, z, k, &qb_emlrtRTEI);
  if (!c_dimagree(z, x, y)) {
    emlrtErrorWithMessageIdR2012b(&b_st, &pm_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  emxFree_real_T(&z);
  k = r->size[0];
  r->size[0] = c;
  emxEnsureCapacity_real_T2(&st, r, k, &ne_emlrtRTEI);
  b_st.site = &fc_emlrtRSI;
  c_st.site = &xf_emlrtRSI;
  overflow = ((!(1 > b_z->size[0])) && (b_z->size[0] > 2147483646));
  emxFree_real_T(&b_z);
  if (overflow) {
    d_st.site = &pb_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k + 1 <= c; k++) {
    r->data[k] = muDoubleScalarHypot(x->data[k], y->data[k]);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (hypot.c) */
