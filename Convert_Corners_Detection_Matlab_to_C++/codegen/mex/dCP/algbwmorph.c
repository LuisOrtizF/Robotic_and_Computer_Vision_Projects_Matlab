/*
 * algbwmorph.c
 *
 * Code generation for function 'algbwmorph'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "algbwmorph.h"
#include "dCP_emxutil.h"
#include "isequal.h"
#include "bwlookup.h"

/* Variable Definitions */
static emlrtRSInfo xc_emlrtRSI = { 33, /* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 230,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 235,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 240,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 245,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 1,/* lineNo */
  25,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 231,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 231,/* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 232,/* lineNo */
  12,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 232,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 236,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = { 236,/* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = { 237,/* lineNo */
  12,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 237,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 241,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 241,/* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = { 242,/* lineNo */
  12,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 242,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 246,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = { 246,/* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = { 247,/* lineNo */
  12,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo el_emlrtRTEI = { 247,/* lineNo */
  20,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRTEInfo fl_emlrtRTEI = { 230,/* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { 2,  /* nDims */
  231,                                 /* lineNo */
  15,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtBCInfo li_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ni_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bc_emlrtECI = { -1, /* nDims */
  232,                                 /* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { 2,  /* nDims */
  236,                                 /* lineNo */
  15,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtBCInfo ri_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo si_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ti_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ui_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo dc_emlrtECI = { -1, /* nDims */
  237,                                 /* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtECInfo ec_emlrtECI = { 2,  /* nDims */
  241,                                 /* lineNo */
  15,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtBCInfo xi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fc_emlrtECI = { -1, /* nDims */
  242,                                 /* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtECInfo gc_emlrtECI = { 2,  /* nDims */
  246,                                 /* lineNo */
  15,                                  /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtBCInfo ej_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ij_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hc_emlrtECI = { -1, /* nDims */
  247,                                 /* lineNo */
  9,                                   /* colNo */
  "algbwmorph",                        /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pName */
};

static emlrtRSInfo ql_emlrtRSI = { 247,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 242,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 237,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 232,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/images/images/+images/+internal/algbwmorph.m"/* pathName */
};

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
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
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }

      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void algbwmorph(const emlrtStack *sp, emxArray_boolean_T *bw)
{
  emxArray_boolean_T *last_aout;
  emxArray_boolean_T *m;
  emxArray_int32_T *r56;
  emxArray_int32_T *r57;
  int32_T i49;
  int32_T loop_ub;
  int32_T b_m;
  int32_T b_bw[2];
  int32_T c_m[2];
  int32_T i50;
  int32_T i51;
  int32_T i52;
  int32_T i53;
  int32_T i54;
  int32_T i55;
  int32_T i56;
  int32_T i57;
  int32_T i58;
  int32_T i59;
  int32_T i60;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &last_aout, 2, &nk_emlrtRTEI, true);
  emxInit_boolean_T(sp, &m, 2, &fl_emlrtRTEI, true);
  emxInit_int32_T(sp, &r56, 1, &jc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r57, 1, &jc_emlrtRTEI, true);
  do {
    i49 = last_aout->size[0] * last_aout->size[1];
    last_aout->size[0] = bw->size[0];
    last_aout->size[1] = bw->size[1];
    emxEnsureCapacity_boolean_T(sp, last_aout, i49, &nk_emlrtRTEI);
    loop_ub = bw->size[0] * bw->size[1];
    for (i49 = 0; i49 < loop_ub; i49++) {
      last_aout->data[i49] = bw->data[i49];
    }

    st.site = &xc_emlrtRSI;
    b_st.site = &yc_emlrtRSI;
    bwlookup(&b_st, bw, m);
    i49 = m->size[0] * m->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &ok_emlrtRTEI);
    b_m = m->size[0];
    loop_ub = m->size[1];
    loop_ub *= b_m;
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = !m->data[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      b_bw[i49] = bw->size[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      c_m[i49] = m->size[i49];
    }

    if ((b_bw[0] != c_m[0]) || (b_bw[1] != c_m[1])) {
      emlrtSizeEqCheckNDR2012b(&b_bw[0], &c_m[0], &ac_emlrtECI, &st);
    }

    i49 = m->size[0] * m->size[1];
    m->size[0] = bw->size[0];
    m->size[1] = bw->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &pk_emlrtRTEI);
    loop_ub = bw->size[0] * bw->size[1];
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = (bw->data[i49] && m->data[i49]);
    }

    if (1 > m->size[0]) {
      i49 = 1;
      i50 = -1;
    } else {
      i49 = 2;
      i50 = m->size[0];
      i51 = m->size[0];
      if (!((i51 >= 1) && (i51 <= i50))) {
        emlrtDynamicBoundsCheckR2012b(i51, 1, i50, &li_emlrtBCI, &st);
      }

      i50 = i51 - 1;
    }

    if (1 > m->size[1]) {
      i51 = 1;
      i52 = -1;
    } else {
      i51 = 2;
      i52 = m->size[1];
      i53 = m->size[1];
      if (!((i53 >= 1) && (i53 <= i52))) {
        emlrtDynamicBoundsCheckR2012b(i53, 1, i52, &mi_emlrtBCI, &st);
      }

      i52 = i53 - 1;
    }

    if (1 > bw->size[0]) {
      i53 = 1;
      i54 = -1;
    } else {
      i53 = bw->size[0];
      if (!(1 <= i53)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i53, &ni_emlrtBCI, &st);
      }

      i53 = 2;
      i54 = bw->size[0];
      i55 = bw->size[0];
      if (!((i55 >= 1) && (i55 <= i54))) {
        emlrtDynamicBoundsCheckR2012b(i55, 1, i54, &oi_emlrtBCI, &st);
      }

      i54 = i55 - 1;
    }

    if (1 > bw->size[1]) {
      i55 = 1;
      i56 = -1;
    } else {
      i55 = bw->size[1];
      if (!(1 <= i55)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i55, &pi_emlrtBCI, &st);
      }

      i55 = 2;
      i56 = bw->size[1];
      i57 = bw->size[1];
      if (!((i57 >= 1) && (i57 <= i56))) {
        emlrtDynamicBoundsCheckR2012b(i57, 1, i56, &qi_emlrtBCI, &st);
      }

      i56 = i57 - 1;
    }

    i57 = r56->size[0];
    b_st.site = &tl_emlrtRSI;
    r56->size[0] = div_s32_floor(&b_st, i54, i53) + 1;
    emxEnsureCapacity_int32_T(&st, r56, i57, &qk_emlrtRTEI);
    b_st.site = &tl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i54, i53);
    for (i54 = 0; i54 <= loop_ub; i54++) {
      r56->data[i54] = i53 * i54;
    }

    i53 = r57->size[0];
    b_st.site = &tl_emlrtRSI;
    r57->size[0] = div_s32_floor(&b_st, i56, i55) + 1;
    emxEnsureCapacity_int32_T(&st, r57, i53, &rk_emlrtRTEI);
    b_st.site = &tl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i56, i55);
    for (i53 = 0; i53 <= loop_ub; i53++) {
      r57->data[i53] = i55 * i53;
    }

    b_bw[0] = r56->size[0];
    b_bw[1] = r57->size[0];
    b_st.site = &tl_emlrtRSI;
    c_m[0] = div_s32_floor(&b_st, i50, i49) + 1;
    b_st.site = &tl_emlrtRSI;
    c_m[1] = div_s32_floor(&b_st, i52, i51) + 1;
    emlrtSubAssignSizeCheckR2012b(&b_bw[0], 2, &c_m[0], 2, &bc_emlrtECI, &st);
    b_st.site = &tl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i52, i51);
    for (i52 = 0; i52 <= loop_ub; i52++) {
      b_st.site = &tl_emlrtRSI;
      b_m = div_s32_floor(&b_st, i50, i49);
      for (i53 = 0; i53 <= b_m; i53++) {
        bw->data[r56->data[i53] + bw->size[0] * r57->data[i52]] = m->data[i49 *
          i53 + m->size[0] * (i51 * i52)];
      }
    }

    b_st.site = &ad_emlrtRSI;
    bwlookup(&b_st, bw, m);
    i49 = m->size[0] * m->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &sk_emlrtRTEI);
    b_m = m->size[0];
    loop_ub = m->size[1];
    loop_ub *= b_m;
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = !m->data[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      b_bw[i49] = bw->size[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      c_m[i49] = m->size[i49];
    }

    if ((b_bw[0] != c_m[0]) || (b_bw[1] != c_m[1])) {
      emlrtSizeEqCheckNDR2012b(&b_bw[0], &c_m[0], &cc_emlrtECI, &st);
    }

    i49 = m->size[0] * m->size[1];
    m->size[0] = bw->size[0];
    m->size[1] = bw->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &tk_emlrtRTEI);
    loop_ub = bw->size[0] * bw->size[1];
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = (bw->data[i49] && m->data[i49]);
    }

    if (2 > m->size[0]) {
      i49 = 1;
      i50 = 1;
      i52 = 0;
    } else {
      i49 = 2;
      i50 = 2;
      i51 = m->size[0];
      i52 = m->size[0];
      if (!((i52 >= 1) && (i52 <= i51))) {
        emlrtDynamicBoundsCheckR2012b(i52, 1, i51, &ri_emlrtBCI, &st);
      }
    }

    if (2 > m->size[1]) {
      i51 = 1;
      i53 = 1;
      i55 = 0;
    } else {
      i51 = 2;
      i53 = 2;
      i54 = m->size[1];
      i55 = m->size[1];
      if (!((i55 >= 1) && (i55 <= i54))) {
        emlrtDynamicBoundsCheckR2012b(i55, 1, i54, &si_emlrtBCI, &st);
      }
    }

    if (2 > bw->size[0]) {
      i54 = 1;
      i56 = 1;
      i58 = 0;
    } else {
      i54 = bw->size[0];
      if (!(2 <= i54)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i54, &ti_emlrtBCI, &st);
      }

      i54 = 2;
      i56 = 2;
      i57 = bw->size[0];
      i58 = bw->size[0];
      if (!((i58 >= 1) && (i58 <= i57))) {
        emlrtDynamicBoundsCheckR2012b(i58, 1, i57, &ui_emlrtBCI, &st);
      }
    }

    if (2 > bw->size[1]) {
      i57 = 1;
      i59 = 1;
      i60 = 0;
    } else {
      i57 = bw->size[1];
      if (!(2 <= i57)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i57, &vi_emlrtBCI, &st);
      }

      i57 = 2;
      i59 = 2;
      b_m = bw->size[1];
      i60 = bw->size[1];
      if (!((i60 >= 1) && (i60 <= b_m))) {
        emlrtDynamicBoundsCheckR2012b(i60, 1, b_m, &wi_emlrtBCI, &st);
      }
    }

    b_m = r56->size[0];
    b_st.site = &sl_emlrtRSI;
    r56->size[0] = div_s32_floor(&b_st, i58 - i54, i56) + 1;
    emxEnsureCapacity_int32_T(&st, r56, b_m, &uk_emlrtRTEI);
    b_st.site = &sl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i58 - i54, i56);
    for (i58 = 0; i58 <= loop_ub; i58++) {
      r56->data[i58] = (i54 + i56 * i58) - 1;
    }

    i54 = r57->size[0];
    b_st.site = &sl_emlrtRSI;
    r57->size[0] = div_s32_floor(&b_st, i60 - i57, i59) + 1;
    emxEnsureCapacity_int32_T(&st, r57, i54, &vk_emlrtRTEI);
    b_st.site = &sl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i60 - i57, i59);
    for (i54 = 0; i54 <= loop_ub; i54++) {
      r57->data[i54] = (i57 + i59 * i54) - 1;
    }

    b_bw[0] = r56->size[0];
    b_bw[1] = r57->size[0];
    b_st.site = &sl_emlrtRSI;
    c_m[0] = div_s32_floor(&b_st, i52 - i49, i50) + 1;
    b_st.site = &sl_emlrtRSI;
    c_m[1] = div_s32_floor(&b_st, i55 - i51, i53) + 1;
    emlrtSubAssignSizeCheckR2012b(&b_bw[0], 2, &c_m[0], 2, &dc_emlrtECI, &st);
    b_st.site = &sl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i55 - i51, i53);
    for (i54 = 0; i54 <= loop_ub; i54++) {
      b_st.site = &sl_emlrtRSI;
      b_m = div_s32_floor(&b_st, i52 - i49, i50);
      for (i55 = 0; i55 <= b_m; i55++) {
        bw->data[r56->data[i55] + bw->size[0] * r57->data[i54]] = m->data[((i49
          + i50 * i55) + m->size[0] * ((i51 + i53 * i54) - 1)) - 1];
      }
    }

    b_st.site = &bd_emlrtRSI;
    bwlookup(&b_st, bw, m);
    i49 = m->size[0] * m->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &wk_emlrtRTEI);
    b_m = m->size[0];
    loop_ub = m->size[1];
    loop_ub *= b_m;
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = !m->data[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      b_bw[i49] = bw->size[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      c_m[i49] = m->size[i49];
    }

    if ((b_bw[0] != c_m[0]) || (b_bw[1] != c_m[1])) {
      emlrtSizeEqCheckNDR2012b(&b_bw[0], &c_m[0], &ec_emlrtECI, &st);
    }

    i49 = m->size[0] * m->size[1];
    m->size[0] = bw->size[0];
    m->size[1] = bw->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &xk_emlrtRTEI);
    loop_ub = bw->size[0] * bw->size[1];
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = (bw->data[i49] && m->data[i49]);
    }

    if (1 > m->size[0]) {
      i49 = 1;
      i50 = -1;
    } else {
      i49 = 2;
      i50 = m->size[0];
      i51 = m->size[0];
      if (!((i51 >= 1) && (i51 <= i50))) {
        emlrtDynamicBoundsCheckR2012b(i51, 1, i50, &xi_emlrtBCI, &st);
      }

      i50 = i51 - 1;
    }

    if (2 > m->size[1]) {
      i51 = 1;
      i52 = 1;
      i54 = 0;
    } else {
      i51 = 2;
      i52 = 2;
      i53 = m->size[1];
      i54 = m->size[1];
      if (!((i54 >= 1) && (i54 <= i53))) {
        emlrtDynamicBoundsCheckR2012b(i54, 1, i53, &yi_emlrtBCI, &st);
      }
    }

    if (1 > bw->size[0]) {
      i53 = 1;
      i55 = -1;
    } else {
      i53 = bw->size[0];
      if (!(1 <= i53)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i53, &aj_emlrtBCI, &st);
      }

      i53 = 2;
      i55 = bw->size[0];
      i56 = bw->size[0];
      if (!((i56 >= 1) && (i56 <= i55))) {
        emlrtDynamicBoundsCheckR2012b(i56, 1, i55, &bj_emlrtBCI, &st);
      }

      i55 = i56 - 1;
    }

    if (2 > bw->size[1]) {
      i56 = 1;
      i57 = 1;
      i59 = 0;
    } else {
      i56 = bw->size[1];
      if (!(2 <= i56)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i56, &cj_emlrtBCI, &st);
      }

      i56 = 2;
      i57 = 2;
      i58 = bw->size[1];
      i59 = bw->size[1];
      if (!((i59 >= 1) && (i59 <= i58))) {
        emlrtDynamicBoundsCheckR2012b(i59, 1, i58, &dj_emlrtBCI, &st);
      }
    }

    i58 = r56->size[0];
    b_st.site = &rl_emlrtRSI;
    r56->size[0] = div_s32_floor(&b_st, i55, i53) + 1;
    emxEnsureCapacity_int32_T(&st, r56, i58, &yk_emlrtRTEI);
    b_st.site = &rl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i55, i53);
    for (i55 = 0; i55 <= loop_ub; i55++) {
      r56->data[i55] = i53 * i55;
    }

    i53 = r57->size[0];
    b_st.site = &rl_emlrtRSI;
    r57->size[0] = div_s32_floor(&b_st, i59 - i56, i57) + 1;
    emxEnsureCapacity_int32_T(&st, r57, i53, &al_emlrtRTEI);
    b_st.site = &rl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i59 - i56, i57);
    for (i53 = 0; i53 <= loop_ub; i53++) {
      r57->data[i53] = (i56 + i57 * i53) - 1;
    }

    b_bw[0] = r56->size[0];
    b_bw[1] = r57->size[0];
    b_st.site = &rl_emlrtRSI;
    c_m[0] = div_s32_floor(&b_st, i50, i49) + 1;
    b_st.site = &rl_emlrtRSI;
    c_m[1] = div_s32_floor(&b_st, i54 - i51, i52) + 1;
    emlrtSubAssignSizeCheckR2012b(&b_bw[0], 2, &c_m[0], 2, &fc_emlrtECI, &st);
    b_st.site = &rl_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i54 - i51, i52);
    for (i53 = 0; i53 <= loop_ub; i53++) {
      b_st.site = &rl_emlrtRSI;
      b_m = div_s32_floor(&b_st, i50, i49);
      for (i54 = 0; i54 <= b_m; i54++) {
        bw->data[r56->data[i54] + bw->size[0] * r57->data[i53]] = m->data[i49 *
          i54 + m->size[0] * ((i51 + i52 * i53) - 1)];
      }
    }

    b_st.site = &cd_emlrtRSI;
    bwlookup(&b_st, bw, m);
    i49 = m->size[0] * m->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &bl_emlrtRTEI);
    b_m = m->size[0];
    loop_ub = m->size[1];
    loop_ub *= b_m;
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = !m->data[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      b_bw[i49] = bw->size[i49];
    }

    for (i49 = 0; i49 < 2; i49++) {
      c_m[i49] = m->size[i49];
    }

    if ((b_bw[0] != c_m[0]) || (b_bw[1] != c_m[1])) {
      emlrtSizeEqCheckNDR2012b(&b_bw[0], &c_m[0], &gc_emlrtECI, &st);
    }

    i49 = m->size[0] * m->size[1];
    m->size[0] = bw->size[0];
    m->size[1] = bw->size[1];
    emxEnsureCapacity_boolean_T(&st, m, i49, &cl_emlrtRTEI);
    loop_ub = bw->size[0] * bw->size[1];
    for (i49 = 0; i49 < loop_ub; i49++) {
      m->data[i49] = (bw->data[i49] && m->data[i49]);
    }

    if (2 > m->size[0]) {
      i49 = 1;
      i50 = 1;
      i52 = 0;
    } else {
      i49 = 2;
      i50 = 2;
      i51 = m->size[0];
      i52 = m->size[0];
      if (!((i52 >= 1) && (i52 <= i51))) {
        emlrtDynamicBoundsCheckR2012b(i52, 1, i51, &ej_emlrtBCI, &st);
      }
    }

    if (1 > m->size[1]) {
      i51 = 1;
      i53 = -1;
    } else {
      i51 = 2;
      i53 = m->size[1];
      i54 = m->size[1];
      if (!((i54 >= 1) && (i54 <= i53))) {
        emlrtDynamicBoundsCheckR2012b(i54, 1, i53, &fj_emlrtBCI, &st);
      }

      i53 = i54 - 1;
    }

    if (2 > bw->size[0]) {
      i54 = 1;
      i55 = 1;
      i57 = 0;
    } else {
      i54 = bw->size[0];
      if (!(2 <= i54)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i54, &gj_emlrtBCI, &st);
      }

      i54 = 2;
      i55 = 2;
      i56 = bw->size[0];
      i57 = bw->size[0];
      if (!((i57 >= 1) && (i57 <= i56))) {
        emlrtDynamicBoundsCheckR2012b(i57, 1, i56, &hj_emlrtBCI, &st);
      }
    }

    if (1 > bw->size[1]) {
      i56 = 1;
      i58 = -1;
    } else {
      i56 = bw->size[1];
      if (!(1 <= i56)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i56, &ij_emlrtBCI, &st);
      }

      i56 = 2;
      i58 = bw->size[1];
      i59 = bw->size[1];
      if (!((i59 >= 1) && (i59 <= i58))) {
        emlrtDynamicBoundsCheckR2012b(i59, 1, i58, &jj_emlrtBCI, &st);
      }

      i58 = i59 - 1;
    }

    i59 = r56->size[0];
    b_st.site = &ql_emlrtRSI;
    r56->size[0] = div_s32_floor(&b_st, i57 - i54, i55) + 1;
    emxEnsureCapacity_int32_T(&st, r56, i59, &dl_emlrtRTEI);
    b_st.site = &ql_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i57 - i54, i55);
    for (i57 = 0; i57 <= loop_ub; i57++) {
      r56->data[i57] = (i54 + i55 * i57) - 1;
    }

    i54 = r57->size[0];
    b_st.site = &ql_emlrtRSI;
    r57->size[0] = div_s32_floor(&b_st, i58, i56) + 1;
    emxEnsureCapacity_int32_T(&st, r57, i54, &el_emlrtRTEI);
    b_st.site = &ql_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i58, i56);
    for (i54 = 0; i54 <= loop_ub; i54++) {
      r57->data[i54] = i56 * i54;
    }

    b_bw[0] = r56->size[0];
    b_bw[1] = r57->size[0];
    b_st.site = &ql_emlrtRSI;
    c_m[0] = div_s32_floor(&b_st, i52 - i49, i50) + 1;
    b_st.site = &ql_emlrtRSI;
    c_m[1] = div_s32_floor(&b_st, i53, i51) + 1;
    emlrtSubAssignSizeCheckR2012b(&b_bw[0], 2, &c_m[0], 2, &hc_emlrtECI, &st);
    b_st.site = &ql_emlrtRSI;
    loop_ub = div_s32_floor(&b_st, i53, i51);
    for (i53 = 0; i53 <= loop_ub; i53++) {
      b_st.site = &ql_emlrtRSI;
      b_m = div_s32_floor(&b_st, i52 - i49, i50);
      for (i54 = 0; i54 <= b_m; i54++) {
        bw->data[r56->data[i54] + bw->size[0] * r57->data[i53]] = m->data[((i49
          + i50 * i54) + m->size[0] * (i51 * i53)) - 1];
      }
    }
  } while (!isequal(last_aout, bw));

  emxFree_int32_T(&r57);
  emxFree_int32_T(&r56);
  emxFree_boolean_T(&m);
  emxFree_boolean_T(&last_aout);

  /*  the output is not changing anymore */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (algbwmorph.c) */
