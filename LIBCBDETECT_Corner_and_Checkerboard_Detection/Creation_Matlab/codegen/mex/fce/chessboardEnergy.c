/*
 * chessboardEnergy.c
 *
 * Code generation for function 'chessboardEnergy'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "chessboardEnergy.h"
#include "norm.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtBCInfo gb_emlrtBCI = { -1, -1, 13, 44, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtECInfo q_emlrtECI = { 2, 14, 44, "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m"
};

static emlrtECInfo r_emlrtECI = { 2, 14, 73, "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m"
};

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 21, 50, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtECInfo s_emlrtECI = { 2, 22, 44, "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m"
};

static emlrtECInfo t_emlrtECI = { 2, 22, 73, "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m"
};

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 21, 33, "corners.p",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 21, 44, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 13, 33, "corners.p",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 13, 46, "chessboard",
  "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
  0 };

/* Function Definitions */
real_T chessboardEnergy(const emlrtStack *sp, const emxArray_real_T *chessboard,
  const emxArray_real_T *corners_p)
{
  real_T E_structure;
  int32_T j;
  int32_T k;
  int32_T b_chessboard;
  int32_T i15;
  int32_T i16;
  int32_T b_corners_p;
  int32_T loop_ub;
  int32_T i17;
  int32_T corners_p_size[2];
  int32_T i18;
  int32_T b_corners_p_size[2];
  int32_T c_corners_p[2];
  int32_T c_corners_p_size[2];
  int32_T d_corners_p[2];
  real_T x_data[6];
  int32_T d_corners_p_size[2];
  int32_T e_corners_p[2];
  int32_T f_corners_p[2];
  int32_T tmp_size[2];
  real_T tmp_data[2];
  int32_T e_corners_p_size[2];
  int32_T iv3[2];
  int32_T g_corners_p[2];
  int32_T f_corners_p_size[2];
  int32_T iv4[2];
  int32_T h_corners_p[2];
  int32_T g_corners_p_size[2];
  int32_T h_corners_p_size[2];
  int32_T i_corners_p[2];
  int32_T i_corners_p_size[2];
  int32_T j_corners_p[2];
  int32_T j_corners_p_size[2];
  int32_T k_corners_p[2];
  int32_T l_corners_p[2];
  real_T b_x_data[2];
  int32_T x_size[2];
  real_T x;
  int32_T b_x_size[2];
  int32_T c_x_size[2];
  real_T y;
  int32_T d_x_size[2];
  covrtLogFcn(&emlrtCoverageInstance, 10U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 0);

  /*  energy: number of corners */
  /*  energy: structure */
  E_structure = 0.0;

  /*  walk through rows */
  j = 0;
  while (j <= chessboard->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 0, 1);
    k = 0;
    while (k <= chessboard->size[1] - 3) {
      covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 1);
      b_chessboard = chessboard->size[1];
      i15 = chessboard->size[0];
      i16 = 1 + j;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &gb_emlrtBCI, sp);
      }

      b_corners_p = corners_p->size[0];
      loop_ub = corners_p->size[1];
      for (i15 = 0; i15 < loop_ub; i15++) {
        for (i17 = 0; i17 < 3; i17++) {
          i18 = (i17 + k) + 1;
          if (!((i18 >= 1) && (i18 <= b_chessboard))) {
            emlrtDynamicBoundsCheckR2012b(i18, 1, b_chessboard, &lb_emlrtBCI, sp);
          }

          i18 = (int32_T)chessboard->data[(i16 + chessboard->size[0] * (i18 - 1))
            - 1];
          if (!((i18 >= 1) && (i18 <= b_corners_p))) {
            emlrtDynamicBoundsCheckR2012b(i18, 1, b_corners_p, &kb_emlrtBCI, sp);
          }

          x_data[i17 + 3 * i15] = corners_p->data[(i18 + corners_p->size[0] *
            i15) - 1];
        }
      }

      i15 = corners_p->size[1];
      i16 = corners_p->size[1];
      corners_p_size[0] = 1;
      corners_p_size[1] = i15;
      b_corners_p_size[0] = 1;
      b_corners_p_size[1] = i16;
      for (i15 = 0; i15 < 2; i15++) {
        c_corners_p[i15] = corners_p_size[i15];
        d_corners_p[i15] = b_corners_p_size[i15];
      }

      if ((c_corners_p[0] != d_corners_p[0]) || (c_corners_p[1] != d_corners_p[1]))
      {
        emlrtSizeEqCheckNDR2012b(&c_corners_p[0], &d_corners_p[0], &q_emlrtECI,
          sp);
      }

      loop_ub = corners_p->size[1];
      tmp_size[0] = 1;
      tmp_size[1] = loop_ub;
      for (i15 = 0; i15 < loop_ub; i15++) {
        tmp_data[i15] = 2.0 * x_data[1 + 3 * i15];
      }

      i15 = corners_p->size[1];
      e_corners_p_size[0] = 1;
      e_corners_p_size[1] = i15;
      for (i15 = 0; i15 < 2; i15++) {
        g_corners_p[i15] = e_corners_p_size[i15];
        iv3[i15] = tmp_size[i15];
      }

      if ((g_corners_p[0] != iv3[0]) || (g_corners_p[1] != iv3[1])) {
        emlrtSizeEqCheckNDR2012b(&g_corners_p[0], &iv3[0], &q_emlrtECI, sp);
      }

      i15 = corners_p->size[1];
      i16 = corners_p->size[1];
      g_corners_p_size[0] = 1;
      g_corners_p_size[1] = i15;
      h_corners_p_size[0] = 1;
      h_corners_p_size[1] = i16;
      for (i15 = 0; i15 < 2; i15++) {
        i_corners_p[i15] = g_corners_p_size[i15];
        j_corners_p[i15] = h_corners_p_size[i15];
      }

      if ((i_corners_p[0] != j_corners_p[0]) || (i_corners_p[1] != j_corners_p[1]))
      {
        emlrtSizeEqCheckNDR2012b(&i_corners_p[0], &j_corners_p[0], &r_emlrtECI,
          sp);
      }

      loop_ub = corners_p->size[1];
      x_size[0] = 1;
      x_size[1] = loop_ub;
      for (i15 = 0; i15 < loop_ub; i15++) {
        b_x_data[i15] = (x_data[3 * i15] + x_data[2 + 3 * i15]) - tmp_data[i15];
      }

      x = b_norm(b_x_data, x_size);
      loop_ub = corners_p->size[1];
      c_x_size[0] = 1;
      c_x_size[1] = loop_ub;
      for (i15 = 0; i15 < loop_ub; i15++) {
        b_x_data[i15] = x_data[3 * i15] - x_data[2 + 3 * i15];
      }

      y = b_norm(b_x_data, c_x_size);
      E_structure = muDoubleScalarMax(E_structure, x / y);
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 1, 0);
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 0, 0);

  /*  walk through columns */
  j = 0;
  while (j <= chessboard->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 2, 1);
    k = 0;
    while (k <= chessboard->size[0] - 3) {
      covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 3, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 2);
      b_chessboard = chessboard->size[0];
      i15 = chessboard->size[1];
      i16 = 1 + j;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &hb_emlrtBCI, sp);
      }

      b_corners_p = corners_p->size[0];
      loop_ub = corners_p->size[1];
      for (i15 = 0; i15 < loop_ub; i15++) {
        for (i17 = 0; i17 < 3; i17++) {
          i18 = (i17 + k) + 1;
          if (!((i18 >= 1) && (i18 <= b_chessboard))) {
            emlrtDynamicBoundsCheckR2012b(i18, 1, b_chessboard, &jb_emlrtBCI, sp);
          }

          i18 = (int32_T)chessboard->data[(i18 + chessboard->size[0] * (i16 - 1))
            - 1];
          if (!((i18 >= 1) && (i18 <= b_corners_p))) {
            emlrtDynamicBoundsCheckR2012b(i18, 1, b_corners_p, &ib_emlrtBCI, sp);
          }

          x_data[i17 + 3 * i15] = corners_p->data[(i18 + corners_p->size[0] *
            i15) - 1];
        }
      }

      i15 = corners_p->size[1];
      i16 = corners_p->size[1];
      c_corners_p_size[0] = 1;
      c_corners_p_size[1] = i15;
      d_corners_p_size[0] = 1;
      d_corners_p_size[1] = i16;
      for (i15 = 0; i15 < 2; i15++) {
        e_corners_p[i15] = c_corners_p_size[i15];
        f_corners_p[i15] = d_corners_p_size[i15];
      }

      if ((e_corners_p[0] != f_corners_p[0]) || (e_corners_p[1] != f_corners_p[1]))
      {
        emlrtSizeEqCheckNDR2012b(&e_corners_p[0], &f_corners_p[0], &s_emlrtECI,
          sp);
      }

      loop_ub = corners_p->size[1];
      tmp_size[0] = 1;
      tmp_size[1] = loop_ub;
      for (i15 = 0; i15 < loop_ub; i15++) {
        tmp_data[i15] = 2.0 * x_data[1 + 3 * i15];
      }

      i15 = corners_p->size[1];
      f_corners_p_size[0] = 1;
      f_corners_p_size[1] = i15;
      for (i15 = 0; i15 < 2; i15++) {
        h_corners_p[i15] = f_corners_p_size[i15];
        iv4[i15] = tmp_size[i15];
      }

      if ((h_corners_p[0] != iv4[0]) || (h_corners_p[1] != iv4[1])) {
        emlrtSizeEqCheckNDR2012b(&h_corners_p[0], &iv4[0], &s_emlrtECI, sp);
      }

      i15 = corners_p->size[1];
      i16 = corners_p->size[1];
      i_corners_p_size[0] = 1;
      i_corners_p_size[1] = i15;
      j_corners_p_size[0] = 1;
      j_corners_p_size[1] = i16;
      for (i15 = 0; i15 < 2; i15++) {
        k_corners_p[i15] = i_corners_p_size[i15];
        l_corners_p[i15] = j_corners_p_size[i15];
      }

      if ((k_corners_p[0] != l_corners_p[0]) || (k_corners_p[1] != l_corners_p[1]))
      {
        emlrtSizeEqCheckNDR2012b(&k_corners_p[0], &l_corners_p[0], &t_emlrtECI,
          sp);
      }

      loop_ub = corners_p->size[1];
      b_x_size[0] = 1;
      b_x_size[1] = loop_ub;
      for (i15 = 0; i15 < loop_ub; i15++) {
        b_x_data[i15] = (x_data[3 * i15] + x_data[2 + 3 * i15]) - tmp_data[i15];
      }

      x = b_norm(b_x_data, b_x_size);
      loop_ub = corners_p->size[1];
      d_x_size[0] = 1;
      d_x_size[1] = loop_ub;
      for (i15 = 0; i15 < loop_ub; i15++) {
        b_x_data[i15] = x_data[3 * i15] - x_data[2 + 3 * i15];
      }

      y = b_norm(b_x_data, d_x_size);
      E_structure = muDoubleScalarMax(E_structure, x / y);
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 3, 0);
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 10U, 0U, 2, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 10U, 3);

  /*  final energy */
  return -(real_T)chessboard->size[0] * (real_T)chessboard->size[1] + (real_T)
    chessboard->size[0] * (real_T)chessboard->size[1] * E_structure;
}

/* End of code generation (chessboardEnergy.c) */
