/*
 * findCorners.c
 *
 * Code generation for function 'findCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "conv2.h"
#include "power.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "createCorrelationPatch.h"
#include "nullAssignment.h"
#include "scoreCorners.h"
#include "refineCorners.h"
#include "nonMaximumSuppression.h"
#include "atan2.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo fe_emlrtRSI = { 17, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ge_emlrtRSI = { 18, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo he_emlrtRSI = { 21, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ie_emlrtRSI = { 44, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo je_emlrtRSI = { 47, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ke_emlrtRSI = { 48, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo le_emlrtRSI = { 49, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo me_emlrtRSI = { 50, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ne_emlrtRSI = { 71, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo oe_emlrtRSI = { 84, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo pe_emlrtRSI = { 90, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo qe_emlrtRSI = { 91, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo re_emlrtRSI = { 92, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo se_emlrtRSI = { 107, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo te_emlrtRSI = { 112, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ue_emlrtRSI = { 113, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ve_emlrtRSI = { 114, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo we_emlrtRSI = { 115, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo xe_emlrtRSI = { 122, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ye_emlrtRSI = { 123, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo fh_emlrtRSI = { 13, "sign",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sign.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 2, 21, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 75, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 88, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 122, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo s_emlrtECI = { 2, 124, 19, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo t_emlrtECI = { -1, 123, 25, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo u_emlrtECI = { -1, 123, 59, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtBCInfo s_emlrtBCI = { -1, -1, 123, 90, "corners3.v2", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 123, 56, "corners3.v2", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 122, 51, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 122, 33, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtECInfo v_emlrtECI = { -1, 119, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo w_emlrtECI = { -1, 118, 11, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 118, 42, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 118, 25, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtECInfo x_emlrtECI = { -1, 88, 12, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtBCInfo y_emlrtBCI = { -1, -1, 119, 17, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 119, 39, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

/* Function Definitions */
void findCorners(c_chessboardsFromCorners_mexSta *SD, const emlrtStack *sp,
                 const uint8_T img[921600], real_T tau, real_T refine_corners,
                 struct1_T *corners3)
{
  int32_T i12;
  static const real_T dv0[9] = { -1.0, -1.0, -1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0
  };

  static const real_T dv1[9] = { -1.0, 0.0, 1.0, -1.0, 0.0, 1.0, -1.0, 0.0, 1.0
  };

  boolean_T overflow;
  int32_T k;
  real_T img_weight;
  int32_T i;
  real_T img_angle;
  real_T mtmp;
  real_T b_mtmp;
  int32_T template_class;
  emxArray_real_T *template_a1;
  emxArray_real_T *template_a2;
  emxArray_real_T *template_b1;
  emxArray_real_T *template_b2;
  static const real_T template_props[18] = { 0.0, 0.78539816339744828, 0.0,
    0.78539816339744828, 0.0, 0.78539816339744828, 1.5707963267948966,
    -0.78539816339744828, 1.5707963267948966, -0.78539816339744828,
    1.5707963267948966, -0.78539816339744828, 4.0, 4.0, 8.0, 8.0, 12.0, 12.0 };

  emxArray_real_T *corners_p;
  struct_T corners2;
  int32_T loop_ub;
  real_T img_corners_mu;
  emxArray_boolean_T *idx;
  emxArray_boolean_T *r7;
  real_T dv2[3];
  emxArray_int32_T *r8;
  int32_T end;
  int32_T tmp_data[2];
  emxArray_real_T *b_corners3;
  int32_T iv6[2];
  int32_T c_corners3[2];
  emxArray_real_T *d_corners3;
  emxArray_real_T *varargin_2;
  emxArray_real_T *corners_n1;
  emxArray_real_T *x;
  emxArray_real_T *b_varargin_2;
  int32_T e_corners3[2];
  int32_T b_corners_n1[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 5U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 0);
  for (i12 = 0; i12 < 921600; i12++) {
    SD->f0.img[i12] = (real_T)img[i12] / 255.0;
  }

  /*  3 scales */
  /*  sobel masks */
  /*  compute image derivatives (for principal axes estimation) */
  st.site = &fe_emlrtRSI;
  conv2(SD->f0.img, dv0, SD->f0.img_du);
  st.site = &ge_emlrtRSI;
  conv2(SD->f0.img, dv1, SD->f0.img_dv);
  c_atan2(SD->f0.img_dv, SD->f0.img_du, SD->f0.img_angle);
  st.site = &he_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  b_power(SD->f0.img_du, SD->f0.img_weight);
  b_st.site = &he_emlrtRSI;
  b_power(SD->f0.img_dv, SD->f0.img_du);
  overflow = false;
  for (k = 0; k < 921600; k++) {
    img_weight = SD->f0.img_weight[k] + SD->f0.img_du[k];
    if (overflow || (img_weight < 0.0)) {
      overflow = true;
    } else {
      overflow = false;
    }

    SD->f0.img_weight[k] = img_weight;
  }

  if (overflow) {
    b_st.site = &ob_emlrtRSI;
    error(&b_st);
  }

  for (k = 0; k < 921600; k++) {
    SD->f0.img_weight[k] = muDoubleScalarSqrt(SD->f0.img_weight[k]);
  }

  /*  correct angle to lie in between [0,pi] */
  for (i = 0; i < 921600; i++) {
    img_angle = SD->f0.img_angle[i];
    if (SD->f0.img_angle[i] < 0.0) {
      img_angle = SD->f0.img_angle[i] + 3.1415926535897931;
    }

    SD->f0.img_angle[i] = img_angle;
  }

  for (i = 0; i < 921600; i++) {
    img_angle = SD->f0.img_angle[i];
    if (SD->f0.img_angle[i] > 3.1415926535897931) {
      img_angle = SD->f0.img_angle[i] - 3.1415926535897931;
    }

    SD->f0.img_angle[i] = img_angle;
  }

  /*  scale input image */
  mtmp = SD->f0.img[0];
  for (k = 1; k + 1 < 921601; k++) {
    if (SD->f0.img[k] < mtmp) {
      mtmp = SD->f0.img[k];
    }
  }

  b_mtmp = SD->f0.img[0];
  for (k = 1; k + 1 < 921601; k++) {
    if (SD->f0.img[k] > b_mtmp) {
      b_mtmp = SD->f0.img[k];
    }
  }

  b_mtmp -= mtmp;

  /*  template properties */
  /* disp('Filtering ...'); */
  /*  filter image */
  for (i12 = 0; i12 < 921600; i12++) {
    SD->f0.img_corners[i12] = 0.0;
    SD->f0.img[i12] = (SD->f0.img[i12] - mtmp) / b_mtmp;
  }

  template_class = 0;
  emxInit_real_T(sp, &template_a1, 2, &p_emlrtRTEI, true);
  emxInit_real_T(sp, &template_a2, 2, &p_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b1, 2, &p_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b2, 2, &p_emlrtRTEI, true);
  while (template_class < 6) {
    covrtLogFor(&emlrtCoverageInstance, 5U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 1);

    /*  create correlation template */
    st.site = &ie_emlrtRSI;
    createCorrelationPatch(&st, template_props[template_class], template_props[6
      + template_class], template_props[12 + template_class], template_a1,
      template_a2, template_b1, template_b2);

    /*  filter image according with current template */
    st.site = &je_emlrtRSI;
    b_conv2(SD->f0.img, template_a1->data, template_a1->size,
            SD->f0.img_corners_a1);
    st.site = &ke_emlrtRSI;
    b_conv2(SD->f0.img, template_a2->data, template_a2->size,
            SD->f0.img_corners_a2);
    st.site = &le_emlrtRSI;
    b_conv2(SD->f0.img, template_b1->data, template_b1->size,
            SD->f0.img_corners_b1);
    st.site = &me_emlrtRSI;
    b_conv2(SD->f0.img, template_b2->data, template_b2->size,
            SD->f0.img_corners_b2);

    /*  compute mean */
    /*  case 1: a=white, b=black */
    /*  case 2: b=white, a=black */
    for (k = 0; k < 921600; k++) {
      img_corners_mu = (((SD->f0.img_corners_a1[k] + SD->f0.img_corners_a2[k]) +
                         SD->f0.img_corners_b1[k]) + SD->f0.img_corners_b2[k]) /
        4.0;
      SD->f0.img_corners_1[k] = muDoubleScalarMin(muDoubleScalarMin
        (SD->f0.img_corners_a1[k] - img_corners_mu, SD->f0.img_corners_a2[k] -
         img_corners_mu), muDoubleScalarMin(img_corners_mu -
        SD->f0.img_corners_b1[k], img_corners_mu - SD->f0.img_corners_b2[k]));
      SD->f0.img_corners_a1[k] = img_corners_mu - SD->f0.img_corners_a1[k];
      SD->f0.img_corners_a2[k] = img_corners_mu - SD->f0.img_corners_a2[k];
      SD->f0.img_corners_mu[k] = img_corners_mu;
    }

    /*  update corner map */
    for (k = 0; k < 921600; k++) {
      SD->f0.img_dv[k] = muDoubleScalarMin(muDoubleScalarMin
        (SD->f0.img_corners_a1[k], SD->f0.img_corners_a2[k]), muDoubleScalarMin
        (SD->f0.img_corners_b1[k] - SD->f0.img_corners_mu[k],
         SD->f0.img_corners_b2[k] - SD->f0.img_corners_mu[k]));
      SD->f0.img_du[k] = SD->f0.img_corners[k];
    }

    for (k = 0; k < 921600; k++) {
      SD->f0.img_du[k] = muDoubleScalarMax(SD->f0.img_du[k],
        SD->f0.img_corners_1[k]);
    }

    for (k = 0; k < 921600; k++) {
      SD->f0.img_corners[k] = muDoubleScalarMax(SD->f0.img_du[k], SD->
        f0.img_dv[k]);
    }

    template_class++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&template_b2);
  emxFree_real_T(&template_b1);
  emxFree_real_T(&template_a2);
  emxFree_real_T(&template_a1);
  emxInit_real_T(sp, &corners_p, 2, &p_emlrtRTEI, true);
  emxInitStruct_struct_T(sp, &corners2, &q_emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 5U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 2);

  /*  extract corner candidates via non maximum suppression */
  st.site = &ne_emlrtRSI;
  nonMaximumSuppression(&st, SD->f0.img_corners, corners_p);

  /* disp('Refining ...'); */
  i12 = corners2.v1->size[0] * corners2.v1->size[1];
  corners2.v1->size[0] = corners_p->size[0];
  corners2.v1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners2.v1, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = corners_p->size[0] << 1;
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners2.v1->data[i12] = 0.0;
  }

  i12 = corners2.v2->size[0] * corners2.v2->size[1];
  corners2.v2->size[0] = corners_p->size[0];
  corners2.v2->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners2.v2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = corners_p->size[0] << 1;
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners2.v2->data[i12] = 0.0;
  }

  i12 = corners2.p->size[0] * corners2.p->size[1];
  corners2.p->size[0] = corners_p->size[0];
  corners2.p->size[1] = corners_p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners2.p, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = corners_p->size[0] * corners_p->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners2.p->data[i12] = corners_p->data[i12];
  }

  emxFree_real_T(&corners_p);

  /*  subpixel refinement */
  if (covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 0, refine_corners != 0.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 3);
    st.site = &oe_emlrtRSI;
    refineCorners(&st, SD->f0.img_angle, SD->f0.img_weight, &corners2);
  }

  emxInit_boolean_T(sp, &idx, 1, &r_emlrtRTEI, true);
  covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 4);

  /*  remove corners without edges */
  loop_ub = corners2.v1->size[0];
  i12 = idx->size[0];
  idx->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)idx, i12, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx->data[i12] = (corners2.v1->data[i12] == 0.0);
  }

  emxInit_boolean_T(sp, &r7, 1, &p_emlrtRTEI, true);
  loop_ub = corners2.v1->size[0];
  i12 = r7->size[0];
  r7->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i12, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    r7->data[i12] = (corners2.v1->data[i12 + corners2.v1->size[0]] == 0.0);
  }

  i12 = idx->size[0];
  k = r7->size[0];
  if (i12 != k) {
    emlrtSizeEqCheck1DR2012b(i12, k, &x_emlrtECI, sp);
  }

  i12 = idx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)idx, i12, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  loop_ub = idx->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx->data[i12] = (idx->data[i12] && r7->data[i12]);
  }

  emxFree_boolean_T(&r7);
  st.site = &pe_emlrtRSI;
  b_nullAssignment(&st, corners2.p, idx);
  st.site = &qe_emlrtRSI;
  b_nullAssignment(&st, corners2.v1, idx);
  st.site = &re_emlrtRSI;
  b_nullAssignment(&st, corners2.v2, idx);

  /* disp('Scoring ...'); */
  i12 = corners3->score->size[0];
  corners3->score->size[0] = corners2.p->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->score, i12, (int32_T)
                    sizeof(real_T), &p_emlrtRTEI);
  loop_ub = corners2.p->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners3->score->data[i12] = 0.0;
  }

  i12 = corners3->p->size[0] * corners3->p->size[1];
  corners3->p->size[0] = corners2.p->size[0];
  corners3->p->size[1] = corners2.p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->p, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = corners2.p->size[0] * corners2.p->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners3->p->data[i12] = corners2.p->data[i12];
  }

  i12 = corners3->v1->size[0] * corners3->v1->size[1];
  corners3->v1->size[0] = corners2.v1->size[0];
  corners3->v1->size[1] = corners2.v1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v1, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = corners2.v1->size[0] * corners2.v1->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners3->v1->data[i12] = corners2.v1->data[i12];
  }

  i12 = corners3->v2->size[0] * corners3->v2->size[1];
  corners3->v2->size[0] = corners2.v2->size[0];
  corners3->v2->size[1] = corners2.v2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = corners2.v2->size[0] * corners2.v2->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners3->v2->data[i12] = corners2.v2->data[i12];
  }

  emxFreeStruct_struct_T(&corners2);

  /*  score corners */
  for (i12 = 0; i12 < 3; i12++) {
    dv2[i12] = 4.0 + 4.0 * (real_T)i12;
  }

  st.site = &se_emlrtRSI;
  scoreCorners(&st, SD->f0.img, SD->f0.img_weight, corners3, dv2);

  /*  remove low scoring corners */
  i12 = idx->size[0];
  idx->size[0] = corners3->score->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)idx, i12, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  loop_ub = corners3->score->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx->data[i12] = (corners3->score->data[i12] < tau);
  }

  st.site = &te_emlrtRSI;
  b_nullAssignment(&st, corners3->p, idx);
  st.site = &ue_emlrtRSI;
  b_nullAssignment(&st, corners3->v1, idx);
  st.site = &ve_emlrtRSI;
  b_nullAssignment(&st, corners3->v2, idx);
  st.site = &we_emlrtRSI;
  c_nullAssignment(&st, corners3->score, idx);

  /*  make v1(:,1)+v1(:,2) positive (=> comparable to c++ code) */
  i12 = corners3->v1->size[1];
  if (!(1 <= i12)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i12, &x_emlrtBCI, sp);
  }

  i12 = corners3->v1->size[1];
  if (!(2 <= i12)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i12, &w_emlrtBCI, sp);
  }

  i12 = corners3->v1->size[0];
  k = corners3->v1->size[0];
  if (i12 != k) {
    emlrtSizeEqCheck1DR2012b(i12, k, &w_emlrtECI, sp);
  }

  loop_ub = corners3->v1->size[0];
  i12 = idx->size[0];
  idx->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)idx, i12, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx->data[i12] = (corners3->v1->data[i12] + corners3->v1->data[i12 +
                      corners3->v1->size[0]] < 0.0);
  }

  emxInit_int32_T(sp, &r8, 1, &p_emlrtRTEI, true);
  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i12 = r8->size[0];
  r8->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r8, i12, (int32_T)sizeof(int32_T),
                    &p_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r8->data[k] = i + 1;
      k++;
    }
  }

  end = corners3->v1->size[0];
  loop_ub = r8->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r8->data[i12];
    if (!((k >= 1) && (k <= end))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, end, &y_emlrtBCI, sp);
    }
  }

  loop_ub = corners3->v1->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    tmp_data[i12] = i12;
  }

  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i12 = r8->size[0];
  r8->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r8, i12, (int32_T)sizeof(int32_T),
                    &p_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r8->data[k] = i + 1;
      k++;
    }
  }

  end = corners3->v1->size[0];
  i = r8->size[0];
  for (i12 = 0; i12 < i; i12++) {
    k = r8->data[i12];
    if (!((k >= 1) && (k <= end))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, end, &ab_emlrtBCI, sp);
    }
  }

  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i12 = r8->size[0];
  r8->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r8, i12, (int32_T)sizeof(int32_T),
                    &p_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r8->data[k] = i + 1;
      k++;
    }
  }

  emxInit_real_T(sp, &b_corners3, 2, &p_emlrtRTEI, true);
  iv6[0] = r8->size[0];
  iv6[1] = loop_ub;
  loop_ub = corners3->v1->size[1];
  i12 = b_corners3->size[0] * b_corners3->size[1];
  b_corners3->size[0] = r8->size[0];
  b_corners3->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_corners3, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    i = r8->size[0];
    for (k = 0; k < i; k++) {
      b_corners3->data[k + b_corners3->size[0] * i12] = corners3->v1->data
        [(r8->data[k] + corners3->v1->size[0] * i12) - 1];
    }
  }

  for (i12 = 0; i12 < 2; i12++) {
    c_corners3[i12] = b_corners3->size[i12];
  }

  emxFree_real_T(&b_corners3);
  emlrtSubAssignSizeCheckR2012b(iv6, 2, c_corners3, 2, &v_emlrtECI, sp);
  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i12 = r8->size[0];
  r8->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r8, i12, (int32_T)sizeof(int32_T),
                    &p_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r8->data[k] = i + 1;
      k++;
    }
  }

  emxFree_boolean_T(&idx);
  emxInit_real_T(sp, &d_corners3, 2, &p_emlrtRTEI, true);
  end = corners3->v1->size[1];
  i12 = d_corners3->size[0] * d_corners3->size[1];
  d_corners3->size[0] = r8->size[0];
  d_corners3->size[1] = end;
  emxEnsureCapacity(sp, (emxArray__common *)d_corners3, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  for (i12 = 0; i12 < end; i12++) {
    loop_ub = r8->size[0];
    for (k = 0; k < loop_ub; k++) {
      d_corners3->data[k + d_corners3->size[0] * i12] = -corners3->v1->data
        [(r8->data[k] + corners3->v1->size[0] * i12) - 1];
    }
  }

  loop_ub = d_corners3->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    i = d_corners3->size[0];
    for (k = 0; k < i; k++) {
      corners3->v1->data[(r8->data[k] + corners3->v1->size[0] * tmp_data[i12]) -
        1] = d_corners3->data[k + d_corners3->size[0] * i12];
    }
  }

  emxFree_real_T(&d_corners3);
  emxFree_int32_T(&r8);
  emxInit_real_T1(sp, &varargin_2, 1, &p_emlrtRTEI, true);

  /*  make all coordinate systems right-handed (reduces matching ambiguities from 8 to 4) */
  i12 = corners3->v1->size[1];
  if (!(2 <= i12)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i12, &v_emlrtBCI, sp);
  }

  i12 = corners3->v1->size[1];
  if (!(1 <= i12)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i12, &u_emlrtBCI, sp);
  }

  st.site = &xe_emlrtRSI;
  loop_ub = corners3->v1->size[0];
  i12 = varargin_2->size[0];
  varargin_2->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)varargin_2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    varargin_2->data[i12] = -corners3->v1->data[i12];
  }

  b_st.site = &bd_emlrtRSI;
  k = corners3->v1->size[0];
  c_st.site = &cd_emlrtRSI;
  i12 = corners3->v1->size[0];
  overflow = (k == i12);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (k == varargin_2->size[0]) {
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &corners_n1, 2, &s_emlrtRTEI, true);
  loop_ub = corners3->v1->size[0];
  i12 = corners_n1->size[0] * corners_n1->size[1];
  corners_n1->size[0] = loop_ub;
  corners_n1->size[1] = 2;
  emxEnsureCapacity(&b_st, (emxArray__common *)corners_n1, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners_n1->data[i12] = corners3->v1->data[i12 + corners3->v1->size[0]];
  }

  loop_ub = varargin_2->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners_n1->data[i12 + corners_n1->size[0]] = varargin_2->data[i12];
  }

  emxInit_real_T1(&b_st, &x, 1, &p_emlrtRTEI, true);
  i12 = corners3->v2->size[1];
  if (!(1 <= i12)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i12, &t_emlrtBCI, sp);
  }

  i12 = corners_n1->size[0];
  k = corners3->v2->size[0];
  if (i12 != k) {
    emlrtSizeEqCheck1DR2012b(i12, k, &t_emlrtECI, sp);
  }

  i12 = corners3->v2->size[1];
  if (!(2 <= i12)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i12, &s_emlrtBCI, sp);
  }

  i12 = corners_n1->size[0];
  k = corners3->v2->size[0];
  if (i12 != k) {
    emlrtSizeEqCheck1DR2012b(i12, k, &u_emlrtECI, sp);
  }

  loop_ub = corners_n1->size[0];
  i12 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)x, i12, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    x->data[i12] = corners_n1->data[i12] * corners3->v2->data[i12];
  }

  loop_ub = corners_n1->size[0];
  i12 = varargin_2->size[0];
  varargin_2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    varargin_2->data[i12] = corners_n1->data[i12 + corners_n1->size[0]] *
      corners3->v2->data[i12 + corners3->v2->size[0]];
  }

  i12 = x->size[0];
  k = varargin_2->size[0];
  if (i12 != k) {
    emlrtSizeEqCheck1DR2012b(i12, k, &t_emlrtECI, sp);
  }

  st.site = &ye_emlrtRSI;
  i12 = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, i12, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  loop_ub = x->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    x->data[i12] += varargin_2->data[i12];
  }

  b_st.site = &fh_emlrtRSI;
  i12 = varargin_2->size[0];
  varargin_2->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargin_2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = x->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    varargin_2->data[i12] = x->data[i12];
  }

  c_st.site = &qb_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= x->size[0]; k++) {
    varargin_2->data[k] = muDoubleScalarSign(varargin_2->data[k]);
  }

  emxFree_real_T(&x);
  emxInit_real_T1(&b_st, &b_varargin_2, 1, &p_emlrtRTEI, true);
  i12 = b_varargin_2->size[0];
  b_varargin_2->size[0] = varargin_2->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = varargin_2->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_varargin_2->data[i12] = -varargin_2->data[i12];
  }

  emxFree_real_T(&varargin_2);
  i12 = corners_n1->size[0] * corners_n1->size[1];
  corners_n1->size[0] = b_varargin_2->size[0];
  corners_n1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners_n1, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  loop_ub = b_varargin_2->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    for (k = 0; k < 2; k++) {
      corners_n1->data[i12 + corners_n1->size[0] * k] = b_varargin_2->data[i12];
    }
  }

  emxFree_real_T(&b_varargin_2);
  for (i12 = 0; i12 < 2; i12++) {
    e_corners3[i12] = corners3->v2->size[i12];
  }

  for (i12 = 0; i12 < 2; i12++) {
    b_corners_n1[i12] = corners_n1->size[i12];
  }

  if ((e_corners3[0] != b_corners_n1[0]) || (e_corners3[1] != b_corners_n1[1]))
  {
    emlrtSizeEqCheckNDR2012b(&e_corners3[0], &b_corners_n1[0], &s_emlrtECI, sp);
  }

  i12 = corners3->v2->size[0] * corners3->v2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v2, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  end = corners3->v2->size[0];
  k = corners3->v2->size[1];
  loop_ub = end * k;
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners3->v2->data[i12] *= corners_n1->data[i12];
  }

  emxFree_real_T(&corners_n1);

  /*  convert to 0-based index */
  i12 = corners3->p->size[0] * corners3->p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->p, i12, (int32_T)sizeof
                    (real_T), &p_emlrtRTEI);
  end = corners3->p->size[0];
  k = corners3->p->size[1];
  loop_ub = end * k;
  for (i12 = 0; i12 < loop_ub; i12++) {
    corners3->p->data[i12]--;
  }

  /* disp('Find Corners OK'); */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (findCorners.c) */
