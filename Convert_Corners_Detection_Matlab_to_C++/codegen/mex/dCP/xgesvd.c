/*
 * xgesvd.c
 *
 * Code generation for function 'xgesvd'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "xgesvd.h"
#include "majority.h"
#include "infocheck.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo hl_emlrtRSI = { 193,/* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

/* Function Definitions */
void ceval_xgesvd(const emlrtStack *sp, real_T A[841], real_T U[841], real_T S
                  [29], real_T V[841], int32_T *info)
{
  ptrdiff_t info_t;
  real_T Vt[841];
  real_T superb[28];
  int32_T i47;
  int32_T i48;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  majority();
  info_t = LAPACKE_dgesvd(102, 'A', 'A', (ptrdiff_t)29, (ptrdiff_t)29, &A[0],
    (ptrdiff_t)29, &S[0], &U[0], (ptrdiff_t)29, &Vt[0], (ptrdiff_t)29, &superb[0]);
  *info = (int32_T)info_t;
  for (i47 = 0; i47 < 29; i47++) {
    for (i48 = 0; i48 < 29; i48++) {
      V[i48 + 29 * i47] = Vt[i47 + 29 * i48];
    }
  }

  st.site = &hl_emlrtRSI;
  infocheck(&st, *info);
}

/* End of code generation (xgesvd.c) */
