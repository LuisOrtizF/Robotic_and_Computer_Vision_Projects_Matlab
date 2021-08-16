/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "power.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo cc_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 189,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 35,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real32_T *a, emxArray_real32_T
           *y)
{
  emxArray_real32_T *z;
  int32_T nx;
  emxArray_real32_T *ztemp;
  uint32_T uv1[2];
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T(sp, &z, 2, &qb_emlrtRTEI, true);
  st.site = &cc_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  for (nx = 0; nx < 2; nx++) {
    uv1[nx] = (uint32_T)a->size[nx];
  }

  emxInit_real32_T(&c_st, &ztemp, 2, &sb_emlrtRTEI, true);
  nx = ztemp->size[0] * ztemp->size[1];
  ztemp->size[0] = (int32_T)uv1[0];
  ztemp->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity_real32_T(&c_st, ztemp, nx, &pb_emlrtRTEI);
  nx = z->size[0] * z->size[1];
  z->size[0] = (int32_T)uv1[0];
  z->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity_real32_T(&c_st, z, nx, &qb_emlrtRTEI);
  if (!dimagree(z, a)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &pm_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  emxFree_real32_T(&z);
  nx = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity_real32_T(&b_st, y, nx, &rb_emlrtRTEI);
  c_st.site = &fc_emlrtRSI;
  nx = ztemp->size[0] * ztemp->size[1];
  d_st.site = &gc_emlrtRSI;
  emxFree_real32_T(&ztemp);
  overflow = ((!(1 > nx)) && (nx > 2147483646));
  if (overflow) {
    e_st.site = &pb_emlrtRSI;
    f_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (k = 0; k + 1 <= nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (power.c) */
