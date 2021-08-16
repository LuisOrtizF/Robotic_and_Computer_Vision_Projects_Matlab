/*
 * initChessboard.c
 *
 * Code generation for function 'initChessboard'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "initChessboard.h"
#include "error.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "sqrt.h"
#include "power.h"
#include "nullAssignment.h"
#include "indexShapeCheck.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 23, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo m_emlrtRSI = { 24, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo n_emlrtRSI = { 25, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo o_emlrtRSI = { 26, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo p_emlrtRSI = { 29, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo q_emlrtRSI = { 30, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo r_emlrtRSI = { 31, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo s_emlrtRSI = { 32, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo t_emlrtRSI = { 36, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo u_emlrtRSI = { 47, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo v_emlrtRSI = { 48, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo w_emlrtRSI = { 57, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo x_emlrtRSI = { 62, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo rb_emlrtRSI = { 15, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo sb_emlrtRSI = { 16, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 43, 36, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo emlrtECI = { -1, 62, 30, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo b_emlrtECI = { -1, 57, 22, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo c_emlrtECI = { 2, 56, 17, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo d_emlrtECI = { -1, 53, 13, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo e_emlrtECI = { 2, 52, 12, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtBCInfo d_emlrtBCI = { 1, 100, 52, 67, "corners.p", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 63, 20, "unused", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 59, 5, "dist_point", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

/* Function Declarations */
static void directionalNeighbor(const emlrtStack *sp, real_T idx, const real_T
  v[2], const real_T chessboard_data[], const int32_T chessboard_size[2], const
  real_T corners_p[200], real_T *neighbor_idx, real_T *min_dist);

/* Function Definitions */
static void directionalNeighbor(const emlrtStack *sp, real_T idx, const real_T
  v[2], const real_T chessboard_data[], const int32_T chessboard_size[2], const
  real_T corners_p[200], real_T *neighbor_idx, real_T *min_dist)
{
  int32_T tmp_data[9];
  int32_T itmp;
  int32_T ix;
  int32_T ixstart;
  int32_T unused_size[2];
  real_T unused_data[100];
  int32_T b_chessboard_data[9];
  int32_T b_chessboard_size[1];
  emxArray_real_T *y;
  emxArray_int32_T c_chessboard_data;
  int32_T corners_p_size[2];
  int32_T b_corners_p[2];
  int32_T b_y[2];
  int32_T dir_size[2];
  emxArray_real_T *c_y;
  real_T dir_data[200];
  emxArray_real_T *d_y;
  int32_T dist_size_idx_0;
  real_T dist_data[100];
  int32_T dir[2];
  int32_T e_y[2];
  real_T b_dir_data;
  real_T c_dir_data[100];
  int32_T b_dir_size[1];
  emxArray_real_T d_dir_data;
  int32_T dist_edge_size_idx_0;
  real_T e_dir_data[100];
  real_T dist_edge_data[100];
  int32_T c_dir_size[1];
  emxArray_real_T f_dir_data;
  real_T dist_point_data[100];
  real_T b_dist_point_data;
  boolean_T b1;
  real_T mtmp;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 1U, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 3);

  /*  list of neighboring elements, which are currently not in use */
  st.site = &u_emlrtRSI;
  indexShapeCheck(&st, chessboard_size, chessboard_size);
  itmp = 0;
  for (ix = 0; ix < 9; ix++) {
    if (chessboard_data[ix] != 0.0) {
      itmp++;
    }
  }

  ixstart = 0;
  for (ix = 0; ix < 9; ix++) {
    if (chessboard_data[ix] != 0.0) {
      tmp_data[ixstart] = ix + 1;
      ixstart++;
    }
  }

  unused_size[0] = 1;
  unused_size[1] = 100;
  for (ix = 0; ix < 100; ix++) {
    unused_data[ix] = 1.0 + (real_T)ix;
  }

  b_chessboard_size[0] = itmp;
  for (ix = 0; ix < itmp; ix++) {
    b_chessboard_data[ix] = (int32_T)chessboard_data[tmp_data[ix] - 1];
  }

  emxInit_real_T(sp, &y, 2, &c_emlrtRTEI, true);
  c_chessboard_data.data = (int32_T *)&b_chessboard_data;
  c_chessboard_data.size = (int32_T *)&b_chessboard_size;
  c_chessboard_data.allocatedSize = 9;
  c_chessboard_data.numDimensions = 1;
  c_chessboard_data.canFreeData = false;
  st.site = &v_emlrtRSI;
  nullAssignment(&st, unused_data, unused_size, &c_chessboard_data);

  /*  direction and distance to unused corners */
  ix = (int32_T)idx;
  if (!((ix >= 1) && (ix <= 100))) {
    emlrtDynamicBoundsCheckR2012b(ix, 1, 100, &d_emlrtBCI, sp);
  }

  ix = y->size[0] * y->size[1];
  y->size[0] = unused_size[1];
  y->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)y, ix, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  itmp = unused_size[1];
  for (ix = 0; ix < itmp; ix++) {
    for (ixstart = 0; ixstart < 2; ixstart++) {
      y->data[ix + y->size[0] * ixstart] = corners_p[((int32_T)idx + 100 *
        ixstart) - 1];
    }
  }

  corners_p_size[0] = unused_size[1];
  corners_p_size[1] = 2;
  for (ix = 0; ix < 2; ix++) {
    b_corners_p[ix] = corners_p_size[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    b_y[ix] = y->size[ix];
  }

  if ((b_corners_p[0] != b_y[0]) || (b_corners_p[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_corners_p[0], &b_y[0], &e_emlrtECI, sp);
  }

  dir_size[0] = unused_size[1];
  dir_size[1] = 2;
  for (ix = 0; ix < 2; ix++) {
    itmp = unused_size[1];
    for (ixstart = 0; ixstart < itmp; ixstart++) {
      dir_data[ixstart + dir_size[0] * ix] = corners_p[((int32_T)
        unused_data[unused_size[0] * ixstart] + 100 * ix) - 1] - y->data[ixstart
        + y->size[0] * ix];
    }
  }

  emxInit_real_T1(sp, &c_y, 1, &c_emlrtRTEI, true);
  itmp = unused_size[1];
  ix = c_y->size[0];
  c_y->size[0] = unused_size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_y, ix, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (ix = 0; ix < itmp; ix++) {
    c_y->data[ix] = dir_data[ix] * v[0];
  }

  emxInit_real_T1(sp, &d_y, 1, &c_emlrtRTEI, true);
  itmp = unused_size[1];
  ix = d_y->size[0];
  d_y->size[0] = unused_size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_y, ix, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (ix = 0; ix < itmp; ix++) {
    d_y->data[ix] = dir_data[ix + dir_size[0]] * v[1];
  }

  ix = c_y->size[0];
  ixstart = d_y->size[0];
  if (ix != ixstart) {
    emlrtSizeEqCheck1DR2012b(ix, ixstart, &d_emlrtECI, sp);
  }

  dist_size_idx_0 = c_y->size[0];
  itmp = c_y->size[0];
  for (ix = 0; ix < itmp; ix++) {
    dist_data[ix] = c_y->data[ix] + d_y->data[ix];
  }

  emxFree_real_T(&d_y);

  /*  distances */
  ix = y->size[0] * y->size[1];
  y->size[0] = dist_size_idx_0;
  y->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)y, ix, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (ix = 0; ix < dist_size_idx_0; ix++) {
    for (ixstart = 0; ixstart < 2; ixstart++) {
      y->data[ix + y->size[0] * ixstart] = dist_data[ix] * v[ixstart];
    }
  }

  for (ix = 0; ix < 2; ix++) {
    dir[ix] = dir_size[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    e_y[ix] = y->size[ix];
  }

  if ((dir[0] != e_y[0]) || (dir[1] != e_y[1])) {
    emlrtSizeEqCheckNDR2012b(&dir[0], &e_y[0], &c_emlrtECI, sp);
  }

  itmp = unused_size[1] << 1;
  for (ix = 0; ix < itmp; ix++) {
    b_dir_data = dir_data[ix] - y->data[ix];
    dir_data[ix] = b_dir_data;
  }

  emxFree_real_T(&y);
  itmp = unused_size[1];
  b_dir_size[0] = unused_size[1];
  for (ix = 0; ix < itmp; ix++) {
    c_dir_data[ix] = dir_data[ix];
  }

  d_dir_data.data = (real_T *)&c_dir_data;
  d_dir_data.size = (int32_T *)&b_dir_size;
  d_dir_data.allocatedSize = 100;
  d_dir_data.numDimensions = 1;
  d_dir_data.canFreeData = false;
  st.site = &w_emlrtRSI;
  power(&st, &d_dir_data, c_y);
  dist_edge_size_idx_0 = c_y->size[0];
  itmp = c_y->size[0];
  for (ix = 0; ix < itmp; ix++) {
    dist_edge_data[ix] = c_y->data[ix];
  }

  itmp = unused_size[1];
  c_dir_size[0] = unused_size[1];
  for (ix = 0; ix < itmp; ix++) {
    e_dir_data[ix] = dir_data[ix + dir_size[0]];
  }

  f_dir_data.data = (real_T *)&e_dir_data;
  f_dir_data.size = (int32_T *)&c_dir_size;
  f_dir_data.allocatedSize = 100;
  f_dir_data.numDimensions = 1;
  f_dir_data.canFreeData = false;
  st.site = &w_emlrtRSI;
  power(&st, &f_dir_data, c_y);
  ixstart = c_y->size[0];
  itmp = c_y->size[0];
  for (ix = 0; ix < itmp; ix++) {
    dist_point_data[ix] = c_y->data[ix];
  }

  if (dist_edge_size_idx_0 != ixstart) {
    emlrtSizeEqCheck1DR2012b(dist_edge_size_idx_0, ixstart, &b_emlrtECI, sp);
  }

  ix = c_y->size[0];
  c_y->size[0] = dist_edge_size_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)c_y, ix, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (ix = 0; ix < dist_edge_size_idx_0; ix++) {
    c_y->data[ix] = dist_edge_data[ix] + dist_point_data[ix];
  }

  st.site = &w_emlrtRSI;
  b_sqrt(&st, c_y);
  dist_edge_size_idx_0 = c_y->size[0];
  itmp = c_y->size[0];
  for (ix = 0; ix < itmp; ix++) {
    dist_edge_data[ix] = c_y->data[ix];
  }

  for (ix = 0; ix < dist_size_idx_0; ix++) {
    dist_point_data[ix] = dist_data[ix];
  }

  for (ix = 0; ix < dist_size_idx_0; ix++) {
    if (dist_data[ix] < 0.0) {
      if (!((ix + 1 >= 1) && (ix + 1 <= dist_size_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(ix + 1, 1, dist_size_idx_0, &f_emlrtBCI,
          sp);
      }

      dist_point_data[ix] = rtInf;
    }
  }

  /*  find best neighbor */
  ix = c_y->size[0];
  c_y->size[0] = dist_edge_size_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)c_y, ix, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (ix = 0; ix < dist_edge_size_idx_0; ix++) {
    c_y->data[ix] = 5.0 * dist_edge_data[ix];
  }

  ix = c_y->size[0];
  if (dist_size_idx_0 != ix) {
    emlrtSizeEqCheck1DR2012b(dist_size_idx_0, ix, &emlrtECI, sp);
  }

  st.site = &x_emlrtRSI;
  for (ix = 0; ix < dist_size_idx_0; ix++) {
    b_dist_point_data = dist_point_data[ix] + c_y->data[ix];
    dist_point_data[ix] = b_dist_point_data;
  }

  emxFree_real_T(&c_y);
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  if ((dist_size_idx_0 == 1) || (dist_size_idx_0 != 1)) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (b1) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &ob_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (dist_size_idx_0 > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &nb_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  ixstart = 1;
  mtmp = dist_point_data[0];
  itmp = 1;
  if (dist_size_idx_0 > 1) {
    if (muDoubleScalarIsNaN(dist_point_data[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= dist_size_idx_0)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(dist_point_data[ix - 1])) {
          mtmp = dist_point_data[ix - 1];
          itmp = ix;
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < dist_size_idx_0) {
      while (ixstart + 1 <= dist_size_idx_0) {
        if (dist_point_data[ixstart] < mtmp) {
          mtmp = dist_point_data[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  *min_dist = mtmp;
  if (!((itmp >= 1) && (itmp <= unused_size[1]))) {
    emlrtDynamicBoundsCheckR2012b(itmp, 1, unused_size[1], &e_emlrtBCI, sp);
  }

  *neighbor_idx = unused_data[itmp - 1];
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void initChessboard(const emlrtStack *sp, const real_T corners_p[200], const
                    real_T corners_v1[200], const real_T corners_v2[200], real_T
                    idx, real_T chessboard_data[], int32_T chessboard_size[2])
{
  real_T b_corners_v1[2];
  int32_T k;
  real_T b_chessboard_data[9];
  int32_T b_chessboard_size[2];
  real_T dist1[2];
  int32_T c_chessboard_size[2];
  int32_T d_chessboard_size[2];
  real_T dist2[6];
  int32_T e_chessboard_size[2];
  int32_T f_chessboard_size[2];
  int32_T g_chessboard_size[2];
  int32_T h_chessboard_size[2];
  int32_T i_chessboard_size[2];
  boolean_T x[2];
  boolean_T y;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T b_x[6];
  boolean_T exitg1;
  real_T xbar;
  real_T r;
  real_T c_x;
  int32_T ix;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(&emlrtCoverageInstance, 1U, 0);

  /*  return if not enough corners */
  covrtLogIf(&emlrtCoverageInstance, 1U, 0U, 0, false);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 1);

  /*  init chessboard hypothesis */
  chessboard_size[0] = 3;
  chessboard_size[1] = 3;
  memset(&chessboard_data[0], 0, 9U * sizeof(real_T));

  /*  extract feature index and orientation (central element) */
  chessboard_data[4] = idx;

  /*  find left/right/top/bottom neighbors */
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = corners_v1[((int32_T)idx + 100 * k) - 1];
  }

  b_chessboard_size[0] = 3;
  b_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &l_emlrtRSI;
  directionalNeighbor(&st, idx, b_corners_v1, b_chessboard_data,
                      b_chessboard_size, corners_p, &chessboard_data[7], &dist1
                      [0]);
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = -corners_v1[((int32_T)idx + 100 * k) - 1];
  }

  c_chessboard_size[0] = 3;
  c_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &m_emlrtRSI;
  directionalNeighbor(&st, idx, b_corners_v1, b_chessboard_data,
                      c_chessboard_size, corners_p, &chessboard_data[1], &dist1
                      [1]);
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = corners_v2[((int32_T)idx + 100 * k) - 1];
  }

  d_chessboard_size[0] = 3;
  d_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &n_emlrtRSI;
  directionalNeighbor(&st, idx, b_corners_v1, b_chessboard_data,
                      d_chessboard_size, corners_p, &chessboard_data[5], &dist2
                      [0]);
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = -corners_v2[((int32_T)idx + 100 * k) - 1];
  }

  e_chessboard_size[0] = 3;
  e_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &o_emlrtRSI;
  directionalNeighbor(&st, idx, b_corners_v1, b_chessboard_data,
                      e_chessboard_size, corners_p, &chessboard_data[3], &dist2
                      [1]);

  /*  find top-left/top-right/bottom-left/bottom-right neighbors */
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = -corners_v2[((int32_T)idx + 100 * k) - 1];
  }

  f_chessboard_size[0] = 3;
  f_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &p_emlrtRSI;
  directionalNeighbor(&st, chessboard_data[1], b_corners_v1, b_chessboard_data,
                      f_chessboard_size, corners_p, &chessboard_data[0], &dist2
                      [2]);
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = corners_v2[((int32_T)idx + 100 * k) - 1];
  }

  g_chessboard_size[0] = 3;
  g_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &q_emlrtRSI;
  directionalNeighbor(&st, chessboard_data[1], b_corners_v1, b_chessboard_data,
                      g_chessboard_size, corners_p, &chessboard_data[2], &dist2
                      [3]);
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = -corners_v2[((int32_T)idx + 100 * k) - 1];
  }

  h_chessboard_size[0] = 3;
  h_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &r_emlrtRSI;
  directionalNeighbor(&st, chessboard_data[7], b_corners_v1, b_chessboard_data,
                      h_chessboard_size, corners_p, &chessboard_data[6], &dist2
                      [4]);
  for (k = 0; k < 2; k++) {
    b_corners_v1[k] = corners_v2[((int32_T)idx + 100 * k) - 1];
  }

  i_chessboard_size[0] = 3;
  i_chessboard_size[1] = 3;
  for (k = 0; k < 9; k++) {
    b_chessboard_data[k] = chessboard_data[k];
  }

  st.site = &s_emlrtRSI;
  directionalNeighbor(&st, chessboard_data[7], b_corners_v1, b_chessboard_data,
                      i_chessboard_size, corners_p, &chessboard_data[8], &dist2
                      [5]);

  /*  initialization must be homogenously distributed */
  for (k = 0; k < 2; k++) {
    x[k] = muDoubleScalarIsInf(dist1[k]);
  }

  y = false;
  k = 0;
  exitg2 = false;
  while ((!exitg2) && (k < 2)) {
    if (!!x[k]) {
      y = true;
      exitg2 = true;
    } else {
      k++;
    }
  }

  guard1 = false;
  if (covrtLogCond(&emlrtCoverageInstance, 1U, 0U, 0, y)) {
    guard1 = true;
  } else {
    for (k = 0; k < 6; k++) {
      b_x[k] = muDoubleScalarIsInf(dist2[k]);
    }

    y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!!b_x[k]) {
        y = true;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (covrtLogCond(&emlrtCoverageInstance, 1U, 0U, 1, y)) {
      guard1 = true;
    } else {
      st.site = &t_emlrtRSI;
      b_st.site = &wb_emlrtRSI;
      xbar = (dist1[0] + dist1[1]) / 2.0;
      r = dist1[0] - xbar;
      xbar = dist1[1] - xbar;
      c_x = r * r + xbar * xbar;
      b_st.site = &wb_emlrtRSI;
      if (c_x < 0.0) {
        c_st.site = &ob_emlrtRSI;
        error(&c_st);
      }

      if (covrtLogCond(&emlrtCoverageInstance, 1U, 0U, 2, muDoubleScalarSqrt(c_x)
                       / ((dist1[0] + dist1[1]) / 2.0) > 0.3)) {
        guard1 = true;
      } else {
        st.site = &t_emlrtRSI;
        b_st.site = &wb_emlrtRSI;
        ix = 0;
        xbar = dist2[0];
        for (k = 0; k < 5; k++) {
          ix++;
          xbar += dist2[ix];
        }

        xbar /= 6.0;
        ix = 0;
        r = dist2[0] - xbar;
        c_x = r * r;
        for (k = 0; k < 5; k++) {
          ix++;
          r = dist2[ix] - xbar;
          c_x += r * r;
        }

        c_x /= 5.0;
        b_st.site = &wb_emlrtRSI;
        if (c_x < 0.0) {
          c_st.site = &ob_emlrtRSI;
          error(&c_st);
        }

        xbar = dist2[0];
        for (k = 0; k < 5; k++) {
          xbar += dist2[k + 1];
        }

        if (covrtLogCond(&emlrtCoverageInstance, 1U, 0U, 3, muDoubleScalarSqrt
                         (c_x) / (xbar / 6.0) > 0.3)) {
          guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 1U, 0U, 0, false);
          covrtLogIf(&emlrtCoverageInstance, 1U, 0U, 1, false);
        }
      }
    }
  }

  if (guard1) {
    covrtLogMcdc(&emlrtCoverageInstance, 1U, 0U, 0, true);
    covrtLogIf(&emlrtCoverageInstance, 1U, 0U, 1, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 2);
    chessboard_size[0] = 0;
    chessboard_size[1] = 0;
  }
}

/* End of code generation (initChessboard.c) */
