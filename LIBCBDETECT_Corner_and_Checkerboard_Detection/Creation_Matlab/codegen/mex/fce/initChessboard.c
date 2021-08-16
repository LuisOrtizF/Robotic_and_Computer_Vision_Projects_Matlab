/*
 * initChessboard.c
 *
 * Code generation for function 'initChessboard'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "initChessboard.h"
#include "error.h"
#include "fce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "power.h"
#include "nullAssignment.h"
#include "indexShapeCheck.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = { 23, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo je_emlrtRSI = { 24, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo ke_emlrtRSI = { 25, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo le_emlrtRSI = { 26, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo me_emlrtRSI = { 29, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo ne_emlrtRSI = { 30, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo oe_emlrtRSI = { 31, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo pe_emlrtRSI = { 32, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo qe_emlrtRSI = { 36, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo re_emlrtRSI = { 46, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo se_emlrtRSI = { 47, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo te_emlrtRSI = { 48, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo ue_emlrtRSI = { 57, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo ve_emlrtRSI = { 62, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRSInfo ye_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo af_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo kf_emlrtRSI = { 15, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo lf_emlrtRSI = { 16, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 43, 36, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 46, 5, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 52, 5, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 53, 5, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 56, 5, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 58, 5, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtBCInfo x_emlrtBCI = { -1, -1, 19, 21, "corners.v2", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 18, 21, "corners.v1", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtECInfo l_emlrtECI = { -1, 62, 30, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo m_emlrtECI = { -1, 57, 22, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo n_emlrtECI = { 2, 56, 17, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtECInfo o_emlrtECI = { -1, 53, 13, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 53, 33, "dir", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 53, 19, "dir", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtECInfo p_emlrtECI = { 2, 52, 12, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m"
};

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 52, 67, "corners.p", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 52, 22, "corners.p", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 52, 22, "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  1 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 63, 20, "unused", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 59, 5, "dist_point", "initChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
  0 };

/* Function Declarations */
static void directionalNeighbor(const emlrtStack *sp, real_T idx, const real_T
  v_data[], const int32_T v_size[2], const real_T chessboard_data[], const
  int32_T chessboard_size[2], const emxArray_real_T *corners_p, real_T
  *neighbor_idx, real_T *min_dist);

/* Function Definitions */
static void directionalNeighbor(const emlrtStack *sp, real_T idx, const real_T
  v_data[], const int32_T v_size[2], const real_T chessboard_data[], const
  int32_T chessboard_size[2], const emxArray_real_T *corners_p, real_T
  *neighbor_idx, real_T *min_dist)
{
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T absb;
  emxArray_real_T *unused;
  int32_T i11;
  int32_T tmp_data[9];
  int32_T b_chessboard_data[9];
  int32_T b_chessboard_size[1];
  emxArray_real_T *dir;
  emxArray_int32_T c_chessboard_data;
  int32_T i12;
  real_T mtmp;
  real_T corners_p_data[2];
  emxArray_real_T *y;
  emxArray_real_T *b_corners_p;
  int32_T c_corners_p[2];
  int32_T b_y[2];
  emxArray_real_T *dist;
  emxArray_real_T *dist_point;
  int32_T b_dir[2];
  int32_T c_y[2];
  emxArray_real_T *dist_edge;
  emxArray_real_T *b_dist_edge;
  emxArray_real_T *c_dist_edge;
  emxArray_real_T *d_dist_edge;
  boolean_T overflow;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 9U, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 3);

  /*  list of neighboring elements, which are currently not in use */
  st.site = &re_emlrtRSI;
  b_st.site = &we_emlrtRSI;
  c_st.site = &xe_emlrtRSI;
  if (corners_p->size[0] < 1) {
    ndbl = 0;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)corners_p->size[0] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - corners_p->size[0]) + 1;
    absb = corners_p->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = corners_p->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }
  }

  emxInit_real_T(&c_st, &unused, 2, &u_emlrtRTEI, true);
  d_st.site = &ye_emlrtRSI;
  i11 = unused->size[0] * unused->size[1];
  unused->size[0] = 1;
  unused->size[1] = ndbl;
  emxEnsureCapacity(&c_st, (emxArray__common *)unused, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  if (ndbl > 0) {
    unused->data[0] = 1.0;
    if (ndbl > 1) {
      unused->data[ndbl - 1] = apnd;
      cdiff = (ndbl - 1) / 2;
      d_st.site = &af_emlrtRSI;
      for (absb = 1; absb < cdiff; absb++) {
        unused->data[absb] = 1.0 + (real_T)absb;
        unused->data[(ndbl - absb) - 1] = apnd - absb;
      }

      if (cdiff << 1 == ndbl - 1) {
        unused->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        unused->data[cdiff] = 1.0 + (real_T)cdiff;
        unused->data[cdiff + 1] = apnd - cdiff;
      }
    }
  }

  st.site = &se_emlrtRSI;
  indexShapeCheck(&st, chessboard_size, chessboard_size);
  cdiff = 0;
  for (ndbl = 0; ndbl < 9; ndbl++) {
    if (chessboard_data[ndbl] != 0.0) {
      cdiff++;
    }
  }

  absb = 0;
  for (ndbl = 0; ndbl < 9; ndbl++) {
    if (chessboard_data[ndbl] != 0.0) {
      tmp_data[absb] = ndbl + 1;
      absb++;
    }
  }

  b_chessboard_size[0] = cdiff;
  for (i11 = 0; i11 < cdiff; i11++) {
    b_chessboard_data[i11] = (int32_T)chessboard_data[tmp_data[i11] - 1];
  }

  emxInit_real_T(sp, &dir, 2, &v_emlrtRTEI, true);
  c_chessboard_data.data = (int32_T *)&b_chessboard_data;
  c_chessboard_data.size = (int32_T *)&b_chessboard_size;
  c_chessboard_data.allocatedSize = 9;
  c_chessboard_data.numDimensions = 1;
  c_chessboard_data.canFreeData = false;
  st.site = &te_emlrtRSI;
  c_nullAssignment(&st, unused, &c_chessboard_data);

  /*  direction and distance to unused corners */
  cdiff = corners_p->size[0];
  apnd = corners_p->size[1];
  i11 = dir->size[0] * dir->size[1];
  dir->size[0] = unused->size[1];
  dir->size[1] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)dir, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i11 = 0; i11 < apnd; i11++) {
    absb = unused->size[1];
    for (i12 = 0; i12 < absb; i12++) {
      mtmp = unused->data[unused->size[0] * i12];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &g_emlrtDCI, sp);
      }

      ndbl = (int32_T)mtmp;
      if (!((ndbl >= 1) && (ndbl <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(ndbl, 1, cdiff, &db_emlrtBCI, sp);
      }

      dir->data[i12 + dir->size[0] * i11] = corners_p->data[(ndbl +
        corners_p->size[0] * i11) - 1];
    }
  }

  i11 = corners_p->size[0];
  i12 = (int32_T)idx;
  if (!((i12 >= 1) && (i12 <= i11))) {
    emlrtDynamicBoundsCheckR2012b(i12, 1, i11, &cb_emlrtBCI, sp);
  }

  cdiff = unused->size[1];
  apnd = corners_p->size[1];
  for (i11 = 0; i11 < apnd; i11++) {
    corners_p_data[i11] = corners_p->data[((int32_T)idx + corners_p->size[0] *
      i11) - 1];
  }

  emxInit_real_T(sp, &y, 2, &t_emlrtRTEI, true);
  i11 = y->size[0] * y->size[1];
  y->size[0] = cdiff;
  y->size[1] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)y, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i11 = 0; i11 < cdiff; i11++) {
    for (i12 = 0; i12 < apnd; i12++) {
      y->data[i11 + y->size[0] * i12] = corners_p_data[i12];
    }
  }

  emxInit_real_T(sp, &b_corners_p, 2, &t_emlrtRTEI, true);
  apnd = corners_p->size[1];
  i11 = b_corners_p->size[0] * b_corners_p->size[1];
  b_corners_p->size[0] = unused->size[1];
  b_corners_p->size[1] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)b_corners_p, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  for (i11 = 0; i11 < apnd; i11++) {
    absb = unused->size[1];
    for (i12 = 0; i12 < absb; i12++) {
      b_corners_p->data[i12 + b_corners_p->size[0] * i11] = corners_p->data
        [((int32_T)unused->data[unused->size[0] * i12] + corners_p->size[0] *
          i11) - 1];
    }
  }

  for (i11 = 0; i11 < 2; i11++) {
    c_corners_p[i11] = b_corners_p->size[i11];
  }

  emxFree_real_T(&b_corners_p);
  for (i11 = 0; i11 < 2; i11++) {
    b_y[i11] = y->size[i11];
  }

  if ((c_corners_p[0] != b_y[0]) || (c_corners_p[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&c_corners_p[0], &b_y[0], &p_emlrtECI, sp);
  }

  i11 = dir->size[0] * dir->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)dir, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = dir->size[0];
  cdiff = dir->size[1];
  apnd = absb * cdiff;
  for (i11 = 0; i11 < apnd; i11++) {
    dir->data[i11] -= y->data[i11];
  }

  emxInit_real_T1(sp, &dist, 1, &w_emlrtRTEI, true);
  i11 = dir->size[1];
  if (!(1 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i11, &bb_emlrtBCI, sp);
  }

  apnd = dir->size[0];
  i11 = dist->size[0];
  dist->size[0] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)dist, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i11 = 0; i11 < apnd; i11++) {
    dist->data[i11] = dir->data[i11] * v_data[0];
  }

  emxInit_real_T1(sp, &dist_point, 1, &y_emlrtRTEI, true);
  i11 = dir->size[1];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &ab_emlrtBCI, sp);
  }

  apnd = dir->size[0];
  i11 = dist_point->size[0];
  dist_point->size[0] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)dist_point, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  for (i11 = 0; i11 < apnd; i11++) {
    dist_point->data[i11] = dir->data[i11 + dir->size[0]] * v_data[1];
  }

  i11 = dist->size[0];
  i12 = dist_point->size[0];
  if (i11 != i12) {
    emlrtSizeEqCheck1DR2012b(i11, i12, &o_emlrtECI, sp);
  }

  i11 = dist->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)dist, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  apnd = dist->size[0];
  for (i11 = 0; i11 < apnd; i11++) {
    dist->data[i11] += dist_point->data[i11];
  }

  /*  distances */
  i11 = y->size[0] * y->size[1];
  y->size[0] = dist->size[0];
  y->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)y, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  apnd = dist->size[0];
  for (i11 = 0; i11 < apnd; i11++) {
    for (i12 = 0; i12 < 2; i12++) {
      y->data[i11 + y->size[0] * i12] = dist->data[i11] * v_data[v_size[0] * i12];
    }
  }

  for (i11 = 0; i11 < 2; i11++) {
    b_dir[i11] = dir->size[i11];
  }

  for (i11 = 0; i11 < 2; i11++) {
    c_y[i11] = y->size[i11];
  }

  emxInit_real_T(sp, &dist_edge, 2, &x_emlrtRTEI, true);
  if ((b_dir[0] != c_y[0]) || (b_dir[1] != c_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_dir[0], &c_y[0], &n_emlrtECI, sp);
  }

  i11 = dist_edge->size[0] * dist_edge->size[1];
  dist_edge->size[0] = dir->size[0];
  dist_edge->size[1] = dir->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)dist_edge, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  apnd = dir->size[0] * dir->size[1];
  for (i11 = 0; i11 < apnd; i11++) {
    dist_edge->data[i11] = dir->data[i11] - y->data[i11];
  }

  emxFree_real_T(&y);
  emxFree_real_T(&dir);
  emxInit_real_T1(sp, &b_dist_edge, 1, &t_emlrtRTEI, true);
  apnd = dist_edge->size[0];
  i11 = b_dist_edge->size[0];
  b_dist_edge->size[0] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)b_dist_edge, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  for (i11 = 0; i11 < apnd; i11++) {
    b_dist_edge->data[i11] = dist_edge->data[i11];
  }

  emxInit_real_T1(sp, &c_dist_edge, 1, &x_emlrtRTEI, true);
  emxInit_real_T1(sp, &d_dist_edge, 1, &t_emlrtRTEI, true);
  st.site = &ue_emlrtRSI;
  b_power(&st, b_dist_edge, c_dist_edge);
  apnd = dist_edge->size[0];
  i11 = d_dist_edge->size[0];
  d_dist_edge->size[0] = apnd;
  emxEnsureCapacity(sp, (emxArray__common *)d_dist_edge, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  emxFree_real_T(&b_dist_edge);
  for (i11 = 0; i11 < apnd; i11++) {
    d_dist_edge->data[i11] = dist_edge->data[i11 + dist_edge->size[0]];
  }

  emxFree_real_T(&dist_edge);
  st.site = &ue_emlrtRSI;
  b_power(&st, d_dist_edge, dist_point);
  i11 = c_dist_edge->size[0];
  i12 = dist_point->size[0];
  if (i11 != i12) {
    emlrtSizeEqCheck1DR2012b(i11, i12, &m_emlrtECI, sp);
  }

  i11 = c_dist_edge->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c_dist_edge, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  apnd = c_dist_edge->size[0];
  emxFree_real_T(&d_dist_edge);
  for (i11 = 0; i11 < apnd; i11++) {
    c_dist_edge->data[i11] += dist_point->data[i11];
  }

  st.site = &ue_emlrtRSI;
  b_sqrt(&st, c_dist_edge);
  i11 = dist_point->size[0];
  dist_point->size[0] = dist->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)dist_point, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  apnd = dist->size[0];
  for (i11 = 0; i11 < apnd; i11++) {
    dist_point->data[i11] = dist->data[i11];
  }

  cdiff = dist->size[0];
  for (ndbl = 0; ndbl < cdiff; ndbl++) {
    if (dist->data[ndbl] < 0.0) {
      i11 = dist->size[0];
      if (!((ndbl + 1 >= 1) && (ndbl + 1 <= i11))) {
        emlrtDynamicBoundsCheckR2012b(ndbl + 1, 1, i11, &fb_emlrtBCI, sp);
      }

      dist_point->data[ndbl] = rtInf;
    }
  }

  emxFree_real_T(&dist);

  /*  find best neighbor */
  i11 = c_dist_edge->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c_dist_edge, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  apnd = c_dist_edge->size[0];
  for (i11 = 0; i11 < apnd; i11++) {
    c_dist_edge->data[i11] *= 5.0;
  }

  i11 = dist_point->size[0];
  i12 = c_dist_edge->size[0];
  if (i11 != i12) {
    emlrtSizeEqCheck1DR2012b(i11, i12, &l_emlrtECI, sp);
  }

  st.site = &ve_emlrtRSI;
  i11 = dist_point->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)dist_point, i11, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  apnd = dist_point->size[0];
  for (i11 = 0; i11 < apnd; i11++) {
    dist_point->data[i11] += c_dist_edge->data[i11];
  }

  emxFree_real_T(&c_dist_edge);
  b_st.site = &kf_emlrtRSI;
  c_st.site = &lf_emlrtRSI;
  if ((dist_point->size[0] == 1) || (dist_point->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &pc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (dist_point->size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &oc_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &mf_emlrtRSI;
  cdiff = 1;
  absb = dist_point->size[0];
  mtmp = dist_point->data[0];
  apnd = 1;
  if (dist_point->size[0] > 1) {
    if (muDoubleScalarIsNaN(dist_point->data[0])) {
      e_st.site = &of_emlrtRSI;
      overflow = (dist_point->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ndbl = 2;
      exitg1 = false;
      while ((!exitg1) && (ndbl <= absb)) {
        cdiff = ndbl;
        if (!muDoubleScalarIsNaN(dist_point->data[ndbl - 1])) {
          mtmp = dist_point->data[ndbl - 1];
          apnd = ndbl;
          exitg1 = true;
        } else {
          ndbl++;
        }
      }
    }

    if (cdiff < dist_point->size[0]) {
      e_st.site = &nf_emlrtRSI;
      overflow = ((!(cdiff + 1 > dist_point->size[0])) && (dist_point->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (cdiff + 1 <= absb) {
        if (dist_point->data[cdiff] < mtmp) {
          mtmp = dist_point->data[cdiff];
          apnd = cdiff + 1;
        }

        cdiff++;
      }
    }
  }

  emxFree_real_T(&dist_point);
  *min_dist = mtmp;
  i11 = unused->size[1];
  if (!((apnd >= 1) && (apnd <= i11))) {
    emlrtDynamicBoundsCheckR2012b(apnd, 1, i11, &eb_emlrtBCI, sp);
  }

  *neighbor_idx = unused->data[apnd - 1];
  emxFree_real_T(&unused);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void initChessboard(const emlrtStack *sp, const emxArray_real_T *corners_p,
                    const emxArray_real_T *corners_v1, const emxArray_real_T
                    *corners_v2, real_T idx, real_T chessboard_data[], int32_T
                    chessboard_size[2])
{
  int32_T k;
  int32_T ix;
  int32_T v1_size[2];
  real_T v1_data[2];
  int32_T v2_size[2];
  real_T v2_data[2];
  real_T b_chessboard_data[9];
  int32_T b_chessboard_size[2];
  real_T dist1[2];
  int32_T b_v1_size[2];
  real_T b_v1_data[2];
  int32_T c_chessboard_size[2];
  int32_T d_chessboard_size[2];
  real_T dist2[6];
  int32_T b_v2_size[2];
  int32_T e_chessboard_size[2];
  int32_T c_v2_size[2];
  int32_T f_chessboard_size[2];
  int32_T g_chessboard_size[2];
  int32_T d_v2_size[2];
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
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(&emlrtCoverageInstance, 9U, 0);

  /*  return if not enough corners */
  if (covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 0, corners_p->size[0] < 9)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 0);
    chessboard_size[0] = 0;
    chessboard_size[1] = 0;
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 1);

    /*  init chessboard hypothesis */
    chessboard_size[0] = 3;
    chessboard_size[1] = 3;
    memset(&chessboard_data[0], 0, 9U * sizeof(real_T));

    /*  extract feature index and orientation (central element) */
    k = corners_v1->size[0];
    ix = (int32_T)idx;
    if (!((ix >= 1) && (ix <= k))) {
      emlrtDynamicBoundsCheckR2012b(ix, 1, k, &y_emlrtBCI, sp);
    }

    v1_size[0] = 1;
    v1_size[1] = 2;
    for (k = 0; k < 2; k++) {
      v1_data[k] = corners_v1->data[(ix + corners_v1->size[0] * k) - 1];
    }

    k = corners_v2->size[0];
    ix = (int32_T)idx;
    if (!((ix >= 1) && (ix <= k))) {
      emlrtDynamicBoundsCheckR2012b(ix, 1, k, &x_emlrtBCI, sp);
    }

    v2_size[0] = 1;
    v2_size[1] = 2;
    for (k = 0; k < 2; k++) {
      v2_data[k] = corners_v2->data[(ix + corners_v2->size[0] * k) - 1];
    }

    chessboard_data[4] = idx;

    /*  find left/right/top/bottom neighbors */
    b_chessboard_size[0] = 3;
    b_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &ie_emlrtRSI;
    directionalNeighbor(&st, idx, v1_data, v1_size, b_chessboard_data,
                        b_chessboard_size, corners_p, &chessboard_data[7],
                        &dist1[0]);
    b_v1_size[0] = 1;
    b_v1_size[1] = 2;
    for (k = 0; k < 2; k++) {
      b_v1_data[k] = -v1_data[k];
    }

    c_chessboard_size[0] = 3;
    c_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &je_emlrtRSI;
    directionalNeighbor(&st, idx, b_v1_data, b_v1_size, b_chessboard_data,
                        c_chessboard_size, corners_p, &chessboard_data[1],
                        &dist1[1]);
    d_chessboard_size[0] = 3;
    d_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &ke_emlrtRSI;
    directionalNeighbor(&st, idx, v2_data, v2_size, b_chessboard_data,
                        d_chessboard_size, corners_p, &chessboard_data[5],
                        &dist2[0]);
    b_v2_size[0] = 1;
    b_v2_size[1] = 2;
    for (k = 0; k < 2; k++) {
      b_v1_data[k] = -v2_data[k];
    }

    e_chessboard_size[0] = 3;
    e_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &le_emlrtRSI;
    directionalNeighbor(&st, idx, b_v1_data, b_v2_size, b_chessboard_data,
                        e_chessboard_size, corners_p, &chessboard_data[3],
                        &dist2[1]);

    /*  find top-left/top-right/bottom-left/bottom-right neighbors */
    c_v2_size[0] = 1;
    c_v2_size[1] = 2;
    for (k = 0; k < 2; k++) {
      b_v1_data[k] = -v2_data[k];
    }

    f_chessboard_size[0] = 3;
    f_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &me_emlrtRSI;
    directionalNeighbor(&st, chessboard_data[1], b_v1_data, c_v2_size,
                        b_chessboard_data, f_chessboard_size, corners_p,
                        &chessboard_data[0], &dist2[2]);
    g_chessboard_size[0] = 3;
    g_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &ne_emlrtRSI;
    directionalNeighbor(&st, chessboard_data[1], v2_data, v2_size,
                        b_chessboard_data, g_chessboard_size, corners_p,
                        &chessboard_data[2], &dist2[3]);
    d_v2_size[0] = 1;
    d_v2_size[1] = 2;
    for (k = 0; k < 2; k++) {
      b_v1_data[k] = -v2_data[k];
    }

    h_chessboard_size[0] = 3;
    h_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &oe_emlrtRSI;
    directionalNeighbor(&st, chessboard_data[7], b_v1_data, d_v2_size,
                        b_chessboard_data, h_chessboard_size, corners_p,
                        &chessboard_data[6], &dist2[4]);
    i_chessboard_size[0] = 3;
    i_chessboard_size[1] = 3;
    for (k = 0; k < 9; k++) {
      b_chessboard_data[k] = chessboard_data[k];
    }

    st.site = &pe_emlrtRSI;
    directionalNeighbor(&st, chessboard_data[7], v2_data, v2_size,
                        b_chessboard_data, i_chessboard_size, corners_p,
                        &chessboard_data[8], &dist2[5]);

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
    if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 0, y)) {
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

      if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 1, y)) {
        guard1 = true;
      } else {
        st.site = &qe_emlrtRSI;
        b_st.site = &nd_emlrtRSI;
        xbar = (dist1[0] + dist1[1]) / 2.0;
        r = dist1[0] - xbar;
        xbar = dist1[1] - xbar;
        c_x = r * r + xbar * xbar;
        b_st.site = &nd_emlrtRSI;
        if (c_x < 0.0) {
          c_st.site = &jb_emlrtRSI;
          error(&c_st);
        }

        if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 2, muDoubleScalarSqrt
                         (c_x) / ((dist1[0] + dist1[1]) / 2.0) > 0.3)) {
          guard1 = true;
        } else {
          st.site = &qe_emlrtRSI;
          b_st.site = &nd_emlrtRSI;
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
          b_st.site = &nd_emlrtRSI;
          if (c_x < 0.0) {
            c_st.site = &jb_emlrtRSI;
            error(&c_st);
          }

          xbar = dist2[0];
          for (k = 0; k < 5; k++) {
            xbar += dist2[k + 1];
          }

          if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 3, muDoubleScalarSqrt
                           (c_x) / (xbar / 6.0) > 0.3)) {
            guard1 = true;
          } else {
            covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 0, false);
            covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 1, false);
          }
        }
      }
    }

    if (guard1) {
      covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 1, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 2);
      chessboard_size[0] = 0;
      chessboard_size[1] = 0;
    }
  }
}

/* End of code generation (initChessboard.c) */
