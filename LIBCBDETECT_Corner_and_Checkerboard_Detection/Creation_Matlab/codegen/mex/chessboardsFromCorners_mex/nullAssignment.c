/*
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "nullAssignment.h"
#include "eml_int_forloop_overflow_check.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 10, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo db_emlrtRSI = { 14, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo eb_emlrtRSI = { 168, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo fb_emlrtRSI = { 165, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo gb_emlrtRSI = { 163, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo hb_emlrtRSI = { 255, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo jb_emlrtRSI = { 128, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo be_emlrtRSI = { 19, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo ce_emlrtRSI = { 281, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo de_emlrtRSI = { 284, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo ee_emlrtRSI = { 286, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 1, 14, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo kc_emlrtRTEI = { 180, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo lc_emlrtRTEI = { 81, 27, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo mc_emlrtRTEI = { 77, 27, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo nc_emlrtRTEI = { 177, 9, "nullAssignment",
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
  st.site = &jb_emlrtRSI;
  overflow = ((!(1 > b->size[0])) && (b->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &ib_emlrtRSI;
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
  st.site = &be_emlrtRSI;
  k = idx->size[0];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }

  if (k <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &mc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &vd_emlrtRSI;
  nrowx = x->size[0];
  ncolx = x->size[1];
  b_st.site = &ce_emlrtRSI;
  nrows = x->size[0] - num_true(&b_st, idx);
  i = 0;
  b_st.site = &de_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= nrowx; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      b_st.site = &ee_emlrtRSI;
      for (j = 0; j + 1 <= ncolx; j++) {
        x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
      }

      i++;
    }
  }

  if (nrows <= nrowx) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ac_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nrows) {
    nrowx = 0;
  } else {
    nrowx = nrows;
  }

  emxInit_real_T(&st, &b_x, 2, &d_emlrtRTEI, true);
  k = x->size[1];
  ncolx = b_x->size[0] * b_x->size[1];
  b_x->size[0] = nrowx;
  b_x->size[1] = k;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, ncolx, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
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
                    &d_emlrtRTEI);
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

void c_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
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
  st.site = &cb_emlrtRSI;
  k = idx->size[0];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }

  if (k <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &db_emlrtRSI;
  nxin = x->size[0];
  nrowx = x->size[0];
  b_st.site = &fb_emlrtRSI;
  nxout = x->size[0] - num_true(&b_st, idx);
  k0 = -1;
  b_st.site = &eb_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &ib_emlrtRSI;
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
    emlrtErrorWithMessageIdR2012b(&st, &nc_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nxout) {
    k = 0;
  } else {
    k = nxout;
  }

  emxInit_real_T1(&st, &b_x, 1, &d_emlrtRTEI, true);
  nxin = b_x->size[0];
  b_x->size[0] = k;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, nxin, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (nxin = 0; nxin < k; nxin++) {
    b_x->data[nxin] = x->data[nxin];
  }

  nxin = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, nxin, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  k = b_x->size[0];
  for (nxin = 0; nxin < k; nxin++) {
    x->data[nxin] = b_x->data[nxin];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void nullAssignment(const emlrtStack *sp, real_T x_data[], int32_T x_size[2],
                    const emxArray_int32_T *idx)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  boolean_T b_data[100];
  int32_T n;
  int32_T k0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[0] - 1)) {
    if (idx->data[k] < 1) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &db_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  memset(&b_data[0], 0, 100U * sizeof(boolean_T));
  c_st.site = &hb_emlrtRSI;
  overflow = ((!(1 > idx->size[0])) && (idx->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= idx->size[0]; k++) {
    b_data[idx->data[k - 1] - 1] = true;
  }

  b_st.site = &fb_emlrtRSI;
  n = 0;
  c_st.site = &jb_emlrtRSI;
  for (k = 0; k < 100; k++) {
    n += b_data[k];
  }

  k0 = -1;
  b_st.site = &eb_emlrtRSI;
  for (k = 0; k < 100; k++) {
    if (!b_data[k]) {
      k0++;
      x_data[k0] = x_data[k];
    }
  }

  if (100 - n <= 100) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &kc_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > 100 - n) {
    x_size[1] = 0;
  } else {
    x_size[1] = 100 - n;
  }
}

/* End of code generation (nullAssignment.c) */
