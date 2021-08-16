/*
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "sort1.h"
#include "eml_int_forloop_overflow_check.h"
#include "sortIdx.h"
#include "dCP_emxutil.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = { 19, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 50, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 71, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 74, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 76, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 79, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 82, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 84, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 49, /* lineNo */
  "prodsize",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/prodsize.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 443,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 68, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRTEInfo od_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pName */
};

static emlrtRTEInfo gl_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "sort",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sort.m"/* pName */
};

/* Function Declarations */
static void b_sort(const emlrtStack *sp, emxArray_real32_T *x, int32_T dim,
                   emxArray_int32_T *idx);

/* Function Definitions */
static void b_sort(const emlrtStack *sp, emxArray_real32_T *x, int32_T dim,
                   emxArray_int32_T *idx)
{
  int32_T i62;
  emxArray_real32_T *vwork;
  int32_T vstride;
  int32_T x_idx_0;
  boolean_T overflow;
  int32_T j;
  emxArray_int32_T *iidx;
  boolean_T b_overflow;
  boolean_T c_overflow;
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
  st.site = &ae_emlrtRSI;
  if (dim <= 1) {
    i62 = x->size[0];
  } else {
    i62 = 1;
  }

  emxInit_real32_T1(sp, &vwork, 1, &gl_emlrtRTEI, true);
  vstride = vwork->size[0];
  vwork->size[0] = i62;
  emxEnsureCapacity_real32_T1(sp, vwork, vstride, &od_emlrtRTEI);
  x_idx_0 = x->size[0];
  vstride = idx->size[0];
  idx->size[0] = x_idx_0;
  emxEnsureCapacity_int32_T(sp, idx, vstride, &od_emlrtRTEI);
  st.site = &be_emlrtRSI;
  vstride = 1;
  b_st.site = &he_emlrtRSI;
  overflow = ((!(1 > dim - 1)) && (dim - 1 > 2147483646));
  if (overflow) {
    c_st.site = &pb_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  x_idx_0 = 1;
  while (x_idx_0 <= dim - 1) {
    vstride *= x->size[0];
    x_idx_0 = 2;
  }

  st.site = &ce_emlrtRSI;
  st.site = &de_emlrtRSI;
  overflow = ((!(1 > vstride)) && (vstride > 2147483646));
  if (overflow) {
    b_st.site = &pb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  j = 0;
  emxInit_int32_T(sp, &iidx, 1, &od_emlrtRTEI, true);
  if (1 <= vstride) {
    if (1 > i62) {
      b_overflow = false;
      c_overflow = false;
    } else {
      b_overflow = (i62 > 2147483646);
      c_overflow = (i62 > 2147483646);
    }
  }

  while (j + 1 <= vstride) {
    st.site = &ee_emlrtRSI;
    if (b_overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (x_idx_0 = 0; x_idx_0 + 1 <= i62; x_idx_0++) {
      vwork->data[x_idx_0] = x->data[j + x_idx_0 * vstride];
    }

    st.site = &fe_emlrtRSI;
    sortIdx(&st, vwork, iidx);
    st.site = &ge_emlrtRSI;
    if (c_overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (x_idx_0 = 0; x_idx_0 + 1 <= i62; x_idx_0++) {
      x->data[j + x_idx_0 * vstride] = vwork->data[x_idx_0];
      idx->data[j + x_idx_0 * vstride] = iidx->data[x_idx_0];
    }

    j++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real32_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_sort(const emlrtStack *sp, real_T x[4])
{
  int32_T i;
  int32_T idx[4];
  int32_T nNaNs;
  real_T x4[4];
  int32_T ib;
  int32_T idx4[4];
  int32_T k;
  real_T xwork[4];
  int8_T perm[4];
  int32_T i2;
  int32_T i3;
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &aj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  for (i = 0; i < 4; i++) {
    idx[i] = 0;
  }

  b_st.site = &ie_emlrtRSI;
  c_st.site = &je_emlrtRSI;
  for (i = 0; i < 4; i++) {
    x4[i] = 0.0;
    idx4[i] = 0;
    xwork[i] = 0.0;
  }

  nNaNs = 0;
  ib = 0;
  for (k = 0; k < 4; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      idx[3 - nNaNs] = k + 1;
      xwork[3 - nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = k + 1;
      x4[ib - 1] = x[k];
      if (ib == 4) {
        i = k - nNaNs;
        if (x4[0] <= x4[1]) {
          ib = 1;
          i2 = 2;
        } else {
          ib = 2;
          i2 = 1;
        }

        if (x4[2] <= x4[3]) {
          i3 = 3;
          i4 = 4;
        } else {
          i3 = 4;
          i4 = 3;
        }

        if (x4[ib - 1] <= x4[i3 - 1]) {
          if (x4[i2 - 1] <= x4[i3 - 1]) {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)i2;
            perm[2] = (int8_T)i3;
            perm[3] = (int8_T)i4;
          } else if (x4[i2 - 1] <= x4[i4 - 1]) {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)i3;
            perm[2] = (int8_T)i2;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)i3;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)i2;
          }
        } else if (x4[ib - 1] <= x4[i4 - 1]) {
          if (x4[i2 - 1] <= x4[i4 - 1]) {
            perm[0] = (int8_T)i3;
            perm[1] = (int8_T)ib;
            perm[2] = (int8_T)i2;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)i3;
            perm[1] = (int8_T)ib;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)i2;
          }
        } else {
          perm[0] = (int8_T)i3;
          perm[1] = (int8_T)i4;
          perm[2] = (int8_T)ib;
          perm[3] = (int8_T)i2;
        }

        idx[i - 3] = idx4[perm[0] - 1];
        idx[i - 2] = idx4[perm[1] - 1];
        idx[i - 1] = idx4[perm[2] - 1];
        idx[i] = idx4[perm[3] - 1];
        x[i - 3] = x4[perm[0] - 1];
        x[i - 2] = x4[perm[1] - 1];
        x[i - 1] = x4[perm[2] - 1];
        x[i] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  if (ib > 0) {
    for (i = 0; i < 4; i++) {
      perm[i] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    d_st.site = &qe_emlrtRSI;
    if (ib > 2147483646) {
      e_st.site = &pb_emlrtRSI;
      f_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 4; k - 3 <= ib; k++) {
      idx[(k - nNaNs) - ib] = idx4[perm[k - 4] - 1];
      x[(k - nNaNs) - ib] = x4[perm[k - 4] - 1];
    }
  }

  i = nNaNs >> 1;
  d_st.site = &re_emlrtRSI;
  for (k = 1; k <= i; k++) {
    ib = idx[(k - nNaNs) + 3];
    idx[(k - nNaNs) + 3] = idx[4 - k];
    idx[4 - k] = ib;
    x[(k - nNaNs) + 3] = xwork[4 - k];
    x[4 - k] = xwork[(k - nNaNs) + 3];
  }

  if ((nNaNs & 1) != 0) {
    x[(i - nNaNs) + 4] = xwork[(i - nNaNs) + 4];
  }

  if (4 - nNaNs > 1) {
    c_st.site = &ne_emlrtRSI;
    for (i = 0; i < 4; i++) {
      idx4[i] = 0;
    }

    i3 = (4 - nNaNs) >> 2;
    i2 = 4;
    while (i3 > 1) {
      if ((i3 & 1) != 0) {
        i3--;
        i = i2 * i3;
        ib = 4 - (nNaNs + i);
        if (ib > i2) {
          d_st.site = &ve_emlrtRSI;
          b_merge(&d_st, idx, x, i, i2, ib - i2, idx4, xwork);
        }
      }

      i = i2 << 1;
      i3 >>= 1;
      d_st.site = &we_emlrtRSI;
      for (k = 1; k <= i3; k++) {
        d_st.site = &xe_emlrtRSI;
        b_merge(&d_st, idx, x, (k - 1) * i, i2, i2, idx4, xwork);
      }

      i2 = i;
    }

    if (4 - nNaNs > i2) {
      d_st.site = &ye_emlrtRSI;
      b_merge(&d_st, idx, x, 0, i2, 4 - (nNaNs + i2), idx4, xwork);
    }
  }
}

void sort(const emlrtStack *sp, emxArray_real32_T *x, emxArray_int32_T *idx)
{
  int32_T i61;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i61 = 2;
  if (x->size[0] != 1) {
    i61 = 1;
  }

  st.site = &yd_emlrtRSI;
  b_sort(&st, x, i61, idx);
}

/* End of code generation (sort1.c) */
