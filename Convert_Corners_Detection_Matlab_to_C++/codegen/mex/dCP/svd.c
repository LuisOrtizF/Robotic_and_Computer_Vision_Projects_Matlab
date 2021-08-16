/*
 * svd.c
 *
 * Code generation for function 'svd'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "svd.h"
#include "svd1.h"
#include "dCP_data.h"

/* Function Definitions */
void svd(const emlrtStack *sp, real_T U[841], real_T S[841], real_T V[841])
{
  real_T s[29];
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qk_emlrtRSI;
  b_svd(&st, U, s, V);
  memset(&S[0], 0, 841U * sizeof(real_T));
  for (k = 0; k < 29; k++) {
    S[k + 29 * k] = s[k];
  }
}

/* End of code generation (svd.c) */
