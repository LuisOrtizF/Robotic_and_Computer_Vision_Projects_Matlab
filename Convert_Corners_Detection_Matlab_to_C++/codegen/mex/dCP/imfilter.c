/*
 * imfilter.c
 *
 * Code generation for function 'imfilter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "imfilter.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "svd1.h"
#include "sum.h"
#include "diag.h"
#include "svd.h"
#include "dCP_data.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"

/* Variable Definitions */
static emlrtRSInfo ib_emlrtRSI = { 771,/* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 20, /* lineNo */
  "padarray",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 67, /* lineNo */
  "padarray",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 72, /* lineNo */
  "padarray",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 18, /* lineNo */
  "repmat",                            /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 385,/* lineNo */
  "padarray",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 400,/* lineNo */
  "padarray",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 53, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 57, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 62, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 65, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 66, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 82, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 86, /* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 601,/* lineNo */
  "imfilter",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 72,/* lineNo */
  9,                                   /* colNo */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 771,/* lineNo */
  5,                                   /* colNo */
  "imfilter",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo cm_emlrtRTEI = { 73,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo dm_emlrtRTEI = { 901,/* lineNo */
  28,                                  /* colNo */
  "imfilter",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo em_emlrtRTEI = { 94,/* lineNo */
  17,                                  /* colNo */
  "imfilter",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo fm_emlrtRTEI = { 1,/* lineNo */
  10,                                  /* colNo */
  "imfilter",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo km_emlrtRTEI = { 130,/* lineNo */
  28,                                  /* colNo */
  "validateattributes",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pName */
};

static emlrtRTEInfo lm_emlrtRTEI = { 44,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo mm_emlrtRTEI = { 59,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 233,   /* lineNo */
  35,                                  /* colNo */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  100,                                 /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  401,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  380,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void b_imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1)
{
  real_T finalSize[2];
  real_T pad[2];
  emxArray_real32_T *a;
  boolean_T tooBig;
  int32_T i;
  real_T padSize[2];
  real_T nonZeroKernel[2];
  real_T kernel[3];
  static const boolean_T conn[3] = { true, false, true };

  real_T connDims[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  finalSize[0] = varargin_1->size[0];
  pad[0] = 0.0;
  finalSize[1] = varargin_1->size[1];
  pad[1] = 1.0;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
    emxInit_real32_T(sp, &a, 2, &lb_emlrtRTEI, true);
    st.site = &gb_emlrtRSI;
    padImage(&st, varargin_1, pad, a);
    st.site = &hb_emlrtRSI;
    b_st.site = &qb_emlrtRSI;
    tooBig = true;
    for (i = 0; i < 2; i++) {
      if (tooBig && (finalSize[i] > 65500.0)) {
        tooBig = true;
      } else {
        tooBig = false;
      }
    }

    tooBig = !tooBig;
    c_st.site = &rb_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = (int32_T)finalSize[0];
    varargin_1->size[1] = (int32_T)finalSize[1];
    emxEnsureCapacity_real32_T(&c_st, varargin_1, i, &d_emlrtRTEI);
    if (tooBig) {
      for (i = 0; i < 2; i++) {
        padSize[i] = a->size[i];
      }

      for (i = 0; i < 3; i++) {
        kernel[i] = -1.0 + (real_T)i;
      }

      for (i = 0; i < 2; i++) {
        pad[i] = 1.0 + 2.0 * (real_T)i;
      }

      ippfilter_real32(&a->data[0], &varargin_1->data[0], finalSize, 2.0,
                       padSize, kernel, pad, true);
    } else {
      for (i = 0; i < 2; i++) {
        padSize[i] = a->size[i];
      }

      for (i = 0; i < 2; i++) {
        nonZeroKernel[i] = -1.0 + 2.0 * (real_T)i;
        connDims[i] = 1.0 + 2.0 * (real_T)i;
      }

      imfilter_real32(&a->data[0], &varargin_1->data[0], 2.0, finalSize, 2.0,
                      padSize, nonZeroKernel, 2.0, conn, 2.0, connDims, pad, 2.0,
                      true, true);
    }

    emxFree_real32_T(&a);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1)
{
  real_T finalSize[2];
  real_T pad[2];
  emxArray_real32_T *a;
  boolean_T tooBig;
  int32_T i;
  real_T padSize[2];
  boolean_T conn[49];
  static const real_T kernel[49] = { 0.0013419653598432805,
    0.0040765308179236169, 0.00793999784347829, 0.0099158573267036591,
    0.00793999784347829, 0.0040765308179236169, 0.0013419653598432805,
    0.0040765308179236169, 0.012383407207635908, 0.024119583762554284,
    0.030121714902657255, 0.024119583762554284, 0.012383407207635908,
    0.0040765308179236169, 0.00793999784347829, 0.024119583762554284,
    0.0469785343503966, 0.058669089490849473, 0.0469785343503966,
    0.024119583762554284, 0.00793999784347829, 0.0099158573267036591,
    0.030121714902657255, 0.058669089490849473, 0.073268826056005834,
    0.058669089490849473, 0.030121714902657255, 0.0099158573267036591,
    0.00793999784347829, 0.024119583762554284, 0.0469785343503966,
    0.058669089490849473, 0.0469785343503966, 0.024119583762554284,
    0.00793999784347829, 0.0040765308179236169, 0.012383407207635908,
    0.024119583762554284, 0.030121714902657255, 0.024119583762554284,
    0.012383407207635908, 0.0040765308179236169, 0.0013419653598432805,
    0.0040765308179236169, 0.00793999784347829, 0.0099158573267036591,
    0.00793999784347829, 0.0040765308179236169, 0.0013419653598432805 };

  real_T connDims[2];
  static const real_T nonZeroKernel[49] = { 0.0013419653598432805,
    0.0040765308179236169, 0.00793999784347829, 0.0099158573267036591,
    0.00793999784347829, 0.0040765308179236169, 0.0013419653598432805,
    0.0040765308179236169, 0.012383407207635908, 0.024119583762554284,
    0.030121714902657255, 0.024119583762554284, 0.012383407207635908,
    0.0040765308179236169, 0.00793999784347829, 0.024119583762554284,
    0.0469785343503966, 0.058669089490849473, 0.0469785343503966,
    0.024119583762554284, 0.00793999784347829, 0.0099158573267036591,
    0.030121714902657255, 0.058669089490849473, 0.073268826056005834,
    0.058669089490849473, 0.030121714902657255, 0.0099158573267036591,
    0.00793999784347829, 0.024119583762554284, 0.0469785343503966,
    0.058669089490849473, 0.0469785343503966, 0.024119583762554284,
    0.00793999784347829, 0.0040765308179236169, 0.012383407207635908,
    0.024119583762554284, 0.030121714902657255, 0.024119583762554284,
    0.012383407207635908, 0.0040765308179236169, 0.0013419653598432805,
    0.0040765308179236169, 0.00793999784347829, 0.0099158573267036591,
    0.00793999784347829, 0.0040765308179236169, 0.0013419653598432805 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  finalSize[0] = varargin_1->size[0];
  pad[0] = 3.0;
  finalSize[1] = varargin_1->size[1];
  pad[1] = 3.0;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
    emxInit_real32_T(sp, &a, 2, &lb_emlrtRTEI, true);
    st.site = &gb_emlrtRSI;
    padImage(&st, varargin_1, pad, a);
    st.site = &hb_emlrtRSI;
    b_st.site = &qb_emlrtRSI;
    tooBig = true;
    for (i = 0; i < 2; i++) {
      if (tooBig && (finalSize[i] > 65500.0)) {
        tooBig = true;
      } else {
        tooBig = false;
      }
    }

    tooBig = !tooBig;
    c_st.site = &rb_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = (int32_T)finalSize[0];
    varargin_1->size[1] = (int32_T)finalSize[1];
    emxEnsureCapacity_real32_T(&c_st, varargin_1, i, &d_emlrtRTEI);
    if (tooBig) {
      for (i = 0; i < 2; i++) {
        padSize[i] = a->size[i];
      }

      for (i = 0; i < 2; i++) {
        pad[i] = 7.0;
      }

      ippfilter_real32(&a->data[0], &varargin_1->data[0], finalSize, 2.0,
                       padSize, kernel, pad, false);
    } else {
      for (i = 0; i < 2; i++) {
        padSize[i] = a->size[i];
      }

      for (i = 0; i < 49; i++) {
        conn[i] = true;
      }

      for (i = 0; i < 2; i++) {
        connDims[i] = 7.0;
      }

      imfilter_real32(&a->data[0], &varargin_1->data[0], 2.0, finalSize, 2.0,
                      padSize, nonZeroKernel, 49.0, conn, 2.0, connDims, pad,
                      2.0, true, false);
    }

    emxFree_real32_T(&a);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1)
{
  real_T finalSize[2];
  real_T pad[2];
  real_T unusedU0[841];
  real_T s[841];
  real_T unusedU1[841];
  real_T b_s[29];
  int32_T ixstart;
  real_T tol;
  int32_T ix;
  boolean_T exitg1;
  boolean_T tooBig;
  boolean_T c_s[29];
  emxArray_real32_T *a;
  int32_T i68;
  real_T padSize[2];
  real_T hcol[29];
  boolean_T conn[841];
  real_T connDims[2];
  emxArray_real_T *b_a;
  int32_T loop_ub;
  real_T out_size_row[2];
  int32_T trueCount;
  int8_T tmp_data[29];
  real_T nonzero_h_data[29];
  boolean_T densityFlag;
  emxArray_real_T *b;
  int8_T b_tmp_data[29];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  finalSize[0] = varargin_1->size[0];
  pad[0] = 14.0;
  finalSize[1] = varargin_1->size[1];
  pad[1] = 14.0;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
    st.site = &ik_emlrtRSI;
    b_st.site = &pk_emlrtRSI;
    svd(&b_st, unusedU0, s, unusedU1);
    diag(s, b_s);
    ixstart = 1;
    tol = b_s[0];
    if (muDoubleScalarIsNaN(b_s[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 30)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(b_s[ix - 1])) {
          tol = b_s[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < 29) {
      while (ixstart + 1 < 30) {
        if (b_s[ixstart] > tol) {
          tol = b_s[ixstart];
        }

        ixstart++;
      }
    }

    tol = 29.0 * tol * 2.2204460492503131E-16;
    for (ixstart = 0; ixstart < 29; ixstart++) {
      c_s[ixstart] = (b_s[ixstart] > tol);
    }

    tooBig = (sum(c_s) == 1.0);
    emxInit_real32_T(sp, &a, 2, &lb_emlrtRTEI, true);
    if (tooBig) {
      st.site = &jk_emlrtRSI;
      padImage(&st, varargin_1, pad, a);
      st.site = &kk_emlrtRSI;
      b_st.site = &qk_emlrtRSI;
      b_svd(&b_st, unusedU0, b_s, unusedU1);
      memset(&s[0], 0, 841U * sizeof(real_T));
      for (ixstart = 0; ixstart < 29; ixstart++) {
        s[ixstart + 29 * ixstart] = b_s[ixstart];
      }

      for (ixstart = 0; ixstart < 29; ixstart++) {
        b_s[ixstart] = s[ixstart * 30];
      }

      st.site = &lk_emlrtRSI;
      tooBig = (b_s[0] < 0.0);
      if (tooBig) {
        b_st.site = &jf_emlrtRSI;
        c_st.site = &jf_emlrtRSI;
        b_error(&c_st);
      }

      tol = muDoubleScalarSqrt(b_s[0]);
      for (i68 = 0; i68 < 29; i68++) {
        hcol[i68] = unusedU0[i68] * tol;
      }

      st.site = &mk_emlrtRSI;
      tooBig = (b_s[0] < 0.0);
      if (tooBig) {
        b_st.site = &jf_emlrtRSI;
        c_st.site = &jf_emlrtRSI;
        b_error(&c_st);
      }

      tol = muDoubleScalarSqrt(b_s[0]);
      for (i68 = 0; i68 < 29; i68++) {
        b_s[i68] = unusedU1[i68] * tol;
      }

      emxInit_real_T1(sp, &b_a, 2, &lb_emlrtRTEI, true);
      i68 = b_a->size[0] * b_a->size[1];
      b_a->size[0] = a->size[0];
      b_a->size[1] = a->size[1];
      emxEnsureCapacity_real_T(sp, b_a, i68, &cm_emlrtRTEI);
      loop_ub = a->size[0] * a->size[1];
      for (i68 = 0; i68 < loop_ub; i68++) {
        b_a->data[i68] = a->data[i68];
      }

      out_size_row[0] = b_a->size[0];
      out_size_row[1] = finalSize[1];
      st.site = &nk_emlrtRSI;
      trueCount = 0;
      for (ixstart = 0; ixstart < 29; ixstart++) {
        if (b_s[ixstart] != 0.0) {
          trueCount++;
        }
      }

      ix = 0;
      for (ixstart = 0; ixstart < 29; ixstart++) {
        if (b_s[ixstart] != 0.0) {
          tmp_data[ix] = (int8_T)(ixstart + 1);
          ix++;
        }
      }

      b_st.site = &qb_emlrtRSI;
      for (i68 = 0; i68 < trueCount; i68++) {
        nonzero_h_data[i68] = b_s[tmp_data[i68] - 1];
      }

      for (i68 = 0; i68 < 29; i68++) {
        c_s[i68] = (b_s[i68] != 0.0);
      }

      densityFlag = false;
      if ((real_T)trueCount / 29.0 > 0.05) {
        densityFlag = true;
      }

      tooBig = true;
      for (ixstart = 0; ixstart < 2; ixstart++) {
        if (tooBig && (out_size_row[ixstart] > 65500.0)) {
          tooBig = true;
        } else {
          tooBig = false;
        }
      }

      if (densityFlag && (!tooBig)) {
        tooBig = true;
      } else {
        tooBig = false;
      }

      emxInit_real_T1(&b_st, &b, 2, &fm_emlrtRTEI, true);
      c_st.site = &rb_emlrtRSI;
      i68 = b->size[0] * b->size[1];
      b->size[0] = (int32_T)out_size_row[0];
      b->size[1] = (int32_T)finalSize[1];
      emxEnsureCapacity_real_T(&c_st, b, i68, &d_emlrtRTEI);
      if (tooBig) {
        for (i68 = 0; i68 < 2; i68++) {
          padSize[i68] = b_a->size[i68];
        }

        for (i68 = 0; i68 < 2; i68++) {
          pad[i68] = 1.0 + 28.0 * (real_T)i68;
        }

        ippfilter_real64(&b_a->data[0], &b->data[0], out_size_row, 2.0, padSize,
                         b_s, pad, true);
      } else {
        for (i68 = 0; i68 < 2; i68++) {
          padSize[i68] = b_a->size[i68];
        }

        for (i68 = 0; i68 < 2; i68++) {
          connDims[i68] = 1.0 + 28.0 * (real_T)i68;
          pad[i68] = 14.0 * (real_T)i68;
        }

        imfilter_real64(&b_a->data[0], &b->data[0], 2.0, out_size_row, 2.0,
                        padSize, &nonzero_h_data[0], (real_T)trueCount, c_s, 2.0,
                        connDims, pad, 2.0, true, true);
      }

      st.site = &ok_emlrtRSI;
      trueCount = 0;
      for (ixstart = 0; ixstart < 29; ixstart++) {
        if (hcol[ixstart] != 0.0) {
          trueCount++;
        }
      }

      ix = 0;
      for (ixstart = 0; ixstart < 29; ixstart++) {
        if (hcol[ixstart] != 0.0) {
          b_tmp_data[ix] = (int8_T)(ixstart + 1);
          ix++;
        }
      }

      b_st.site = &qb_emlrtRSI;
      for (i68 = 0; i68 < trueCount; i68++) {
        nonzero_h_data[i68] = hcol[b_tmp_data[i68] - 1];
      }

      for (i68 = 0; i68 < 29; i68++) {
        c_s[i68] = (hcol[i68] != 0.0);
      }

      densityFlag = false;
      if ((real_T)trueCount / 29.0 > 0.05) {
        densityFlag = true;
      }

      tooBig = true;
      for (ixstart = 0; ixstart < 2; ixstart++) {
        if (tooBig && (finalSize[ixstart] > 65500.0)) {
          tooBig = true;
        } else {
          tooBig = false;
        }
      }

      if (densityFlag && (!tooBig)) {
        tooBig = true;
      } else {
        tooBig = false;
      }

      c_st.site = &rb_emlrtRSI;
      i68 = b_a->size[0] * b_a->size[1];
      b_a->size[0] = b->size[0];
      b_a->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, b_a, i68, &dm_emlrtRTEI);
      loop_ub = b->size[0] * b->size[1];
      for (i68 = 0; i68 < loop_ub; i68++) {
        b_a->data[i68] = b->data[i68];
      }

      i68 = b->size[0] * b->size[1];
      b->size[0] = (int32_T)finalSize[0];
      b->size[1] = (int32_T)finalSize[1];
      emxEnsureCapacity_real_T(&c_st, b, i68, &d_emlrtRTEI);
      if (tooBig) {
        for (i68 = 0; i68 < 2; i68++) {
          padSize[i68] = b_a->size[i68];
        }

        for (i68 = 0; i68 < 2; i68++) {
          pad[i68] = 29.0 + -28.0 * (real_T)i68;
        }

        ippfilter_real64(&b_a->data[0], &b->data[0], finalSize, 2.0, padSize,
                         hcol, pad, true);
      } else {
        for (i68 = 0; i68 < 2; i68++) {
          padSize[i68] = b_a->size[i68];
        }

        for (i68 = 0; i68 < 2; i68++) {
          connDims[i68] = 29.0 + -28.0 * (real_T)i68;
          pad[i68] = 14.0 + -14.0 * (real_T)i68;
        }

        imfilter_real64(&b_a->data[0], &b->data[0], 2.0, finalSize, 2.0, padSize,
                        &nonzero_h_data[0], (real_T)trueCount, c_s, 2.0,
                        connDims, pad, 2.0, true, true);
      }

      emxFree_real_T(&b_a);
      i68 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = b->size[0];
      varargin_1->size[1] = b->size[1];
      emxEnsureCapacity_real32_T(sp, varargin_1, i68, &em_emlrtRTEI);
      loop_ub = b->size[1];
      for (i68 = 0; i68 < loop_ub; i68++) {
        ixstart = b->size[0];
        for (ix = 0; ix < ixstart; ix++) {
          varargin_1->data[ix + varargin_1->size[0] * i68] = (real32_T)b->
            data[ix + b->size[0] * i68];
        }
      }

      emxFree_real_T(&b);
    } else {
      st.site = &gb_emlrtRSI;
      padImage(&st, varargin_1, pad, a);
      st.site = &hb_emlrtRSI;
      b_st.site = &qb_emlrtRSI;
      tooBig = true;
      for (ixstart = 0; ixstart < 2; ixstart++) {
        if (tooBig && (finalSize[ixstart] > 65500.0)) {
          tooBig = true;
        } else {
          tooBig = false;
        }
      }

      tooBig = !tooBig;
      c_st.site = &rb_emlrtRSI;
      i68 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = (int32_T)finalSize[0];
      varargin_1->size[1] = (int32_T)finalSize[1];
      emxEnsureCapacity_real32_T(&c_st, varargin_1, i68, &d_emlrtRTEI);
      if (tooBig) {
        for (i68 = 0; i68 < 2; i68++) {
          padSize[i68] = a->size[i68];
        }

        for (i68 = 0; i68 < 2; i68++) {
          pad[i68] = 29.0;
        }

        ippfilter_real32(&a->data[0], &varargin_1->data[0], finalSize, 2.0,
                         padSize, dv0, pad, true);
      } else {
        for (i68 = 0; i68 < 2; i68++) {
          padSize[i68] = a->size[i68];
        }

        for (i68 = 0; i68 < 841; i68++) {
          conn[i68] = true;
        }

        for (i68 = 0; i68 < 2; i68++) {
          connDims[i68] = 29.0;
        }

        imfilter_real32(&a->data[0], &varargin_1->data[0], 2.0, finalSize, 2.0,
                        padSize, dv0, 841.0, conn, 2.0, connDims, pad, 2.0, true,
                        true);
      }
    }

    emxFree_real32_T(&a);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1)
{
  real_T finalSize[2];
  real_T pad[2];
  emxArray_real32_T *a;
  boolean_T tooBig;
  int32_T i;
  real_T padSize[2];
  real_T nonZeroKernel[2];
  real_T kernel[3];
  static const boolean_T conn[3] = { true, false, true };

  real_T connDims[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  finalSize[0] = varargin_1->size[0];
  pad[0] = 1.0;
  finalSize[1] = varargin_1->size[1];
  pad[1] = 0.0;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
    emxInit_real32_T(sp, &a, 2, &lb_emlrtRTEI, true);
    st.site = &gb_emlrtRSI;
    padImage(&st, varargin_1, pad, a);
    st.site = &hb_emlrtRSI;
    b_st.site = &qb_emlrtRSI;
    tooBig = true;
    for (i = 0; i < 2; i++) {
      if (tooBig && (finalSize[i] > 65500.0)) {
        tooBig = true;
      } else {
        tooBig = false;
      }
    }

    tooBig = !tooBig;
    c_st.site = &rb_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = (int32_T)finalSize[0];
    varargin_1->size[1] = (int32_T)finalSize[1];
    emxEnsureCapacity_real32_T(&c_st, varargin_1, i, &d_emlrtRTEI);
    if (tooBig) {
      for (i = 0; i < 2; i++) {
        padSize[i] = a->size[i];
      }

      for (i = 0; i < 3; i++) {
        kernel[i] = -1.0 + (real_T)i;
      }

      for (i = 0; i < 2; i++) {
        pad[i] = 3.0 + -2.0 * (real_T)i;
      }

      ippfilter_real32(&a->data[0], &varargin_1->data[0], finalSize, 2.0,
                       padSize, kernel, pad, true);
    } else {
      for (i = 0; i < 2; i++) {
        padSize[i] = a->size[i];
      }

      for (i = 0; i < 2; i++) {
        nonZeroKernel[i] = -1.0 + 2.0 * (real_T)i;
        connDims[i] = 3.0 + -2.0 * (real_T)i;
      }

      imfilter_real32(&a->data[0], &varargin_1->data[0], 2.0, finalSize, 2.0,
                      padSize, nonZeroKernel, 2.0, conn, 2.0, connDims, pad, 2.0,
                      true, true);
    }

    emxFree_real32_T(&a);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void padImage(const emlrtStack *sp, const emxArray_real32_T *a_tmp, const real_T
              pad[2], emxArray_real32_T *a)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  int32_T i3;
  real_T sizeB[2];
  real_T n;
  real_T varargin_1[2];
  int32_T j;
  int32_T exitg2;
  int32_T b;
  int32_T i;
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &jb_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!muDoubleScalarIsNaN(pad[k])) {
      k++;
    } else {
      overflow = false;
      exitg1 = true;
    }
  }

  if (!overflow) {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &jm_emlrtRTEI,
      "MATLAB:padarray:expectedNonNaN", 48,
      "Expected input number 2, PADSIZE, to be non-NaN.");
  }

  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!muDoubleScalarIsNaN(pad[k])) && (muDoubleScalarFloor(pad[k]) == pad[k]))
    {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      k++;
    } else {
      overflow = false;
      exitg1 = true;
    }
  }

  if (!overflow) {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &km_emlrtRTEI,
      "MATLAB:padarray:expectedInteger", 55,
      "Expected input number 2, PADSIZE, to be integer-valued.");
  }

  if ((a_tmp->size[0] == 0) || (a_tmp->size[1] == 0)) {
    for (i3 = 0; i3 < 2; i3++) {
      sizeB[i3] = (real_T)a_tmp->size[i3] + 2.0 * pad[i3];
    }

    b_st.site = &kb_emlrtRSI;
    varargin_1[0] = sizeB[0];
    varargin_1[1] = sizeB[1];
    c_st.site = &mb_emlrtRSI;
    k = 0;
    do {
      exitg2 = 0;
      if (k < 2) {
        if (varargin_1[k] != varargin_1[k]) {
          overflow = false;
          exitg2 = 1;
        } else {
          k++;
        }
      } else {
        overflow = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (overflow) {
      k = 0;
      do {
        exitg2 = 0;
        if (k < 2) {
          if ((-2.147483648E+9 > varargin_1[k]) || (2.147483647E+9 <
               varargin_1[k])) {
            overflow = false;
            exitg2 = 1;
          } else {
            k++;
          }
        } else {
          overflow = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (overflow) {
        overflow = true;
      } else {
        overflow = false;
      }
    } else {
      overflow = false;
    }

    if (!overflow) {
      emlrtErrorWithMessageIdR2012b(&c_st, &lm_emlrtRTEI,
        "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
        MIN_int32_T, 12, MAX_int32_T);
    }

    n = 1.0;
    for (k = 0; k < 2; k++) {
      if (varargin_1[k] <= 0.0) {
        n = 0.0;
      } else {
        n *= varargin_1[k];
      }
    }

    if (!(2.147483647E+9 >= n)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &mm_emlrtRTEI,
        "Coder:MATLAB:pmaxsize", 0);
    }

    i3 = a->size[0] * a->size[1];
    a->size[0] = (int32_T)sizeB[0];
    a->size[1] = (int32_T)sizeB[1];
    emxEnsureCapacity_real32_T(&b_st, a, i3, &nb_emlrtRTEI);
    k = (int32_T)sizeB[0] * (int32_T)sizeB[1];
    for (i3 = 0; i3 < k; i3++) {
      a->data[i3] = 0.0F;
    }
  } else {
    b_st.site = &lb_emlrtRSI;
    for (i3 = 0; i3 < 2; i3++) {
      n = (real_T)a_tmp->size[i3] + 2.0 * pad[i3];
      if (n != (int32_T)muDoubleScalarFloor(n)) {
        emlrtIntegerCheckR2012b(n, &emlrtDCI, &b_st);
      }

      sizeB[i3] = n;
    }

    i3 = a->size[0] * a->size[1];
    a->size[0] = (int32_T)sizeB[0];
    a->size[1] = (int32_T)sizeB[1];
    emxEnsureCapacity_real32_T(&b_st, a, i3, &mb_emlrtRTEI);
    for (j = 0; j < (int32_T)pad[1]; j++) {
      i3 = a->size[0];
      for (i = 0; i < i3; i++) {
        i4 = a->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i4, &j_emlrtBCI, &b_st);
        }

        i4 = a->size[1];
        if (!((j + 1 >= 1) && (j + 1 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, i4, &j_emlrtBCI, &b_st);
        }

        a->data[i + a->size[0] * j] = 0.0F;
      }
    }

    k = (a_tmp->size[1] + (int32_T)pad[1]) + 1;
    b = a->size[1];
    c_st.site = &nb_emlrtRSI;
    overflow = ((!(k > a->size[1])) && (a->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &pb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    while (k <= b) {
      i3 = a->size[0];
      for (i = 0; i < i3; i++) {
        i4 = a->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i4, &i_emlrtBCI, &b_st);
        }

        i4 = a->size[1];
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &i_emlrtBCI, &b_st);
        }

        a->data[i + a->size[0] * (k - 1)] = 0.0F;
      }

      k++;
    }

    for (j = 0; j < a_tmp->size[1]; j++) {
      for (i = 0; i < (int32_T)pad[0]; i++) {
        i3 = a->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i3))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i3, &h_emlrtBCI, &b_st);
        }

        i3 = a->size[1];
        i4 = (j + (int32_T)pad[1]) + 1;
        if (!((i4 >= 1) && (i4 <= i3))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &h_emlrtBCI, &b_st);
        }

        a->data[i + a->size[0] * (i4 - 1)] = 0.0F;
      }
    }

    for (j = 0; j < a_tmp->size[1]; j++) {
      k = ((int32_T)pad[0] + a_tmp->size[0]) + 1;
      b = a->size[0];
      c_st.site = &ob_emlrtRSI;
      overflow = ((!(k > a->size[0])) && (a->size[0] > 2147483646));
      if (overflow) {
        d_st.site = &pb_emlrtRSI;
        e_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      while (k <= b) {
        i3 = a->size[0];
        if (!((k >= 1) && (k <= i3))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i3, &g_emlrtBCI, &b_st);
        }

        i3 = a->size[1];
        i4 = (j + (int32_T)pad[1]) + 1;
        if (!((i4 >= 1) && (i4 <= i3))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &g_emlrtBCI, &b_st);
        }

        a->data[(k + a->size[0] * (i4 - 1)) - 1] = 0.0F;
        k++;
      }
    }

    for (j = 1; j - 1 < a_tmp->size[1]; j++) {
      for (i = 1; i - 1 < a_tmp->size[0]; i++) {
        i3 = a_tmp->size[0];
        if (!((i >= 1) && (i <= i3))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i3, &e_emlrtBCI, &b_st);
        }

        i3 = a_tmp->size[1];
        if (!((j >= 1) && (j <= i3))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i3, &e_emlrtBCI, &b_st);
        }

        i3 = a->size[0];
        i4 = i + (int32_T)pad[0];
        if (!((i4 >= 1) && (i4 <= i3))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &f_emlrtBCI, &b_st);
        }

        i3 = a->size[1];
        k = j + (int32_T)pad[1];
        if (!((k >= 1) && (k <= i3))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i3, &f_emlrtBCI, &b_st);
        }

        a->data[(i4 + a->size[0] * (k - 1)) - 1] = a_tmp->data[(i + a_tmp->size
          [0] * (j - 1)) - 1];
      }
    }
  }
}

/* End of code generation (imfilter.c) */
