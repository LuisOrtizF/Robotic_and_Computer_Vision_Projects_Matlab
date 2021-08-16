/*
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "nullAssignment.h"
#include "eml_int_forloop_overflow_check.h"
#include "fce_emxutil.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo ad_emlrtRSI = { 281, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo bd_emlrtRSI = { 284, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo cd_emlrtRSI = { 286, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo dd_emlrtRSI = { 128, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo pd_emlrtRSI = { 10, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo qd_emlrtRSI = { 14, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo rd_emlrtRSI = { 165, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo sd_emlrtRSI = { 168, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo ef_emlrtRSI = { 163, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo ff_emlrtRSI = { 255, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 14, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 181, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 161, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo xc_emlrtRTEI = { 81, 27, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo yc_emlrtRTEI = { 177, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo ad_emlrtRTEI = { 180, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

/* Function Declarations */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b);

/* Function Definitions */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b)
{
  int32_T n;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  st.site = &dd_emlrtRSI;
  overflow = ((!(1 > b->size[0])) && (b->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 1; k <= b->size[0]; k++) {
    n += b->data[k - 1];
  }

  return n;
}

void b_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                      emxArray_boolean_T *idx)
{
  int32_T k;
  int32_T nxin;
  int32_T nrowx;
  int32_T nxout;
  int32_T k0;
  boolean_T overflow;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &pd_emlrtRSI;
  k = idx->size[0];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }

  if (k <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &xc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &qd_emlrtRSI;
  nxin = x->size[0];
  nrowx = x->size[0];
  b_st.site = &rd_emlrtRSI;
  nxout = x->size[0] - num_true(&b_st, idx);
  k0 = -1;
  b_st.site = &sd_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= nxin; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      k0++;
      x->data[k0] = x->data[k - 1];
    }
  }

  if (nxout <= nrowx) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &yc_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nxout) {
    k = 0;
  } else {
    k = nxout;
  }

  emxInit_real_T1(&st, &b_x, 1, &l_emlrtRTEI, true);
  nxin = b_x->size[0];
  b_x->size[0] = k;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, nxin, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  for (nxin = 0; nxin < k; nxin++) {
    b_x->data[nxin] = x->data[nxin];
  }

  nxin = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, nxin, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  k = b_x->size[0];
  for (nxin = 0; nxin < k; nxin++) {
    x->data[nxin] = b_x->data[nxin];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                      emxArray_int32_T *idx)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  emxArray_boolean_T *b;
  int32_T nxin;
  int32_T k0;
  int32_T nxout;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &pd_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[0] - 1)) {
    if ((idx->data[k] < 1) || (idx->data[k] > x->size[1])) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &xc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  emxInit_boolean_T1(&st, &b, 2, &vb_emlrtRTEI, true);
  st.site = &qd_emlrtRSI;
  nxin = x->size[1];
  b_st.site = &ef_emlrtRSI;
  k = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = x->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)b, k, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  k0 = x->size[1];
  for (k = 0; k < k0; k++) {
    b->data[k] = false;
  }

  c_st.site = &ff_emlrtRSI;
  overflow = ((!(1 > idx->size[0])) && (idx->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= idx->size[0]; k++) {
    b->data[idx->data[k - 1] - 1] = true;
  }

  b_st.site = &rd_emlrtRSI;
  k0 = 0;
  c_st.site = &dd_emlrtRSI;
  overflow = ((!(1 > b->size[1])) && (b->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= b->size[1]; k++) {
    k0 += b->data[k - 1];
  }

  nxout = x->size[1] - k0;
  k0 = -1;
  b_st.site = &sd_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= nxin; k++) {
    if ((k > b->size[1]) || (!b->data[k - 1])) {
      k0++;
      x->data[k0] = x->data[k - 1];
    }
  }

  emxFree_boolean_T(&b);
  if (nxout <= nxin) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ad_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  k = x->size[0] * x->size[1];
  if (1 > nxout) {
    x->size[1] = 0;
  } else {
    x->size[1] = nxout;
  }

  emxEnsureCapacity(&st, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                    emxArray_boolean_T *idx)
{
  int32_T k;
  int32_T nrowx;
  int32_T ncolx;
  int32_T nrows;
  int32_T i;
  boolean_T overflow;
  int32_T j;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &xc_emlrtRSI;
  k = idx->size[0];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }

  if (k <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &wc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &yc_emlrtRSI;
  nrowx = x->size[0];
  ncolx = x->size[1];
  b_st.site = &ad_emlrtRSI;
  nrows = x->size[0] - num_true(&b_st, idx);
  i = 0;
  b_st.site = &bd_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= nrowx; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      b_st.site = &cd_emlrtRSI;
      for (j = 0; j + 1 <= ncolx; j++) {
        x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
      }

      i++;
    }
  }

  if (nrows <= nrowx) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &vc_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nrows) {
    nrowx = 0;
  } else {
    nrowx = nrows;
  }

  emxInit_real_T(&st, &b_x, 2, &l_emlrtRTEI, true);
  k = x->size[1];
  ncolx = b_x->size[0] * b_x->size[1];
  b_x->size[0] = nrowx;
  b_x->size[1] = k;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, ncolx, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  for (ncolx = 0; ncolx < k; ncolx++) {
    for (nrows = 0; nrows < nrowx; nrows++) {
      b_x->data[nrows + b_x->size[0] * ncolx] = x->data[nrows + x->size[0] *
        ncolx];
    }
  }

  ncolx = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, ncolx, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  nrowx = b_x->size[1];
  for (ncolx = 0; ncolx < nrowx; ncolx++) {
    k = b_x->size[0];
    for (nrows = 0; nrows < k; nrows++) {
      x->data[nrows + x->size[0] * ncolx] = b_x->data[nrows + b_x->size[0] *
        ncolx];
    }
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (nullAssignment.c) */
