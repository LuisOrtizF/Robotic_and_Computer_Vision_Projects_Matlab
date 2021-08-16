/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "mldivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "warning.h"
#include "dCP_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo pj_emlrtRSI = { 1,  /* lineNo */
  "mldivide",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/mldivide.p"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 42, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 102,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 100,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 143,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 145,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+blas/xgeru.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+refblas/xger.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 41, /* lineNo */
  "xgerx",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 76, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 76, /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 77, /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

/* Function Definitions */
void mldivide(const emlrtStack *sp, const real_T A[36], real_T B[150])
{
  real_T b_A[36];
  int32_T jA;
  int32_T info;
  int8_T ipiv[6];
  int32_T j;
  int32_T c;
  int32_T iy;
  int32_T ix;
  real_T smax;
  int32_T k;
  real_T s;
  int32_T b;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  boolean_T overflow;
  int32_T ijA;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pj_emlrtRSI;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &sj_emlrtRSI;
  memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
  d_st.site = &vj_emlrtRSI;
  for (jA = 0; jA < 6; jA++) {
    ipiv[jA] = (int8_T)(1 + jA);
  }

  info = 0;
  for (j = 0; j < 5; j++) {
    c = j * 7;
    iy = 0;
    ix = c;
    smax = muDoubleScalarAbs(b_A[c]);
    for (k = 2; k <= 6 - j; k++) {
      ix++;
      s = muDoubleScalarAbs(b_A[ix]);
      if (s > smax) {
        iy = k - 1;
        smax = s;
      }
    }

    if (b_A[c + iy] != 0.0) {
      if (iy != 0) {
        ipiv[j] = (int8_T)((j + iy) + 1);
        ix = j;
        iy += j;
        for (k = 0; k < 6; k++) {
          smax = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = smax;
          ix += 6;
          iy += 6;
        }
      }

      b = (c - j) + 6;
      e_st.site = &wj_emlrtRSI;
      for (jA = c + 1; jA + 1 <= b; jA++) {
        b_A[jA] /= b_A[c];
      }
    } else {
      info = j + 1;
    }

    e_st.site = &xj_emlrtRSI;
    f_st.site = &yj_emlrtRSI;
    g_st.site = &ak_emlrtRSI;
    h_st.site = &bk_emlrtRSI;
    jA = c;
    iy = c + 6;
    i_st.site = &dk_emlrtRSI;
    for (k = 1; k <= 5 - j; k++) {
      smax = b_A[iy];
      if (b_A[iy] != 0.0) {
        ix = c + 1;
        b = (jA - j) + 12;
        i_st.site = &ck_emlrtRSI;
        overflow = ((!(jA + 8 > b)) && (b > 2147483646));
        if (overflow) {
          j_st.site = &pb_emlrtRSI;
          k_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (ijA = jA + 7; ijA + 1 <= b; ijA++) {
          b_A[ijA] += b_A[ix] * -smax;
          ix++;
        }
      }

      iy += 6;
      jA += 6;
    }
  }

  if ((info == 0) && (!(b_A[35] != 0.0))) {
    info = 6;
  }

  if (info > 0) {
    c_st.site = &rj_emlrtRSI;
    d_st.site = &ek_emlrtRSI;
    warning(&d_st);
  }

  for (jA = 0; jA < 5; jA++) {
    if (ipiv[jA] != jA + 1) {
      iy = ipiv[jA] - 1;
      for (k = 0; k < 25; k++) {
        smax = B[jA + 6 * k];
        B[jA + 6 * k] = B[iy + 6 * k];
        B[iy + 6 * k] = smax;
      }
    }
  }

  c_st.site = &tj_emlrtRSI;
  d_st.site = &fk_emlrtRSI;
  d_st.site = &gk_emlrtRSI;
  smax = 1.0;
  DIAGA = 'U';
  TRANSA = 'N';
  UPLO = 'L';
  SIDE = 'L';
  m_t = (ptrdiff_t)6;
  n_t = (ptrdiff_t)25;
  lda_t = (ptrdiff_t)6;
  ldb_t = (ptrdiff_t)6;
  dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &smax, &b_A[0], &lda_t, &B[0],
        &ldb_t);
  c_st.site = &uj_emlrtRSI;
  d_st.site = &fk_emlrtRSI;
  d_st.site = &gk_emlrtRSI;
  smax = 1.0;
  DIAGA = 'N';
  TRANSA = 'N';
  UPLO = 'U';
  SIDE = 'L';
  m_t = (ptrdiff_t)6;
  n_t = (ptrdiff_t)25;
  lda_t = (ptrdiff_t)6;
  ldb_t = (ptrdiff_t)6;
  dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &smax, &b_A[0], &lda_t, &B[0],
        &ldb_t);
}

/* End of code generation (mldivide.c) */
