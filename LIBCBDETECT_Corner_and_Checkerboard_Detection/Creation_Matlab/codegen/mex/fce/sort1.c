/*
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "sort1.h"
#include "fce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sortIdx.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo bc_emlrtRSI = { 66, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo cc_emlrtRSI = { 70, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo dc_emlrtRSI = { 331, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo ec_emlrtRSI = { 339, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo fc_emlrtRSI = { 340, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo gc_emlrtRSI = { 348, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo hc_emlrtRSI = { 356, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo ic_emlrtRSI = { 361, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo jc_emlrtRSI = { 413, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo kc_emlrtRSI = { 441, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo lc_emlrtRSI = { 448, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo mc_emlrtRSI = { 608, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo nc_emlrtRSI = { 610, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo oc_emlrtRSI = { 638, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo vc_emlrtRSI = { 375, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo wc_emlrtRSI = { 384, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 1, 20, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 406, 9, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 408, 9, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 331, 14, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 331, 20, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

/* Function Definitions */
void b_sort(real_T x[2], int32_T idx[2])
{
  real_T b_x[2];
  int32_T i;
  boolean_T p;
  for (i = 0; i < 2; i++) {
    b_x[i] = x[i];
  }

  if ((x[0] <= x[1]) || muDoubleScalarIsNaN(x[1])) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
    idx[0] = 1;
    idx[1] = 2;
  } else {
    idx[0] = 2;
    idx[1] = 1;
    b_x[0] = x[1];
    b_x[1] = x[0];
  }

  for (i = 0; i < 2; i++) {
    x[i] = b_x[i];
  }
}

void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_real_T *b_x;
  int32_T ib;
  int32_T wOffset;
  int32_T m;
  int32_T n;
  real_T x4[4];
  int32_T idx4[4];
  emxArray_int32_T *iwork;
  emxArray_real_T *xwork;
  int32_T nNaNs;
  boolean_T overflow;
  int32_T k;
  int8_T perm[4];
  int32_T p;
  int32_T nNonNaN;
  int32_T i4;
  int32_T nBlocks;
  int32_T b_iwork[256];
  real_T b_xwork[256];
  int32_T b;
  int32_T bLen;
  int32_T bLen2;
  int32_T nPairs;
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
  emxInit_real_T1(sp, &b_x, 1, &k_emlrtRTEI, true);
  st.site = &bc_emlrtRSI;
  ib = x->size[0];
  b_st.site = &cc_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  wOffset = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_x, wOffset, (int32_T)sizeof
                    (real_T), &k_emlrtRTEI);
  m = x->size[0];
  for (wOffset = 0; wOffset < m; wOffset++) {
    b_x->data[wOffset] = x->data[wOffset];
  }

  wOffset = idx->size[0];
  idx->size[0] = ib;
  emxEnsureCapacity(&c_st, (emxArray__common *)idx, wOffset, (int32_T)sizeof
                    (int32_T), &k_emlrtRTEI);
  for (wOffset = 0; wOffset < ib; wOffset++) {
    idx->data[wOffset] = 0;
  }

  n = x->size[0];
  for (m = 0; m < 4; m++) {
    x4[m] = 0.0;
    idx4[m] = 0;
  }

  emxInit_int32_T(&c_st, &iwork, 1, &sb_emlrtRTEI, true);
  wOffset = iwork->size[0];
  iwork->size[0] = ib;
  emxEnsureCapacity(&c_st, (emxArray__common *)iwork, wOffset, (int32_T)sizeof
                    (int32_T), &qb_emlrtRTEI);
  m = iwork->size[0];
  wOffset = iwork->size[0];
  iwork->size[0] = m;
  emxEnsureCapacity(&c_st, (emxArray__common *)iwork, wOffset, (int32_T)sizeof
                    (int32_T), &k_emlrtRTEI);
  for (wOffset = 0; wOffset < m; wOffset++) {
    iwork->data[wOffset] = 0;
  }

  emxInit_real_T1(&c_st, &xwork, 1, &tb_emlrtRTEI, true);
  m = x->size[0];
  wOffset = xwork->size[0];
  xwork->size[0] = m;
  emxEnsureCapacity(&c_st, (emxArray__common *)xwork, wOffset, (int32_T)sizeof
                    (real_T), &rb_emlrtRTEI);
  m = xwork->size[0];
  wOffset = xwork->size[0];
  xwork->size[0] = m;
  emxEnsureCapacity(&c_st, (emxArray__common *)xwork, wOffset, (int32_T)sizeof
                    (real_T), &k_emlrtRTEI);
  for (wOffset = 0; wOffset < m; wOffset++) {
    xwork->data[wOffset] = 0.0;
  }

  nNaNs = 0;
  ib = 0;
  d_st.site = &jc_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    e_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k + 1 <= n; k++) {
    if (muDoubleScalarIsNaN(b_x->data[k])) {
      idx->data[(n - nNaNs) - 1] = k + 1;
      xwork->data[(n - nNaNs) - 1] = b_x->data[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = k + 1;
      x4[ib - 1] = b_x->data[k];
      if (ib == 4) {
        ib = k - nNaNs;
        if (x4[0] >= x4[1]) {
          m = 1;
          wOffset = 2;
        } else {
          m = 2;
          wOffset = 1;
        }

        if (x4[2] >= x4[3]) {
          p = 3;
          i4 = 4;
        } else {
          p = 4;
          i4 = 3;
        }

        if (x4[m - 1] >= x4[p - 1]) {
          if (x4[wOffset - 1] >= x4[p - 1]) {
            perm[0] = (int8_T)m;
            perm[1] = (int8_T)wOffset;
            perm[2] = (int8_T)p;
            perm[3] = (int8_T)i4;
          } else if (x4[wOffset - 1] >= x4[i4 - 1]) {
            perm[0] = (int8_T)m;
            perm[1] = (int8_T)p;
            perm[2] = (int8_T)wOffset;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)m;
            perm[1] = (int8_T)p;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)wOffset;
          }
        } else if (x4[m - 1] >= x4[i4 - 1]) {
          if (x4[wOffset - 1] >= x4[i4 - 1]) {
            perm[0] = (int8_T)p;
            perm[1] = (int8_T)m;
            perm[2] = (int8_T)wOffset;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)p;
            perm[1] = (int8_T)m;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)wOffset;
          }
        } else {
          perm[0] = (int8_T)p;
          perm[1] = (int8_T)i4;
          perm[2] = (int8_T)m;
          perm[3] = (int8_T)wOffset;
        }

        idx->data[ib - 3] = idx4[perm[0] - 1];
        idx->data[ib - 2] = idx4[perm[1] - 1];
        idx->data[ib - 1] = idx4[perm[2] - 1];
        idx->data[ib] = idx4[perm[3] - 1];
        b_x->data[ib - 3] = x4[perm[0] - 1];
        b_x->data[ib - 2] = x4[perm[1] - 1];
        b_x->data[ib - 1] = x4[perm[2] - 1];
        b_x->data[ib] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  wOffset = (x->size[0] - nNaNs) - 1;
  if (ib > 0) {
    for (m = 0; m < 4; m++) {
      perm[m] = 0;
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

    d_st.site = &kc_emlrtRSI;
    if (ib > 2147483646) {
      e_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 1; k <= ib; k++) {
      idx->data[(wOffset - ib) + k] = idx4[perm[k - 1] - 1];
      b_x->data[(wOffset - ib) + k] = x4[perm[k - 1] - 1];
    }
  }

  m = (nNaNs >> 1) + 1;
  d_st.site = &lc_emlrtRSI;
  for (k = 1; k < m; k++) {
    ib = idx->data[wOffset + k];
    idx->data[wOffset + k] = idx->data[n - k];
    idx->data[n - k] = ib;
    b_x->data[wOffset + k] = xwork->data[n - k];
    b_x->data[n - k] = xwork->data[wOffset + k];
  }

  if ((nNaNs & 1) != 0) {
    b_x->data[wOffset + m] = xwork->data[wOffset + m];
  }

  nNonNaN = x->size[0] - nNaNs;
  m = 2;
  if (nNonNaN > 1) {
    if (x->size[0] >= 256) {
      nBlocks = nNonNaN >> 8;
      if (nBlocks > 0) {
        c_st.site = &ec_emlrtRSI;
        for (i4 = 1; i4 <= nBlocks; i4++) {
          c_st.site = &fc_emlrtRSI;
          n = (i4 - 1) << 8;
          for (b = 0; b < 6; b++) {
            bLen = 1 << (b + 2);
            bLen2 = bLen << 1;
            nPairs = 256 >> (b + 3);
            d_st.site = &mc_emlrtRSI;
            for (k = 1; k <= nPairs; k++) {
              m = n + (k - 1) * bLen2;
              d_st.site = &nc_emlrtRSI;
              for (ib = 0; ib + 1 <= bLen2; ib++) {
                b_iwork[ib] = idx->data[m + ib];
                b_xwork[ib] = b_x->data[m + ib];
              }

              p = 0;
              wOffset = bLen;
              ib = m - 1;
              do {
                exitg1 = 0;
                ib++;
                if (b_xwork[p] >= b_xwork[wOffset]) {
                  idx->data[ib] = b_iwork[p];
                  b_x->data[ib] = b_xwork[p];
                  if (p + 1 < bLen) {
                    p++;
                  } else {
                    exitg1 = 1;
                  }
                } else {
                  idx->data[ib] = b_iwork[wOffset];
                  b_x->data[ib] = b_xwork[wOffset];
                  if (wOffset + 1 < bLen2) {
                    wOffset++;
                  } else {
                    ib = (ib - p) + 1;
                    d_st.site = &oc_emlrtRSI;
                    while (p + 1 <= bLen) {
                      idx->data[ib + p] = b_iwork[p];
                      b_x->data[ib + p] = b_xwork[p];
                      p++;
                    }

                    exitg1 = 1;
                  }
                }
              } while (exitg1 == 0);
            }
          }
        }

        m = nBlocks << 8;
        ib = nNonNaN - m;
        if (ib > 0) {
          c_st.site = &gc_emlrtRSI;
          merge_block(&c_st, idx, b_x, m, ib, 2, iwork, xwork);
        }

        m = 8;
      }
    }

    c_st.site = &hc_emlrtRSI;
    merge_block(&c_st, idx, b_x, 0, nNonNaN, m, iwork, xwork);
  }

  if ((nNaNs > 0) && (nNonNaN > 0)) {
    c_st.site = &ic_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    if (nNaNs > 2147483646) {
      e_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 0; k + 1 <= nNaNs; k++) {
      xwork->data[k] = b_x->data[nNonNaN + k];
      iwork->data[k] = idx->data[nNonNaN + k];
    }

    for (k = nNonNaN - 1; k + 1 > 0; k--) {
      b_x->data[nNaNs + k] = b_x->data[k];
      idx->data[nNaNs + k] = idx->data[k];
    }

    d_st.site = &wc_emlrtRSI;
    for (k = 0; k + 1 <= nNaNs; k++) {
      b_x->data[k] = xwork->data[k];
      idx->data[k] = iwork->data[k];
    }
  }

  emxFree_real_T(&xwork);
  emxFree_int32_T(&iwork);
  wOffset = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)x, wOffset, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  m = b_x->size[0];
  for (wOffset = 0; wOffset < m; wOffset++) {
    x->data[wOffset] = b_x->data[wOffset];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sort1.c) */
