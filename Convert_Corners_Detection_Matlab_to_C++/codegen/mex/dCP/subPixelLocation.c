/*
 * subPixelLocation.c
 *
 * Code generation for function 'subPixelLocation'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "subPixelLocation.h"
#include "dCP_emxutil.h"
#include "mldivide.h"
#include "any.h"
#include "dCP_data.h"
#include "blas.h"

/* Variable Definitions */
static real_T X[150];
static boolean_T X_not_empty;
static emlrtRSInfo ij_emlrtRSI = { 6,  /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 20, /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 35, /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 40, /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 51, /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 52, /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 77, /* lineNo */
  "subPixelLocation",                  /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 21, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 27,/* lineNo */
  9,                                   /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pName */
};

static emlrtRTEInfo bn_emlrtRTEI = { 99,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo cn_emlrtRTEI = { 104,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { 2,  /* nDims */
  59,                                  /* lineNo */
  15,                                  /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pName */
};

static emlrtBCInfo bi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 28, /* lineNo */
  37,                                  /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ci_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 28, /* lineNo */
  16,                                  /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo di_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ei_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 27, /* lineNo */
  37,                                  /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 27, /* lineNo */
  16,                                  /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ii_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ji_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ki_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ql_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jc_emlrtECI = { -1, /* nDims */
  6,                                   /* lineNo */
  5,                                   /* colNo */
  "subPixelLocation",                  /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/subPixelLocation.m"/* pName */
};

/* Function Declarations */
static void subPixelLocationImpl(const emlrtStack *sp, const emxArray_real32_T
  *metric, const real_T loc_data[], const int32_T loc_size[2], real32_T
  subPixelLoc_data[], int32_T subPixelLoc_size[2]);

/* Function Definitions */
static void subPixelLocationImpl(const emlrtStack *sp, const emxArray_real32_T
  *metric, const real_T loc_data[], const int32_T loc_size[2], real32_T
  subPixelLoc_data[], int32_T subPixelLoc_size[2])
{
  int32_T b_loc_size[1];
  int32_T loop_ub;
  int32_T i38;
  emxArray_boolean_T b_loc_data;
  boolean_T c_loc_data[2];
  emxArray_real32_T *b_metric;
  boolean_T guard1 = false;
  real_T alpha1;
  int32_T i39;
  int32_T i40;
  int32_T i41;
  int32_T i42;
  real_T b_X[150];
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  real_T dv1[36];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T b_loop_ub;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  real32_T beta[6];
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  static const real_T a[150] = { 4.0, 4.0, -2.0, -2.0, 4.0, 1.0, 4.0, 1.0, -2.0,
    -1.0, 2.0, 1.0, 4.0, 0.0, -2.0, 0.0, -0.0, 1.0, 4.0, 1.0, -2.0, 1.0, -2.0,
    1.0, 4.0, 4.0, -2.0, 2.0, -4.0, 1.0, 1.0, 4.0, -1.0, -2.0, 2.0, 1.0, 1.0,
    1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 0.0, -1.0, 0.0, -0.0, 1.0, 1.0, 1.0, -1.0,
    1.0, -1.0, 1.0, 1.0, 4.0, -1.0, 2.0, -2.0, 1.0, 0.0, 4.0, 0.0, -2.0, -0.0,
    1.0, 0.0, 1.0, 0.0, -1.0, -0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 4.0, 0.0, 2.0, 0.0, 1.0, 1.0, 4.0, 1.0, -2.0, -2.0,
    1.0, 1.0, 1.0, 1.0, -1.0, -1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 4.0, 1.0, 2.0, 2.0, 1.0, 4.0, 4.0, 2.0, -2.0, -4.0,
    1.0, 4.0, 1.0, 2.0, -1.0, -2.0, 1.0, 4.0, 0.0, 2.0, 0.0, 0.0, 1.0, 4.0, 1.0,
    2.0, 1.0, 2.0, 1.0, 4.0, 4.0, 2.0, 2.0, 4.0, 1.0 };

  static const real_T b[150] = { 4.0, 4.0, 4.0, 4.0, 4.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 4.0, 4.0, 4.0, 4.0,
    4.0, 4.0, 1.0, 0.0, 1.0, 4.0, 4.0, 1.0, 0.0, 1.0, 4.0, 4.0, 1.0, 0.0, 1.0,
    4.0, 4.0, 1.0, 0.0, 1.0, 4.0, 4.0, 1.0, 0.0, 1.0, 4.0, -2.0, -2.0, -2.0,
    -2.0, -2.0, -1.0, -1.0, -1.0, -1.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 2.0, -2.0, -1.0, 0.0, 1.0, 2.0, -2.0,
    -1.0, 0.0, 1.0, 2.0, -2.0, -1.0, 0.0, 1.0, 2.0, -2.0, -1.0, 0.0, 1.0, 2.0,
    -2.0, -1.0, 0.0, 1.0, 2.0, 4.0, 2.0, -0.0, -2.0, -4.0, 2.0, 1.0, -0.0, -1.0,
    -2.0, -0.0, -0.0, 0.0, 0.0, 0.0, -2.0, -1.0, 0.0, 1.0, 2.0, -4.0, -2.0, 0.0,
    2.0, 4.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  real32_T x;
  real32_T y;
  int32_T loc[2];
  int32_T iv16[2];
  real32_T b_x[2];
  real32_T d_loc_data[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_loc_size[0] = loc_size[1];
  loop_ub = loc_size[1];
  for (i38 = 0; i38 < loop_ub; i38++) {
    c_loc_data[i38] = (loc_data[i38] < 3.0);
  }

  b_loc_data.data = (boolean_T *)&c_loc_data;
  b_loc_data.size = (int32_T *)&b_loc_size;
  b_loc_data.allocatedSize = 2;
  b_loc_data.numDimensions = 1;
  b_loc_data.canFreeData = false;
  emxInit_real32_T(sp, &b_metric, 2, &lk_emlrtRTEI, true);
  guard1 = false;
  st.site = &jj_emlrtRSI;
  if (any(&st, &b_loc_data)) {
    guard1 = true;
  } else {
    if (!(1 <= loc_size[1])) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loc_size[1], &ki_emlrtBCI, sp);
    }

    if (loc_data[0] > ((real_T)metric->size[1] - 2.0) - 1.0) {
      guard1 = true;
    } else {
      if (!(2 <= loc_size[1])) {
        emlrtDynamicBoundsCheckR2012b(2, 1, loc_size[1], &ji_emlrtBCI, sp);
      }

      if (loc_data[1] > ((real_T)metric->size[0] - 2.0) - 1.0) {
        guard1 = true;
      } else {
        if (!(2 <= loc_size[1])) {
          emlrtDynamicBoundsCheckR2012b(2, 1, loc_size[1], &ii_emlrtBCI, sp);
          emlrtDynamicBoundsCheckR2012b(2, 1, loc_size[1], &hi_emlrtBCI, sp);
        }

        if (loc_data[1] - 2.0 > loc_data[1] + 2.0) {
          i38 = 0;
          i39 = 0;
        } else {
          i38 = metric->size[0];
          alpha1 = loc_data[1] - 2.0;
          if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
            emlrtIntegerCheckR2012b(alpha1, &lc_emlrtDCI, sp);
          }

          i40 = (int32_T)alpha1;
          if (!((i40 >= 1) && (i40 <= i38))) {
            emlrtDynamicBoundsCheckR2012b(i40, 1, i38, &gi_emlrtBCI, sp);
          }

          i38 = i40 - 1;
          i40 = metric->size[0];
          alpha1 = loc_data[1] + 2.0;
          if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
            emlrtIntegerCheckR2012b(alpha1, &kc_emlrtDCI, sp);
          }

          i39 = (int32_T)alpha1;
          if (!((i39 >= 1) && (i39 <= i40))) {
            emlrtDynamicBoundsCheckR2012b(i39, 1, i40, &fi_emlrtBCI, sp);
          }
        }

        if (!(1 <= loc_size[1])) {
          emlrtDynamicBoundsCheckR2012b(1, 1, loc_size[1], &ei_emlrtBCI, sp);
          emlrtDynamicBoundsCheckR2012b(1, 1, loc_size[1], &di_emlrtBCI, sp);
        }

        if (loc_data[0] - 2.0 > loc_data[0] + 2.0) {
          i40 = 0;
          i41 = 0;
        } else {
          i40 = metric->size[1];
          alpha1 = loc_data[0] - 2.0;
          if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
            emlrtIntegerCheckR2012b(alpha1, &jc_emlrtDCI, sp);
          }

          i42 = (int32_T)alpha1;
          if (!((i42 >= 1) && (i42 <= i40))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, i40, &ci_emlrtBCI, sp);
          }

          i40 = i42 - 1;
          i42 = metric->size[1];
          alpha1 = loc_data[0] + 2.0;
          if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
            emlrtIntegerCheckR2012b(alpha1, &ic_emlrtDCI, sp);
          }

          i41 = (int32_T)alpha1;
          if (!((i41 >= 1) && (i41 <= i42))) {
            emlrtDynamicBoundsCheckR2012b(i41, 1, i42, &bi_emlrtBCI, sp);
          }
        }

        if (!X_not_empty) {
          st.site = &kj_emlrtRSI;
          b_st.site = &oj_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          TRANSB = 'N';
          TRANSA = 'N';
          memset(&dv1[0], 0, 36U * sizeof(real_T));
          m_t = (ptrdiff_t)6;
          n_t = (ptrdiff_t)6;
          k_t = (ptrdiff_t)25;
          lda_t = (ptrdiff_t)6;
          ldb_t = (ptrdiff_t)25;
          ldc_t = (ptrdiff_t)6;
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
                &ldb_t, &beta1, &dv1[0], &ldc_t);
          memcpy(&b_X[0], &a[0], 150U * sizeof(real_T));
          b_st.site = &oj_emlrtRSI;
          mldivide(&b_st, dv1, b_X);
          memcpy(&X[0], &b_X[0], 150U * sizeof(real_T));
          X_not_empty = true;
        }

        st.site = &lj_emlrtRSI;
        memcpy(&b_X[0], &X[0], 150U * sizeof(real_T));
        b_st.site = &hk_emlrtRSI;
        if (!(25 == (i39 - i38) * (i41 - i40))) {
          if ((i39 - i38) * (i41 - i40) == 1) {
            emlrtErrorWithMessageIdR2012b(&b_st, &bn_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2012b(&b_st, &cn_emlrtRTEI,
              "Coder:MATLAB:innerdim", 0);
          }
        }

        i42 = b_metric->size[0] * b_metric->size[1];
        b_metric->size[0] = i39 - i38;
        b_metric->size[1] = i41 - i40;
        emxEnsureCapacity_real32_T(&st, b_metric, i42, &lk_emlrtRTEI);
        loop_ub = i41 - i40;
        for (i42 = 0; i42 < loop_ub; i42++) {
          b_loop_ub = i39 - i38;
          for (i41 = 0; i41 < b_loop_ub; i41++) {
            b_metric->data[i41 + b_metric->size[0] * i42] = metric->data[(i38 +
              i41) + metric->size[0] * (i40 + i42)];
          }
        }

        for (i38 = 0; i38 < 6; i38++) {
          beta[i38] = 0.0F;
          for (i40 = 0; i40 < 25; i40++) {
            x = beta[i38] + (real32_T)b_X[i38 + 6 * i40] * b_metric->data[i40];
            beta[i38] = x;
          }
        }

        st.site = &mj_emlrtRSI;
        b_st.site = &if_emlrtRSI;
        x = -(2.0F * beta[1] * beta[2] - beta[3] * beta[4]) / (4.0F * beta[0] *
          beta[1] - beta[4] * beta[4]);
        st.site = &nj_emlrtRSI;
        b_st.site = &if_emlrtRSI;
        y = -(2.0F * beta[0] * beta[3] - beta[2] * beta[4]) / (4.0F * beta[0] *
          beta[1] - beta[4] * beta[4]);
        if ((!((!muSingleScalarIsInf(x)) && (!muSingleScalarIsNaN(x)))) ||
            (muSingleScalarAbs(x) > 2.0F) || (!((!muSingleScalarIsInf(y)) &&
              (!muSingleScalarIsNaN(y)))) || (muSingleScalarAbs(y) > 2.0F)) {
          x = 0.0F;
          y = 0.0F;
        }

        for (i38 = 0; i38 < 2; i38++) {
          loc[i38] = loc_size[i38];
          iv16[i38] = 1 + i38;
        }

        if ((loc[0] != iv16[0]) || (loc[1] != iv16[1])) {
          emlrtSizeEqCheckNDR2012b(&loc[0], &iv16[0], &yb_emlrtECI, sp);
        }

        loop_ub = loc_size[1];
        for (i38 = 0; i38 < loop_ub; i38++) {
          d_loc_data[i38] = (real32_T)loc_data[loc_size[0] * i38];
        }

        b_x[0] = x;
        b_x[1] = y;
        subPixelLoc_size[0] = 1;
        subPixelLoc_size[1] = 2;
        for (i38 = 0; i38 < 2; i38++) {
          subPixelLoc_data[i38] = d_loc_data[i38] + b_x[i38];
        }
      }
    }
  }

  if (guard1) {
    subPixelLoc_size[0] = 1;
    subPixelLoc_size[1] = loc_size[1];
    loop_ub = loc_size[0] * loc_size[1];
    for (i38 = 0; i38 < loop_ub; i38++) {
      subPixelLoc_data[i38] = (real32_T)loc_data[i38];
    }
  }

  emxFree_real32_T(&b_metric);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void X_not_empty_init(void)
{
  X_not_empty = false;
}

void subPixelLocation(const emlrtStack *sp, const emxArray_real32_T *metric,
                      emxArray_real_T *loc)
{
  int32_T i65;
  int32_T loc_size[2];
  int32_T id;
  int32_T tmp_size[2];
  int32_T i66;
  int32_T loop_ub;
  int8_T i67;
  int8_T tmp_data[2];
  int32_T b_id;
  real_T loc_data[2];
  real32_T b_tmp_data[2];
  int32_T b_tmp_size[2];
  int32_T iv26[2];
  real_T c_tmp_data[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i65 = loc->size[0];
  if (0 <= i65 - 1) {
    loc_size[0] = 1;
    tmp_size[0] = 1;
  }

  for (id = 0; id < i65; id++) {
    i66 = loc->size[0];
    loop_ub = id + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i66))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i66, &rl_emlrtBCI, sp);
    }

    i67 = (int8_T)((int8_T)loc->size[1] - 1);
    loop_ub = i67;
    for (i66 = 0; i66 <= loop_ub; i66++) {
      tmp_data[i66] = (int8_T)i66;
    }

    loop_ub = loc->size[1];
    i66 = loc->size[0];
    if (!((id + 1 >= 1) && (id + 1 <= i66))) {
      emlrtDynamicBoundsCheckR2012b(id + 1, 1, i66, &ql_emlrtBCI, sp);
    }

    b_id = id + 1;
    loc_size[1] = loop_ub;
    for (i66 = 0; i66 < loop_ub; i66++) {
      loc_data[i66] = loc->data[(b_id + loc->size[0] * i66) - 1];
    }

    st.site = &ij_emlrtRSI;
    subPixelLocationImpl(&st, metric, loc_data, loc_size, b_tmp_data, b_tmp_size);
    tmp_size[1] = b_tmp_size[1];
    loop_ub = b_tmp_size[0] * b_tmp_size[1];
    for (i66 = 0; i66 < loop_ub; i66++) {
      c_tmp_data[i66] = b_tmp_data[i66];
    }

    iv26[0] = 1;
    iv26[1] = i67 + 1;
    emlrtSubAssignSizeCheckR2012b(&iv26[0], 2, &tmp_size[0], 2, &jc_emlrtECI, sp);
    loop_ub = b_tmp_size[1];
    for (i66 = 0; i66 < loop_ub; i66++) {
      loc->data[id + loc->size[0] * tmp_data[i66]] = c_tmp_data[i66];
    }
  }
}

/* End of code generation (subPixelLocation.c) */
