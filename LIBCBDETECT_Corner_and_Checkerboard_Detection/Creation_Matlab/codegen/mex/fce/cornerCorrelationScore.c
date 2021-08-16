/*
 * cornerCorrelationScore.c
 *
 * Code generation for function 'cornerCorrelationScore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "cornerCorrelationScore.h"
#include "fce_emxutil.h"
#include "norm.h"
#include "sum.h"
#include "createCorrelationPatch.h"
#include "std.h"
#include "mean.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo fd_emlrtRSI = { 25, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo gd_emlrtRSI = { 26, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo hd_emlrtRSI = { 29, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo id_emlrtRSI = { 32, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo jd_emlrtRSI = { 35, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo kd_emlrtRSI = { 36, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo ld_emlrtRSI = { 37, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRSInfo md_emlrtRSI = { 38, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 2, 18, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 8, 5, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 21, 5, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 22, 5, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo g_emlrtECI = { -1, 38, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo h_emlrtECI = { -1, 37, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo i_emlrtECI = { -1, 36, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo j_emlrtECI = { -1, 35, 14, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtECInfo k_emlrtECI = { -1, 29, 30, "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m"
};

static emlrtBCInfo s_emlrtBCI = { -1, -1, 15, 22, "img_filter",
  "cornerCorrelationScore",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 15, 24, "img_filter",
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
  real_T b_y;
  real_T p1[2];
  real_T b_p1[2];
  real_T c_p1;
  boolean_T guard1 = false;
  int32_T e_img_weight[1];
  emxArray_real_T *vec_filter;
  int32_T b_img_filter[1];
  int32_T c_img_filter[1];
  emxArray_real_T *b_vec_weight;
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
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 7U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 7U, 0);

  /*  center */
  b_img_weight = (real_T)img_weight->size[0] + 1.0;
  for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
    c[img_idx_0] = b_img_weight / 2.0;
  }

  emxInit_real_T(sp, &img_filter, 2, &o_emlrtRTEI, true);

  /*  compute gradient filter kernel (bandwith = 3 px) */
  img_idx_0 = img_filter->size[0] * img_filter->size[1];
  img_filter->size[0] = img_weight->size[0];
  img_filter->size[1] = img_weight->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)img_filter, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = img_weight->size[0] * img_weight->size[1];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    img_filter->data[img_idx_0] = -1.0;
  }

  x = 1;
  while (x - 1 <= img_weight->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 7U, 0U, 0, 1);
    y = 1;
    while (y - 1 <= img_weight->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 7U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 7U, 1);
      b_x[0] = (int16_T)x;
      b_x[1] = (int16_T)y;
      b_img_weight = 0.0;
      b_y = 0.0;
      for (k = 0; k < 2; k++) {
        c_p1 = (real_T)b_x[k] - c[k];
        b_img_weight += c_p1 * v1_data[v1_size[0] * k];
        b_y += c_p1 * v2_data[v2_size[0] * k];
        p1[k] = c_p1;
      }

      for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
        b_p1[img_idx_0] = p1[img_idx_0] - b_img_weight * v1_data[img_idx_0];
      }

      guard1 = false;
      if (covrtLogCond(&emlrtCoverageInstance, 7U, 0U, 0, norm(b_p1) <= 1.5)) {
        guard1 = true;
      } else {
        for (img_idx_0 = 0; img_idx_0 < 2; img_idx_0++) {
          b_p1[img_idx_0] = p1[img_idx_0] - b_y * v2_data[img_idx_0];
        }

        if (covrtLogCond(&emlrtCoverageInstance, 7U, 0U, 1, norm(b_p1) <= 1.5))
        {
          guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 7U, 0U, 0, false);
          covrtLogIf(&emlrtCoverageInstance, 7U, 0U, 0, false);
        }
      }

      if (guard1) {
        covrtLogMcdc(&emlrtCoverageInstance, 7U, 0U, 0, true);
        covrtLogIf(&emlrtCoverageInstance, 7U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 7U, 2);
        img_idx_0 = img_filter->size[0];
        if (!((y >= 1) && (y <= img_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(y, 1, img_idx_0, &s_emlrtBCI, sp);
        }

        img_idx_0 = img_filter->size[1];
        if (!((x >= 1) && (x <= img_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(x, 1, img_idx_0, &t_emlrtBCI, sp);
        }

        img_filter->data[(y + img_filter->size[0] * (x - 1)) - 1] = 1.0;
      }

      y++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 7U, 0U, 1, 0);
    x++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T1(sp, &vec_weight, 1, &p_emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 7U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 7U, 3);

  /*  convert into vectors */
  /*  normalize */
  c_img_weight[0] = img_weight->size[0] * img_weight->size[1];
  d_img_weight = *img_weight;
  d_img_weight.size = (int32_T *)&c_img_weight;
  d_img_weight.numDimensions = 1;
  st.site = &fd_emlrtRSI;
  b_img_weight = mean(&st, &d_img_weight);
  img_idx_0 = vec_weight->size[0];
  vec_weight->size[0] = img_weight->size[0] * img_weight->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)vec_weight, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = img_weight->size[0] * img_weight->size[1];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_weight->data[img_idx_0] = img_weight->data[img_idx_0] - b_img_weight;
  }

  e_img_weight[0] = img_weight->size[0] * img_weight->size[1];
  d_img_weight = *img_weight;
  d_img_weight.size = (int32_T *)&e_img_weight;
  d_img_weight.numDimensions = 1;
  st.site = &fd_emlrtRSI;
  b_img_weight = b_std(&st, &d_img_weight);
  img_idx_0 = vec_weight->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)vec_weight, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = vec_weight->size[0];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_weight->data[img_idx_0] /= b_img_weight;
  }

  emxInit_real_T1(sp, &vec_filter, 1, &q_emlrtRTEI, true);
  b_img_filter[0] = img_filter->size[0] * img_filter->size[1];
  d_img_weight = *img_filter;
  d_img_weight.size = (int32_T *)&b_img_filter;
  d_img_weight.numDimensions = 1;
  st.site = &gd_emlrtRSI;
  b_img_weight = mean(&st, &d_img_weight);
  img_idx_0 = vec_filter->size[0];
  vec_filter->size[0] = img_filter->size[0] * img_filter->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)vec_filter, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = img_filter->size[0] * img_filter->size[1];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_filter->data[img_idx_0] = img_filter->data[img_idx_0] - b_img_weight;
  }

  c_img_filter[0] = img_filter->size[0] * img_filter->size[1];
  d_img_weight = *img_filter;
  d_img_weight.size = (int32_T *)&c_img_filter;
  d_img_weight.numDimensions = 1;
  st.site = &gd_emlrtRSI;
  b_img_weight = b_std(&st, &d_img_weight);
  img_idx_0 = vec_filter->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)vec_filter, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = vec_filter->size[0];
  emxFree_real_T(&img_filter);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    vec_filter->data[img_idx_0] /= b_img_weight;
  }

  emxInit_real_T1(sp, &b_vec_weight, 1, &n_emlrtRTEI, true);

  /*  compute gradient score */
  img_idx_0 = vec_weight->size[0];
  k = vec_filter->size[0];
  if (img_idx_0 != k) {
    emlrtSizeEqCheck1DR2012b(img_idx_0, k, &k_emlrtECI, sp);
  }

  img_idx_0 = b_vec_weight->size[0];
  b_vec_weight->size[0] = vec_weight->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_vec_weight, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = vec_weight->size[0];
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_vec_weight->data[img_idx_0] = vec_weight->data[img_idx_0] *
      vec_filter->data[img_idx_0];
  }

  emxFree_real_T(&vec_filter);
  emxInit_real_T(sp, &template_a1, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &template_a2, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b1, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &template_b2, 2, &n_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_template_a1, 1, &n_emlrtRTEI, true);
  st.site = &hd_emlrtRSI;
  b_img_weight = sum(&st, b_vec_weight);

  /*  create intensity filter kernel */
  st.site = &id_emlrtRSI;
  createCorrelationPatch(&st, muDoubleScalarAtan2(v1_data[1], v1_data[0]),
    muDoubleScalarAtan2(v2_data[1], v2_data[0]), c[0] - 1.0, template_a1,
    template_a2, template_b1, template_b2);

  /*  checkerboard responses */
  k = template_a1->size[0] * template_a1->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &j_emlrtECI, sp);
  }

  img_idx_0 = b_template_a1->size[0];
  b_template_a1->size[0] = template_a1->size[0] * template_a1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_a1, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = template_a1->size[0] * template_a1->size[1];
  emxFree_real_T(&b_vec_weight);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_a1->data[img_idx_0] = template_a1->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_a1);
  emxInit_real_T1(sp, &b_template_a2, 1, &n_emlrtRTEI, true);
  st.site = &jd_emlrtRSI;
  a1 = sum(&st, b_template_a1);
  k = template_a2->size[0] * template_a2->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &i_emlrtECI, sp);
  }

  img_idx_0 = b_template_a2->size[0];
  b_template_a2->size[0] = template_a2->size[0] * template_a2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_a2, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = template_a2->size[0] * template_a2->size[1];
  emxFree_real_T(&b_template_a1);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_a2->data[img_idx_0] = template_a2->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_a2);
  emxInit_real_T1(sp, &b_template_b1, 1, &n_emlrtRTEI, true);
  st.site = &kd_emlrtRSI;
  a2 = sum(&st, b_template_a2);
  k = template_b1->size[0] * template_b1->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &h_emlrtECI, sp);
  }

  img_idx_0 = b_template_b1->size[0];
  b_template_b1->size[0] = template_b1->size[0] * template_b1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_b1, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = template_b1->size[0] * template_b1->size[1];
  emxFree_real_T(&b_template_a2);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_b1->data[img_idx_0] = template_b1->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_b1);
  emxInit_real_T1(sp, &b_template_b2, 1, &n_emlrtRTEI, true);
  st.site = &ld_emlrtRSI;
  b1 = sum(&st, b_template_b1);
  k = template_b2->size[0] * template_b2->size[1];
  img_idx_0 = img->size[0] * img->size[1];
  if (k != img_idx_0) {
    emlrtSizeEqCheck1DR2012b(k, img_idx_0, &g_emlrtECI, sp);
  }

  img_idx_0 = b_template_b2->size[0];
  b_template_b2->size[0] = template_b2->size[0] * template_b2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_template_b2, img_idx_0, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  k = template_b2->size[0] * template_b2->size[1];
  emxFree_real_T(&b_template_b1);
  for (img_idx_0 = 0; img_idx_0 < k; img_idx_0++) {
    b_template_b2->data[img_idx_0] = template_b2->data[img_idx_0] * img->
      data[img_idx_0];
  }

  emxFree_real_T(&template_b2);
  st.site = &md_emlrtRSI;
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
