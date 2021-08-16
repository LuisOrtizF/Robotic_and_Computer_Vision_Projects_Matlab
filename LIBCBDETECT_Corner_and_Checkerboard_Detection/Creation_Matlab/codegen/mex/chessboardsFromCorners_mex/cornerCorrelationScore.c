/*
 * cornerCorrelationScore.c
 *
 * Code generation for function 'cornerCorrelationScore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "cornerCorrelationScore.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "norm.h"
#include "sum.h"
#include "createCorrelationPatch.h"
#include "std.h"
#include "mean.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo tg_emlrtRSI = { 12, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo ug_emlrtRSI = { 13, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo vg_emlrtRSI = { 25, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo wg_emlrtRSI = { 26, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo xg_emlrtRSI = { 29, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo yg_emlrtRSI = { 32, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo ah_emlrtRSI = { 35, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo bh_emlrtRSI = { 36, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo ch_emlrtRSI = { 37, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo dh_emlrtRSI = { 38, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo eh_emlrtRSI = { 21, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 2, 18, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 8, 5, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 21, 5, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 22, 5, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo y_emlrtECI = { 2, 14, 17, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo ab_emlrtECI = { 2, 14, 37, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo bb_emlrtECI = { -1, 29, 30, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 32, 45, "v1",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 32, 51, "v1",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 32, 64, "v2",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 32, 70, "v2",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

static emlrtECInfo cb_emlrtECI = { -1, 35, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo db_emlrtECI = { -1, 36, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo eb_emlrtECI = { -1, 37, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo fb_emlrtECI = { -1, 38, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 103, 23, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRTEInfo ec_emlrtRTEI = { 98, 23, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 15, 22, "img_filter",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 15, 24, "img_filter",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

/* Function Definitions */
real_T cornerCorrelationScore(const emlrtStack *sp, const emxArray_real_T *img,
  const emxArray_real_T *img_weight, const real_T v1_data[], const int32_T
  v1_size[2], const real_T v2_data[], const int32_T v2_size[2])
{
  real_T score;
  real_T b_img_weight;
  real_T c[2];
  int32_T img_idx_0;
  emxArray_real_T *img_filter;
  int32_T k;
  int32_T x;
  emxArray_real_T *vec_weight;
  int32_T y;
  int32_T c_img_weight[1];
  int16_T b_x[2];
  emxArray_real_T d_img_weight;
  real_T p1[2];
  real_T b_data[2];
  int32_T e_img_weight[1];
  int32_T p2_size[2];
  emxArray_real_T *vec_filter;
  real_T p2_data[2];
  int32_T b_img_filter[1];
  int32_T p3_size[2];
  int32_T c_img_filter[1];
  int32_T iv7[2];
  real_T p3_data[2];
  int32_T p2[2];
  real_T b_p1[2];
  emxArray_real_T *b_vec_weight;
  boolean_T guard1 = false;
  int32_T iv8[2];
  int32_T p3[2];
  emxArray_real_T *template_a1;
  emxArray_real_T *template_a2;
  emxArray_real_T *template_b1;
  emxArray_real_T *template_b2;
  emxArray_real_T *b_template_a1;
  emxArray_real_T *b_template_a2;
  real_T a1;
  emxArray_real_T *b_template_b1;
  real_T a2;
  emxArray_real_T *b_template_b2;
  real_T b1;
  real_T b2;
  real_T mu;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 11U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 0);

  /*  center */
  b_img_weight = (real_T)img_weight->size[0] + 1.0;
  for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
    c[img_idx_0] = b_img_weight / 2.0;
  }

  emxInit_real_T(sp, &img_filter, 2, &bb_emlrtRTEI, true);

  /*  compute gradient filter kernel (bandwith = 3 px) */
  img_idx_0 = img_filter->size[0] * img_filter->size[1];
  img_filter->size[0] = img_weight->size[0];
  img_filter->size[1] = img_weight->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)img_filter, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = img_weight->size[0] * img_weight->size[1];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    img_filter->data[img_idx_0] = -1.0;
  }

  x = 1;
  while (x - 1 <= img_weight->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 0, 1);
    y = 1;
    while (y - 1 <= img_weight->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 1);
      b_x[0] = (int16_T)x;
      b_x[1] = (int16_T)y;
      for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
        p1[img_idx_0] = (real_T)b_x[img_idx_0] - c[img_idx_0];
      }

      st.site = &tg_emlrtRSI;
      k = v1_size[1];
      for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
        b_data[img_idx_0] = v1_data[v1_size[0] * img_idx_0];
      }

      b_st.site = &eh_emlrtRSI;
      if (!(2 == v1_size[1])) {
        if (v1_size[1] == 1) {
          emlrtErrorWithMessageIdR2012b(&b_st, &ec_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &dc_emlrtRTEI,
            "Coder:MATLAB:innerdim", 0);
        }
      }

      b_img_weight = 0.0;
      for (k = 0; k < 2; k++) {
        b_img_weight += p1[k] * b_data[k];
      }

      p2_size[0] = 1;
      p2_size[1] = v1_size[1];
      k = v1_size[0] * v1_size[1];
      for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
        p2_data[img_idx_0] = b_img_weight * v1_data[img_idx_0];
      }

      st.site = &ug_emlrtRSI;
      k = v2_size[1];
      for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
        b_data[img_idx_0] = v2_data[v2_size[0] * img_idx_0];
      }

      b_st.site = &eh_emlrtRSI;
      if (!(2 == v2_size[1])) {
        if (v2_size[1] == 1) {
          emlrtErrorWithMessageIdR2012b(&b_st, &ec_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &dc_emlrtRTEI,
            "Coder:MATLAB:innerdim", 0);
        }
      }

      b_img_weight = 0.0;
      for (k = 0; k < 2; k++) {
        b_img_weight += p1[k] * b_data[k];
      }

      p3_size[0] = 1;
      p3_size[1] = v2_size[1];
      k = v2_size[0] * v2_size[1];
      for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
        p3_data[img_idx_0] = b_img_weight * v2_data[img_idx_0];
      }

      for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
        iv7[img_idx_0] = 1 + img_idx_0;
        p2[img_idx_0] = p2_size[img_idx_0];
      }

      if ((iv7[0] != p2[0]) || (iv7[1] != p2[1])) {
        emlrtSizeEqCheckNDR2012b(&iv7[0], &p2[0], &y_emlrtECI, sp);
      }

      for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
        b_p1[img_idx_0] = p1[img_idx_0] - p2_data[img_idx_0];
      }

      guard1 = false;
      if (covrtLogCond(&emlrtCoverageInstance, 11U, 0U, 0, norm(b_p1) <= 1.5)) {
        guard1 = true;
      } else {
        for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
          iv8[img_idx_0] = 1 + img_idx_0;
          p3[img_idx_0] = p3_size[img_idx_0];
        }

        if ((iv8[0] != p3[0]) || (iv8[1] != p3[1])) {
          emlrtSizeEqCheckNDR2012b(&iv8[0], &p3[0], &ab_emlrtECI, sp);
        }

        for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
          b_p1[img_idx_0] = p1[img_idx_0] - p3_data[img_idx_0];
        }

        if (covrtLogCond(&emlrtCoverageInstance, 11U, 0U, 1, norm(b_p1) <= 1.5))
        {
          guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 11U, 0U, 0, false);
          covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 0, false);
        }
      }

      if (guard1) {
        covrtLogMcdc(&emlrtCoverageInstance, 11U, 0U, 0, true);
        covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 2);
        img_idx_0 = img_filter->size[0];
        if (!((y >= 1) && (y <= img_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(y, 1, img_idx_0, &vb_emlrtBCI, sp);
        }

        img_idx_0 = img_filter->size[1];
        if (!((x >= 1) && (x <= img_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(x, 1, img_idx_0, &wb_emlrtBCI, sp);
        }

        img_filter->data[(y + img_filter->size[0] * (x - 1)) - 1] = 1.0;
      }

      y++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 1, 0);
    x++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T1(sp, &vec_weight, 1, &cb_emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 3);

  /*  convert into vectors */
  /*  normalize */
  c_img_weight[0] = img_weight->size[0] * img_weight->size[1];
  d_img_weight = *img_weight;
  d_img_weight.size = (int32_T *)&c_img_weight;
  d_img_weight.numDimensions = 1;
  st.site = &vg_emlrtRSI;
  b_img_weight = mean(&st, &d_img_weight);
  img_idx_0 = vec_weight->size[0];
  vec_weight->size[0] = img_weight->size[0] * img_weight->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)vec_weight, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = img_weight->size[0] * img_weight->size[1];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_weight->data[img_idx_0] = img_weight->data[img_idx_0] - b_img_weight;
  }

  e_img_weight[0] = img_weight->size[0] * img_weight->size[1];
  d_img_weight = *img_weight;
  d_img_weight.size = (int32_T *)&e_img_weight;
  d_img_weight.numDimensions = 1;
  st.site = &vg_emlrtRSI;
  b_img_weight = b_std(&st, &d_img_weight);
  img_idx_0 = vec_weight->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)vec_weight, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = vec_weight->size[0];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_weight->data[img_idx_0] /= b_img_weight;
  }

  emxInit_real_T1(sp, &vec_filter, 1, &db_emlrtRTEI, true);
  b_img_filter[0] = img_filter->size[0] * img_filter->size[1];
  d_img_weight = *img_filter;
  d_img_weight.size = (int32_T *)&b_img_filter;
  d_img_weight.numDimensions = 1;
  st.site = &wg_emlrtRSI;
  b_img_weight = mean(&st, &d_img_weight);
  img_idx_0 = vec_filter->size[0];
  vec_filter->size[0] = img_filter->size[0] * img_filter->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)vec_filter, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = img_filter->size[0] * img_filter->size[1];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_filter->data[img_idx_0] = img_filter->data[img_idx_0] - b_img_weight;
  }

  c_img_filter[0] = img_filter->size[0] * img_filter->size[1];
  d_img_weight = *img_filter;
  d_img_weight.size = (int32_T *)&c_img_filter;
  d_img_weight.numDimensions = 1;
  st.site = &wg_emlrtRSI;
  b_img_weight = b_std(&st, &d_img_weight);
  img_idx_0 = vec_filter->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)vec_filter, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = vec_filter->size[0];
  emxFree_real_T(&img_filter);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_filter->data[img_idx_0] /= b_img_weight;
  }

  emxInit_real_T1(sp, &b_vec_weight, 1, &ab_emlrtRTEI, true);

  /*  compute gradient score */
  img_idx_0 = vec_weight->size[0];
  k = vec_filter->size[0];
  if (img_idx_0 != k) {
    emlrtSizeEqCheck1DR2012b(img_idx_0, k, &bb_emlrtECI, sp);
  }

  img_idx_0 = b_vec_weight->size[0];
  b_vec_weight->size[0] = vec_weight->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_vec_weight, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = vec_weight->size[0];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_vec_weight->data[img_idx_0] = vec_weight->data[img_idx_0] *
      vec_filter->data[img_idx_0];
  }

  emxFree_real_T(&vec_filter);
  emxInit_real_T(sp, &template_a1, 2, &ab_emlrtRTEI, true);
  emxInit_real_T(sp, &template_a2, 2, &ab_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b1, 2, &ab_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b2, 2, &ab_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_template_a1, 1, &ab_emlrtRTEI, true);
  st.site = &xg_emlrtRSI;
  b_img_weight = sum(&st, b_vec_weight);

  /*  create intensity filter kernel */
  if (!(2 <= v1_size[1])) {
    emlrtDynamicBoundsCheckR2012b(2, 1, v1_size[1], &rb_emlrtBCI, sp);
  }

  if (!(1 <= v1_size[1])) {
    emlrtDynamicBoundsCheckR2012b(1, 1, v1_size[1], &sb_emlrtBCI, sp);
  }

  if (!(2 <= v2_size[1])) {
    emlrtDynamicBoundsCheckR2012b(2, 1, v2_size[1], &tb_emlrtBCI, sp);
  }

  if (!(1 <= v2_size[1])) {
    emlrtDynamicBoundsCheckR2012b(1, 1, v2_size[1], &ub_emlrtBCI, sp);
  }

  st.site = &yg_emlrtRSI;
  createCorrelationPatch(&st, muDoubleScalarAtan2(v1_data[1], v1_data[0]),
    muDoubleScalarAtan2(v2_data[1], v2_data[0]), c[0] - 1.0, template_a1,
    template_a2, template_b1, template_b2);

  /*  checkerboard responses */
  k = template_a1->size[0] * template_a1->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &cb_emlrtECI, sp);
  }

  img_idx_0 = b_template_a1->size[0];
  b_template_a1->size[0] = template_a1->size[0] * template_a1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_a1, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = template_a1->size[0] * template_a1->size[1];
  emxFree_real_T(&b_vec_weight);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_a1->data[img_idx_0] = template_a1->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_a1);
  emxInit_real_T1(sp, &b_template_a2, 1, &ab_emlrtRTEI, true);
  st.site = &ah_emlrtRSI;
  a1 = sum(&st, b_template_a1);
  k = template_a2->size[0] * template_a2->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &db_emlrtECI, sp);
  }

  img_idx_0 = b_template_a2->size[0];
  b_template_a2->size[0] = template_a2->size[0] * template_a2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_a2, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = template_a2->size[0] * template_a2->size[1];
  emxFree_real_T(&b_template_a1);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_a2->data[img_idx_0] = template_a2->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_a2);
  emxInit_real_T1(sp, &b_template_b1, 1, &ab_emlrtRTEI, true);
  st.site = &bh_emlrtRSI;
  a2 = sum(&st, b_template_a2);
  k = template_b1->size[0] * template_b1->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &eb_emlrtECI, sp);
  }

  img_idx_0 = b_template_b1->size[0];
  b_template_b1->size[0] = template_b1->size[0] * template_b1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_b1, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = template_b1->size[0] * template_b1->size[1];
  emxFree_real_T(&b_template_a2);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_b1->data[img_idx_0] = template_b1->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_b1);
  emxInit_real_T1(sp, &b_template_b2, 1, &ab_emlrtRTEI, true);
  st.site = &ch_emlrtRSI;
  b1 = sum(&st, b_template_b1);
  k = template_b2->size[0] * template_b2->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &fb_emlrtECI, sp);
  }

  img_idx_0 = b_template_b2->size[0];
  b_template_b2->size[0] = template_b2->size[0] * template_b2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_b2, img_idx_0, (int32_T)
                    sizeof(real_T), &ab_emlrtRTEI);
  k = template_b2->size[0] * template_b2->size[1];
  emxFree_real_T(&b_template_b1);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_b2->data[img_idx_0] = template_b2->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_b2);
  st.site = &dh_emlrtRSI;
  b2 = sum(&st, b_template_b2);

  /*  mean */
  mu = (((a1 + a2) + b1) + b2) / 4.0;

  /*  case 1: a=white, b=black */
  /*  case 2: b=white, a=black */
  /*  intensity score: max. of the 2 cases */
  /*  final score: product of gradient and intensity score */
  score = muDoubleScalarMax(b_img_weight / ((real_T)vec_weight->size[0] - 1.0),
    0.0) * muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMin
    (muDoubleScalarMin(a1 - mu, a2 - mu), muDoubleScalarMin(mu - b1, mu - b2)),
    muDoubleScalarMin(muDoubleScalarMin(mu - a1, mu - a2), muDoubleScalarMin(b1
    - mu, b2 - mu))), 0.0);
  emxFree_real_T(&b_template_b2);
  emxFree_real_T(&vec_weight);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return score;
}

/* End of code generation (cornerCorrelationScore.c) */
