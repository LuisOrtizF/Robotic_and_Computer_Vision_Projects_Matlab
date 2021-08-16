/*
 * bwlookup.c
 *
 * Code generation for function 'bwlookup'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "bwlookup.h"
#include "dCP_emxutil.h"
#include "libmwbwlookup_tbb.h"

/* Variable Definitions */
static emlrtRTEInfo kc_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "bwlookup",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/bwlookup.m"/* pName */
};

/* Function Definitions */
void bwlookup(const emlrtStack *sp, const emxArray_boolean_T *bwin,
              emxArray_boolean_T *B)
{
  int32_T i6;
  uint32_T uv2[2];
  real_T b_bwin[2];
  static const boolean_T lut[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, false, true, true, true, true, true, true, false,
    false, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false, true,
    true, true, false, true, true, false, false, true, true, false, false, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, false, false,
    false, false, false, true, true, true, true, false, false, true, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, false, false, false, false, false, false, false,
    true, true, true, true, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, false, true, true, true, false, true, true, true, true, false,
    false, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    false, false, false, false, false, false, false, true, true, true, true,
    false, false, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, false,
    true, true, true, false, true, true, true, true, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, true, true, true,
    false, true, true, false, false, true, true, false, false, true, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, false, false, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, false, false, false, false, false, true,
    true, true, true, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, false, true, true, true, false, true, true, true, true, false,
    false, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    false, false, false, false, false, false, false, true, true, true, true,
    false, false, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, false,
    true, true, true, false, true, true, true, true, false, false, true, true,
    false, false };

  for (i6 = 0; i6 < 2; i6++) {
    uv2[i6] = (uint32_T)bwin->size[i6];
  }

  i6 = B->size[0] * B->size[1];
  B->size[0] = (int32_T)uv2[0];
  B->size[1] = (int32_T)uv2[1];
  emxEnsureCapacity_boolean_T(sp, B, i6, &kc_emlrtRTEI);
  if (!((bwin->size[0] == 0) || (bwin->size[1] == 0))) {
    for (i6 = 0; i6 < 2; i6++) {
      b_bwin[i6] = bwin->size[i6];
    }

    bwlookup_tbb_boolean(&bwin->data[0], b_bwin, 2.0, lut, 512.0, &B->data[0]);
  }
}

/* End of code generation (bwlookup.c) */
