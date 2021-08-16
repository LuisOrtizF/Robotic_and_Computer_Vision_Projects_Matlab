/*
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "bsxfun.h"
#include "dCP_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo me_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "bsxfun",                            /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/bsxfun.m"/* pName */
};

/* Function Definitions */
void bsxfun(const emlrtStack *sp, const emxArray_real32_T *a, const real32_T b[2],
            emxArray_real32_T *c)
{
  int32_T csz_idx_0;
  int32_T k;
  int32_T szc;
  int32_T b_k;
  csz_idx_0 = a->size[0];
  k = c->size[0] * c->size[1];
  c->size[0] = csz_idx_0;
  c->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, c, k, &me_emlrtRTEI);
  if (c->size[0] != 0) {
    csz_idx_0 = (a->size[0] != 1);
    for (k = 0; k < 2; k++) {
      szc = c->size[0];
      for (b_k = 0; b_k < szc; b_k++) {
        c->data[b_k + c->size[0] * k] = a->data[csz_idx_0 * b_k + a->size[0] * k]
          - b[k];
      }
    }
  }
}

/* End of code generation (bsxfun.c) */
