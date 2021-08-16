/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "squeeze.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo oh_emlrtRSI = { 28, /* lineNo */
  "squeeze",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 58, /* lineNo */
  "squeeze",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pathName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "squeeze",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pName */
};

/* Function Definitions */
void b_squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T
               *b)
{
  int32_T k;
  int32_T sqsz[3];
  int32_T b_b;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 3;
  while ((k > 2) && (a->size[2] == 1)) {
    k = 2;
  }

  if (k <= 2) {
    sqsz[0] = a->size[0];
    k = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = 1;
    emxEnsureCapacity_real_T(sp, b, k, &eh_emlrtRTEI);
    b_b = a->size[0] * a->size[2];
    st.site = &oh_emlrtRSI;
    overflow = ((!(1 > b_b)) && (b_b > 2147483646));
    if (overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (k = 0; k < 3; k++) {
      sqsz[k] = 1;
    }

    k = 0;
    if (a->size[0] != 1) {
      sqsz[0] = a->size[0];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
    }

    k = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    emxEnsureCapacity_real_T(sp, b, k, &eh_emlrtRTEI);
    b_b = a->size[0] * a->size[2];
    st.site = &ph_emlrtRSI;
    overflow = ((!(1 > b_b)) && (b_b > 2147483646));
    if (overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

void squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  int32_T sqsz[3];
  int32_T b_b;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 3;
  while ((k > 2) && (a->size[2] == 1)) {
    k = 2;
  }

  if (k <= 2) {
    sqsz[1] = a->size[1];
    k = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = sqsz[1];
    emxEnsureCapacity_real_T(sp, b, k, &eh_emlrtRTEI);
    b_b = a->size[1] * a->size[2];
    st.site = &oh_emlrtRSI;
    overflow = ((!(1 > b_b)) && (b_b > 2147483646));
    if (overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (k = 0; k < 3; k++) {
      sqsz[k] = 1;
    }

    k = 0;
    if (a->size[1] != 1) {
      sqsz[0] = a->size[1];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
    }

    k = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    emxEnsureCapacity_real_T(sp, b, k, &eh_emlrtRTEI);
    b_b = a->size[1] * a->size[2];
    st.site = &ph_emlrtRSI;
    overflow = ((!(1 > b_b)) && (b_b > 2147483646));
    if (overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

/* End of code generation (squeeze.c) */
