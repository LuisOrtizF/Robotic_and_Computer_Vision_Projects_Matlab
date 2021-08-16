/*
 * scoreCorners.c
 *
 * Code generation for function 'scoreCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "scoreCorners.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "cornerCorrelationScore.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sg_emlrtRSI = { 21, "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 1, 20, "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m"
};

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 12, 27, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 12, 29, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 13, 27, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 13, 29, "corners.p", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { 1, 720, 19, 32, "img", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { 1, 1280, 19, 56, "img", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { 1, 720, 20, 39, "img_weight", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { 1, 1280, 20, 63, "img_weight", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 21, 85, "corners.v1", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 21, 101, "corners.v2", "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 26, 21, "corners.score",
  "scoreCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
  0 };

/* Function Definitions */
void scoreCorners(const emlrtStack *sp, const real_T img[921600], const real_T
                  img_weight[921600], struct1_T *corners, const real_T radius[3])
{
  int32_T i;
  emxArray_real_T *b_img;
  emxArray_real_T *b_img_weight;
  int32_T i42;
  int32_T ixstart;
  real_T u;
  real_T v;
  real_T score[3];
  int32_T j;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg1;
  real_T d2;
  int32_T i43;
  int32_T i44;
  int32_T i45;
  int32_T i46;
  int32_T i47;
  int32_T i48;
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
  covrtLogFcn(&emlrtCoverageInstance, 10U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 0);

  /*  for all corners do */
  i = 0;
  emxInit_real_T(sp, &b_img, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &b_img_weight, 2, &y_emlrtRTEI, true);
  while (i <= corners->p->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 1);

    /*  corner location */
    i42 = corners->p->size[1];
    if (!(1 <= i42)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i42, &td_emlrtBCI, sp);
    }

    i42 = corners->p->size[0];
    ixstart = i + 1;
    if (!((ixstart >= 1) && (ixstart <= i42))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i42, &sd_emlrtBCI, sp);
    }

    u = muDoubleScalarRound(corners->p->data[i]);
    i42 = corners->p->size[1];
    if (!(2 <= i42)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i42, &vd_emlrtBCI, sp);
    }

    i42 = corners->p->size[0];
    ixstart = i + 1;
    if (!((ixstart >= 1) && (ixstart <= i42))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i42, &ud_emlrtBCI, sp);
    }

    v = muDoubleScalarRound(corners->p->data[i + corners->p->size[0]]);

    /*  compute corner statistics @ radius 1 */
    j = 0;
    while (j < 3) {
      covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 2);
      score[j] = 0.0;
      if (covrtLogCond(&emlrtCoverageInstance, 10U, 0U, 0, u > radius[j]) &&
          covrtLogCond(&emlrtCoverageInstance, 10U, 0U, 1, u <= 1280.0 -
                       radius[j]) && covrtLogCond(&emlrtCoverageInstance, 10U,
           0U, 2, v > radius[j]) && covrtLogCond(&emlrtCoverageInstance, 10U, 0U,
           3, v <= 720.0 - radius[j])) {
        covrtLogMcdc(&emlrtCoverageInstance, 10U, 0U, 0, true);
        covrtLogIf(&emlrtCoverageInstance, 10U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 3);
        mtmp = v - radius[j];
        d2 = v + radius[j];
        if (mtmp > d2) {
          i42 = 0;
          ixstart = 0;
        } else {
          i42 = (int32_T)mtmp;
          if (!((i42 >= 1) && (i42 <= 720))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, 720, &wd_emlrtBCI, sp);
          }

          i42--;
          ixstart = (int32_T)d2;
          if (!((ixstart >= 1) && (ixstart <= 720))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, 720, &wd_emlrtBCI, sp);
          }
        }

        mtmp = u - radius[j];
        d2 = u + radius[j];
        if (mtmp > d2) {
          ix = 0;
          i43 = 0;
        } else {
          ix = (int32_T)mtmp;
          if (!((ix >= 1) && (ix <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, 1280, &xd_emlrtBCI, sp);
          }

          ix--;
          i43 = (int32_T)d2;
          if (!((i43 >= 1) && (i43 <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(i43, 1, 1280, &xd_emlrtBCI, sp);
          }
        }

        mtmp = v - radius[j];
        d2 = v + radius[j];
        if (mtmp > d2) {
          i44 = 0;
          i45 = 0;
        } else {
          i44 = (int32_T)mtmp;
          if (!((i44 >= 1) && (i44 <= 720))) {
            emlrtDynamicBoundsCheckR2012b(i44, 1, 720, &yd_emlrtBCI, sp);
          }

          i44--;
          i45 = (int32_T)d2;
          if (!((i45 >= 1) && (i45 <= 720))) {
            emlrtDynamicBoundsCheckR2012b(i45, 1, 720, &yd_emlrtBCI, sp);
          }
        }

        mtmp = u - radius[j];
        d2 = u + radius[j];
        if (mtmp > d2) {
          i46 = 0;
          i47 = 0;
        } else {
          i46 = (int32_T)mtmp;
          if (!((i46 >= 1) && (i46 <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(i46, 1, 1280, &ae_emlrtBCI, sp);
          }

          i46--;
          i47 = (int32_T)d2;
          if (!((i47 >= 1) && (i47 <= 1280))) {
            emlrtDynamicBoundsCheckR2012b(i47, 1, 1280, &ae_emlrtBCI, sp);
          }
        }

        i48 = b_img->size[0] * b_img->size[1];
        b_img->size[0] = ixstart - i42;
        b_img->size[1] = i43 - ix;
        emxEnsureCapacity(sp, (emxArray__common *)b_img, i48, (int32_T)sizeof
                          (real_T), &y_emlrtRTEI);
        loop_ub = i43 - ix;
        for (i43 = 0; i43 < loop_ub; i43++) {
          b_loop_ub = ixstart - i42;
          for (i48 = 0; i48 < b_loop_ub; i48++) {
            b_img->data[i48 + b_img->size[0] * i43] = img[(i42 + i48) + 720 *
              (ix + i43)];
          }
        }

        i42 = b_img_weight->size[0] * b_img_weight->size[1];
        b_img_weight->size[0] = i45 - i44;
        b_img_weight->size[1] = i47 - i46;
        emxEnsureCapacity(sp, (emxArray__common *)b_img_weight, i42, (int32_T)
                          sizeof(real_T), &y_emlrtRTEI);
        loop_ub = i47 - i46;
        for (i42 = 0; i42 < loop_ub; i42++) {
          b_loop_ub = i45 - i44;
          for (ixstart = 0; ixstart < b_loop_ub; ixstart++) {
            b_img_weight->data[ixstart + b_img_weight->size[0] * i42] =
              img_weight[(i44 + ixstart) + 720 * (i46 + i42)];
          }
        }

        loop_ub = corners->v1->size[1];
        i42 = corners->v1->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i42))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i42, &be_emlrtBCI, sp);
        }

        ixstart = i + 1;
        corners_size[0] = 1;
        corners_size[1] = loop_ub;
        for (i42 = 0; i42 < loop_ub; i42++) {
          corners_data[i42] = corners->v1->data[(ixstart + corners->v1->size[0] *
            i42) - 1];
        }

        loop_ub = corners->v2->size[1];
        i42 = corners->v2->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i42))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i42, &ce_emlrtBCI, sp);
        }

        ixstart = i + 1;
        b_corners_size[0] = 1;
        b_corners_size[1] = loop_ub;
        for (i42 = 0; i42 < loop_ub; i42++) {
          b_corners_data[i42] = corners->v2->data[(ixstart + corners->v2->size[0]
            * i42) - 1];
        }

        st.site = &sg_emlrtRSI;
        score[j] = cornerCorrelationScore(&st, b_img, b_img_weight, corners_data,
          corners_size, b_corners_data, b_corners_size);
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 10U, 0U, 0, false);
        covrtLogIf(&emlrtCoverageInstance, 10U, 0U, 0, false);
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 4);

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

    i42 = corners->score->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= i42))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, i42, &de_emlrtBCI, sp);
    }

    corners->score->data[i] = mtmp;
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_img_weight);
  emxFree_real_T(&b_img);
  covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (scoreCorners.c) */
