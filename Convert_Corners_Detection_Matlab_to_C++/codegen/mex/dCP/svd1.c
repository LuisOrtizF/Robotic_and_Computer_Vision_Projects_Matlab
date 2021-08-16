/*
 * svd1.c
 *
 * Code generation for function 'svd1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "svd1.h"
#include "error.h"
#include "xgesvd.h"
#include "dCP_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo rk_emlrtRSI = { 51, /* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 73, /* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 81, /* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 103,/* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 205,/* lineNo */
  "xgesdd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesdd.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 175,/* lineNo */
  "xgesdd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesdd.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 64, /* lineNo */
  "xgesdd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesdd.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 57, /* lineNo */
  "xgesdd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesdd.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 54, /* lineNo */
  "xgesdd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesdd.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 7,  /* lineNo */
  "int",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 8,  /* lineNo */
  "majority",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 28, /* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

/* Function Definitions */
void b_svd(const emlrtStack *sp, real_T U[841], real_T s[29], real_T V[841])
{
  real_T A[841];
  ptrdiff_t info_t;
  real_T Vt[841];
  int32_T info;
  int32_T i45;
  int32_T i46;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &sk_emlrtRSI;
  memcpy(&A[0], &dv0[0], 841U * sizeof(real_T));
  c_st.site = &al_emlrtRSI;
  c_st.site = &yk_emlrtRSI;
  d_st.site = &bl_emlrtRSI;
  c_st.site = &xk_emlrtRSI;
  d_st.site = &bl_emlrtRSI;
  c_st.site = &wk_emlrtRSI;
  d_st.site = &cl_emlrtRSI;
  info_t = LAPACKE_dgesdd(102, 'A', (ptrdiff_t)29, (ptrdiff_t)29, &A[0],
    (ptrdiff_t)29, &s[0], &U[0], (ptrdiff_t)29, &Vt[0], (ptrdiff_t)29);
  info = (int32_T)info_t;
  c_st.site = &vk_emlrtRSI;
  d_st.site = &dl_emlrtRSI;
  if (info < 0) {
    if (info == -1010) {
      d_st.site = &el_emlrtRSI;
      e_st.site = &el_emlrtRSI;
      d_error(&e_st);
    } else {
      d_st.site = &fl_emlrtRSI;
      e_st.site = &fl_emlrtRSI;
      e_error(&e_st, info);
    }
  }

  if (info > 0) {
    b_st.site = &tk_emlrtRSI;
    memcpy(&A[0], &dv0[0], 841U * sizeof(real_T));
    c_st.site = &gl_emlrtRSI;
    ceval_xgesvd(&c_st, A, U, s, V, &info);
  } else {
    for (i45 = 0; i45 < 29; i45++) {
      for (i46 = 0; i46 < 29; i46++) {
        V[i46 + 29 * i45] = Vt[i45 + 29 * i46];
      }
    }
  }

  if (info > 0) {
    b_st.site = &uk_emlrtRSI;
    c_st.site = &uk_emlrtRSI;
    g_error(&c_st);
  }
}

/* End of code generation (svd1.c) */
