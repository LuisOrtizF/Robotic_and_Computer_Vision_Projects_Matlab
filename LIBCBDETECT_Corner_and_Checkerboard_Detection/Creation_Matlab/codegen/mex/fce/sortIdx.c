/*
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo pc_emlrtRSI = { 520, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo rc_emlrtRSI = { 528, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo sc_emlrtRSI = { 535, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo tc_emlrtRSI = { 582, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo uc_emlrtRSI = { 551, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

/* Function Declarations */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real_T
                  *x, int32_T offset, int32_T np, int32_T nq, emxArray_int32_T
                  *iwork, emxArray_real_T *xwork);

/* Function Definitions */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real_T
                  *x, int32_T offset, int32_T np, int32_T nq, emxArray_int32_T
                  *iwork, emxArray_real_T *xwork)
{
  int32_T n;
  int32_T qend;
  int32_T p;
  int32_T iout;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq == 0) {
  } else {
    n = np + nq;
    st.site = &uc_emlrtRSI;
    if ((!(1 > n)) && (n > 2147483646)) {
      b_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (qend = 0; qend + 1 <= n; qend++) {
      iwork->data[qend] = idx->data[offset + qend];
      xwork->data[qend] = x->data[offset + qend];
    }

    p = 0;
    n = np;
    qend = np + nq;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork->data[p] >= xwork->data[n]) {
        idx->data[iout] = iwork->data[p];
        x->data[iout] = xwork->data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx->data[iout] = iwork->data[n];
        x->data[iout] = xwork->data[n];
        if (n + 1 < qend) {
          n++;
        } else {
          n = (iout - p) + 1;
          st.site = &tc_emlrtRSI;
          if ((!(p + 1 > np)) && (np > 2147483646)) {
            b_st.site = &eb_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          while (p + 1 <= np) {
            idx->data[n + p] = iwork->data[p];
            x->data[n + p] = xwork->data[p];
            p++;
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

void merge_block(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real_T *x,
                 int32_T offset, int32_T n, int32_T preSortLevel,
                 emxArray_int32_T *iwork, emxArray_real_T *xwork)
{
  int32_T nPairs;
  int32_T bLen;
  int32_T tailOffset;
  int32_T nTail;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &pc_emlrtRSI;
        merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }

    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 1; nTail <= nPairs; nTail++) {
      st.site = &rc_emlrtRSI;
      merge(&st, idx, x, offset + (nTail - 1) * tailOffset, bLen, bLen, iwork,
            xwork);
    }

    bLen = tailOffset;
  }

  if (n > bLen) {
    st.site = &sc_emlrtRSI;
    merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

/* End of code generation (sortIdx.c) */
