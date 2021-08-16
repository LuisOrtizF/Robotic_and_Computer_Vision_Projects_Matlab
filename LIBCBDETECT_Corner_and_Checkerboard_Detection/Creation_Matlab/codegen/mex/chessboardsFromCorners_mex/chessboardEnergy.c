/*
 * chessboardEnergy.c
 *
 * Code generation for function 'chessboardEnergy'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "chessboardEnergy.h"
#include "norm.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtBCInfo g_emlrtBCI = { -1, -1, 13, 44, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 21, 50, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { 1, 100, 21, 33, "corners.p",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 21, 44, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { 1, 100, 13, 33, "corners.p",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 13, 46, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

/* Function Definitions */
real_T chessboardEnergy(const emlrtStack *sp, const emxArray_real_T *chessboard,
  const real_T corners_p[200])
{
  real_T E_structure;
  int32_T j;
  int32_T k;
  int32_T b_chessboard;
  int32_T i3;
  int32_T b_j;
  real_T x[6];
  real_T b_x[2];
  int32_T i4;
  real_T c_x[2];
  int32_T i5;
  covrtLogFcn(&emlrtCoverageInstance, 2U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 0);

  /*  energy: number of corners */
  /*  energy: structure */
  E_structure = 0.0;

  /*  walk through rows */
  j = 0;
  while (j <= chessboard->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 0, 1);
    k = 0;
    while (k <= chessboard->size[1] - 3) {
      covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 1);
      b_chessboard = chessboard->size[1];
      i3 = chessboard->size[0];
      if (!((j + 1 >= 1) && (j + 1 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i3, &g_emlrtBCI, sp);
      }

      b_j = j + 1;
      for (i3 = 0; i3 < 2; i3++) {
        for (i4 = 0; i4 < 3; i4++) {
          i5 = (i4 + k) + 1;
          if (!((i5 >= 1) && (i5 <= b_chessboard))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, b_chessboard, &l_emlrtBCI, sp);
          }

          i5 = (int32_T)chessboard->data[(b_j + chessboard->size[0] * (i5 - 1))
            - 1];
          if (!((i5 >= 1) && (i5 <= 100))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, 100, &k_emlrtBCI, sp);
          }

          x[i4 + 3 * i3] = corners_p[(i5 + 100 * i3) - 1];
        }
      }

      for (i3 = 0; i3 < 2; i3++) {
        b_x[i3] = (x[3 * i3] + x[2 + 3 * i3]) - 2.0 * x[1 + 3 * i3];
        c_x[i3] = x[3 * i3] - x[2 + 3 * i3];
      }

      E_structure = muDoubleScalarMax(E_structure, norm(b_x) / norm(c_x));
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 1, 0);
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 0, 0);

  /*  walk through columns */
  j = 0;
  while (j <= chessboard->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 2, 1);
    k = 0;
    while (k <= chessboard->size[0] - 3) {
      covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 3, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 2);
      b_chessboard = chessboard->size[0];
      i3 = chessboard->size[1];
      if (!((j + 1 >= 1) && (j + 1 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i3, &h_emlrtBCI, sp);
      }

      b_j = j + 1;
      for (i3 = 0; i3 < 2; i3++) {
        for (i4 = 0; i4 < 3; i4++) {
          i5 = (i4 + k) + 1;
          if (!((i5 >= 1) && (i5 <= b_chessboard))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, b_chessboard, &j_emlrtBCI, sp);
          }

          i5 = (int32_T)chessboard->data[(i5 + chessboard->size[0] * (b_j - 1))
            - 1];
          if (!((i5 >= 1) && (i5 <= 100))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, 100, &i_emlrtBCI, sp);
          }

          x[i4 + 3 * i3] = corners_p[(i5 + 100 * i3) - 1];
        }
      }

      for (i3 = 0; i3 < 2; i3++) {
        b_x[i3] = (x[3 * i3] + x[2 + 3 * i3]) - 2.0 * x[1 + 3 * i3];
        c_x[i3] = x[3 * i3] - x[2 + 3 * i3];
      }

      E_structure = muDoubleScalarMax(E_structure, norm(b_x) / norm(c_x));
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 3, 0);
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 2, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 3);

  /*  final energy */
  return -(real_T)chessboard->size[0] * (real_T)chessboard->size[1] + (real_T)
    chessboard->size[0] * (real_T)chessboard->size[1] * E_structure;
}

/* End of code generation (chessboardEnergy.c) */
