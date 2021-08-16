/*
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "dCP_emxutil.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo ke_emlrtRSI = { 255,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 256,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 264,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 277,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 329,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 524,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 526,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 554,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 498,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 467,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 291,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 300,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRTEInfo hl_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pName */
};

static emlrtRTEInfo il_emlrtRTEI = { 323,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pName */
};

static emlrtRTEInfo jl_emlrtRTEI = { 325,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pName */
};

static emlrtRTEInfo kl_emlrtRTEI = { 247,/* lineNo */
  14,                                  /* colNo */
  "sortIdx",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pName */
};

static emlrtRTEInfo ll_emlrtRTEI = { 247,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pName */
};

/* Function Declarations */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real32_T
                  *x, int32_T offset, int32_T np, int32_T nq, emxArray_int32_T
                  *iwork, emxArray_real32_T *xwork);
static void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
  emxArray_real32_T *x, int32_T offset, int32_T n, int32_T preSortLevel,
  emxArray_int32_T *iwork, emxArray_real32_T *xwork);

/* Function Definitions */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real32_T
                  *x, int32_T offset, int32_T np, int32_T nq, emxArray_int32_T
                  *iwork, emxArray_real32_T *xwork)
{
  int32_T n;
  boolean_T overflow;
  int32_T qend;
  int32_T p;
  int32_T iout;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (nq != 0) {
    n = np + nq;
    st.site = &bf_emlrtRSI;
    overflow = ((!(1 > n)) && (n > 2147483646));
    if (overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
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
          st.site = &af_emlrtRSI;
          overflow = ((!(p + 1 > np)) && (np > 2147483646));
          if (overflow) {
            b_st.site = &pb_emlrtRSI;
            c_st.site = &pb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
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

static void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
  emxArray_real32_T *x, int32_T offset, int32_T n, int32_T preSortLevel,
  emxArray_int32_T *iwork, emxArray_real32_T *xwork)
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
        st.site = &ve_emlrtRSI;
        merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }

    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 1; nTail <= nPairs; nTail++) {
      st.site = &xe_emlrtRSI;
      merge(&st, idx, x, offset + (nTail - 1) * tailOffset, bLen, bLen, iwork,
            xwork);
    }

    bLen = tailOffset;
  }

  if (n > bLen) {
    st.site = &ye_emlrtRSI;
    merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void b_merge(const emlrtStack *sp, int32_T idx[4], real_T x[4], int32_T offset,
             int32_T np, int32_T nq, int32_T iwork[4], real_T xwork[4])
{
  int32_T n;
  boolean_T overflow;
  int32_T qend;
  int32_T p;
  int32_T iout;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (nq != 0) {
    n = np + nq;
    st.site = &bf_emlrtRSI;
    overflow = ((!(1 > n)) && (n > 2147483646));
    if (overflow) {
      b_st.site = &pb_emlrtRSI;
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (qend = 0; qend + 1 <= n; qend++) {
      iwork[qend] = idx[offset + qend];
      xwork[qend] = x[offset + qend];
    }

    p = 0;
    n = np;
    qend = np + nq;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[n]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[n];
        x[iout] = xwork[n];
        if (n + 1 < qend) {
          n++;
        } else {
          n = (iout - p) + 1;
          st.site = &af_emlrtRSI;
          overflow = ((!(p + 1 > np)) && (np > 2147483646));
          if (overflow) {
            b_st.site = &pb_emlrtRSI;
            c_st.site = &pb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          while (p + 1 <= np) {
            idx[n + p] = iwork[p];
            x[n + p] = xwork[p];
            p++;
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

void sortIdx(const emlrtStack *sp, emxArray_real32_T *x, emxArray_int32_T *idx)
{
  int32_T ib;
  int32_T i;
  int32_T n;
  int32_T b_n;
  emxArray_int32_T *iwork;
  real32_T x4[4];
  int32_T idx4[4];
  emxArray_real32_T *xwork;
  int32_T nNaNs;
  boolean_T overflow;
  int32_T k;
  int32_T wOffset;
  int8_T perm[4];
  int32_T p;
  int32_T nNonNaN;
  int32_T i4;
  int32_T nBlocks;
  int32_T bLen;
  int32_T bLen2;
  int32_T nPairs;
  int32_T b_iwork[256];
  real32_T b_xwork[256];
  int32_T exitg1;
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
  ib = x->size[0];
  i = idx->size[0];
  idx->size[0] = ib;
  emxEnsureCapacity_int32_T(sp, idx, i, &hl_emlrtRTEI);
  for (i = 0; i < ib; i++) {
    idx->data[i] = 0;
  }

  st.site = &ie_emlrtRSI;
  n = x->size[0];
  b_st.site = &je_emlrtRSI;
  b_n = x->size[0];
  for (i = 0; i < 4; i++) {
    x4[i] = 0.0F;
    idx4[i] = 0;
  }

  emxInit_int32_T(&b_st, &iwork, 1, &kl_emlrtRTEI, true);
  i = iwork->size[0];
  iwork->size[0] = ib;
  emxEnsureCapacity_int32_T(&b_st, iwork, i, &il_emlrtRTEI);
  for (i = 0; i < ib; i++) {
    iwork->data[i] = 0;
  }

  emxInit_real32_T1(&b_st, &xwork, 1, &ll_emlrtRTEI, true);
  ib = x->size[0];
  i = xwork->size[0];
  xwork->size[0] = ib;
  emxEnsureCapacity_real32_T1(&b_st, xwork, i, &jl_emlrtRTEI);
  for (i = 0; i < ib; i++) {
    xwork->data[i] = 0.0F;
  }

  nNaNs = 0;
  ib = 0;
  c_st.site = &pe_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &pb_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k + 1 <= b_n; k++) {
    if (muSingleScalarIsNaN(x->data[k])) {
      idx->data[(b_n - nNaNs) - 1] = k + 1;
      xwork->data[(b_n - nNaNs) - 1] = x->data[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = k + 1;
      x4[ib - 1] = x->data[k];
      if (ib == 4) {
        i = k - nNaNs;
        if (x4[0] >= x4[1]) {
          ib = 1;
          wOffset = 2;
        } else {
          ib = 2;
          wOffset = 1;
        }

        if (x4[2] >= x4[3]) {
          p = 3;
          i4 = 4;
        } else {
          p = 4;
          i4 = 3;
        }

        if (x4[ib - 1] >= x4[p - 1]) {
          if (x4[wOffset - 1] >= x4[p - 1]) {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)wOffset;
            perm[2] = (int8_T)p;
            perm[3] = (int8_T)i4;
          } else if (x4[wOffset - 1] >= x4[i4 - 1]) {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)p;
            perm[2] = (int8_T)wOffset;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)p;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)wOffset;
          }
        } else if (x4[ib - 1] >= x4[i4 - 1]) {
          if (x4[wOffset - 1] >= x4[i4 - 1]) {
            perm[0] = (int8_T)p;
            perm[1] = (int8_T)ib;
            perm[2] = (int8_T)wOffset;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)p;
            perm[1] = (int8_T)ib;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)wOffset;
          }
        } else {
          perm[0] = (int8_T)p;
          perm[1] = (int8_T)i4;
          perm[2] = (int8_T)ib;
          perm[3] = (int8_T)wOffset;
        }

        idx->data[i - 3] = idx4[perm[0] - 1];
        idx->data[i - 2] = idx4[perm[1] - 1];
        idx->data[i - 1] = idx4[perm[2] - 1];
        idx->data[i] = idx4[perm[3] - 1];
        x->data[i - 3] = x4[perm[0] - 1];
        x->data[i - 2] = x4[perm[1] - 1];
        x->data[i - 1] = x4[perm[2] - 1];
        x->data[i] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  wOffset = (b_n - nNaNs) - 1;
  if (ib > 0) {
    for (i = 0; i < 4; i++) {
      perm[i] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] >= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] >= x4[1]) {
      if (x4[1] >= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] >= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] >= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] >= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    c_st.site = &qe_emlrtRSI;
    if (ib > 2147483646) {
      d_st.site = &pb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 1; k <= ib; k++) {
      idx->data[(wOffset - ib) + k] = idx4[perm[k - 1] - 1];
      x->data[(wOffset - ib) + k] = x4[perm[k - 1] - 1];
    }
  }

  i = (nNaNs >> 1) + 1;
  c_st.site = &re_emlrtRSI;
  for (k = 1; k < i; k++) {
    ib = idx->data[wOffset + k];
    idx->data[wOffset + k] = idx->data[b_n - k];
    idx->data[b_n - k] = ib;
    x->data[wOffset + k] = xwork->data[b_n - k];
    x->data[b_n - k] = xwork->data[wOffset + k];
  }

  if ((nNaNs & 1) != 0) {
    x->data[wOffset + i] = xwork->data[wOffset + i];
  }

  nNonNaN = n - nNaNs;
  ib = 2;
  if (nNonNaN > 1) {
    if (n >= 256) {
      nBlocks = nNonNaN >> 8;
      if (nBlocks > 0) {
        b_st.site = &ke_emlrtRSI;
        for (i4 = 1; i4 <= nBlocks; i4++) {
          b_st.site = &le_emlrtRSI;
          b_n = (i4 - 1) << 8;
          for (n = 0; n < 6; n++) {
            bLen = 1 << (n + 2);
            bLen2 = bLen << 1;
            nPairs = 256 >> (n + 3);
            c_st.site = &se_emlrtRSI;
            for (k = 1; k <= nPairs; k++) {
              ib = b_n + (k - 1) * bLen2;
              c_st.site = &te_emlrtRSI;
              for (i = 0; i + 1 <= bLen2; i++) {
                b_iwork[i] = idx->data[ib + i];
                b_xwork[i] = x->data[ib + i];
              }

              p = 0;
              wOffset = bLen;
              i = ib - 1;
              do {
                exitg1 = 0;
                i++;
                if (b_xwork[p] >= b_xwork[wOffset]) {
                  idx->data[i] = b_iwork[p];
                  x->data[i] = b_xwork[p];
                  if (p + 1 < bLen) {
                    p++;
                  } else {
                    exitg1 = 1;
                  }
                } else {
                  idx->data[i] = b_iwork[wOffset];
                  x->data[i] = b_xwork[wOffset];
                  if (wOffset + 1 < bLen2) {
                    wOffset++;
                  } else {
                    i = (i - p) + 1;
                    c_st.site = &ue_emlrtRSI;
                    while (p + 1 <= bLen) {
                      idx->data[i + p] = b_iwork[p];
                      x->data[i + p] = b_xwork[p];
                      p++;
                    }

                    exitg1 = 1;
                  }
                }
              } while (exitg1 == 0);
            }
          }
        }

        ib = nBlocks << 8;
        i = nNonNaN - ib;
        if (i > 0) {
          b_st.site = &me_emlrtRSI;
          merge_block(&b_st, idx, x, ib, i, 2, iwork, xwork);
        }

        ib = 8;
      }
    }

    b_st.site = &ne_emlrtRSI;
    merge_block(&b_st, idx, x, 0, nNonNaN, ib, iwork, xwork);
  }

  if ((nNaNs > 0) && (nNonNaN > 0)) {
    b_st.site = &oe_emlrtRSI;
    c_st.site = &cf_emlrtRSI;
    if (nNaNs > 2147483646) {
      d_st.site = &pb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 0; k + 1 <= nNaNs; k++) {
      xwork->data[k] = x->data[nNonNaN + k];
      iwork->data[k] = idx->data[nNonNaN + k];
    }

    for (k = nNonNaN - 1; k + 1 > 0; k--) {
      x->data[nNaNs + k] = x->data[k];
      idx->data[nNaNs + k] = idx->data[k];
    }

    c_st.site = &df_emlrtRSI;
    for (k = 0; k + 1 <= nNaNs; k++) {
      x->data[k] = xwork->data[k];
      idx->data[k] = iwork->data[k];
    }
  }

  emxFree_real32_T(&xwork);
  emxFree_int32_T(&iwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sortIdx.c) */
