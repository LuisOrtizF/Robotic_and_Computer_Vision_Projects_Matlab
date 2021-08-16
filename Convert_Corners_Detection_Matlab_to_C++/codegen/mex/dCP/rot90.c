/*
 * rot90.c
 *
 * Code generation for function 'rot90'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "rot90.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo pi_emlrtRSI = { 47, /* lineNo */
  "rot90",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/rot90.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 48, /* lineNo */
  "rot90",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/rot90.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 57, /* lineNo */
  "rot90",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/rot90.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 58, /* lineNo */
  "rot90",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/rot90.m"/* pathName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "rot90",                             /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/rot90.m"/* pName */
};

/* Function Definitions */
void b_rot90(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *B)
{
  int32_T m;
  int32_T n;
  int32_T j;
  boolean_T overflow;
  boolean_T b_overflow;
  int32_T i;
  int32_T A_idx_0;
  int32_T B_idx_0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  m = A->size[0];
  n = A->size[1];
  j = B->size[0] * B->size[1];
  B->size[0] = A->size[0];
  B->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, B, j, &ak_emlrtRTEI);
  st.site = &dj_emlrtRSI;
  overflow = ((!(1 > A->size[1])) && (A->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &pb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  if (1 <= n) {
    b_overflow = ((!(1 > m)) && (m > 2147483646));
  }

  for (j = 1; j <= n; j++) {
    st.site = &ej_emlrtRSI;
    if (b_overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 1; i <= m; i++) {
      A_idx_0 = A->size[0];
      B_idx_0 = B->size[0];
      B->data[(i + B_idx_0 * (j - 1)) - 1] = A->data[(m - i) + A_idx_0 * (n - j)];
    }
  }
}

void rot90(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *B)
{
  int32_T m;
  int32_T n;
  int32_T sizeB_idx_0;
  int32_T sizeB_idx_1;
  int32_T A_idx_0;
  boolean_T overflow;
  boolean_T b_overflow;
  int32_T B_idx_0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  m = A->size[0];
  n = A->size[1];
  sizeB_idx_0 = A->size[1];
  sizeB_idx_1 = A->size[0];
  A_idx_0 = B->size[0] * B->size[1];
  B->size[0] = sizeB_idx_0;
  B->size[1] = sizeB_idx_1;
  emxEnsureCapacity_real_T(sp, B, A_idx_0, &ak_emlrtRTEI);
  st.site = &pi_emlrtRSI;
  overflow = ((!(1 > A->size[1])) && (A->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &pb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  if (1 <= n) {
    b_overflow = ((!(1 > m)) && (m > 2147483646));
  }

  for (sizeB_idx_0 = 1; sizeB_idx_0 <= n; sizeB_idx_0++) {
    st.site = &qi_emlrtRSI;
    if (b_overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (sizeB_idx_1 = 0; sizeB_idx_1 + 1 <= m; sizeB_idx_1++) {
      A_idx_0 = A->size[0];
      B_idx_0 = B->size[0];
      B->data[(sizeB_idx_0 + B_idx_0 * sizeB_idx_1) - 1] = A->data[sizeB_idx_1 +
        A_idx_0 * (n - sizeB_idx_0)];
    }
  }
}

/* End of code generation (rot90.c) */
