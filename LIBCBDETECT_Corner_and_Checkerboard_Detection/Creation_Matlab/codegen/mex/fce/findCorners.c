/*
 * findCorners.c
 *
 * Code generation for function 'findCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "findCorners.h"
#include "conv2.h"
#include "power.h"
#include "fce_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "createCorrelationPatch.h"
#include "nullAssignment.h"
#include "scoreCorners.h"
#include "refineCorners.h"
#include "nonMaximumSuppression.h"
#include "atan2.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 17, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo e_emlrtRSI = { 18, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo f_emlrtRSI = { 21, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo g_emlrtRSI = { 44, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo h_emlrtRSI = { 47, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo i_emlrtRSI = { 48, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo j_emlrtRSI = { 49, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo k_emlrtRSI = { 50, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo l_emlrtRSI = { 71, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo m_emlrtRSI = { 84, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo n_emlrtRSI = { 90, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo o_emlrtRSI = { 91, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo p_emlrtRSI = { 92, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo q_emlrtRSI = { 107, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo r_emlrtRSI = { 112, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo s_emlrtRSI = { 113, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo t_emlrtRSI = { 114, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo u_emlrtRSI = { 115, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo v_emlrtRSI = { 122, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo w_emlrtRSI = { 123, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRSInfo ud_emlrtRSI = { 13, "sign",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sign.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 2, 21, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 75, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 88, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 122, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo emlrtECI = { -1, 88, 12, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo b_emlrtECI = { -1, 118, 11, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo c_emlrtECI = { -1, 119, 5, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo d_emlrtECI = { -1, 123, 25, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo e_emlrtECI = { -1, 123, 59, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtECInfo f_emlrtECI = { 2, 124, 19, "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 119, 17, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 119, 39, "corners3.v1", "findCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
  0 };

/* Function Definitions */
void findCorners(fceStackData *SD, const emlrtStack *sp, const uint8_T img
                 [921600], struct_T *corners3)
{
  int32_T i1;
  static const real_T dv0[9] = { -1.0, 0.0, 1.0, -1.0, 0.0, 1.0, -1.0, 0.0, 1.0
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
  b_struct_T corners2;
  real_T img_corners_mu;
  emxArray_boolean_T *idx;
  emxArray_boolean_T *r0;
  emxArray_real_T *r1;
  real_T dv1[3];
  emxArray_int32_T *r2;
  int32_T end;
  emxArray_real_T *b_corners3;
  int32_T iv0[2];
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
  covrtLogFcn(&emlrtCoverageInstance, 1U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 0);
  for (i1 = 0; i1 < 921600; i1++) {
    SD->f0.img[i1] = (real_T)img[i1] / 255.0;
  }

  /*  3 scales */
  /*  sobel masks */
  /*  compute image derivatives (for principal axes estimation) */
  st.site = &d_emlrtRSI;
  conv2(SD->f0.img, SD->f0.img_du);
  st.site = &e_emlrtRSI;
  b_conv2(SD->f0.img, dv0, SD->f0.img_dv);
  b_atan2(SD->f0.img_dv, SD->f0.img_du, SD->f0.img_angle);
  st.site = &f_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  power(SD->f0.img_du, SD->f0.img_weight);
  b_st.site = &f_emlrtRSI;
  power(SD->f0.img_dv, SD->f0.img_du);
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
    b_st.site = &jb_emlrtRSI;
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
  b_mtmp = SD->f0.img[0];
  for (k = 0; k < 921599; k++) {
    if (SD->f0.img[k + 1] < mtmp) {
      mtmp = SD->f0.img[k + 1];
    }

    if (SD->f0.img[k + 1] > b_mtmp) {
      b_mtmp = SD->f0.img[k + 1];
    }
  }

  b_mtmp -= mtmp;

  /*  template properties */
  /* disp('Filtering ...'); */
  /*  filter image */
  for (i1 = 0; i1 < 921600; i1++) {
    SD->f0.img_corners[i1] = 0.0;
    SD->f0.img[i1] = (SD->f0.img[i1] - mtmp) / b_mtmp;
  }

  template_class = 0;
  emxInit_real_T(sp, &template_a1, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &template_a2, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b1, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b2, 2, &c_emlrtRTEI, true);
  while (template_class < 6) {
    covrtLogFor(&emlrtCoverageInstance, 1U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 1);

    /*  create correlation template */
    st.site = &g_emlrtRSI;
    createCorrelationPatch(&st, template_props[template_class], template_props[6
      + template_class], template_props[12 + template_class], template_a1,
      template_a2, template_b1, template_b2);

    /*  filter image according with current template */
    st.site = &h_emlrtRSI;
    c_conv2(SD->f0.img, template_a1->data, template_a1->size,
            SD->f0.img_corners_a1);
    st.site = &i_emlrtRSI;
    c_conv2(SD->f0.img, template_a2->data, template_a2->size,
            SD->f0.img_corners_a2);
    st.site = &j_emlrtRSI;
    c_conv2(SD->f0.img, template_b1->data, template_b1->size,
            SD->f0.img_corners_b1);
    st.site = &k_emlrtRSI;
    c_conv2(SD->f0.img, template_b2->data, template_b2->size,
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
  emxInit_real_T(sp, &corners_p, 2, &c_emlrtRTEI, true);
  emxInitStruct_struct_T1(sp, &corners2, &d_emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 1U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 2);

  /*  extract corner candidates via non maximum suppression */
  st.site = &l_emlrtRSI;
  nonMaximumSuppression(&st, SD->f0.img_corners, corners_p);

  /* disp('Refining ...'); */
  i1 = corners2.v1->size[0] * corners2.v1->size[1];
  corners2.v1->size[0] = corners_p->size[0];
  corners2.v1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners2.v1, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners_p->size[0] << 1;
  for (i1 = 0; i1 < k; i1++) {
    corners2.v1->data[i1] = 0.0;
  }

  i1 = corners2.v2->size[0] * corners2.v2->size[1];
  corners2.v2->size[0] = corners_p->size[0];
  corners2.v2->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners2.v2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners_p->size[0] << 1;
  for (i1 = 0; i1 < k; i1++) {
    corners2.v2->data[i1] = 0.0;
  }

  i1 = corners2.p->size[0] * corners2.p->size[1];
  corners2.p->size[0] = corners_p->size[0];
  corners2.p->size[1] = corners_p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners2.p, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners_p->size[0] * corners_p->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners2.p->data[i1] = corners_p->data[i1];
  }

  emxFree_real_T(&corners_p);
  emxInit_boolean_T(sp, &idx, 1, &e_emlrtRTEI, true);

  /*  subpixel refinement */
  covrtLogIf(&emlrtCoverageInstance, 1U, 0U, 0, true);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 3);
  st.site = &m_emlrtRSI;
  refineCorners(&st, SD->f0.img_angle, SD->f0.img_weight, &corners2);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 4);

  /*  remove corners without edges */
  k = corners2.v1->size[0];
  i1 = idx->size[0];
  idx->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)idx, i1, (int32_T)sizeof(boolean_T),
                    &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    idx->data[i1] = (corners2.v1->data[i1] == 0.0);
  }

  emxInit_boolean_T(sp, &r0, 1, &c_emlrtRTEI, true);
  k = corners2.v1->size[0];
  i1 = r0->size[0];
  r0->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(boolean_T),
                    &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    r0->data[i1] = (corners2.v1->data[i1 + corners2.v1->size[0]] == 0.0);
  }

  i1 = idx->size[0];
  i = r0->size[0];
  if (i1 != i) {
    emlrtSizeEqCheck1DR2012b(i1, i, &emlrtECI, sp);
  }

  i1 = idx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)idx, i1, (int32_T)sizeof(boolean_T),
                    &c_emlrtRTEI);
  k = idx->size[0];
  for (i1 = 0; i1 < k; i1++) {
    idx->data[i1] = (idx->data[i1] && r0->data[i1]);
  }

  emxFree_boolean_T(&r0);
  emxInit_real_T(sp, &r1, 2, &c_emlrtRTEI, true);
  st.site = &n_emlrtRSI;
  nullAssignment(&st, corners2.p, idx);
  i1 = r1->size[0] * r1->size[1];
  r1->size[0] = corners2.v1->size[0];
  r1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r1, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  k = corners2.v1->size[0] * corners2.v1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    r1->data[i1] = corners2.v1->data[i1];
  }

  st.site = &o_emlrtRSI;
  nullAssignment(&st, r1, idx);
  i1 = corners2.v1->size[0] * corners2.v1->size[1];
  corners2.v1->size[0] = r1->size[0];
  corners2.v1->size[1] = r1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners2.v1, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = r1->size[0] * r1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners2.v1->data[i1] = r1->data[i1];
  }

  i1 = r1->size[0] * r1->size[1];
  r1->size[0] = corners2.v2->size[0];
  r1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r1, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  k = corners2.v2->size[0] * corners2.v2->size[1];
  for (i1 = 0; i1 < k; i1++) {
    r1->data[i1] = corners2.v2->data[i1];
  }

  st.site = &p_emlrtRSI;
  nullAssignment(&st, r1, idx);
  i1 = corners2.v2->size[0] * corners2.v2->size[1];
  corners2.v2->size[0] = r1->size[0];
  corners2.v2->size[1] = r1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners2.v2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = r1->size[0] * r1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners2.v2->data[i1] = r1->data[i1];
  }

  /* disp('Scoring ...'); */
  i1 = corners3->score->size[0];
  corners3->score->size[0] = corners2.p->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->score, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners2.p->size[0];
  for (i1 = 0; i1 < k; i1++) {
    corners3->score->data[i1] = 0.0;
  }

  i1 = corners3->p->size[0] * corners3->p->size[1];
  corners3->p->size[0] = corners2.p->size[0];
  corners3->p->size[1] = corners2.p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->p, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners2.p->size[0] * corners2.p->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners3->p->data[i1] = corners2.p->data[i1];
  }

  i1 = corners3->v1->size[0] * corners3->v1->size[1];
  corners3->v1->size[0] = corners2.v1->size[0];
  corners3->v1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v1, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners2.v1->size[0] * corners2.v1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners3->v1->data[i1] = corners2.v1->data[i1];
  }

  i1 = corners3->v2->size[0] * corners3->v2->size[1];
  corners3->v2->size[0] = corners2.v2->size[0];
  corners3->v2->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = corners2.v2->size[0] * corners2.v2->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners3->v2->data[i1] = corners2.v2->data[i1];
  }

  emxFreeStruct_struct_T1(&corners2);

  /*  score corners */
  for (i1 = 0; i1 < 3; i1++) {
    dv1[i1] = 4.0 + 4.0 * (real_T)i1;
  }

  st.site = &q_emlrtRSI;
  scoreCorners(&st, SD->f0.img, SD->f0.img_weight, corners3, dv1);

  /*  remove low scoring corners */
  i1 = idx->size[0];
  idx->size[0] = corners3->score->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)idx, i1, (int32_T)sizeof(boolean_T),
                    &c_emlrtRTEI);
  k = corners3->score->size[0];
  for (i1 = 0; i1 < k; i1++) {
    idx->data[i1] = (corners3->score->data[i1] < 0.01);
  }

  st.site = &r_emlrtRSI;
  nullAssignment(&st, corners3->p, idx);
  i1 = r1->size[0] * r1->size[1];
  r1->size[0] = corners3->v1->size[0];
  r1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r1, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  k = corners3->v1->size[0] * corners3->v1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    r1->data[i1] = corners3->v1->data[i1];
  }

  st.site = &s_emlrtRSI;
  nullAssignment(&st, r1, idx);
  i1 = corners3->v1->size[0] * corners3->v1->size[1];
  corners3->v1->size[0] = r1->size[0];
  corners3->v1->size[1] = r1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v1, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = r1->size[0] * r1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners3->v1->data[i1] = r1->data[i1];
  }

  i1 = r1->size[0] * r1->size[1];
  r1->size[0] = corners3->v2->size[0];
  r1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r1, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  k = corners3->v2->size[0] * corners3->v2->size[1];
  for (i1 = 0; i1 < k; i1++) {
    r1->data[i1] = corners3->v2->data[i1];
  }

  st.site = &t_emlrtRSI;
  nullAssignment(&st, r1, idx);
  i1 = corners3->v2->size[0] * corners3->v2->size[1];
  corners3->v2->size[0] = r1->size[0];
  corners3->v2->size[1] = r1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = r1->size[0] * r1->size[1];
  for (i1 = 0; i1 < k; i1++) {
    corners3->v2->data[i1] = r1->data[i1];
  }

  emxFree_real_T(&r1);
  st.site = &u_emlrtRSI;
  b_nullAssignment(&st, corners3->score, idx);

  /*  make v1(:,1)+v1(:,2) positive (=> comparable to c++ code) */
  i1 = corners3->v1->size[0];
  i = corners3->v1->size[0];
  if (i1 != i) {
    emlrtSizeEqCheck1DR2012b(i1, i, &b_emlrtECI, sp);
  }

  k = corners3->v1->size[0];
  i1 = idx->size[0];
  idx->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)idx, i1, (int32_T)sizeof(boolean_T),
                    &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    idx->data[i1] = (corners3->v1->data[i1] + corners3->v1->data[i1 +
                     corners3->v1->size[0]] < 0.0);
  }

  emxInit_int32_T(sp, &r2, 1, &c_emlrtRTEI, true);
  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i1 = r2->size[0];
  r2->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i1, (int32_T)sizeof(int32_T),
                    &c_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r2->data[k] = i + 1;
      k++;
    }
  }

  end = corners3->v1->size[0];
  k = r2->size[0];
  for (i1 = 0; i1 < k; i1++) {
    i = r2->data[i1];
    if (!((i >= 1) && (i <= end))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, end, &emlrtBCI, sp);
    }
  }

  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i1 = r2->size[0];
  r2->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i1, (int32_T)sizeof(int32_T),
                    &c_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r2->data[k] = i + 1;
      k++;
    }
  }

  end = corners3->v1->size[0];
  k = r2->size[0];
  for (i1 = 0; i1 < k; i1++) {
    i = r2->data[i1];
    if (!((i >= 1) && (i <= end))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, end, &b_emlrtBCI, sp);
    }
  }

  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i1 = r2->size[0];
  r2->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i1, (int32_T)sizeof(int32_T),
                    &c_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r2->data[k] = i + 1;
      k++;
    }
  }

  emxInit_real_T(sp, &b_corners3, 2, &c_emlrtRTEI, true);
  iv0[0] = r2->size[0];
  iv0[1] = 2;
  i1 = b_corners3->size[0] * b_corners3->size[1];
  b_corners3->size[0] = r2->size[0];
  b_corners3->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b_corners3, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    k = r2->size[0];
    for (i = 0; i < k; i++) {
      b_corners3->data[i + b_corners3->size[0] * i1] = corners3->v1->data
        [(r2->data[i] + corners3->v1->size[0] * i1) - 1];
    }
  }

  for (i1 = 0; i1 < 2; i1++) {
    c_corners3[i1] = b_corners3->size[i1];
  }

  emxFree_real_T(&b_corners3);
  emlrtSubAssignSizeCheckR2012b(iv0, 2, c_corners3, 2, &c_emlrtECI, sp);
  end = idx->size[0] - 1;
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      k++;
    }
  }

  i1 = r2->size[0];
  r2->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i1, (int32_T)sizeof(int32_T),
                    &c_emlrtRTEI);
  k = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r2->data[k] = i + 1;
      k++;
    }
  }

  emxFree_boolean_T(&idx);
  emxInit_real_T(sp, &d_corners3, 2, &c_emlrtRTEI, true);
  i1 = d_corners3->size[0] * d_corners3->size[1];
  d_corners3->size[0] = r2->size[0];
  d_corners3->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)d_corners3, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    k = r2->size[0];
    for (i = 0; i < k; i++) {
      d_corners3->data[i + d_corners3->size[0] * i1] = -corners3->v1->data
        [(r2->data[i] + corners3->v1->size[0] * i1) - 1];
    }
  }

  for (i1 = 0; i1 < 2; i1++) {
    k = d_corners3->size[0];
    for (i = 0; i < k; i++) {
      corners3->v1->data[(r2->data[i] + corners3->v1->size[0] * i1) - 1] =
        d_corners3->data[i + d_corners3->size[0] * i1];
    }
  }

  emxFree_real_T(&d_corners3);
  emxFree_int32_T(&r2);
  emxInit_real_T1(sp, &varargin_2, 1, &c_emlrtRTEI, true);

  /*  make all coordinate systems right-handed (reduces matching ambiguities from 8 to 4) */
  st.site = &v_emlrtRSI;
  k = corners3->v1->size[0];
  i1 = varargin_2->size[0];
  varargin_2->size[0] = k;
  emxEnsureCapacity(&st, (emxArray__common *)varargin_2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    varargin_2->data[i1] = -corners3->v1->data[i1];
  }

  b_st.site = &td_emlrtRSI;
  k = corners3->v1->size[0];
  c_st.site = &rb_emlrtRSI;
  i1 = corners3->v1->size[0];
  overflow = (k == i1);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (k == varargin_2->size[0]) {
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &corners_n1, 2, &f_emlrtRTEI, true);
  k = corners3->v1->size[0];
  i1 = corners_n1->size[0] * corners_n1->size[1];
  corners_n1->size[0] = k;
  corners_n1->size[1] = 2;
  emxEnsureCapacity(&b_st, (emxArray__common *)corners_n1, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    corners_n1->data[i1] = corners3->v1->data[i1 + corners3->v1->size[0]];
  }

  k = varargin_2->size[0];
  for (i1 = 0; i1 < k; i1++) {
    corners_n1->data[i1 + corners_n1->size[0]] = varargin_2->data[i1];
  }

  emxInit_real_T1(&b_st, &x, 1, &c_emlrtRTEI, true);
  i1 = corners_n1->size[0];
  i = corners3->v2->size[0];
  if (i1 != i) {
    emlrtSizeEqCheck1DR2012b(i1, i, &d_emlrtECI, sp);
  }

  i1 = corners_n1->size[0];
  i = corners3->v2->size[0];
  if (i1 != i) {
    emlrtSizeEqCheck1DR2012b(i1, i, &e_emlrtECI, sp);
  }

  k = corners_n1->size[0];
  i1 = x->size[0];
  x->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)x, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    x->data[i1] = corners_n1->data[i1] * corners3->v2->data[i1];
  }

  k = corners_n1->size[0];
  i1 = varargin_2->size[0];
  varargin_2->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  for (i1 = 0; i1 < k; i1++) {
    varargin_2->data[i1] = corners_n1->data[i1 + corners_n1->size[0]] *
      corners3->v2->data[i1 + corners3->v2->size[0]];
  }

  i1 = x->size[0];
  i = varargin_2->size[0];
  if (i1 != i) {
    emlrtSizeEqCheck1DR2012b(i1, i, &d_emlrtECI, sp);
  }

  st.site = &w_emlrtRSI;
  i1 = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  k = x->size[0];
  for (i1 = 0; i1 < k; i1++) {
    x->data[i1] += varargin_2->data[i1];
  }

  b_st.site = &ud_emlrtRSI;
  i1 = varargin_2->size[0];
  varargin_2->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargin_2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = x->size[0];
  for (i1 = 0; i1 < k; i1++) {
    varargin_2->data[i1] = x->data[i1];
  }

  c_st.site = &vd_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= x->size[0]; k++) {
    varargin_2->data[k] = muDoubleScalarSign(varargin_2->data[k]);
  }

  emxFree_real_T(&x);
  emxInit_real_T1(&b_st, &b_varargin_2, 1, &c_emlrtRTEI, true);
  i1 = b_varargin_2->size[0];
  b_varargin_2->size[0] = varargin_2->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = varargin_2->size[0];
  for (i1 = 0; i1 < k; i1++) {
    b_varargin_2->data[i1] = -varargin_2->data[i1];
  }

  emxFree_real_T(&varargin_2);
  i1 = corners_n1->size[0] * corners_n1->size[1];
  corners_n1->size[0] = b_varargin_2->size[0];
  corners_n1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners_n1, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  k = b_varargin_2->size[0];
  for (i1 = 0; i1 < k; i1++) {
    for (i = 0; i < 2; i++) {
      corners_n1->data[i1 + corners_n1->size[0] * i] = b_varargin_2->data[i1];
    }
  }

  emxFree_real_T(&b_varargin_2);
  for (i1 = 0; i1 < 2; i1++) {
    e_corners3[i1] = corners3->v2->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_corners_n1[i1] = corners_n1->size[i1];
  }

  if ((e_corners3[0] != b_corners_n1[0]) || (e_corners3[1] != b_corners_n1[1]))
  {
    emlrtSizeEqCheckNDR2012b(&e_corners3[0], &b_corners_n1[0], &f_emlrtECI, sp);
  }

  i1 = corners3->v2->size[0] * corners3->v2->size[1];
  corners3->v2->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners3->v2, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  end = corners3->v2->size[0];
  k = corners3->v2->size[1];
  k *= end;
  for (i1 = 0; i1 < k; i1++) {
    corners3->v2->data[i1] *= corners_n1->data[i1];
  }

  emxFree_real_T(&corners_n1);

  /*  convert to 0-based index */
  i1 = corners3->p->size[0] * corners3->p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners3->p, i1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  end = corners3->p->size[0];
  k = corners3->p->size[1];
  k *= end;
  for (i1 = 0; i1 < k; i1++) {
    corners3->p->data[i1]--;
  }

  /* disp('Find Corners OK'); */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (findCorners.c) */
