/*
 * cat.c
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "cat.h"
#include "dCP_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo ri_emlrtRSI = { 54, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/cat.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 63, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/cat.m"/* pathName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/cat.m"/* pName */
};

static emlrtRTEInfo ym_emlrtRTEI = { 56,/* lineNo */
  23,                                  /* colNo */
  "cat",                               /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/cat.m"/* pName */
};

/* Function Definitions */
void cat(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
         emxArray_real_T *varargin_2, emxArray_real_T *y)
{
  uint32_T ysize_idx_0;
  uint32_T ysize_idx_1;
  int32_T j;
  int32_T exitg1;
  boolean_T overflow;
  int32_T iy;
  int32_T b;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  ysize_idx_0 = (uint32_T)varargin_1->size[0];
  ysize_idx_1 = (uint32_T)varargin_1->size[1];
  j = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = (int32_T)ysize_idx_0;
  y->size[1] = (int32_T)ysize_idx_1;
  y->size[2] = 2;
  emxEnsureCapacity_real_T1(sp, y, j, &bk_emlrtRTEI);
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    st.site = &ri_emlrtRSI;
    b_st.site = &ri_emlrtRSI;
    c_error(&b_st);
  }

  j = 0;
  do {
    exitg1 = 0;
    if (j < 2) {
      if (y->size[j] != varargin_1->size[j]) {
        overflow = false;
        exitg1 = 1;
      } else {
        j++;
      }
    } else {
      overflow = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(sp, &ym_emlrtRTEI,
      "Coder:MATLAB:catenate_dimensionMismatch", 0);
  }

  if ((varargin_2->size[0] == 0) || (varargin_2->size[1] == 0)) {
    st.site = &ri_emlrtRSI;
    b_st.site = &ri_emlrtRSI;
    c_error(&b_st);
  }

  j = 0;
  do {
    exitg1 = 0;
    if (j < 2) {
      if (y->size[j] != varargin_2->size[j]) {
        overflow = false;
        exitg1 = 1;
      } else {
        j++;
      }
    } else {
      overflow = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(sp, &ym_emlrtRTEI,
      "Coder:MATLAB:catenate_dimensionMismatch", 0);
  }

  iy = -1;
  b = varargin_1->size[0] * varargin_1->size[1];
  st.site = &si_emlrtRSI;
  overflow = ((!(1 > b)) && (b > 2147483646));
  if (overflow) {
    b_st.site = &pb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (j = 1; j <= b; j++) {
    iy++;
    y->data[iy] = varargin_1->data[j - 1];
  }

  b = varargin_2->size[0] * varargin_2->size[1];
  st.site = &si_emlrtRSI;
  overflow = ((!(1 > b)) && (b > 2147483646));
  if (overflow) {
    b_st.site = &pb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (j = 1; j <= b; j++) {
    iy++;
    y->data[iy] = varargin_2->data[j - 1];
  }
}

/* End of code generation (cat.c) */
