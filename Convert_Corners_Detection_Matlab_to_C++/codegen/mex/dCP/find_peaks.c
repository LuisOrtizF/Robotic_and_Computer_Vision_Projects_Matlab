/*
 * find_peaks.c
 *
 * Code generation for function 'find_peaks'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "find_peaks.h"
#include "dCP_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "algbwmorph.h"
#include "dCP_data.h"
#include "libmwimregionalmax.h"

/* Variable Definitions */
static emlrtRSInfo hc_emlrtRSI = { 11, /* lineNo */
  "find_peaks",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/find_peaks.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 6,  /* lineNo */
  "findPeaks",                         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 11, /* lineNo */
  "findPeaks",                         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 15, /* lineNo */
  "findPeaks",                         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 24, /* lineNo */
  "findPeaks",                         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 26, /* lineNo */
  "findPeaks",                         /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 14, /* lineNo */
  "imregionalmax",                     /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imregionalmax.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 34, /* lineNo */
  "imregionalmax",                     /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imregionalmax.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 36, /* lineNo */
  "imregionalmax",                     /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/imregionalmax.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 77, /* lineNo */
  "bwmorph",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/eml/bwmorph.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 44, /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 234,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 253,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 19, /* lineNo */
  "ind2sub",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pathName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "find_peaks",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/find_peaks.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 11,/* lineNo */
  11,                                  /* colNo */
  "find_peaks",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/find_peaks.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 44,/* lineNo */
  10,                                  /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 24,/* lineNo */
  5,                                   /* colNo */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 26,/* lineNo */
  10,                                  /* colNo */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 26,/* lineNo */
  21,                                  /* colNo */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "find_peaks",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/find_peaks.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 36,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo qm_emlrtRTEI = { 38,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/ind2sub.m"/* pName */
};

static emlrtRTEInfo rm_emlrtRTEI = { 243,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo sm_emlrtRTEI = { 126,/* lineNo */
  19,                                  /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  26,                                  /* lineNo */
  17,                                  /* colNo */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  26,                                  /* lineNo */
  6,                                   /* colNo */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  8,                                   /* colNo */
  "",                                  /* aName */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  8,                                   /* colNo */
  "",                                  /* aName */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "findPeaks",                         /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/findPeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo pl_emlrtRSI = { 18, /* lineNo */
  "indexDivide",                       /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/indexDivide.m"/* pathName */
};

/* Function Declarations */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    absNumerator /= absDenominator;
    if (quotientNeedsNegation) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

void find_peaks(const emlrtStack *sp, const emxArray_real32_T *metric,
                emxArray_real32_T *loc)
{
  boolean_T overflow;
  int32_T ixstart;
  int32_T n;
  real32_T threshold;
  int32_T i5;
  int32_T idx;
  boolean_T exitg1;
  emxArray_boolean_T *bw;
  real_T imSize[2];
  boolean_T conn[9];
  real_T connSize[2];
  emxArray_int32_T *ii;
  int32_T iv0[2];
  emxArray_int32_T *b_idx;
  int32_T exitg2;
  emxArray_int32_T *vk;
  emxArray_int32_T *r5;
  int32_T b_ii[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &hc_emlrtRSI;
  b_st.site = &ic_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  d_st.site = &oc_emlrtRSI;
  if ((metric->size[0] * metric->size[1] == 1) || (metric->size[0] *
       metric->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&d_st, &um_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(metric->size[0] * metric->size[1] > 0)) {
    emlrtErrorWithMessageIdR2012b(&d_st, &tm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &pc_emlrtRSI;
  ixstart = 1;
  n = metric->size[0] * metric->size[1];
  threshold = metric->data[0];
  if (metric->size[0] * metric->size[1] > 1) {
    if (muSingleScalarIsNaN(metric->data[0])) {
      f_st.site = &rc_emlrtRSI;
      overflow = ((!(2 > metric->size[0] * metric->size[1])) && (metric->size[0]
        * metric->size[1] > 2147483646));
      if (overflow) {
        g_st.site = &pb_emlrtRSI;
        h_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      idx = 2;
      exitg1 = false;
      while ((!exitg1) && (idx <= n)) {
        ixstart = idx;
        if (!muSingleScalarIsNaN(metric->data[idx - 1])) {
          threshold = metric->data[idx - 1];
          exitg1 = true;
        } else {
          idx++;
        }
      }
    }

    if (ixstart < metric->size[0] * metric->size[1]) {
      f_st.site = &qc_emlrtRSI;
      overflow = ((!(ixstart + 1 > metric->size[0] * metric->size[1])) &&
                  (metric->size[0] * metric->size[1] > 2147483646));
      if (overflow) {
        g_st.site = &pb_emlrtRSI;
        h_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      while (ixstart + 1 <= n) {
        if (metric->data[ixstart] > threshold) {
          threshold = metric->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  if (threshold <= 4.94065645841247E-324) {
    i5 = loc->size[0] * loc->size[1];
    loc->size[0] = 0;
    loc->size[1] = 2;
    emxEnsureCapacity_real32_T(&st, loc, i5, &tb_emlrtRTEI);
  } else {
    b_st.site = &jc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    overflow = true;
    i5 = metric->size[0] * metric->size[1];
    n = 0;
    exitg1 = false;
    while ((!exitg1) && (n <= i5 - 1)) {
      if (!muSingleScalarIsNaN(metric->data[n])) {
        n++;
      } else {
        overflow = false;
        exitg1 = true;
      }
    }

    if (!overflow) {
      emlrtErrMsgIdAndExplicitTxt(&c_st, &jm_emlrtRTEI,
        "MATLAB:imregionalmax:expectedNonNaN", 42,
        "Expected input number 1, I, to be non-NaN.");
    }

    c_st.site = &tc_emlrtRSI;
    i5 = metric->size[0] * metric->size[1];
    for (n = 0; n < i5; n++) {
      if (muSingleScalarIsNaN(metric->data[n])) {
        d_st.site = &vc_emlrtRSI;
        e_st.site = &vc_emlrtRSI;
        error(&e_st);
      }
    }

    emxInit_boolean_T(&c_st, &bw, 2, &ub_emlrtRTEI, true);
    i5 = bw->size[0] * bw->size[1];
    bw->size[0] = metric->size[0];
    bw->size[1] = metric->size[1];
    emxEnsureCapacity_boolean_T(&b_st, bw, i5, &ub_emlrtRTEI);
    c_st.site = &uc_emlrtRSI;
    for (i5 = 0; i5 < 2; i5++) {
      imSize[i5] = metric->size[i5];
    }

    for (i5 = 0; i5 < 9; i5++) {
      conn[i5] = true;
    }

    for (i5 = 0; i5 < 2; i5++) {
      connSize[i5] = 3.0;
    }

    imregionalmax_real32(&metric->data[0], &bw->data[0], 2.0, imSize, conn, 2.0,
                         connSize);
    threshold *= 0.15F;
    idx = metric->size[0] * metric->size[1] - 1;
    ixstart = 0;
    for (n = 0; n <= idx; n++) {
      if (metric->data[n] < threshold) {
        ixstart++;
      }
    }

    emxInit_int32_T(&st, &ii, 1, &ic_emlrtRTEI, true);
    i5 = ii->size[0];
    ii->size[0] = ixstart;
    emxEnsureCapacity_int32_T(&st, ii, i5, &vb_emlrtRTEI);
    ixstart = 0;
    for (n = 0; n <= idx; n++) {
      if (metric->data[n] < threshold) {
        ii->data[ixstart] = n + 1;
        ixstart++;
      }
    }

    n = bw->size[0];
    ixstart = bw->size[1];
    n *= ixstart;
    idx = ii->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      ixstart = ii->data[i5];
      if (!((ixstart >= 1) && (ixstart <= n))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &o_emlrtBCI, &st);
      }

      bw->data[ixstart - 1] = false;
    }

    b_st.site = &kc_emlrtRSI;
    if (!((bw->size[0] == 0) || (bw->size[1] == 0))) {
      c_st.site = &wc_emlrtRSI;
      algbwmorph(&c_st, bw);
    }

    i5 = bw->size[0];
    if (!(1 <= i5)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i5, &n_emlrtBCI, &st);
    }

    idx = bw->size[1];
    for (i5 = 0; i5 < idx; i5++) {
      bw->data[bw->size[0] * i5] = false;
    }

    idx = bw->size[1];
    n = bw->size[0];
    ixstart = bw->size[0];
    if (!((n >= 1) && (n <= ixstart))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, ixstart, &m_emlrtBCI, &st);
    }

    for (i5 = 0; i5 < idx; i5++) {
      bw->data[(n + bw->size[0] * i5) - 1] = false;
    }

    i5 = bw->size[1];
    if (!(1 <= i5)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i5, &l_emlrtBCI, &st);
    }

    idx = bw->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      bw->data[i5] = false;
    }

    idx = bw->size[0];
    n = bw->size[1];
    ixstart = bw->size[1];
    if (!((n >= 1) && (n <= ixstart))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, ixstart, &k_emlrtBCI, &st);
    }

    for (i5 = 0; i5 < idx; i5++) {
      bw->data[i5 + bw->size[0] * (n - 1)] = false;
    }

    b_st.site = &lc_emlrtRSI;
    c_st.site = &ed_emlrtRSI;
    n = bw->size[0] * bw->size[1];
    idx = 0;
    if ((!((bw->size[0] == 1) || (bw->size[1] == 1))) || (bw->size[0] != 1) ||
        (bw->size[1] <= 1)) {
      overflow = true;
    } else {
      overflow = false;
    }

    if (!overflow) {
      emlrtErrorWithMessageIdR2012b(&c_st, &sm_emlrtRTEI,
        "Coder:toolbox:find_incompatibleShape", 0);
    }

    i5 = ii->size[0];
    ii->size[0] = n;
    emxEnsureCapacity_int32_T(&c_st, ii, i5, &wb_emlrtRTEI);
    d_st.site = &fd_emlrtRSI;
    overflow = ((!(1 > n)) && (n > 2147483646));
    if (overflow) {
      e_st.site = &pb_emlrtRSI;
      f_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    ixstart = 1;
    exitg1 = false;
    while ((!exitg1) && (ixstart <= n)) {
      if (bw->data[ixstart - 1]) {
        idx++;
        ii->data[idx - 1] = ixstart;
        if (idx >= n) {
          exitg1 = true;
        } else {
          ixstart++;
        }
      } else {
        ixstart++;
      }
    }

    emxFree_boolean_T(&bw);
    if (!(idx <= n)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &rm_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (n == 1) {
      if (idx == 0) {
        i5 = ii->size[0];
        ii->size[0] = 0;
        emxEnsureCapacity_int32_T(&c_st, ii, i5, &xb_emlrtRTEI);
      }
    } else {
      if (1 > idx) {
        idx = 0;
      }

      iv0[0] = 1;
      iv0[1] = idx;
      d_st.site = &gd_emlrtRSI;
      indexShapeCheck(&d_st, ii->size[0], iv0);
      i5 = ii->size[0];
      ii->size[0] = idx;
      emxEnsureCapacity_int32_T(&c_st, ii, i5, &xb_emlrtRTEI);
    }

    emxInit_int32_T(&c_st, &b_idx, 1, &yb_emlrtRTEI, true);
    i5 = b_idx->size[0];
    b_idx->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(&b_st, b_idx, i5, &yb_emlrtRTEI);
    idx = ii->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      b_idx->data[i5] = ii->data[i5];
    }

    imSize[0] = b_idx->size[0];
    i5 = loc->size[0] * loc->size[1];
    loc->size[0] = (int32_T)imSize[0];
    loc->size[1] = 2;
    emxEnsureCapacity_real32_T(&st, loc, i5, &tb_emlrtRTEI);
    idx = (int32_T)imSize[0] << 1;
    for (i5 = 0; i5 < idx; i5++) {
      loc->data[i5] = 0.0F;
    }

    b_st.site = &mc_emlrtRSI;
    for (i5 = 0; i5 < 2; i5++) {
      connSize[i5] = metric->size[i5];
    }

    c_st.site = &id_emlrtRSI;
    i5 = ii->size[0];
    ii->size[0] = b_idx->size[0];
    emxEnsureCapacity_int32_T(&c_st, ii, i5, &ac_emlrtRTEI);
    idx = b_idx->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      ii->data[i5] = b_idx->data[i5];
    }

    ixstart = (int32_T)(uint32_T)connSize[0] * (int32_T)(uint32_T)connSize[1];
    n = 0;
    do {
      exitg2 = 0;
      if (n <= ii->size[0] - 1) {
        if ((ii->data[n] >= 1) && (ii->data[n] <= ixstart)) {
          overflow = true;
        } else {
          overflow = false;
        }

        if (!overflow) {
          overflow = false;
          exitg2 = 1;
        } else {
          n++;
        }
      } else {
        overflow = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (!overflow) {
      emlrtErrorWithMessageIdR2012b(&c_st, &qm_emlrtRTEI,
        "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
    }

    i5 = ii->size[0];
    emxEnsureCapacity_int32_T(&c_st, ii, i5, &bc_emlrtRTEI);
    idx = ii->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      ii->data[i5]--;
    }

    emxInit_int32_T(&c_st, &vk, 1, &cc_emlrtRTEI, true);
    i5 = vk->size[0];
    vk->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(&c_st, vk, i5, &cc_emlrtRTEI);
    idx = ii->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      d_st.site = &pl_emlrtRSI;
      vk->data[i5] = div_s32(&d_st, ii->data[i5], (int32_T)(uint32_T)connSize[0]);
    }

    i5 = ii->size[0];
    emxEnsureCapacity_int32_T(&c_st, ii, i5, &dc_emlrtRTEI);
    idx = ii->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      ii->data[i5] -= vk->data[i5] * (int32_T)(uint32_T)connSize[0];
    }

    i5 = b_idx->size[0];
    b_idx->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(&b_st, b_idx, i5, &ec_emlrtRTEI);
    idx = ii->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      b_idx->data[i5] = ii->data[i5] + 1;
    }

    emxInit_int32_T(&b_st, &r5, 1, &hc_emlrtRTEI, true);
    i5 = r5->size[0];
    r5->size[0] = vk->size[0];
    emxEnsureCapacity_int32_T(&b_st, r5, i5, &ec_emlrtRTEI);
    idx = vk->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      r5->data[i5] = vk->data[i5] + 1;
    }

    emxFree_int32_T(&vk);
    i5 = ii->size[0];
    ii->size[0] = (int32_T)imSize[0];
    emxEnsureCapacity_int32_T(&st, ii, i5, &fc_emlrtRTEI);
    idx = (int32_T)imSize[0];
    for (i5 = 0; i5 < idx; i5++) {
      ii->data[i5] = i5;
    }

    b_ii[0] = ii->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_ii[0], 1, &(*(int32_T (*)[1])b_idx->size)[0],
      1, &j_emlrtECI, &st);
    idx = b_idx->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      loc->data[ii->data[i5] + loc->size[0]] = (real32_T)b_idx->data[i5];
    }

    emxFree_int32_T(&b_idx);
    idx = loc->size[0];
    i5 = ii->size[0];
    ii->size[0] = idx;
    emxEnsureCapacity_int32_T(&st, ii, i5, &gc_emlrtRTEI);
    for (i5 = 0; i5 < idx; i5++) {
      ii->data[i5] = i5;
    }

    b_ii[0] = ii->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_ii[0], 1, &(*(int32_T (*)[1])r5->size)[0],
      1, &i_emlrtECI, &st);
    idx = r5->size[0];
    for (i5 = 0; i5 < idx; i5++) {
      loc->data[ii->data[i5]] = (real32_T)r5->data[i5];
    }

    emxFree_int32_T(&ii);
    emxFree_int32_T(&r5);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (find_peaks.c) */
