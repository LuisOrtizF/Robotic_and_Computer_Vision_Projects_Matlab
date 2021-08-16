/*
 * createCorrelationPatch.c
 *
 * Code generation for function 'createCorrelationPatch'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "createCorrelationPatch.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "norm.h"
#include "sum.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo jf_emlrtRSI = { 47, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m"
};

static emlrtRSInfo kf_emlrtRSI = { 48, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m"
};

static emlrtRSInfo lf_emlrtRSI = { 49, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m"
};

static emlrtRSInfo mf_emlrtRSI = { 50, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 2, 21, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m"
};

static emlrtDCInfo b_emlrtDCI = { 9, 25, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  1 };

static emlrtDCInfo c_emlrtDCI = { 9, 25, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  4 };

static emlrtDCInfo d_emlrtDCI = { 9, 32, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  1 };

static emlrtDCInfo e_emlrtDCI = { 9, 32, "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  4 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 41, 23, "template.b2",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 41, 25, "template.b2",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 39, 23, "template.b1",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 39, 25, "template.b1",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 37, 23, "template.a2",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 37, 25, "template.a2",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 35, 23, "template.a1",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 35, 25, "template.a1",
  "createCorrelationPatch",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
  0 };

/* Function Definitions */
void createCorrelationPatch(const emlrtStack *sp, real_T angle_1, real_T angle_2,
  real_T radius, emxArray_real_T *template_a1, emxArray_real_T *template_a2,
  emxArray_real_T *template_b1, emxArray_real_T *template_b2)
{
  real_T width;
  real_T height;
  int32_T b_template_a1;
  real_T y;
  real_T t;
  int32_T k;
  real_T n1[2];
  real_T n2[2];
  int32_T u;
  int32_T v;
  int32_T c_template_a1[1];
  emxArray_real_T d_template_a1;
  real_T vec[2];
  real_T dist;
  real_T s1;
  real_T s2;
  int32_T b_template_a2[1];
  int32_T b_template_b1[1];
  int32_T b_template_b2[1];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(&emlrtCoverageInstance, 6U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 0);

  /*  width and height */
  width = radius * 2.0 + 1.0;
  height = radius * 2.0 + 1.0;

  /*  initialize template */
  b_template_a1 = template_a1->size[0] * template_a1->size[1];
  if (!(height >= 0.0)) {
    emlrtNonNegativeCheckR2012b(height, &c_emlrtDCI, sp);
  }

  y = height;
  if (y != (int32_T)muDoubleScalarFloor(y)) {
    emlrtIntegerCheckR2012b(y, &b_emlrtDCI, sp);
  }

  template_a1->size[0] = (int32_T)y;
  if (!(width >= 0.0)) {
    emlrtNonNegativeCheckR2012b(width, &e_emlrtDCI, sp);
  }

  y = width;
  if (y != (int32_T)muDoubleScalarFloor(y)) {
    emlrtIntegerCheckR2012b(y, &d_emlrtDCI, sp);
  }

  template_a1->size[1] = (int32_T)y;
  emxEnsureCapacity(sp, (emxArray__common *)template_a1, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  if (!(height >= 0.0)) {
    emlrtNonNegativeCheckR2012b(height, &c_emlrtDCI, sp);
  }

  y = height;
  if (y != (int32_T)muDoubleScalarFloor(y)) {
    emlrtIntegerCheckR2012b(y, &b_emlrtDCI, sp);
  }

  if (!(width >= 0.0)) {
    emlrtNonNegativeCheckR2012b(width, &e_emlrtDCI, sp);
  }

  t = width;
  if (t != (int32_T)muDoubleScalarFloor(t)) {
    emlrtIntegerCheckR2012b(t, &d_emlrtDCI, sp);
  }

  k = (int32_T)y * (int32_T)t;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_a1->data[b_template_a1] = 0.0;
  }

  b_template_a1 = template_a2->size[0] * template_a2->size[1];
  template_a2->size[0] = (int32_T)height;
  template_a2->size[1] = (int32_T)width;
  emxEnsureCapacity(sp, (emxArray__common *)template_a2, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = (int32_T)height * (int32_T)width;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_a2->data[b_template_a1] = 0.0;
  }

  b_template_a1 = template_b1->size[0] * template_b1->size[1];
  template_b1->size[0] = (int32_T)height;
  template_b1->size[1] = (int32_T)width;
  emxEnsureCapacity(sp, (emxArray__common *)template_b1, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = (int32_T)height * (int32_T)width;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_b1->data[b_template_a1] = 0.0;
  }

  b_template_a1 = template_b2->size[0] * template_b2->size[1];
  template_b2->size[0] = (int32_T)height;
  template_b2->size[1] = (int32_T)width;
  emxEnsureCapacity(sp, (emxArray__common *)template_b2, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = (int32_T)height * (int32_T)width;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_b2->data[b_template_a1] = 0.0;
  }

  /*  midpoint */
  /*  compute normals from angles */
  n1[0] = -muDoubleScalarSin(angle_1);
  n1[1] = muDoubleScalarCos(angle_1);
  n2[0] = -muDoubleScalarSin(angle_2);
  n2[1] = muDoubleScalarCos(angle_2);

  /*  for all points in template do */
  u = 1;
  while (u - 1 <= (int32_T)width - 1) {
    covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 0, 1);
    v = 1;
    while (v - 1 <= (int32_T)height - 1) {
      covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 1);

      /*  vector */
      vec[0] = (1.0 + (real_T)(u - 1)) - (radius + 1.0);
      vec[1] = (1.0 + (real_T)(v - 1)) - (radius + 1.0);
      dist = norm(vec);

      /*  check on which side of the normals we are */
      s1 = 0.0;
      s2 = 0.0;
      for (k = 0; k < 2; k++) {
        s1 += vec[k] * n1[k];
        s2 += vec[k] * n2[k];
      }

      if (covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 0, s1 <= -0.1) &&
          covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 1, s2 <= -0.1)) {
        covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 0, true);
        covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 2);
        y = radius / 2.0;
        if (y > 0.0) {
          t = dist / y;
          y = muDoubleScalarExp(-0.5 * t * t) / (2.5066282746310002 * y);
        } else {
          y = rtNaN;
        }

        b_template_a1 = template_a1->size[0];
        if (!((v >= 1) && (v <= b_template_a1))) {
          emlrtDynamicBoundsCheckR2012b(v, 1, b_template_a1, &hb_emlrtBCI, sp);
        }

        b_template_a1 = template_a1->size[1];
        if (!((u >= 1) && (u <= b_template_a1))) {
          emlrtDynamicBoundsCheckR2012b(u, 1, b_template_a1, &ib_emlrtBCI, sp);
        }

        template_a1->data[(v + template_a1->size[0] * (u - 1)) - 1] = y;
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 0, false);
        covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 0, false);
        if (covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 2, s1 >= 0.1) &&
            covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 3, s2 >= 0.1)) {
          covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 1, true);
          covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 1, true);
          covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 3);
          y = radius / 2.0;
          if (y > 0.0) {
            t = dist / y;
            y = muDoubleScalarExp(-0.5 * t * t) / (2.5066282746310002 * y);
          } else {
            y = rtNaN;
          }

          b_template_a1 = template_a2->size[0];
          if (!((v >= 1) && (v <= b_template_a1))) {
            emlrtDynamicBoundsCheckR2012b(v, 1, b_template_a1, &fb_emlrtBCI, sp);
          }

          b_template_a1 = template_a2->size[1];
          if (!((u >= 1) && (u <= b_template_a1))) {
            emlrtDynamicBoundsCheckR2012b(u, 1, b_template_a1, &gb_emlrtBCI, sp);
          }

          template_a2->data[(v + template_a2->size[0] * (u - 1)) - 1] = y;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 1, false);
          covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 1, false);
          if (covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 4, s1 <= -0.1) &&
              covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 5, s2 >= 0.1)) {
            covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 2, true);
            covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 2, true);
            covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 4);
            y = radius / 2.0;
            if (y > 0.0) {
              t = dist / y;
              y = muDoubleScalarExp(-0.5 * t * t) / (2.5066282746310002 * y);
            } else {
              y = rtNaN;
            }

            b_template_a1 = template_b1->size[0];
            if (!((v >= 1) && (v <= b_template_a1))) {
              emlrtDynamicBoundsCheckR2012b(v, 1, b_template_a1, &db_emlrtBCI,
                sp);
            }

            b_template_a1 = template_b1->size[1];
            if (!((u >= 1) && (u <= b_template_a1))) {
              emlrtDynamicBoundsCheckR2012b(u, 1, b_template_a1, &eb_emlrtBCI,
                sp);
            }

            template_b1->data[(v + template_b1->size[0] * (u - 1)) - 1] = y;
          } else {
            covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 2, false);
            covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 2, false);
            if (covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 6, s1 >= 0.1) &&
                covrtLogCond(&emlrtCoverageInstance, 6U, 0U, 7, s2 <= -0.1)) {
              covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 3, true);
              covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 3, true);
              covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 5);
              y = radius / 2.0;
              if (y > 0.0) {
                t = dist / y;
                y = muDoubleScalarExp(-0.5 * t * t) / (2.5066282746310002 * y);
              } else {
                y = rtNaN;
              }

              b_template_a1 = template_b2->size[0];
              if (!((v >= 1) && (v <= b_template_a1))) {
                emlrtDynamicBoundsCheckR2012b(v, 1, b_template_a1, &bb_emlrtBCI,
                  sp);
              }

              b_template_a1 = template_b2->size[1];
              if (!((u >= 1) && (u <= b_template_a1))) {
                emlrtDynamicBoundsCheckR2012b(u, 1, b_template_a1, &cb_emlrtBCI,
                  sp);
              }

              template_b2->data[(v + template_b2->size[0] * (u - 1)) - 1] = y;
            } else {
              covrtLogMcdc(&emlrtCoverageInstance, 6U, 0U, 3, false);
              covrtLogIf(&emlrtCoverageInstance, 6U, 0U, 3, false);
            }
          }
        }
      }

      v++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 1, 0);
    u++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 6U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 6U, 6);

  /*  normalize */
  c_template_a1[0] = template_a1->size[0] * template_a1->size[1];
  d_template_a1 = *template_a1;
  d_template_a1.size = (int32_T *)&c_template_a1;
  d_template_a1.numDimensions = 1;
  st.site = &jf_emlrtRSI;
  y = sum(&st, &d_template_a1);
  b_template_a1 = template_a1->size[0] * template_a1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)template_a1, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = template_a1->size[0];
  b_template_a1 = template_a1->size[1];
  k *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_a1->data[b_template_a1] /= y;
  }

  b_template_a2[0] = template_a2->size[0] * template_a2->size[1];
  d_template_a1 = *template_a2;
  d_template_a1.size = (int32_T *)&b_template_a2;
  d_template_a1.numDimensions = 1;
  st.site = &kf_emlrtRSI;
  y = sum(&st, &d_template_a1);
  b_template_a1 = template_a2->size[0] * template_a2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)template_a2, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = template_a2->size[0];
  b_template_a1 = template_a2->size[1];
  k *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_a2->data[b_template_a1] /= y;
  }

  b_template_b1[0] = template_b1->size[0] * template_b1->size[1];
  d_template_a1 = *template_b1;
  d_template_a1.size = (int32_T *)&b_template_b1;
  d_template_a1.numDimensions = 1;
  st.site = &lf_emlrtRSI;
  y = sum(&st, &d_template_a1);
  b_template_a1 = template_b1->size[0] * template_b1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)template_b1, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = template_b1->size[0];
  b_template_a1 = template_b1->size[1];
  k *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_b1->data[b_template_a1] /= y;
  }

  b_template_b2[0] = template_b2->size[0] * template_b2->size[1];
  d_template_a1 = *template_b2;
  d_template_a1.size = (int32_T *)&b_template_b2;
  d_template_a1.numDimensions = 1;
  st.site = &mf_emlrtRSI;
  y = sum(&st, &d_template_a1);
  b_template_a1 = template_b2->size[0] * template_b2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)template_b2, b_template_a1, (int32_T)
                    sizeof(real_T), &t_emlrtRTEI);
  k = template_b2->size[0];
  b_template_a1 = template_b2->size[1];
  k *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < k; b_template_a1++) {
    template_b2->data[b_template_a1] /= y;
  }
}

/* End of code generation (createCorrelationPatch.c) */
