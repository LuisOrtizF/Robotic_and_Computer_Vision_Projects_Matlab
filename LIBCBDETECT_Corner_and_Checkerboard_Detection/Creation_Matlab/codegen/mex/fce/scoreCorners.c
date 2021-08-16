/*
 * scoreCorners.c
 *
 * Code generation for function 'scoreCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "scoreCorners.h"
#include "fce_emxutil.h"
#include "cornerCorrelationScore.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo ed_emlrtRSI = { 21, "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 1, 20, "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m"
};

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 12, 27, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 12, 29, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 13, 27, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 13, 29, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { 1, 720, 19, 32, "img", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo xc_emlrtBCI = { 1, 1280, 19, 56, "img", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { 1, 720, 20, 39, "img_weight", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { 1, 1280, 20, 63, "img_weight", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 21, 85, "corners.v1", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 21, 101, "corners.v2", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 26, 21, "corners.score",
  "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

/* Function Definitions */
void scoreCorners(const emlrtStack *sp, const real_T img[921600], const real_T
                  img_weight[921600], struct_T *corners, const real_T radius[3])
{
  int32_T i;
  emxArray_real_T *b_img;
  emxArray_real_T *b_img_weight;
  int32_T i34;
  int32_T ixstart;
  real_T u;
  real_T v;
  real_T score[3];
  int32_T j;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg1;
  real_T d1;
  int32_T i35;
  int32_T i36;
  int32_T i37;
  int32_T i38;
  int32_T i39;
  int32_T i40;
  int32_T loop_ub;
  int32_T b_loop_ub;
  real_T corners_data[2];
  int32_T corners_size[2];
  real_T b_corners_data[2];
  int32_T b_corners_size[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 6U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 0);

  /*  for all corners do */
  i = 0;
  emxInit_real_T(sp, &b_img, 2, &m_emlrtRTEI, true);
  emxInit_real_T(sp, &b_img_weight, 2, &m_emlrtRTEI, true);
  while (i <= corners->p->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 1);

    /*  corner location */
    i34 = corners->p->size[1];
    if (!(1 <= i34)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i34, &tc_emlrtBCI, sp);
    }

    i34 = corners->p->size[0];
    ixstart = i + 1;
    if (!((ixstart >= 1) && (ixstart <= i34))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i34, &sc_emlrtBCI, sp);
    }

    u = muDoubleScalarRound(corners->p->data[i]);
    i34 = corners->p->size[1];
    if (!(2 <= i34)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i34, &vc_emlrtBCI, sp);
    }

    i34 = corners->p->size[0];
    ixstart = i + 1;
    if (!((ixstart >= 1) && (ixstart <= i34))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i34, &uc_emlrtBCI, sp);
    }

    v = muDoubleScalarRound(corners->p->data[i + corners->p->size[0]]);

    /*  compute corner statistics @ radius 1 */
    j = 0;
    while (j < 3) {
      covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 2);
      score[j] = 0.0;
      if (covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 0, u > radius[j]) &&
          covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 1, u <= 1280.0 - radius[j])
          && covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 2, v > radius[j]) &&
          covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 3, v <= 720.0 - radius[j]))
      {
        covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 0, true);
        covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 3);
        mtmp = v - radius[j];
        d1 = v + radius[j];
        if (mtmp > d1) {
          i34 = 0;
          ixstart = 0;
        } else {
          i34 = (int32_T)mtmp;
          if (!((i34 >= 1) && (i34 <= 720))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, 720, &wc_emlrtBCI, sp);
          }

          i34--;
          ixstart = (int32_T)d1;
          if (!((ixstart >= 1) && (ixstart <= 720))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, 720, &wc_emlrtBCI, sp);
          }
        }

        mtmp = u - radius[j];
        d1 = u + radius[j];
        if (mtmp > d1) {
          ix = 0;
          i35 = 0;
        } else {
          ix = (int32_T)mtmp;
          if (!((ix >= 1) && (ix <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, 1280, &xc_emlrtBCI, sp);
          }

          ix--;
          i35 = (int32_T)d1;
          if (!((i35 >= 1) && (i35 <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(i35, 1, 1280, &xc_emlrtBCI, sp);
          }
        }

        mtmp = v - radius[j];
        d1 = v + radius[j];
        if (mtmp > d1) {
          i36 = 0;
          i37 = 0;
        } else {
          i36 = (int32_T)mtmp;
          if (!((i36 >= 1) && (i36 <= 720))) {
            emlrtDynamicBoundsCheckR2012b(i36, 1, 720, &yc_emlrtBCI, sp);
          }

          i36--;
          i37 = (int32_T)d1;
          if (!((i37 >= 1) && (i37 <= 720))) {
            emlrtDynamicBoundsCheckR2012b(i37, 1, 720, &yc_emlrtBCI, sp);
          }
        }

        mtmp = u - radius[j];
        d1 = u + radius[j];
        if (mtmp > d1) {
          i38 = 0;
          i39 = 0;
        } else {
          i38 = (int32_T)mtmp;
          if (!((i38 >= 1) && (i38 <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(i38, 1, 1280, &ad_emlrtBCI, sp);
          }

          i38--;
          i39 = (int32_T)d1;
          if (!((i39 >= 1) && (i39 <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(i39, 1, 1280, &ad_emlrtBCI, sp);
          }
        }

        i40 = b_img->size[0] * b_img->size[1];
        b_img->size[0] = ixstart - i34;
        b_img->size[1] = i35 - ix;
        emxEnsureCapacity(sp, (emxArray__common *)b_img, i40, (int32_T)sizeof
                          (real_T), &m_emlrtRTEI);
        loop_ub = i35 - ix;
        for (i35 = 0; i35 < loop_ub; i35++) {
          b_loop_ub = ixstart - i34;
          for (i40 = 0; i40 < b_loop_ub; i40++) {
            b_img->data[i40 + b_img->size[0] * i35] = img[(i34 + i40) + 720 *
              (ix + i35)];
          }
        }

        i34 = b_img_weight->size[0] * b_img_weight->size[1];
        b_img_weight->size[0] = i37 - i36;
        b_img_weight->size[1] = i39 - i38;
        emxEnsureCapacity(sp, (emxArray__common *)b_img_weight, i34, (int32_T)
                          sizeof(real_T), &m_emlrtRTEI);
        loop_ub = i39 - i38;
        for (i34 = 0; i34 < loop_ub; i34++) {
          b_loop_ub = i37 - i36;
          for (ixstart = 0; ixstart < b_loop_ub; ixstart++) {
            b_img_weight->data[ixstart + b_img_weight->size[0] * i34] =
              img_weight[(i36 + ixstart) + 720 * (i38 + i34)];
          }
        }

        i34 = corners->v1->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i34))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i34, &bd_emlrtBCI, sp);
        }

        ixstart = i + 1;
        corners_size[0] = 1;
        corners_size[1] = 2;
        for (i34 = 0; i34 < 2; i34++) {
          corners_data[i34] = corners->v1->data[(ixstart + corners->v1->size[0] *
            i34) - 1];
        }

        i34 = corners->v2->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i34))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i34, &cd_emlrtBCI, sp);
        }

        ixstart = i + 1;
        b_corners_size[0] = 1;
        b_corners_size[1] = 2;
        for (i34 = 0; i34 < 2; i34++) {
          b_corners_data[i34] = corners->v2->data[(ixstart + corners->v2->size[0]
            * i34) - 1];
        }

        st.site = &ed_emlrtRSI;
        score[j] = cornerCorrelationScore(&st, b_img, b_img_weight, corners_data,
          corners_size, b_corners_data, b_corners_size);
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 0, false);
        covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 0, false);
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 4);

    /*  take highest score */
    ixstart = 1;
    mtmp = score[0];
    if (muDoubleScalarIsNaN(score[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 4)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(score[ix - 1])) {
          mtmp = score[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < 3) {
      while (ixstart + 1 < 4) {
        if (score[ixstart] > mtmp) {
          mtmp = score[ixstart];
        }

        ixstart++;
      }
    }

    i34 = corners->score->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= i34))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, i34, &dd_emlrtBCI, sp);
    }

    corners->score->data[i] = mtmp;
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_img_weight);
  emxFree_real_T(&b_img);
  covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (scoreCorners.c) */
