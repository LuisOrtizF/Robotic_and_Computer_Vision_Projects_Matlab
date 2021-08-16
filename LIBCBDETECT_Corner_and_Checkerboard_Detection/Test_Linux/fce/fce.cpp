//
// File: fce.cpp
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 25-Jan-2017 10:38:13
//

// Include Files
#include "rt_nonfinite.h"
#include "fce.h"

// Type Definitions
typedef struct {
  emxArray_real_T *p;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
} b_struct_T;

#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray__common

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_boolean_T

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;

#ifndef struct_emxArray_cell_wrap_0
#define struct_emxArray_cell_wrap_0

struct emxArray_cell_wrap_0
{
  cell_wrap_0 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_cell_wrap_0

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_int32_T

typedef struct {
  emxArray_real_T *p;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
  emxArray_real_T *score;
} struct_T;

// Function Declarations
static boolean_T all(const emxArray_boolean_T *x);
static boolean_T any(const emxArray_boolean_T *x);
static void assignClosestCorners(const emxArray_real_T *cand, const
  emxArray_real_T *pred, emxArray_real_T *idxx);
static void b_atan2(const double y[921600], const double x[921600], double r
                    [921600]);
static void b_conv2(const double arg1[921600], const emxArray_real_T *arg2,
                    double c[921600]);
static double b_norm(const emxArray_real_T *x);
static void b_nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx);
static void b_power(const emxArray_real_T *a, emxArray_real_T *y);
static void b_sort(double x[2], int idx[2]);
static void b_sqrt(double x[921600]);
static double b_std(const emxArray_real_T *varargin_1);
static void c_atan2(const emxArray_real_T *y, const emxArray_real_T *x,
                    emxArray_real_T *r);
static void c_nullAssignment(emxArray_real_T *x, const emxArray_int32_T *idx);
static void c_sqrt(emxArray_real_T *x);
static double chessboardEnergy(const emxArray_real_T *chessboard, const
  emxArray_real_T *corners_p);
static void chessboardsFromCorners(const emxArray_real_T *corners_p, const
  emxArray_real_T *corners_v1, const emxArray_real_T *corners_v2, cell_wrap_0
  chessboards[5]);
static void conv2(const double arg1[921600], const double arg2[9], double c
                  [921600]);
static void createCorrelationPatch(double angle_1, double angle_2, double radius,
  emxArray_real_T *template_a1, emxArray_real_T *template_a2, emxArray_real_T
  *template_b1, emxArray_real_T *template_b2);
static void directionalNeighbor(double idx, const emxArray_real_T *v, const
  emxArray_real_T *chessboard, const emxArray_real_T *corners_p, double
  *neighbor_idx, double *min_dist);
static void edgeOrientations(const emxArray_real_T *img_angle, const
  emxArray_real_T *img_weight, double v1[2], double v2[2]);
static void emxCopyStruct_cell_wrap_0(cell_wrap_0 *dst, const cell_wrap_0 *src);
static void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T * const *src);
static void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize);
static void emxEnsureCapacity_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int
  oldNumel);
static void emxExpand_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
  int toIndex);
static void emxFreeMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5]);
static void emxFreeMatrix_cell_wrap_01(cell_wrap_0 pMatrix[4]);
static void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);
static void emxFreeStruct_struct_T(struct_T *pStruct);
static void emxFreeStruct_struct_T1(b_struct_T *pStruct);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray);
static void emxFree_int32_T(emxArray_int32_T **pEmxArray);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInitMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5]);
static void emxInitMatrix_cell_wrap_01(cell_wrap_0 pMatrix[4]);
static void emxInitStruct_cell_wrap_0(cell_wrap_0 *pStruct);
static void emxInitStruct_struct_T(struct_T *pStruct);
static void emxInitStruct_struct_T1(b_struct_T *pStruct);
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
static void emxInit_boolean_T1(emxArray_boolean_T **pEmxArray, int numDimensions);
static void emxInit_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray, int
  numDimensions);
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int numDimensions);
static void emxTrim_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
  int toIndex);
static void findCorners(const unsigned char img[921600], double tau, struct_T
  *corners3);
static void growChessboard(emxArray_real_T *chessboard, const emxArray_real_T
  *corners_p, double border_type);
static void initChessboard(const emxArray_real_T *corners_p, const
  emxArray_real_T *corners_v1, const emxArray_real_T *corners_v2, double idx,
  emxArray_real_T *chessboard);
static double mean(const emxArray_real_T *x);
static void merge(emxArray_int32_T *idx, emxArray_real_T *x, int offset, int np,
                  int nq, emxArray_int32_T *iwork, emxArray_real_T *xwork);
static void merge_block(emxArray_int32_T *idx, emxArray_real_T *x, int offset,
  int n, int preSortLevel, emxArray_int32_T *iwork, emxArray_real_T *xwork);
static void nonMaximumSuppression(const double img[921600], double tau,
  emxArray_real_T *maxima);
static double norm(const double x[2]);
static void nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx);
static void power(const double a[921600], double y[921600]);
static void predictCorners(const emxArray_real_T *p1, const emxArray_real_T *p2,
  const emxArray_real_T *p3, emxArray_real_T *pred);
static void refineCorners(const double img_angle[921600], const double
  img_weight[921600], b_struct_T *corners, double r);
static double rt_atan2d_snf(double u0, double u1);
static double rt_roundd_snf(double u);
static void scoreCorners(const double img[921600], const double img_weight
  [921600], struct_T *corners, const double radius[3]);
static void sort(emxArray_real_T *x, emxArray_int32_T *idx);
static double sum(const emxArray_real_T *x);

// Function Definitions

//
// Arguments    : const emxArray_boolean_T *x
// Return Type  : boolean_T
//
static boolean_T all(const emxArray_boolean_T *x)
{
  boolean_T y;
  int ix;
  boolean_T exitg1;
  y = true;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[1])) {
    if (!x->data[ix - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

//
// Arguments    : const emxArray_boolean_T *x
// Return Type  : boolean_T
//
static boolean_T any(const emxArray_boolean_T *x)
{
  boolean_T y;
  int ix;
  boolean_T exitg1;
  boolean_T b1;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    b1 = !x->data[ix - 1];
    if (!b1) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

//
// return error if not enough candidates are available
// Arguments    : const emxArray_real_T *cand
//                const emxArray_real_T *pred
//                emxArray_real_T *idxx
// Return Type  : void
//
static void assignClosestCorners(const emxArray_real_T *cand, const
  emxArray_real_T *pred, emxArray_real_T *idxx)
{
  emxArray_real_T *D;
  int i14;
  int nx;
  int i;
  emxArray_real_T *delta;
  emxArray_real_T *row;
  emxArray_real_T *col;
  emxArray_real_T *b_delta;
  emxArray_real_T *c_delta;
  int jj;
  double mtmp;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_int32_T *b_jj;
  int ixstart;
  boolean_T exitg2;
  int k;
  int idx;
  boolean_T exitg1;
  if (cand->size[0] < pred->size[0]) {
    i14 = idxx->size[0] * idxx->size[1];
    idxx->size[0] = 1;
    idxx->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)idxx, i14, (int)sizeof(double));
    idxx->data[0] = 0.0;
  } else {
    emxInit_real_T(&D, 2);

    //  build distance matrix
    i14 = D->size[0] * D->size[1];
    D->size[0] = cand->size[0];
    D->size[1] = pred->size[0];
    emxEnsureCapacity((emxArray__common *)D, i14, (int)sizeof(double));
    nx = cand->size[0] * pred->size[0];
    for (i14 = 0; i14 < nx; i14++) {
      D->data[i14] = 0.0;
    }

    i = 0;
    emxInit_real_T(&delta, 2);
    emxInit_real_T1(&row, 1);
    emxInit_real_T1(&col, 1);
    emxInit_real_T1(&b_delta, 1);
    emxInit_real_T1(&c_delta, 1);
    while (i <= pred->size[0] - 1) {
      nx = cand->size[0];
      i14 = delta->size[0] * delta->size[1];
      delta->size[0] = nx;
      delta->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)delta, i14, (int)sizeof(double));
      for (i14 = 0; i14 < nx; i14++) {
        for (jj = 0; jj < 2; jj++) {
          mtmp = pred->data[i + pred->size[0] * jj];
          delta->data[i14 + delta->size[0] * jj] = cand->data[i14 + cand->size[0]
            * jj] - mtmp;
        }
      }

      nx = delta->size[0];
      i14 = c_delta->size[0];
      c_delta->size[0] = nx;
      emxEnsureCapacity((emxArray__common *)c_delta, i14, (int)sizeof(double));
      for (i14 = 0; i14 < nx; i14++) {
        c_delta->data[i14] = delta->data[i14];
      }

      b_power(c_delta, row);
      nx = delta->size[0];
      i14 = b_delta->size[0];
      b_delta->size[0] = nx;
      emxEnsureCapacity((emxArray__common *)b_delta, i14, (int)sizeof(double));
      for (i14 = 0; i14 < nx; i14++) {
        b_delta->data[i14] = delta->data[i14 + delta->size[0]];
      }

      b_power(b_delta, col);
      i14 = row->size[0];
      emxEnsureCapacity((emxArray__common *)row, i14, (int)sizeof(double));
      nx = row->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        row->data[i14] += col->data[i14];
      }

      c_sqrt(row);
      nx = row->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        D->data[i14 + D->size[0] * i] = row->data[i14];
      }

      i++;
    }

    emxFree_real_T(&c_delta);
    emxFree_real_T(&b_delta);
    emxFree_real_T(&delta);
    i14 = idxx->size[0] * idxx->size[1];
    idxx->size[0] = 1;
    idxx->size[1] = pred->size[0];
    emxEnsureCapacity((emxArray__common *)idxx, i14, (int)sizeof(double));
    nx = pred->size[0];
    for (i14 = 0; i14 < nx; i14++) {
      idxx->data[i14] = 0.0;
    }

    //  search greedily for closest corners
    i = 0;
    emxInit_boolean_T1(&x, 2);
    emxInit_int32_T(&ii, 1);
    emxInit_int32_T(&b_jj, 1);
    while (i <= pred->size[0] - 1) {
      ixstart = 1;
      jj = D->size[0] * D->size[1];
      mtmp = D->data[0];
      nx = D->size[0] * D->size[1];
      if (nx > 1) {
        if (rtIsNaN(D->data[0])) {
          nx = 2;
          exitg2 = false;
          while ((!exitg2) && (nx <= jj)) {
            ixstart = nx;
            if (!rtIsNaN(D->data[nx - 1])) {
              mtmp = D->data[nx - 1];
              exitg2 = true;
            } else {
              nx++;
            }
          }
        }

        nx = D->size[0] * D->size[1];
        if (ixstart < nx) {
          while (ixstart + 1 <= jj) {
            if (D->data[ixstart] < mtmp) {
              mtmp = D->data[ixstart];
            }

            ixstart++;
          }
        }
      }

      i14 = x->size[0] * x->size[1];
      x->size[0] = D->size[0];
      x->size[1] = D->size[1];
      emxEnsureCapacity((emxArray__common *)x, i14, (int)sizeof(boolean_T));
      nx = D->size[0] * D->size[1];
      for (i14 = 0; i14 < nx; i14++) {
        x->data[i14] = (D->data[i14] == mtmp);
      }

      nx = x->size[0] * x->size[1];
      k = (1 <= nx);
      idx = 0;
      i14 = ii->size[0];
      ii->size[0] = k;
      emxEnsureCapacity((emxArray__common *)ii, i14, (int)sizeof(int));
      i14 = b_jj->size[0];
      b_jj->size[0] = k;
      emxEnsureCapacity((emxArray__common *)b_jj, i14, (int)sizeof(int));
      if (nx == 0) {
        i14 = ii->size[0];
        ii->size[0] = 0;
        emxEnsureCapacity((emxArray__common *)ii, i14, (int)sizeof(int));
        i14 = b_jj->size[0];
        b_jj->size[0] = 0;
        emxEnsureCapacity((emxArray__common *)b_jj, i14, (int)sizeof(int));
      } else {
        ixstart = 1;
        jj = 1;
        exitg1 = false;
        while ((!exitg1) && (jj <= x->size[1])) {
          if (x->data[(ixstart + x->size[0] * (jj - 1)) - 1]) {
            idx = 1;
            ii->data[0] = ixstart;
            b_jj->data[0] = jj;
            exitg1 = true;
          } else {
            ixstart++;
            if (ixstart > x->size[0]) {
              ixstart = 1;
              jj++;
            }
          }
        }

        if (k == 1) {
          if (idx == 0) {
            i14 = ii->size[0];
            ii->size[0] = 0;
            emxEnsureCapacity((emxArray__common *)ii, i14, (int)sizeof(int));
            i14 = b_jj->size[0];
            b_jj->size[0] = 0;
            emxEnsureCapacity((emxArray__common *)b_jj, i14, (int)sizeof(int));
          }
        } else {
          i14 = ii->size[0];
          ii->size[0] = !(1 > idx);
          emxEnsureCapacity((emxArray__common *)ii, i14, (int)sizeof(int));
          i14 = b_jj->size[0];
          b_jj->size[0] = !(1 > idx);
          emxEnsureCapacity((emxArray__common *)b_jj, i14, (int)sizeof(int));
        }
      }

      i14 = row->size[0];
      row->size[0] = ii->size[0];
      emxEnsureCapacity((emxArray__common *)row, i14, (int)sizeof(double));
      nx = ii->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        row->data[i14] = ii->data[i14];
      }

      i14 = col->size[0];
      col->size[0] = b_jj->size[0];
      emxEnsureCapacity((emxArray__common *)col, i14, (int)sizeof(double));
      nx = b_jj->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        col->data[i14] = b_jj->data[i14];
      }

      // Locate the first one nonzero.
      nx = row->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        idxx->data[(int)col->data[i14] - 1] = row->data[i14];
      }

      i14 = ii->size[0];
      ii->size[0] = row->size[0];
      emxEnsureCapacity((emxArray__common *)ii, i14, (int)sizeof(int));
      nx = row->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        ii->data[i14] = (int)row->data[i14];
      }

      nx = D->size[1];
      ixstart = ii->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        for (jj = 0; jj < ixstart; jj++) {
          D->data[(ii->data[jj] + D->size[0] * i14) - 1] = rtInf;
        }
      }

      i14 = ii->size[0];
      ii->size[0] = col->size[0];
      emxEnsureCapacity((emxArray__common *)ii, i14, (int)sizeof(int));
      nx = col->size[0];
      for (i14 = 0; i14 < nx; i14++) {
        ii->data[i14] = (int)col->data[i14];
      }

      nx = D->size[0];
      ixstart = ii->size[0];
      for (i14 = 0; i14 < ixstart; i14++) {
        for (jj = 0; jj < nx; jj++) {
          D->data[jj + D->size[0] * (ii->data[i14] - 1)] = rtInf;
        }
      }

      i++;
    }

    emxFree_int32_T(&b_jj);
    emxFree_int32_T(&ii);
    emxFree_boolean_T(&x);
    emxFree_real_T(&col);
    emxFree_real_T(&row);
    emxFree_real_T(&D);
  }
}

//
// Arguments    : const double y[921600]
//                const double x[921600]
//                double r[921600]
// Return Type  : void
//
static void b_atan2(const double y[921600], const double x[921600], double r
                    [921600])
{
  int k;
  for (k = 0; k < 921600; k++) {
    r[k] = rt_atan2d_snf(y[k], x[k]);
  }
}

//
// Arguments    : const double arg1[921600]
//                const emxArray_real_T *arg2
//                double c[921600]
// Return Type  : void
//
static void b_conv2(const double arg1[921600], const emxArray_real_T *arg2,
                    double c[921600])
{
  boolean_T b0;
  int cBegin;
  int cBegin1;
  int lastColB;
  int firstRowB;
  int lastRowB;
  int j;
  int lastColA;
  int k;
  int b_j;
  int iC;
  int b_c;
  int iB;
  int i;
  int firstRowA;
  int b_i;
  int a_length;
  int cidx;
  int r;
  memset(&c[0], 0, 921600U * sizeof(double));
  b0 = ((arg2->size[0] == 0) || (arg2->size[1] == 0));
  if (!b0) {
    cBegin = arg2->size[1] / 2;
    cBegin1 = arg2->size[0] / 2;
    if (arg2->size[1] <= cBegin + 1279) {
      lastColB = arg2->size[1] - 1;
    } else {
      lastColB = cBegin + 1279;
    }

    if (720 < cBegin1) {
      firstRowB = cBegin1 - 719;
    } else {
      firstRowB = 0;
    }

    if (arg2->size[0] <= cBegin1 + 719) {
      lastRowB = arg2->size[0] - 1;
    } else {
      lastRowB = cBegin1 + 719;
    }

    if (1280 < cBegin) {
      j = cBegin - 1279;
    } else {
      j = 0;
    }

    while (j <= lastColB) {
      if (j + 1279 < cBegin + 1279) {
        lastColA = 1279;
      } else {
        lastColA = (cBegin - j) + 1279;
      }

      if (j < cBegin) {
        k = cBegin - j;
      } else {
        k = 0;
      }

      while (k <= lastColA) {
        if (j + k > cBegin) {
          b_j = (j + k) - cBegin;
        } else {
          b_j = 0;
        }

        iC = b_j * 720;
        b_c = k * 720;
        iB = firstRowB + j * arg2->size[0];
        for (i = firstRowB; i <= lastRowB; i++) {
          if (i < cBegin1) {
            firstRowA = cBegin1 - i;
          } else {
            firstRowA = 0;
          }

          if (i + 720 <= cBegin1 + 719) {
            b_i = 720;
          } else {
            b_i = (cBegin1 - i) + 720;
          }

          a_length = b_i - firstRowA;
          firstRowA += b_c;
          cidx = iC;
          for (r = 1; r <= a_length; r++) {
            c[cidx] += arg2->data[iB] * arg1[firstRowA];
            firstRowA++;
            cidx++;
          }

          iB++;
          if (i >= cBegin1) {
            iC++;
          }
        }

        k++;
      }

      j++;
    }
  }
}

//
// Arguments    : const emxArray_real_T *x
// Return Type  : double
//
static double b_norm(const emxArray_real_T *x)
{
  double y;
  double scale;
  int k;
  double absxk;
  double t;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = 0.0;
    if (x->size[1] == 1) {
      y = fabs(x->data[0]);
    } else {
      scale = 2.2250738585072014E-308;
      for (k = 1; k <= x->size[1]; k++) {
        absxk = fabs(x->data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = 1.0 + y * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

//
// Arguments    : emxArray_real_T *x
//                const emxArray_boolean_T *idx
// Return Type  : void
//
static void b_nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx)
{
  int nxin;
  int k0;
  int k;
  int nxout;
  emxArray_real_T *b_x;
  nxin = x->size[0];
  k0 = 0;
  for (k = 1; k <= idx->size[0]; k++) {
    k0 += idx->data[k - 1];
  }

  nxout = x->size[0] - k0;
  k0 = -1;
  for (k = 1; k <= nxin; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      k0++;
      x->data[k0] = x->data[k - 1];
    }
  }

  if (1 > nxout) {
    k0 = 0;
  } else {
    k0 = nxout;
  }

  emxInit_real_T1(&b_x, 1);
  nxout = b_x->size[0];
  b_x->size[0] = k0;
  emxEnsureCapacity((emxArray__common *)b_x, nxout, (int)sizeof(double));
  for (nxout = 0; nxout < k0; nxout++) {
    b_x->data[nxout] = x->data[nxout];
  }

  nxout = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity((emxArray__common *)x, nxout, (int)sizeof(double));
  k0 = b_x->size[0];
  for (nxout = 0; nxout < k0; nxout++) {
    x->data[nxout] = b_x->data[nxout];
  }

  emxFree_real_T(&b_x);
}

//
// Arguments    : const emxArray_real_T *a
//                emxArray_real_T *y
// Return Type  : void
//
static void b_power(const emxArray_real_T *a, emxArray_real_T *y)
{
  unsigned int unnamed_idx_0;
  int k;
  unnamed_idx_0 = (unsigned int)a->size[0];
  k = y->size[0];
  y->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  for (k = 0; k + 1 <= a->size[0]; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

//
// Arguments    : double x[2]
//                int idx[2]
// Return Type  : void
//
static void b_sort(double x[2], int idx[2])
{
  double b_x[2];
  int i;
  boolean_T p;
  for (i = 0; i < 2; i++) {
    b_x[i] = x[i];
  }

  if ((x[0] <= x[1]) || rtIsNaN(x[1])) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
    idx[0] = 1;
    idx[1] = 2;
  } else {
    idx[0] = 2;
    idx[1] = 1;
    b_x[0] = x[1];
    b_x[1] = x[0];
  }

  for (i = 0; i < 2; i++) {
    x[i] = b_x[i];
  }
}

//
// Arguments    : double x[921600]
// Return Type  : void
//
static void b_sqrt(double x[921600])
{
  int k;
  for (k = 0; k < 921600; k++) {
    x[k] = sqrt(x[k]);
  }
}

//
// Arguments    : const emxArray_real_T *varargin_1
// Return Type  : double
//
static double b_std(const emxArray_real_T *varargin_1)
{
  double y;
  int i7;
  int d;
  int ix;
  double xbar;
  int k;
  double r;
  i7 = varargin_1->size[0];
  if (varargin_1->size[0] > 1) {
    d = varargin_1->size[0] - 1;
  } else {
    d = varargin_1->size[0];
  }

  if (varargin_1->size[0] == 0) {
    y = 0.0;
  } else {
    ix = 0;
    xbar = varargin_1->data[0];
    for (k = 2; k <= i7; k++) {
      ix++;
      xbar += varargin_1->data[ix];
    }

    xbar /= (double)varargin_1->size[0];
    ix = 0;
    r = varargin_1->data[0] - xbar;
    y = r * r;
    for (k = 2; k <= i7; k++) {
      ix++;
      r = varargin_1->data[ix] - xbar;
      y += r * r;
    }

    y /= (double)d;
  }

  return sqrt(y);
}

//
// Arguments    : const emxArray_real_T *y
//                const emxArray_real_T *x
//                emxArray_real_T *r
// Return Type  : void
//
static void c_atan2(const emxArray_real_T *y, const emxArray_real_T *x,
                    emxArray_real_T *r)
{
  int k;
  int i13;
  if (y->size[0] <= x->size[0]) {
    k = y->size[0];
  } else {
    k = x->size[0];
  }

  i13 = r->size[0];
  r->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r, i13, (int)sizeof(double));
  for (k = 0; k + 1 <= y->size[0]; k++) {
    r->data[k] = rt_atan2d_snf(y->data[k], x->data[k]);
  }
}

//
// Arguments    : emxArray_real_T *x
//                const emxArray_int32_T *idx
// Return Type  : void
//
static void c_nullAssignment(emxArray_real_T *x, const emxArray_int32_T *idx)
{
  emxArray_boolean_T *b;
  int nxin;
  int k0;
  int nxout;
  int k;
  emxArray_real_T *b_x;
  emxInit_boolean_T1(&b, 2);
  nxin = x->size[1];
  k0 = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)b, k0, (int)sizeof(boolean_T));
  nxout = x->size[1];
  for (k0 = 0; k0 < nxout; k0++) {
    b->data[k0] = false;
  }

  for (k = 1; k <= idx->size[0]; k++) {
    b->data[idx->data[k - 1] - 1] = true;
  }

  k0 = 0;
  for (k = 1; k <= b->size[1]; k++) {
    k0 += b->data[k - 1];
  }

  nxout = x->size[1] - k0;
  k0 = -1;
  for (k = 1; k <= nxin; k++) {
    if ((k > b->size[1]) || (!b->data[k - 1])) {
      k0++;
      x->data[k0] = x->data[k - 1];
    }
  }

  emxFree_boolean_T(&b);
  if (1 > nxout) {
    nxout = 0;
  }

  emxInit_real_T(&b_x, 2);
  k0 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = nxout;
  emxEnsureCapacity((emxArray__common *)b_x, k0, (int)sizeof(double));
  for (k0 = 0; k0 < nxout; k0++) {
    b_x->data[b_x->size[0] * k0] = x->data[k0];
  }

  k0 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, k0, (int)sizeof(double));
  nxout = b_x->size[1];
  for (k0 = 0; k0 < nxout; k0++) {
    x->data[x->size[0] * k0] = b_x->data[b_x->size[0] * k0];
  }

  emxFree_real_T(&b_x);
}

//
// Arguments    : emxArray_real_T *x
// Return Type  : void
//
static void c_sqrt(emxArray_real_T *x)
{
  int nx;
  int k;
  nx = x->size[0];
  for (k = 0; k + 1 <= nx; k++) {
    x->data[k] = sqrt(x->data[k]);
  }
}

//
// energy: number of corners
// Arguments    : const emxArray_real_T *chessboard
//                const emxArray_real_T *corners_p
// Return Type  : double
//
static double chessboardEnergy(const emxArray_real_T *chessboard, const
  emxArray_real_T *corners_p)
{
  double E_structure;
  int j;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  int k;
  int loop_ub;
  emxArray_real_T *d_x;
  int i10;
  emxArray_real_T *e_x;
  int i11;
  double f_x;
  double y;

  //  energy: structure
  E_structure = 0.0;

  //  walk through rows
  j = 0;
  emxInit_real_T(&x, 2);
  emxInit_real_T(&b_x, 2);
  emxInit_real_T(&c_x, 2);
  while (j <= chessboard->size[0] - 1) {
    for (k = 0; k <= chessboard->size[1] - 3; k++) {
      loop_ub = corners_p->size[1];
      i10 = x->size[0] * x->size[1];
      x->size[0] = 3;
      x->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)x, i10, (int)sizeof(double));
      for (i10 = 0; i10 < loop_ub; i10++) {
        for (i11 = 0; i11 < 3; i11++) {
          x->data[i11 + x->size[0] * i10] = corners_p->data[((int)
            chessboard->data[j + chessboard->size[0] * (i11 + k)] +
            corners_p->size[0] * i10) - 1];
        }
      }

      loop_ub = corners_p->size[1];
      i10 = c_x->size[0] * c_x->size[1];
      c_x->size[0] = 1;
      c_x->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)c_x, i10, (int)sizeof(double));
      for (i10 = 0; i10 < loop_ub; i10++) {
        c_x->data[c_x->size[0] * i10] = (x->data[x->size[0] * i10] + x->data[2 +
          x->size[0] * i10]) - 2.0 * x->data[1 + x->size[0] * i10];
      }

      f_x = b_norm(c_x);
      loop_ub = corners_p->size[1];
      i10 = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)b_x, i10, (int)sizeof(double));
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_x->data[b_x->size[0] * i10] = x->data[x->size[0] * i10] - x->data[2 +
          x->size[0] * i10];
      }

      y = b_norm(b_x);
      y = f_x / y;
      if ((E_structure >= y) || rtIsNaN(y)) {
      } else {
        E_structure = y;
      }
    }

    j++;
  }

  emxFree_real_T(&c_x);
  emxFree_real_T(&b_x);

  //  walk through columns
  j = 0;
  emxInit_real_T(&d_x, 2);
  emxInit_real_T(&e_x, 2);
  while (j <= chessboard->size[1] - 1) {
    for (k = 0; k <= chessboard->size[0] - 3; k++) {
      loop_ub = corners_p->size[1];
      i10 = x->size[0] * x->size[1];
      x->size[0] = 3;
      x->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)x, i10, (int)sizeof(double));
      for (i10 = 0; i10 < loop_ub; i10++) {
        for (i11 = 0; i11 < 3; i11++) {
          x->data[i11 + x->size[0] * i10] = corners_p->data[((int)
            chessboard->data[(i11 + k) + chessboard->size[0] * j] +
            corners_p->size[0] * i10) - 1];
        }
      }

      loop_ub = corners_p->size[1];
      i10 = e_x->size[0] * e_x->size[1];
      e_x->size[0] = 1;
      e_x->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)e_x, i10, (int)sizeof(double));
      for (i10 = 0; i10 < loop_ub; i10++) {
        e_x->data[e_x->size[0] * i10] = (x->data[x->size[0] * i10] + x->data[2 +
          x->size[0] * i10]) - 2.0 * x->data[1 + x->size[0] * i10];
      }

      f_x = b_norm(e_x);
      loop_ub = corners_p->size[1];
      i10 = d_x->size[0] * d_x->size[1];
      d_x->size[0] = 1;
      d_x->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)d_x, i10, (int)sizeof(double));
      for (i10 = 0; i10 < loop_ub; i10++) {
        d_x->data[d_x->size[0] * i10] = x->data[x->size[0] * i10] - x->data[2 +
          x->size[0] * i10];
      }

      y = b_norm(d_x);
      y = f_x / y;
      if ((E_structure >= y) || rtIsNaN(y)) {
      } else {
        E_structure = y;
      }
    }

    j++;
  }

  emxFree_real_T(&e_x);
  emxFree_real_T(&d_x);
  emxFree_real_T(&x);

  //  final energy
  return -(double)chessboard->size[0] * (double)chessboard->size[1] + (double)
    chessboard->size[0] * (double)chessboard->size[1] * E_structure;
}

//
// intialize chessboards
// Arguments    : const emxArray_real_T *corners_p
//                const emxArray_real_T *corners_v1
//                const emxArray_real_T *corners_v2
//                cell_wrap_0 chessboards[5]
// Return Type  : void
//
static void chessboardsFromCorners(const emxArray_real_T *corners_p, const
  emxArray_real_T *corners_v1, const emxArray_real_T *corners_v2, cell_wrap_0
  chessboards[5])
{
  int i8;
  emxArray_cell_wrap_0 *proposal;
  cell_wrap_0 r2;
  cell_wrap_0 r3;
  cell_wrap_0 r4;
  cell_wrap_0 r5;
  cell_wrap_0 rv0[4];
  double a;
  int i;
  emxArray_real_T *chessboard;
  emxArray_real_T *idx;
  emxArray_int32_T *ii;
  emxArray_boolean_T *overlap;
  emxArray_boolean_T *b_chessboards;
  int exitg4;
  double energy;
  double p_energy[4];
  int j;
  int ixstart;
  double mtmp;
  int itmp;
  int b_idx;
  boolean_T exitg5;
  unsigned int uv0[2];
  double b_overlap[10];
  boolean_T y;
  boolean_T exitg2;
  int exitg3;
  boolean_T x[5];
  boolean_T b2;
  boolean_T exitg1;
  boolean_T guard1 = false;
  i8 = chessboards[0].f1->size[0] * chessboards[0].f1->size[1];
  chessboards[0].f1->size[0] = 6;
  chessboards[0].f1->size[1] = 7;
  emxEnsureCapacity((emxArray__common *)chessboards[0].f1, i8, (int)sizeof
                    (double));
  for (i8 = 0; i8 < 42; i8++) {
    chessboards[0].f1->data[i8] = 0.0;
  }

  i8 = chessboards[1].f1->size[0] * chessboards[1].f1->size[1];
  chessboards[1].f1->size[0] = 6;
  chessboards[1].f1->size[1] = 7;
  emxEnsureCapacity((emxArray__common *)chessboards[1].f1, i8, (int)sizeof
                    (double));
  for (i8 = 0; i8 < 42; i8++) {
    chessboards[1].f1->data[i8] = 0.0;
  }

  i8 = chessboards[2].f1->size[0] * chessboards[2].f1->size[1];
  chessboards[2].f1->size[0] = 6;
  chessboards[2].f1->size[1] = 7;
  emxEnsureCapacity((emxArray__common *)chessboards[2].f1, i8, (int)sizeof
                    (double));
  for (i8 = 0; i8 < 42; i8++) {
    chessboards[2].f1->data[i8] = 0.0;
  }

  i8 = chessboards[3].f1->size[0] * chessboards[3].f1->size[1];
  chessboards[3].f1->size[0] = 6;
  chessboards[3].f1->size[1] = 7;
  emxEnsureCapacity((emxArray__common *)chessboards[3].f1, i8, (int)sizeof
                    (double));
  for (i8 = 0; i8 < 42; i8++) {
    chessboards[3].f1->data[i8] = 0.0;
  }

  i8 = chessboards[4].f1->size[0] * chessboards[4].f1->size[1];
  chessboards[4].f1->size[0] = 6;
  chessboards[4].f1->size[1] = 7;
  emxEnsureCapacity((emxArray__common *)chessboards[4].f1, i8, (int)sizeof
                    (double));
  for (i8 = 0; i8 < 42; i8++) {
    chessboards[4].f1->data[i8] = 0.0;
  }

  emxInit_cell_wrap_0(&proposal, 2);
  emxInitStruct_cell_wrap_0(&r2);
  emxInitStruct_cell_wrap_0(&r3);
  emxInitStruct_cell_wrap_0(&r4);
  emxInitStruct_cell_wrap_0(&r5);
  emxInitMatrix_cell_wrap_01(rv0);
  i8 = r2.f1->size[0] * r2.f1->size[1];
  r2.f1->size[0] = 1;
  r2.f1->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)r2.f1, i8, (int)sizeof(double));
  r2.f1->data[0] = 0.0;
  i8 = r3.f1->size[0] * r3.f1->size[1];
  r3.f1->size[0] = 1;
  r3.f1->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)r3.f1, i8, (int)sizeof(double));
  r3.f1->data[0] = 0.0;
  i8 = r4.f1->size[0] * r4.f1->size[1];
  r4.f1->size[0] = 1;
  r4.f1->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)r4.f1, i8, (int)sizeof(double));
  r4.f1->data[0] = 0.0;
  i8 = r5.f1->size[0] * r5.f1->size[1];
  r5.f1->size[0] = 1;
  r5.f1->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)r5.f1, i8, (int)sizeof(double));
  r5.f1->data[0] = 0.0;
  emxCopyStruct_cell_wrap_0(&rv0[0], &r2);
  emxCopyStruct_cell_wrap_0(&rv0[1], &r3);
  emxCopyStruct_cell_wrap_0(&rv0[2], &r4);
  emxCopyStruct_cell_wrap_0(&rv0[3], &r5);
  i8 = proposal->size[0] * proposal->size[1];
  proposal->size[0] = 1;
  proposal->size[1] = 4;
  emxEnsureCapacity_cell_wrap_0(proposal, i8);
  emxFreeStruct_cell_wrap_0(&r5);
  emxFreeStruct_cell_wrap_0(&r4);
  emxFreeStruct_cell_wrap_0(&r3);
  emxFreeStruct_cell_wrap_0(&r2);
  for (i8 = 0; i8 < 4; i8++) {
    emxCopyStruct_cell_wrap_0(&proposal->data[proposal->size[0] * i8], &rv0[i8]);
  }

  emxFreeMatrix_cell_wrap_01(rv0);
  a = 0.0;

  //  for all seed corners do
  i = 0;
  emxInit_real_T(&chessboard, 2);
  emxInit_real_T1(&idx, 1);
  emxInit_int32_T(&ii, 1);
  emxInit_boolean_T(&overlap, 1);
  emxInit_boolean_T(&b_chessboards, 1);
  while (i <= corners_p->size[0] - 1) {
    //  init 3x3 chessboard from seed i
    initChessboard(corners_p, corners_v1, corners_v2, 1.0 + (double)i,
                   chessboard);

    //  check if this is a useful initial guess
    if ((chessboard->size[0] == 0) || (chessboard->size[1] == 0) ||
        (chessboardEnergy(chessboard, corners_p) > 0.0)) {
    } else {
      //  try growing chessboard
      do {
        exitg4 = 0;

        //  compute current energy
        energy = chessboardEnergy(chessboard, corners_p);

        //  compute proposals and energies
        for (j = 0; j < 4; j++) {
          i8 = proposal->data[proposal->size[0] * j].f1->size[0] *
            proposal->data[proposal->size[0] * j].f1->size[1];
          proposal->data[proposal->size[0] * j].f1->size[0] = chessboard->size[0];
          proposal->data[proposal->size[0] * j].f1->size[1] = chessboard->size[1];
          emxEnsureCapacity((emxArray__common *)proposal->data[proposal->size[0]
                            * j].f1, i8, (int)sizeof(double));
          ixstart = chessboard->size[0] * chessboard->size[1];
          for (i8 = 0; i8 < ixstart; i8++) {
            proposal->data[proposal->size[0] * j].f1->data[i8] =
              chessboard->data[i8];
          }

          growChessboard(proposal->data[proposal->size[0] * j].f1, corners_p,
                         1.0 + (double)j);
          p_energy[j] = chessboardEnergy(proposal->data[proposal->size[0] * j].
            f1, corners_p);
        }

        //  find best proposal
        ixstart = 1;
        mtmp = p_energy[0];
        itmp = 0;
        if (rtIsNaN(p_energy[0])) {
          b_idx = 1;
          exitg5 = false;
          while ((!exitg5) && (b_idx + 1 < 5)) {
            ixstart = b_idx + 1;
            if (!rtIsNaN(p_energy[b_idx])) {
              mtmp = p_energy[b_idx];
              itmp = b_idx;
              exitg5 = true;
            } else {
              b_idx++;
            }
          }
        }

        if (ixstart < 4) {
          while (ixstart + 1 < 5) {
            if (p_energy[ixstart] < mtmp) {
              mtmp = p_energy[ixstart];
              itmp = ixstart;
            }

            ixstart++;
          }
        }

        //  accept best proposal, if energy is reduced
        if (p_energy[itmp] < energy) {
          i8 = chessboard->size[0] * chessboard->size[1];
          chessboard->size[0] = proposal->data[proposal->size[0] * itmp]
            .f1->size[0];
          chessboard->size[1] = proposal->data[proposal->size[0] * itmp]
            .f1->size[1];
          emxEnsureCapacity((emxArray__common *)chessboard, i8, (int)sizeof
                            (double));
          ixstart = proposal->data[proposal->size[0] * itmp].f1->size[0] *
            proposal->data[proposal->size[0] * itmp].f1->size[1];
          for (i8 = 0; i8 < ixstart; i8++) {
            chessboard->data[i8] = proposal->data[proposal->size[0] * itmp]
              .f1->data[i8];
          }

          //  otherwise exit loop
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);

      //  if chessboard has low energy (corresponding to high quality)
      if (chessboardEnergy(chessboard, corners_p) < -10.0) {
        if (a == 0.0) {
          for (i8 = 0; i8 < 2; i8++) {
            uv0[i8] = (unsigned int)chessboard->size[i8];
          }

          i8 = chessboards[0].f1->size[0] * chessboards[0].f1->size[1];
          chessboards[0].f1->size[0] = (int)uv0[0];
          chessboards[0].f1->size[1] = (int)uv0[1];
          emxEnsureCapacity((emxArray__common *)chessboards[0].f1, i8, (int)
                            sizeof(double));
          ixstart = (int)uv0[0] * (int)uv0[1];
          for (i8 = 0; i8 < ixstart; i8++) {
            chessboards[0].f1->data[i8] = 0.0;
          }
        }

        //  check if new chessboard proposal overlaps with existing chessboards
        memset(&b_overlap[0], 0, 10U * sizeof(double));

        // [rr,cc]=size(chessboards);
        for (j = 0; j < 5; j++) {
          // rr*cc
          b_idx = 0;
          do {
            exitg3 = 0;
            ixstart = chessboards[j].f1->size[0] * chessboards[j].f1->size[1];
            if (b_idx <= ixstart - 1) {
              mtmp = chessboards[j].f1->data[b_idx];
              i8 = b_chessboards->size[0];
              b_chessboards->size[0] = chessboard->size[0] * chessboard->size[1];
              emxEnsureCapacity((emxArray__common *)b_chessboards, i8, (int)
                                sizeof(boolean_T));
              ixstart = chessboard->size[0] * chessboard->size[1];
              for (i8 = 0; i8 < ixstart; i8++) {
                b_chessboards->data[i8] = (mtmp == chessboard->data[i8]);
              }

              if (any(b_chessboards)) {
                b_overlap[j] = 1.0;
                b_overlap[5 + j] = chessboardEnergy(chessboards[j].f1, corners_p);
                exitg3 = 1;
              } else {
                b_idx++;
              }
            } else {
              exitg3 = 1;
            }
          } while (exitg3 == 0);
        }

        //  add chessboard (and replace overlapping if neccessary)
        y = false;
        b_idx = 0;
        exitg2 = false;
        while ((!exitg2) && (b_idx < 5)) {
          if ((b_overlap[b_idx] == 0.0) || rtIsNaN(b_overlap[b_idx])) {
            b2 = true;
          } else {
            b2 = false;
          }

          if (!b2) {
            y = true;
            exitg2 = true;
          } else {
            b_idx++;
          }
        }

        if (!y) {
          a++;
          i8 = chessboards[(int)a - 1].f1->size[0] * chessboards[(int)a - 1].
            f1->size[1];
          chessboards[(int)a - 1].f1->size[0] = chessboard->size[0];
          chessboards[(int)a - 1].f1->size[1] = chessboard->size[1];
          emxEnsureCapacity((emxArray__common *)chessboards[(int)a - 1].f1, i8,
                            (int)sizeof(double));
          ixstart = chessboard->size[0] * chessboard->size[1];
          for (i8 = 0; i8 < ixstart; i8++) {
            chessboards[(int)a - 1].f1->data[i8] = chessboard->data[i8];
          }
        } else {
          for (i8 = 0; i8 < 5; i8++) {
            x[i8] = (b_overlap[i8] == 1.0);
          }

          b_idx = 0;
          i8 = ii->size[0];
          ii->size[0] = 5;
          emxEnsureCapacity((emxArray__common *)ii, i8, (int)sizeof(int));
          ixstart = 1;
          exitg1 = false;
          while ((!exitg1) && (ixstart < 6)) {
            guard1 = false;
            if (x[ixstart - 1]) {
              b_idx++;
              ii->data[b_idx - 1] = ixstart;
              if (b_idx >= 5) {
                exitg1 = true;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              ixstart++;
            }
          }

          i8 = ii->size[0];
          if (1 > b_idx) {
            ii->size[0] = 0;
          } else {
            ii->size[0] = b_idx;
          }

          emxEnsureCapacity((emxArray__common *)ii, i8, (int)sizeof(int));
          i8 = idx->size[0];
          idx->size[0] = ii->size[0];
          emxEnsureCapacity((emxArray__common *)idx, i8, (int)sizeof(double));
          ixstart = ii->size[0];
          for (i8 = 0; i8 < ixstart; i8++) {
            idx->data[i8] = ii->data[i8];
          }

          mtmp = chessboardEnergy(chessboard, corners_p);
          i8 = overlap->size[0];
          overlap->size[0] = idx->size[0];
          emxEnsureCapacity((emxArray__common *)overlap, i8, (int)sizeof
                            (boolean_T));
          ixstart = idx->size[0];
          for (i8 = 0; i8 < ixstart; i8++) {
            overlap->data[i8] = (b_overlap[(int)idx->data[i8] + 4] <= mtmp);
          }

          if (!any(overlap)) {
            i8 = chessboards[(int)idx->data[0] - 1].f1->size[0] * chessboards
              [(int)idx->data[0] - 1].f1->size[1];
            chessboards[(int)idx->data[0] - 1].f1->size[0] = 0;
            chessboards[(int)idx->data[0] - 1].f1->size[1] = 0;
            emxEnsureCapacity((emxArray__common *)chessboards[(int)idx->data[0]
                              - 1].f1, i8, (int)sizeof(double));
            i8 = chessboards[(int)a - 1].f1->size[0] * chessboards[(int)a - 1].
              f1->size[1];
            chessboards[(int)a - 1].f1->size[0] = chessboard->size[0];
            chessboards[(int)a - 1].f1->size[1] = chessboard->size[1];
            emxEnsureCapacity((emxArray__common *)chessboards[(int)a - 1].f1, i8,
                              (int)sizeof(double));
            ixstart = chessboard->size[0] * chessboard->size[1];
            for (i8 = 0; i8 < ixstart; i8++) {
              chessboards[(int)a - 1].f1->data[i8] = chessboard->data[i8];
            }
          }
        }
      }
    }

    i++;
  }

  emxFree_boolean_T(&b_chessboards);
  emxFree_boolean_T(&overlap);
  emxFree_int32_T(&ii);
  emxFree_real_T(&idx);
  emxFree_real_T(&chessboard);
  emxFree_cell_wrap_0(&proposal);

  // chessboards = cellfun(@(x) x(any(x,2),:),chessboards,'UniformOutput',false); 
  // chessboards(:, any(cellfun(@isempty, chessboards), 1)) = [];
  // disp('Find Chessboards OK');
}

//
// Arguments    : const double arg1[921600]
//                const double arg2[9]
//                double c[921600]
// Return Type  : void
//
static void conv2(const double arg1[921600], const double arg2[9], double c
                  [921600])
{
  int j;
  int lastColA;
  int k;
  int b_j;
  int iC;
  int b_c;
  int iB;
  int i;
  int firstRowA;
  int b_i;
  int a_length;
  int cidx;
  int r;
  memset(&c[0], 0, 921600U * sizeof(double));
  for (j = 0; j < 3; j++) {
    if (j + 1279 < 1280) {
      lastColA = 1279;
    } else {
      lastColA = 1280 - j;
    }

    for (k = (j < 1); k <= lastColA; k++) {
      if (j + k > 1) {
        b_j = (j + k) - 1;
      } else {
        b_j = 0;
      }

      iC = b_j * 720;
      b_c = k * 720;
      iB = j * 3;
      for (i = 0; i < 3; i++) {
        firstRowA = (i < 1);
        if (i + 720 <= 720) {
          b_i = 720;
        } else {
          b_i = 721 - i;
        }

        a_length = b_i - firstRowA;
        firstRowA += b_c;
        cidx = iC;
        for (r = 1; r <= a_length; r++) {
          c[cidx] += arg2[iB] * arg1[firstRowA];
          firstRowA++;
          cidx++;
        }

        iB++;
        if (i >= 1) {
          iC++;
        }
      }
    }
  }
}

//
// width and height
// Arguments    : double angle_1
//                double angle_2
//                double radius
//                emxArray_real_T *template_a1
//                emxArray_real_T *template_a2
//                emxArray_real_T *template_b1
//                emxArray_real_T *template_b2
// Return Type  : void
//
static void createCorrelationPatch(double angle_1, double angle_2, double radius,
  emxArray_real_T *template_a1, emxArray_real_T *template_a2, emxArray_real_T
  *template_b1, emxArray_real_T *template_b2)
{
  double width;
  double height;
  int b_template_a1;
  int loop_ub;
  double n1[2];
  double n2[2];
  int u;
  int v;
  int c_template_a1[1];
  emxArray_real_T d_template_a1;
  double vec[2];
  double y;
  double dist;
  double t;
  int b_template_a2[1];
  int b_template_b1[1];
  int b_template_b2[1];
  width = radius * 2.0 + 1.0;
  height = radius * 2.0 + 1.0;

  //  initialize template
  b_template_a1 = template_a1->size[0] * template_a1->size[1];
  template_a1->size[0] = (int)height;
  template_a1->size[1] = (int)width;
  emxEnsureCapacity((emxArray__common *)template_a1, b_template_a1, (int)sizeof
                    (double));
  loop_ub = (int)height * (int)width;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_a1->data[b_template_a1] = 0.0;
  }

  b_template_a1 = template_a2->size[0] * template_a2->size[1];
  template_a2->size[0] = (int)height;
  template_a2->size[1] = (int)width;
  emxEnsureCapacity((emxArray__common *)template_a2, b_template_a1, (int)sizeof
                    (double));
  loop_ub = (int)height * (int)width;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_a2->data[b_template_a1] = 0.0;
  }

  b_template_a1 = template_b1->size[0] * template_b1->size[1];
  template_b1->size[0] = (int)height;
  template_b1->size[1] = (int)width;
  emxEnsureCapacity((emxArray__common *)template_b1, b_template_a1, (int)sizeof
                    (double));
  loop_ub = (int)height * (int)width;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_b1->data[b_template_a1] = 0.0;
  }

  b_template_a1 = template_b2->size[0] * template_b2->size[1];
  template_b2->size[0] = (int)height;
  template_b2->size[1] = (int)width;
  emxEnsureCapacity((emxArray__common *)template_b2, b_template_a1, (int)sizeof
                    (double));
  loop_ub = (int)height * (int)width;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_b2->data[b_template_a1] = 0.0;
  }

  //  midpoint
  //  compute normals from angles
  n1[0] = -sin(angle_1);
  n1[1] = cos(angle_1);
  n2[0] = -sin(angle_2);
  n2[1] = cos(angle_2);

  //  for all points in template do
  for (u = 0; u < (int)width; u++) {
    for (v = 0; v < (int)height; v++) {
      //  vector
      vec[0] = (1.0 + (double)u) - (radius + 1.0);
      vec[1] = (1.0 + (double)v) - (radius + 1.0);
      dist = norm(vec);

      //  check on which side of the normals we are
      t = 0.0;
      for (b_template_a1 = 0; b_template_a1 < 2; b_template_a1++) {
        t += vec[b_template_a1] * n1[b_template_a1];
      }

      y = 0.0;
      for (b_template_a1 = 0; b_template_a1 < 2; b_template_a1++) {
        y += vec[b_template_a1] * n2[b_template_a1];
      }

      if ((t <= -0.1) && (y <= -0.1)) {
        y = radius / 2.0;
        if (y > 0.0) {
          t = dist / y;
          y = exp(-0.5 * t * t) / (2.5066282746310002 * y);
        } else {
          y = rtNaN;
        }

        template_a1->data[v + template_a1->size[0] * u] = y;
      } else if ((t >= 0.1) && (y >= 0.1)) {
        y = radius / 2.0;
        if (y > 0.0) {
          t = dist / y;
          y = exp(-0.5 * t * t) / (2.5066282746310002 * y);
        } else {
          y = rtNaN;
        }

        template_a2->data[v + template_a2->size[0] * u] = y;
      } else if ((t <= -0.1) && (y >= 0.1)) {
        y = radius / 2.0;
        if (y > 0.0) {
          t = dist / y;
          y = exp(-0.5 * t * t) / (2.5066282746310002 * y);
        } else {
          y = rtNaN;
        }

        template_b1->data[v + template_b1->size[0] * u] = y;
      } else {
        if ((t >= 0.1) && (y <= -0.1)) {
          y = radius / 2.0;
          if (y > 0.0) {
            t = dist / y;
            y = exp(-0.5 * t * t) / (2.5066282746310002 * y);
          } else {
            y = rtNaN;
          }

          template_b2->data[v + template_b2->size[0] * u] = y;
        }
      }
    }
  }

  //  normalize
  c_template_a1[0] = template_a1->size[0] * template_a1->size[1];
  d_template_a1 = *template_a1;
  d_template_a1.size = (int *)&c_template_a1;
  d_template_a1.numDimensions = 1;
  y = sum(&d_template_a1);
  b_template_a1 = template_a1->size[0] * template_a1->size[1];
  emxEnsureCapacity((emxArray__common *)template_a1, b_template_a1, (int)sizeof
                    (double));
  loop_ub = template_a1->size[0];
  b_template_a1 = template_a1->size[1];
  loop_ub *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_a1->data[b_template_a1] /= y;
  }

  b_template_a2[0] = template_a2->size[0] * template_a2->size[1];
  d_template_a1 = *template_a2;
  d_template_a1.size = (int *)&b_template_a2;
  d_template_a1.numDimensions = 1;
  y = sum(&d_template_a1);
  b_template_a1 = template_a2->size[0] * template_a2->size[1];
  emxEnsureCapacity((emxArray__common *)template_a2, b_template_a1, (int)sizeof
                    (double));
  loop_ub = template_a2->size[0];
  b_template_a1 = template_a2->size[1];
  loop_ub *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_a2->data[b_template_a1] /= y;
  }

  b_template_b1[0] = template_b1->size[0] * template_b1->size[1];
  d_template_a1 = *template_b1;
  d_template_a1.size = (int *)&b_template_b1;
  d_template_a1.numDimensions = 1;
  y = sum(&d_template_a1);
  b_template_a1 = template_b1->size[0] * template_b1->size[1];
  emxEnsureCapacity((emxArray__common *)template_b1, b_template_a1, (int)sizeof
                    (double));
  loop_ub = template_b1->size[0];
  b_template_a1 = template_b1->size[1];
  loop_ub *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_b1->data[b_template_a1] /= y;
  }

  b_template_b2[0] = template_b2->size[0] * template_b2->size[1];
  d_template_a1 = *template_b2;
  d_template_a1.size = (int *)&b_template_b2;
  d_template_a1.numDimensions = 1;
  y = sum(&d_template_a1);
  b_template_a1 = template_b2->size[0] * template_b2->size[1];
  emxEnsureCapacity((emxArray__common *)template_b2, b_template_a1, (int)sizeof
                    (double));
  loop_ub = template_b2->size[0];
  b_template_a1 = template_b2->size[1];
  loop_ub *= b_template_a1;
  for (b_template_a1 = 0; b_template_a1 < loop_ub; b_template_a1++) {
    template_b2->data[b_template_a1] /= y;
  }
}

//
// list of neighboring elements, which are currently not in use
// Arguments    : double idx
//                const emxArray_real_T *v
//                const emxArray_real_T *chessboard
//                const emxArray_real_T *corners_p
//                double *neighbor_idx
//                double *min_dist
// Return Type  : void
//
static void directionalNeighbor(double idx, const emxArray_real_T *v, const
  emxArray_real_T *chessboard, const emxArray_real_T *corners_p, double
  *neighbor_idx, double *min_dist)
{
  int ndbl;
  int apnd;
  int cdiff;
  int absb;
  emxArray_real_T *unused;
  int i9;
  emxArray_int32_T *r6;
  emxArray_int32_T *b_chessboard;
  emxArray_real_T *dist_edge;
  emxArray_real_T *b_corners_p;
  emxArray_real_T *dir;
  emxArray_real_T *dist;
  double mtmp;
  double b_v;
  emxArray_real_T *b_dist_edge;
  emxArray_real_T *c_dist_edge;
  emxArray_real_T *d_dist_edge;
  emxArray_real_T *dist_point;
  boolean_T exitg1;
  if (corners_p->size[0] < 1) {
    ndbl = 0;
    apnd = 0;
  } else {
    ndbl = (int)floor(((double)corners_p->size[0] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - corners_p->size[0]) + 1;
    absb = corners_p->size[0];
    if (fabs((double)cdiff) < 4.4408920985006262E-16 * (double)absb) {
      ndbl++;
      apnd = corners_p->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }
  }

  emxInit_real_T(&unused, 2);
  i9 = unused->size[0] * unused->size[1];
  unused->size[0] = 1;
  unused->size[1] = ndbl;
  emxEnsureCapacity((emxArray__common *)unused, i9, (int)sizeof(double));
  if (ndbl > 0) {
    unused->data[0] = 1.0;
    if (ndbl > 1) {
      unused->data[ndbl - 1] = apnd;
      cdiff = (ndbl - 1) / 2;
      for (absb = 1; absb < cdiff; absb++) {
        unused->data[absb] = 1.0 + (double)absb;
        unused->data[(ndbl - absb) - 1] = apnd - absb;
      }

      if (cdiff << 1 == ndbl - 1) {
        unused->data[cdiff] = (1.0 + (double)apnd) / 2.0;
      } else {
        unused->data[cdiff] = 1.0 + (double)cdiff;
        unused->data[cdiff + 1] = apnd - cdiff;
      }
    }
  }

  emxInit_int32_T(&r6, 1);
  ndbl = chessboard->size[0] * chessboard->size[1] - 1;
  cdiff = 0;
  for (absb = 0; absb <= ndbl; absb++) {
    if (chessboard->data[absb] != 0.0) {
      cdiff++;
    }
  }

  i9 = r6->size[0];
  r6->size[0] = cdiff;
  emxEnsureCapacity((emxArray__common *)r6, i9, (int)sizeof(int));
  cdiff = 0;
  for (absb = 0; absb <= ndbl; absb++) {
    if (chessboard->data[absb] != 0.0) {
      r6->data[cdiff] = absb + 1;
      cdiff++;
    }
  }

  emxInit_int32_T(&b_chessboard, 1);
  i9 = b_chessboard->size[0];
  b_chessboard->size[0] = r6->size[0];
  emxEnsureCapacity((emxArray__common *)b_chessboard, i9, (int)sizeof(int));
  absb = r6->size[0];
  for (i9 = 0; i9 < absb; i9++) {
    b_chessboard->data[i9] = (int)chessboard->data[r6->data[i9] - 1];
  }

  emxFree_int32_T(&r6);
  emxInit_real_T(&dist_edge, 2);
  c_nullAssignment(unused, b_chessboard);

  //  direction and distance to unused corners
  absb = corners_p->size[1];
  i9 = dist_edge->size[0] * dist_edge->size[1];
  dist_edge->size[0] = unused->size[1];
  dist_edge->size[1] = absb;
  emxEnsureCapacity((emxArray__common *)dist_edge, i9, (int)sizeof(double));
  emxFree_int32_T(&b_chessboard);
  for (i9 = 0; i9 < absb; i9++) {
    cdiff = unused->size[1];
    for (ndbl = 0; ndbl < cdiff; ndbl++) {
      dist_edge->data[ndbl + dist_edge->size[0] * i9] = corners_p->data[((int)
        unused->data[unused->size[0] * ndbl] + corners_p->size[0] * i9) - 1];
    }
  }

  emxInit_real_T(&b_corners_p, 2);
  cdiff = unused->size[1];
  absb = corners_p->size[1];
  i9 = b_corners_p->size[0] * b_corners_p->size[1];
  b_corners_p->size[0] = 1;
  b_corners_p->size[1] = absb;
  emxEnsureCapacity((emxArray__common *)b_corners_p, i9, (int)sizeof(double));
  for (i9 = 0; i9 < absb; i9++) {
    b_corners_p->data[b_corners_p->size[0] * i9] = corners_p->data[((int)idx +
      corners_p->size[0] * i9) - 1];
  }

  emxInit_real_T(&dir, 2);
  i9 = dir->size[0] * dir->size[1];
  dir->size[0] = cdiff;
  dir->size[1] = b_corners_p->size[1];
  emxEnsureCapacity((emxArray__common *)dir, i9, (int)sizeof(double));
  for (i9 = 0; i9 < cdiff; i9++) {
    absb = b_corners_p->size[1];
    for (ndbl = 0; ndbl < absb; ndbl++) {
      mtmp = b_corners_p->data[b_corners_p->size[0] * ndbl];
      dir->data[i9 + dir->size[0] * ndbl] = dist_edge->data[i9 + dist_edge->
        size[0] * ndbl] - mtmp;
    }
  }

  emxFree_real_T(&b_corners_p);
  emxInit_real_T1(&dist, 1);
  absb = dir->size[0];
  mtmp = v->data[0];
  b_v = v->data[1];
  i9 = dist->size[0];
  dist->size[0] = absb;
  emxEnsureCapacity((emxArray__common *)dist, i9, (int)sizeof(double));
  for (i9 = 0; i9 < absb; i9++) {
    dist->data[i9] = dir->data[i9] * mtmp + dir->data[i9 + dir->size[0]] * b_v;
  }

  //  distances
  i9 = dist_edge->size[0] * dist_edge->size[1];
  dist_edge->size[0] = dist->size[0];
  dist_edge->size[1] = v->size[1];
  emxEnsureCapacity((emxArray__common *)dist_edge, i9, (int)sizeof(double));
  absb = dist->size[0];
  for (i9 = 0; i9 < absb; i9++) {
    cdiff = v->size[1];
    for (ndbl = 0; ndbl < cdiff; ndbl++) {
      mtmp = dist->data[i9] * v->data[v->size[0] * ndbl];
      dist_edge->data[i9 + dist_edge->size[0] * ndbl] = dir->data[i9 + dir->
        size[0] * ndbl] - mtmp;
    }
  }

  emxFree_real_T(&dir);
  emxInit_real_T1(&b_dist_edge, 1);
  absb = dist_edge->size[0];
  i9 = b_dist_edge->size[0];
  b_dist_edge->size[0] = absb;
  emxEnsureCapacity((emxArray__common *)b_dist_edge, i9, (int)sizeof(double));
  for (i9 = 0; i9 < absb; i9++) {
    b_dist_edge->data[i9] = dist_edge->data[i9];
  }

  emxInit_real_T1(&c_dist_edge, 1);
  emxInit_real_T1(&d_dist_edge, 1);
  b_power(b_dist_edge, c_dist_edge);
  absb = dist_edge->size[0];
  i9 = d_dist_edge->size[0];
  d_dist_edge->size[0] = absb;
  emxEnsureCapacity((emxArray__common *)d_dist_edge, i9, (int)sizeof(double));
  emxFree_real_T(&b_dist_edge);
  for (i9 = 0; i9 < absb; i9++) {
    d_dist_edge->data[i9] = dist_edge->data[i9 + dist_edge->size[0]];
  }

  emxFree_real_T(&dist_edge);
  emxInit_real_T1(&dist_point, 1);
  b_power(d_dist_edge, dist_point);
  i9 = c_dist_edge->size[0];
  emxEnsureCapacity((emxArray__common *)c_dist_edge, i9, (int)sizeof(double));
  absb = c_dist_edge->size[0];
  emxFree_real_T(&d_dist_edge);
  for (i9 = 0; i9 < absb; i9++) {
    c_dist_edge->data[i9] += dist_point->data[i9];
  }

  c_sqrt(c_dist_edge);
  i9 = dist_point->size[0];
  dist_point->size[0] = dist->size[0];
  emxEnsureCapacity((emxArray__common *)dist_point, i9, (int)sizeof(double));
  absb = dist->size[0];
  for (i9 = 0; i9 < absb; i9++) {
    dist_point->data[i9] = dist->data[i9];
  }

  ndbl = dist->size[0];
  for (absb = 0; absb < ndbl; absb++) {
    if (dist->data[absb] < 0.0) {
      dist_point->data[absb] = rtInf;
    }
  }

  emxFree_real_T(&dist);

  //  find best neighbor
  i9 = dist_point->size[0];
  emxEnsureCapacity((emxArray__common *)dist_point, i9, (int)sizeof(double));
  absb = dist_point->size[0];
  for (i9 = 0; i9 < absb; i9++) {
    dist_point->data[i9] += 5.0 * c_dist_edge->data[i9];
  }

  emxFree_real_T(&c_dist_edge);
  cdiff = 1;
  absb = dist_point->size[0];
  mtmp = dist_point->data[0];
  ndbl = 0;
  if (dist_point->size[0] > 1) {
    if (rtIsNaN(dist_point->data[0])) {
      apnd = 2;
      exitg1 = false;
      while ((!exitg1) && (apnd <= absb)) {
        cdiff = apnd;
        if (!rtIsNaN(dist_point->data[apnd - 1])) {
          mtmp = dist_point->data[apnd - 1];
          ndbl = apnd - 1;
          exitg1 = true;
        } else {
          apnd++;
        }
      }
    }

    if (cdiff < dist_point->size[0]) {
      while (cdiff + 1 <= absb) {
        if (dist_point->data[cdiff] < mtmp) {
          mtmp = dist_point->data[cdiff];
          ndbl = cdiff;
        }

        cdiff++;
      }
    }
  }

  emxFree_real_T(&dist_point);
  *min_dist = mtmp;
  *neighbor_idx = unused->data[ndbl];
  emxFree_real_T(&unused);
}

//
// init v1 and v2
// Arguments    : const emxArray_real_T *img_angle
//                const emxArray_real_T *img_weight
//                double v1[2]
//                double v2[2]
// Return Type  : void
//
static void edgeOrientations(const emxArray_real_T *img_angle, const
  emxArray_real_T *img_weight, double v1[2], double v2[2])
{
  int i5;
  emxArray_real_T *vec_angle;
  int loop_ub;
  emxArray_int32_T *iidx;
  int k;
  int i;
  emxArray_real_T *b_vec_angle;
  double angle_hist[32];
  emxArray_real_T *modesxx;
  double x;
  double unusedU0[32];
  signed char r[5];
  double y[5];
  double b_y[32];
  double b_x[5];
  boolean_T c_y;
  boolean_T exitg3;
  emxArray_boolean_T *b_modesxx;
  emxArray_real_T *c_modesxx;
  int j;
  emxArray_real_T *modes;
  int exitg1;
  int exitg2;
  int b_j1;
  double c_x;
  int j2;
  emxArray_real_T *d_modesxx;
  boolean_T guard1 = false;
  int i6;
  double b_modes[6];
  double unusedU1[2];
  int b_iidx[2];
  double c_modes[6];
  double d_x;
  for (i5 = 0; i5 < 2; i5++) {
    v1[i5] = 0.0;
    v2[i5] = 0.0;
  }

  emxInit_real_T1(&vec_angle, 1);

  //  number of bins (histogram parameter)
  //  convert images to vectors
  //  convert angles from normals to directions
  i5 = vec_angle->size[0];
  vec_angle->size[0] = img_angle->size[0] * img_angle->size[1];
  emxEnsureCapacity((emxArray__common *)vec_angle, i5, (int)sizeof(double));
  loop_ub = img_angle->size[0] * img_angle->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    vec_angle->data[i5] = img_angle->data[i5] + 1.5707963267948966;
  }

  emxInit_int32_T(&iidx, 1);
  loop_ub = vec_angle->size[0] - 1;
  k = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (vec_angle->data[i] > 3.1415926535897931) {
      k++;
    }
  }

  i5 = iidx->size[0];
  iidx->size[0] = k;
  emxEnsureCapacity((emxArray__common *)iidx, i5, (int)sizeof(int));
  k = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (vec_angle->data[i] > 3.1415926535897931) {
      iidx->data[k] = i + 1;
      k++;
    }
  }

  emxInit_real_T1(&b_vec_angle, 1);
  i5 = b_vec_angle->size[0];
  b_vec_angle->size[0] = iidx->size[0];
  emxEnsureCapacity((emxArray__common *)b_vec_angle, i5, (int)sizeof(double));
  loop_ub = iidx->size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_vec_angle->data[i5] = vec_angle->data[iidx->data[i5] - 1] -
      3.1415926535897931;
  }

  loop_ub = b_vec_angle->size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    vec_angle->data[iidx->data[i5] - 1] = b_vec_angle->data[i5];
  }

  emxFree_real_T(&b_vec_angle);

  //  create histogram
  memset(&angle_hist[0], 0, sizeof(double) << 5);
  for (i = 0; i < vec_angle->size[0]; i++) {
    x = floor(vec_angle->data[i] / 0.098174770424681035);
    if (x <= 31.0) {
    } else {
      x = 31.0;
    }

    if (x >= 0.0) {
      k = (int)x;
    } else {
      k = 0;
    }

    angle_hist[k] += img_weight->data[i];
  }

  emxInit_real_T(&modesxx, 2);

  //  find modes of smoothed histogram
  i5 = modesxx->size[0] * modesxx->size[1];
  modesxx->size[0] = 0;
  modesxx->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)modesxx, i5, (int)sizeof(double));

  //  efficient mean-shift approximation by histogram smoothing
  //  compute smoothed histogram
  for (i = 0; i < 32; i++) {
    for (k = 0; k < 5; k++) {
      loop_ub = (i + k) - 2;
      r[k] = (signed char)(loop_ub - (int)floor((double)loop_ub / 32.0) * 32);
      y[k] = exp(-0.5 * (-2.0 + (double)k) * (-2.0 + (double)k)) /
        2.5066282746310002;
    }

    for (i5 = 0; i5 < 5; i5++) {
      b_x[i5] = angle_hist[r[i5]] * y[i5];
    }

    x = b_x[0];
    for (k = 0; k < 4; k++) {
      x += b_x[k + 1];
    }

    unusedU0[i] = x;
  }

  //  check if at least one entry is non-zero
  //  (otherwise mode finding may run infinitly)
  for (k = 0; k < 32; k++) {
    b_y[k] = fabs(unusedU0[k] - unusedU0[0]);
  }

  c_y = true;
  k = 0;
  exitg3 = false;
  while ((!exitg3) && (k < 32)) {
    if (!(b_y[k] < 1.0E-5)) {
      c_y = false;
      exitg3 = true;
    } else {
      k++;
    }
  }

  if (c_y) {
  } else {
    //  mode finding
    emxInit_boolean_T(&b_modesxx, 1);
    emxInit_real_T(&c_modesxx, 2);
    for (i = 0; i < 32; i++) {
      j = 1 + i;
      do {
        exitg1 = 0;
        do {
          exitg2 = 0;
          x = (((double)j + 1.0) - 1.0) / 32.0;
          b_j1 = j - ((int)floor(x) << 5);
          c_x = (((double)j - 1.0) - 1.0) / 32.0;
          j2 = (j - ((int)floor(c_x) << 5)) - 2;
          if ((unusedU0[b_j1] >= unusedU0[j - 1]) && (unusedU0[b_j1] >=
               unusedU0[j2])) {
            j = (j - ((int)floor(x) << 5)) + 1;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if ((unusedU0[j2] > unusedU0[j - 1]) && (unusedU0[j2] > unusedU0[b_j1]))
        {
          j = (j - ((int)floor(c_x) << 5)) - 1;
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      guard1 = false;
      if (modesxx->size[0] == 0) {
        guard1 = true;
      } else {
        loop_ub = modesxx->size[0];
        i5 = b_modesxx->size[0];
        b_modesxx->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)b_modesxx, i5, (int)sizeof
                          (boolean_T));
        for (i5 = 0; i5 < loop_ub; i5++) {
          b_modesxx->data[i5] = (modesxx->data[i5] == j);
        }

        if (!any(b_modesxx)) {
          guard1 = true;
        }
      }

      if (guard1) {
        if (!((modesxx->size[0] == 0) || (modesxx->size[1] == 0))) {
          k = modesxx->size[0];
        } else {
          k = 0;
        }

        i5 = c_modesxx->size[0] * c_modesxx->size[1];
        c_modesxx->size[0] = k + 1;
        c_modesxx->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)c_modesxx, i5, (int)sizeof(double));
        for (i5 = 0; i5 < 2; i5++) {
          for (i6 = 0; i6 < k; i6++) {
            c_modesxx->data[i6 + c_modesxx->size[0] * i5] = modesxx->data[i6 + k
              * i5];
          }
        }

        c_modesxx->data[k] = j;
        c_modesxx->data[k + c_modesxx->size[0]] = unusedU0[j - 1];
        i5 = modesxx->size[0] * modesxx->size[1];
        modesxx->size[0] = c_modesxx->size[0];
        modesxx->size[1] = c_modesxx->size[1];
        emxEnsureCapacity((emxArray__common *)modesxx, i5, (int)sizeof(double));
        loop_ub = c_modesxx->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          k = c_modesxx->size[0];
          for (i6 = 0; i6 < k; i6++) {
            modesxx->data[i6 + modesxx->size[0] * i5] = c_modesxx->data[i6 +
              c_modesxx->size[0] * i5];
          }
        }
      }
    }

    emxFree_real_T(&c_modesxx);
    emxFree_boolean_T(&b_modesxx);

    //  sort
    loop_ub = modesxx->size[0];
    i5 = vec_angle->size[0];
    vec_angle->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)vec_angle, i5, (int)sizeof(double));
    for (i5 = 0; i5 < loop_ub; i5++) {
      vec_angle->data[i5] = modesxx->data[i5 + modesxx->size[0]];
    }

    emxInit_real_T(&d_modesxx, 2);
    sort(vec_angle, iidx);
    k = modesxx->size[1];
    i5 = d_modesxx->size[0] * d_modesxx->size[1];
    d_modesxx->size[0] = iidx->size[0];
    d_modesxx->size[1] = k;
    emxEnsureCapacity((emxArray__common *)d_modesxx, i5, (int)sizeof(double));
    for (i5 = 0; i5 < k; i5++) {
      loop_ub = iidx->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        d_modesxx->data[i6 + d_modesxx->size[0] * i5] = modesxx->data
          [(iidx->data[i6] + modesxx->size[0] * i5) - 1];
      }
    }

    i5 = modesxx->size[0] * modesxx->size[1];
    modesxx->size[0] = d_modesxx->size[0];
    modesxx->size[1] = d_modesxx->size[1];
    emxEnsureCapacity((emxArray__common *)modesxx, i5, (int)sizeof(double));
    loop_ub = d_modesxx->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      k = d_modesxx->size[0];
      for (i6 = 0; i6 < k; i6++) {
        modesxx->data[i6 + modesxx->size[0] * i5] = d_modesxx->data[i6 +
          d_modesxx->size[0] * i5];
      }
    }

    emxFree_real_T(&d_modesxx);
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vec_angle);

  //  if only one or no mode => return invalid corner
  if (modesxx->size[0] <= 1) {
  } else {
    emxInit_real_T(&modes, 2);
    k = modesxx->size[0];
    i5 = modes->size[0] * modes->size[1];
    modes->size[0] = k;
    modes->size[1] = 3;
    emxEnsureCapacity((emxArray__common *)modes, i5, (int)sizeof(double));
    loop_ub = k * 3;
    for (i5 = 0; i5 < loop_ub; i5++) {
      modes->data[i5] = 0.0;
    }

    loop_ub = modesxx->size[0] - 1;
    for (i5 = 0; i5 <= loop_ub; i5++) {
      modes->data[i5] = modesxx->data[i5];
    }

    loop_ub = modesxx->size[0] - 1;
    for (i5 = 0; i5 <= loop_ub; i5++) {
      modes->data[i5 + modes->size[0]] = modesxx->data[i5 + modesxx->size[0]];
    }

    //  compute orientation at modes
    loop_ub = modesxx->size[0] - 1;
    for (i5 = 0; i5 <= loop_ub; i5++) {
      modes->data[i5 + (modes->size[0] << 1)] = (modesxx->data[i5] - 1.0) *
        3.1415926535897931 / 32.0;
    }

    //  extract 2 strongest modes and sort by angle
    for (i5 = 0; i5 < 3; i5++) {
      for (i6 = 0; i6 < 2; i6++) {
        b_modes[i6 + (i5 << 1)] = modes->data[i6 + modes->size[0] * i5];
      }
    }

    emxFree_real_T(&modes);
    for (i5 = 0; i5 < 2; i5++) {
      unusedU1[i5] = b_modes[4 + i5];
    }

    b_sort(unusedU1, b_iidx);
    for (i5 = 0; i5 < 3; i5++) {
      for (i6 = 0; i6 < 2; i6++) {
        c_modes[i6 + (i5 << 1)] = b_modes[(b_iidx[i6] + (i5 << 1)) - 1];
      }
    }

    for (i5 = 0; i5 < 3; i5++) {
      for (i6 = 0; i6 < 2; i6++) {
        b_modes[i6 + (i5 << 1)] = c_modes[i6 + (i5 << 1)];
      }
    }

    //  compute angle between modes
    x = b_modes[5] - b_modes[4];
    c_x = (b_modes[4] + 3.1415926535897931) - b_modes[5];

    //  if angle too small => return invalid corner
    if ((x <= c_x) || rtIsNaN(c_x)) {
      d_x = x;
    } else {
      d_x = c_x;
    }

    if (d_x <= 0.3) {
    } else {
      //  set statistics: orientations
      v1[0] = cos(b_modes[4]);
      v1[1] = sin(b_modes[4]);
      v2[0] = cos(b_modes[5]);
      v2[1] = sin(b_modes[5]);
    }
  }

  emxFree_real_T(&modesxx);
}

//
// Arguments    : cell_wrap_0 *dst
//                const cell_wrap_0 *src
// Return Type  : void
//
static void emxCopyStruct_cell_wrap_0(cell_wrap_0 *dst, const cell_wrap_0 *src)
{
  emxCopy_real_T(&dst->f1, &src->f1);
}

//
// Arguments    : emxArray_real_T **dst
//                emxArray_real_T * const *src
// Return Type  : void
//
static void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T * const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity((emxArray__common *)*dst, numElDst, (int)sizeof(double));
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

//
// Arguments    : emxArray__common *emxArray
//                int oldNumel
//                int elementSize
// Return Type  : void
//
static void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize)
{
  int newNumel;
  int i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (unsigned int)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

//
// Arguments    : emxArray_cell_wrap_0 *emxArray
//                int oldNumel
// Return Type  : void
//
static void emxEnsureCapacity_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int
  oldNumel)
{
  int elementSize;
  int newNumel;
  int i;
  void *newData;
  elementSize = (int)sizeof(cell_wrap_0);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (unsigned int)(elementSize *
              oldNumel));
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (cell_wrap_0 *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }

  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_0(emxArray, newNumel, oldNumel);
  } else {
    if (oldNumel < newNumel) {
      emxExpand_cell_wrap_0(emxArray, oldNumel, newNumel);
    }
  }
}

//
// Arguments    : emxArray_cell_wrap_0 *emxArray
//                int fromIndex
//                int toIndex
// Return Type  : void
//
static void emxExpand_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
  int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_0(&emxArray->data[i]);
  }
}

//
// Arguments    : cell_wrap_0 pMatrix[5]
// Return Type  : void
//
static void emxFreeMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5])
{
  int i;
  for (i = 0; i < 5; i++) {
    emxFreeStruct_cell_wrap_0(&pMatrix[i]);
  }
}

//
// Arguments    : cell_wrap_0 pMatrix[4]
// Return Type  : void
//
static void emxFreeMatrix_cell_wrap_01(cell_wrap_0 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_0(&pMatrix[i]);
  }
}

//
// Arguments    : cell_wrap_0 *pStruct
// Return Type  : void
//
static void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

//
// Arguments    : struct_T *pStruct
// Return Type  : void
//
static void emxFreeStruct_struct_T(struct_T *pStruct)
{
  emxFree_real_T(&pStruct->p);
  emxFree_real_T(&pStruct->v1);
  emxFree_real_T(&pStruct->v2);
  emxFree_real_T(&pStruct->score);
}

//
// Arguments    : b_struct_T *pStruct
// Return Type  : void
//
static void emxFreeStruct_struct_T1(b_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->p);
  emxFree_real_T(&pStruct->v1);
  emxFree_real_T(&pStruct->v2);
}

//
// Arguments    : emxArray_boolean_T **pEmxArray
// Return Type  : void
//
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

//
// Arguments    : emxArray_cell_wrap_0 **pEmxArray
// Return Type  : void
//
static void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray)
{
  int numEl;
  int i;
  if (*pEmxArray != (emxArray_cell_wrap_0 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_0 *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }

      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_0(&(*pEmxArray)->data[i]);
      }

      if ((*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
      }
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_0 *)NULL;
  }
}

//
// Arguments    : emxArray_int32_T **pEmxArray
// Return Type  : void
//
static void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

//
// Arguments    : emxArray_real_T **pEmxArray
// Return Type  : void
//
static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

//
// Arguments    : cell_wrap_0 pMatrix[5]
// Return Type  : void
//
static void emxInitMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5])
{
  int i;
  for (i = 0; i < 5; i++) {
    emxInitStruct_cell_wrap_0(&pMatrix[i]);
  }
}

//
// Arguments    : cell_wrap_0 pMatrix[4]
// Return Type  : void
//
static void emxInitMatrix_cell_wrap_01(cell_wrap_0 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_0(&pMatrix[i]);
  }
}

//
// Arguments    : cell_wrap_0 *pStruct
// Return Type  : void
//
static void emxInitStruct_cell_wrap_0(cell_wrap_0 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 2);
}

//
// Arguments    : struct_T *pStruct
// Return Type  : void
//
static void emxInitStruct_struct_T(struct_T *pStruct)
{
  emxInit_real_T(&pStruct->p, 2);
  emxInit_real_T(&pStruct->v1, 2);
  emxInit_real_T(&pStruct->v2, 2);
  emxInit_real_T1(&pStruct->score, 1);
}

//
// Arguments    : b_struct_T *pStruct
// Return Type  : void
//
static void emxInitStruct_struct_T1(b_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->p, 2);
  emxInit_real_T(&pStruct->v1, 2);
  emxInit_real_T(&pStruct->v2, 2);
}

//
// Arguments    : emxArray_boolean_T **pEmxArray
//                int numDimensions
// Return Type  : void
//
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

//
// Arguments    : emxArray_boolean_T **pEmxArray
//                int numDimensions
// Return Type  : void
//
static void emxInit_boolean_T1(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

//
// Arguments    : emxArray_cell_wrap_0 **pEmxArray
//                int numDimensions
// Return Type  : void
//
static void emxInit_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray, int
  numDimensions)
{
  emxArray_cell_wrap_0 *emxArray;
  int i;
  *pEmxArray = (emxArray_cell_wrap_0 *)malloc(sizeof(emxArray_cell_wrap_0));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_0 *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

//
// Arguments    : emxArray_int32_T **pEmxArray
//                int numDimensions
// Return Type  : void
//
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxArray_int32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

//
// Arguments    : emxArray_real_T **pEmxArray
//                int numDimensions
// Return Type  : void
//
static void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

//
// Arguments    : emxArray_real_T **pEmxArray
//                int numDimensions
// Return Type  : void
//
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

//
// Arguments    : emxArray_cell_wrap_0 *emxArray
//                int fromIndex
//                int toIndex
// Return Type  : void
//
static void emxTrim_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
  int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_0(&emxArray->data[i]);
  }
}

//
// Arguments    : const unsigned char img[921600]
//                double tau
//                struct_T *corners3
// Return Type  : void
//
static void findCorners(const unsigned char img[921600], double tau, struct_T
  *corners3)
{
  static double b_img[921600];
  int i1;
  static const double dv0[9] = { -1.0, -1.0, -1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0
  };

  static double img_du[921600];
  static const double dv1[9] = { -1.0, 0.0, 1.0, -1.0, 0.0, 1.0, -1.0, 0.0, 1.0
  };

  static double img_dv[921600];
  static double img_angle[921600];
  static double img_weight[921600];
  emxArray_int32_T *r1;
  int ix;
  int i;
  emxArray_real_T *b_img_angle;
  emxArray_real_T *c_img_angle;
  double mtmp;
  double b_mtmp;
  static double img_corners[921600];
  emxArray_real_T *template_a1;
  emxArray_real_T *template_a2;
  emxArray_real_T *template_b1;
  emxArray_real_T *template_b2;
  int template_class;
  static const double template_props[18] = { 0.0, 0.78539816339744828, 0.0,
    0.78539816339744828, 0.0, 0.78539816339744828, 1.5707963267948966,
    -0.78539816339744828, 1.5707963267948966, -0.78539816339744828,
    1.5707963267948966, -0.78539816339744828, 4.0, 4.0, 8.0, 8.0, 12.0, 12.0 };

  static double img_corners_a1[921600];
  emxArray_real_T *corners_p;
  static double img_corners_a2[921600];
  b_struct_T corners2;
  static double img_corners_b1[921600];
  static double img_corners_b2[921600];
  static double img_corners_mu[921600];
  static double img_corners_1[921600];
  double b_img_corners_mu;
  double b_img_du;
  double b_img_dv;
  double b_img_corners_b1;
  double b_img_corners_b2;
  emxArray_boolean_T *idx;
  double dv2[3];
  int end;
  emxArray_real_T *b_corners3;
  int i2;
  emxArray_real_T *corners_n1;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  emxArray_real_T *d_x;
  for (i1 = 0; i1 < 921600; i1++) {
    b_img[i1] = (double)img[i1] / 255.0;
  }

  //  3 scales
  //  sobel masks
  //  compute image derivatives (for principal axes estimation)
  conv2(b_img, dv0, img_du);
  conv2(b_img, dv1, img_dv);
  b_atan2(img_dv, img_du, img_angle);
  power(img_du, img_weight);
  power(img_dv, img_du);
  for (i1 = 0; i1 < 921600; i1++) {
    img_weight[i1] += img_du[i1];
  }

  emxInit_int32_T(&r1, 1);
  b_sqrt(img_weight);

  //  correct angle to lie in between [0,pi]
  ix = 0;
  for (i = 0; i < 921600; i++) {
    if (img_angle[i] < 0.0) {
      ix++;
    }
  }

  i1 = r1->size[0];
  r1->size[0] = ix;
  emxEnsureCapacity((emxArray__common *)r1, i1, (int)sizeof(int));
  ix = 0;
  for (i = 0; i < 921600; i++) {
    if (img_angle[i] < 0.0) {
      r1->data[ix] = i + 1;
      ix++;
    }
  }

  emxInit_real_T1(&b_img_angle, 1);
  i1 = b_img_angle->size[0];
  b_img_angle->size[0] = r1->size[0];
  emxEnsureCapacity((emxArray__common *)b_img_angle, i1, (int)sizeof(double));
  i = r1->size[0];
  for (i1 = 0; i1 < i; i1++) {
    b_img_angle->data[i1] = img_angle[r1->data[i1] - 1] + 3.1415926535897931;
  }

  i = b_img_angle->size[0];
  for (i1 = 0; i1 < i; i1++) {
    img_angle[r1->data[i1] - 1] = b_img_angle->data[i1];
  }

  emxFree_real_T(&b_img_angle);
  ix = 0;
  for (i = 0; i < 921600; i++) {
    if (img_angle[i] > 3.1415926535897931) {
      ix++;
    }
  }

  i1 = r1->size[0];
  r1->size[0] = ix;
  emxEnsureCapacity((emxArray__common *)r1, i1, (int)sizeof(int));
  ix = 0;
  for (i = 0; i < 921600; i++) {
    if (img_angle[i] > 3.1415926535897931) {
      r1->data[ix] = i + 1;
      ix++;
    }
  }

  emxInit_real_T1(&c_img_angle, 1);
  i1 = c_img_angle->size[0];
  c_img_angle->size[0] = r1->size[0];
  emxEnsureCapacity((emxArray__common *)c_img_angle, i1, (int)sizeof(double));
  i = r1->size[0];
  for (i1 = 0; i1 < i; i1++) {
    c_img_angle->data[i1] = img_angle[r1->data[i1] - 1] - 3.1415926535897931;
  }

  i = c_img_angle->size[0];
  for (i1 = 0; i1 < i; i1++) {
    img_angle[r1->data[i1] - 1] = c_img_angle->data[i1];
  }

  emxFree_real_T(&c_img_angle);

  //  scale input image
  mtmp = b_img[0];
  for (ix = 1; ix + 1 < 921601; ix++) {
    if (b_img[ix] < mtmp) {
      mtmp = b_img[ix];
    }
  }

  b_mtmp = b_img[0];
  for (ix = 1; ix + 1 < 921601; ix++) {
    if (b_img[ix] > b_mtmp) {
      b_mtmp = b_img[ix];
    }
  }

  b_mtmp -= mtmp;

  //  template properties
  // disp('Filtering ...');
  //  filter image
  for (i1 = 0; i1 < 921600; i1++) {
    img_corners[i1] = 0.0;
    b_img[i1] = (b_img[i1] - mtmp) / b_mtmp;
  }

  emxInit_real_T(&template_a1, 2);
  emxInit_real_T(&template_a2, 2);
  emxInit_real_T(&template_b1, 2);
  emxInit_real_T(&template_b2, 2);
  for (template_class = 0; template_class < 6; template_class++) {
    //  create correlation template
    createCorrelationPatch(template_props[template_class], template_props[6 +
      template_class], template_props[12 + template_class], template_a1,
      template_a2, template_b1, template_b2);

    //  filter image according with current template
    b_conv2(b_img, template_a1, img_corners_a1);
    b_conv2(b_img, template_a2, img_corners_a2);
    b_conv2(b_img, template_b1, img_corners_b1);
    b_conv2(b_img, template_b2, img_corners_b2);

    //  compute mean
    //  case 1: a=white, b=black
    //  case 2: b=white, a=black
    for (ix = 0; ix < 921600; ix++) {
      b_img_corners_mu = (((img_corners_a1[ix] + img_corners_a2[ix]) +
                           img_corners_b1[ix]) + img_corners_b2[ix]) / 4.0;
      b_img_du = img_corners_a1[ix] - b_img_corners_mu;
      b_img_dv = img_corners_a2[ix] - b_img_corners_mu;
      if ((b_img_du <= b_img_dv) || rtIsNaN(b_img_dv)) {
        mtmp = b_img_du;
      } else {
        mtmp = b_img_dv;
      }

      b_img_du = b_img_corners_mu - img_corners_b1[ix];
      b_img_dv = b_img_corners_mu - img_corners_b2[ix];
      if ((b_img_du <= b_img_dv) || rtIsNaN(b_img_dv)) {
        b_mtmp = b_img_du;
      } else {
        b_mtmp = b_img_dv;
      }

      if ((mtmp <= b_mtmp) || rtIsNaN(b_mtmp)) {
        img_corners_1[ix] = mtmp;
      } else {
        img_corners_1[ix] = b_mtmp;
      }

      img_corners_a1[ix] = b_img_corners_mu - img_corners_a1[ix];
      img_corners_a2[ix] = b_img_corners_mu - img_corners_a2[ix];
      img_corners_mu[ix] = b_img_corners_mu;
    }

    //  update corner map
    for (ix = 0; ix < 921600; ix++) {
      if ((img_corners_a1[ix] <= img_corners_a2[ix]) || rtIsNaN
          (img_corners_a2[ix])) {
        mtmp = img_corners_a1[ix];
      } else {
        mtmp = img_corners_a2[ix];
      }

      b_img_corners_b1 = img_corners_b1[ix] - img_corners_mu[ix];
      b_img_corners_b2 = img_corners_b2[ix] - img_corners_mu[ix];
      if ((b_img_corners_b1 <= b_img_corners_b2) || rtIsNaN(b_img_corners_b2)) {
        b_mtmp = b_img_corners_b1;
      } else {
        b_mtmp = b_img_corners_b2;
      }

      if ((mtmp <= b_mtmp) || rtIsNaN(b_mtmp)) {
        img_dv[ix] = mtmp;
      } else {
        img_dv[ix] = b_mtmp;
      }

      img_du[ix] = img_corners[ix];
    }

    for (ix = 0; ix < 921600; ix++) {
      if ((img_du[ix] >= img_corners_1[ix]) || rtIsNaN(img_corners_1[ix])) {
      } else {
        img_du[ix] = img_corners_1[ix];
      }
    }

    for (ix = 0; ix < 921600; ix++) {
      if ((img_du[ix] >= img_dv[ix]) || rtIsNaN(img_dv[ix])) {
        img_corners[ix] = img_du[ix];
      } else {
        img_corners[ix] = img_dv[ix];
      }
    }
  }

  emxFree_real_T(&template_b2);
  emxFree_real_T(&template_b1);
  emxFree_real_T(&template_a2);
  emxFree_real_T(&template_a1);
  emxInit_real_T(&corners_p, 2);
  emxInitStruct_struct_T1(&corners2);

  //  extract corner candidates via non maximum suppression
  nonMaximumSuppression(img_corners, 0.025, corners_p);

  // disp('Refining ...');
  i1 = corners2.v1->size[0] * corners2.v1->size[1];
  corners2.v1->size[0] = corners_p->size[0];
  corners2.v1->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)corners2.v1, i1, (int)sizeof(double));
  i = corners_p->size[0] << 1;
  for (i1 = 0; i1 < i; i1++) {
    corners2.v1->data[i1] = 0.0;
  }

  i1 = corners2.v2->size[0] * corners2.v2->size[1];
  corners2.v2->size[0] = corners_p->size[0];
  corners2.v2->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)corners2.v2, i1, (int)sizeof(double));
  i = corners_p->size[0] << 1;
  for (i1 = 0; i1 < i; i1++) {
    corners2.v2->data[i1] = 0.0;
  }

  i1 = corners2.p->size[0] * corners2.p->size[1];
  corners2.p->size[0] = corners_p->size[0];
  corners2.p->size[1] = corners_p->size[1];
  emxEnsureCapacity((emxArray__common *)corners2.p, i1, (int)sizeof(double));
  i = corners_p->size[0] * corners_p->size[1];
  for (i1 = 0; i1 < i; i1++) {
    corners2.p->data[i1] = corners_p->data[i1];
  }

  emxFree_real_T(&corners_p);
  emxInit_boolean_T(&idx, 1);

  //  subpixel refinement
  refineCorners(img_angle, img_weight, &corners2, 10.0);

  //  remove corners without edges
  i = corners2.v1->size[0];
  i1 = idx->size[0];
  idx->size[0] = i;
  emxEnsureCapacity((emxArray__common *)idx, i1, (int)sizeof(boolean_T));
  for (i1 = 0; i1 < i; i1++) {
    idx->data[i1] = ((corners2.v1->data[i1] == 0.0) && (corners2.v1->data[i1 +
      corners2.v1->size[0]] == 0.0));
  }

  nullAssignment(corners2.p, idx);
  nullAssignment(corners2.v1, idx);
  nullAssignment(corners2.v2, idx);

  // disp('Scoring ...');
  i1 = corners3->score->size[0];
  corners3->score->size[0] = corners2.p->size[0];
  emxEnsureCapacity((emxArray__common *)corners3->score, i1, (int)sizeof(double));
  i = corners2.p->size[0];
  for (i1 = 0; i1 < i; i1++) {
    corners3->score->data[i1] = 0.0;
  }

  i1 = corners3->p->size[0] * corners3->p->size[1];
  corners3->p->size[0] = corners2.p->size[0];
  corners3->p->size[1] = corners2.p->size[1];
  emxEnsureCapacity((emxArray__common *)corners3->p, i1, (int)sizeof(double));
  i = corners2.p->size[0] * corners2.p->size[1];
  for (i1 = 0; i1 < i; i1++) {
    corners3->p->data[i1] = corners2.p->data[i1];
  }

  i1 = corners3->v1->size[0] * corners3->v1->size[1];
  corners3->v1->size[0] = corners2.v1->size[0];
  corners3->v1->size[1] = corners2.v1->size[1];
  emxEnsureCapacity((emxArray__common *)corners3->v1, i1, (int)sizeof(double));
  i = corners2.v1->size[0] * corners2.v1->size[1];
  for (i1 = 0; i1 < i; i1++) {
    corners3->v1->data[i1] = corners2.v1->data[i1];
  }

  i1 = corners3->v2->size[0] * corners3->v2->size[1];
  corners3->v2->size[0] = corners2.v2->size[0];
  corners3->v2->size[1] = corners2.v2->size[1];
  emxEnsureCapacity((emxArray__common *)corners3->v2, i1, (int)sizeof(double));
  i = corners2.v2->size[0] * corners2.v2->size[1];
  for (i1 = 0; i1 < i; i1++) {
    corners3->v2->data[i1] = corners2.v2->data[i1];
  }

  emxFreeStruct_struct_T1(&corners2);

  //  score corners
  for (i1 = 0; i1 < 3; i1++) {
    dv2[i1] = 4.0 + 4.0 * (double)i1;
  }

  scoreCorners(b_img, img_weight, corners3, dv2);

  //  remove low scoring corners
  i1 = idx->size[0];
  idx->size[0] = corners3->score->size[0];
  emxEnsureCapacity((emxArray__common *)idx, i1, (int)sizeof(boolean_T));
  i = corners3->score->size[0];
  for (i1 = 0; i1 < i; i1++) {
    idx->data[i1] = (corners3->score->data[i1] < tau);
  }

  nullAssignment(corners3->p, idx);
  nullAssignment(corners3->v1, idx);
  nullAssignment(corners3->v2, idx);
  b_nullAssignment(corners3->score, idx);

  //  make v1(:,1)+v1(:,2) positive (=> comparable to c++ code)
  i = corners3->v1->size[0];
  i1 = idx->size[0];
  idx->size[0] = i;
  emxEnsureCapacity((emxArray__common *)idx, i1, (int)sizeof(boolean_T));
  for (i1 = 0; i1 < i; i1++) {
    idx->data[i1] = (corners3->v1->data[i1] + corners3->v1->data[i1 +
                     corners3->v1->size[0]] < 0.0);
  }

  end = idx->size[0] - 1;
  ix = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      ix++;
    }
  }

  i1 = r1->size[0];
  r1->size[0] = ix;
  emxEnsureCapacity((emxArray__common *)r1, i1, (int)sizeof(int));
  ix = 0;
  for (i = 0; i <= end; i++) {
    if (idx->data[i]) {
      r1->data[ix] = i + 1;
      ix++;
    }
  }

  emxFree_boolean_T(&idx);
  emxInit_real_T(&b_corners3, 2);
  end = corners3->v1->size[1];
  i1 = b_corners3->size[0] * b_corners3->size[1];
  b_corners3->size[0] = r1->size[0];
  b_corners3->size[1] = end;
  emxEnsureCapacity((emxArray__common *)b_corners3, i1, (int)sizeof(double));
  for (i1 = 0; i1 < end; i1++) {
    i = r1->size[0];
    for (i2 = 0; i2 < i; i2++) {
      b_corners3->data[i2 + b_corners3->size[0] * i1] = -corners3->v1->data
        [(r1->data[i2] + corners3->v1->size[0] * i1) - 1];
    }
  }

  i = b_corners3->size[1];
  for (i1 = 0; i1 < i; i1++) {
    ix = b_corners3->size[0];
    for (i2 = 0; i2 < ix; i2++) {
      corners3->v1->data[(r1->data[i2] + corners3->v1->size[0] * i1) - 1] =
        b_corners3->data[i2 + b_corners3->size[0] * i1];
    }
  }

  emxFree_real_T(&b_corners3);
  emxFree_int32_T(&r1);
  emxInit_real_T(&corners_n1, 2);

  //  make all coordinate systems right-handed (reduces matching ambiguities from 8 to 4) 
  i = corners3->v1->size[0];
  ix = corners3->v1->size[0] - 1;
  i1 = corners_n1->size[0] * corners_n1->size[1];
  corners_n1->size[0] = i;
  corners_n1->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)corners_n1, i1, (int)sizeof(double));
  for (i1 = 0; i1 < i; i1++) {
    corners_n1->data[i1] = corners3->v1->data[i1 + corners3->v1->size[0]];
  }

  for (i1 = 0; i1 <= ix; i1++) {
    corners_n1->data[i1 + corners_n1->size[0]] = -corners3->v1->data[i1];
  }

  emxInit_real_T1(&x, 1);
  i = corners_n1->size[0];
  i1 = x->size[0];
  x->size[0] = i;
  emxEnsureCapacity((emxArray__common *)x, i1, (int)sizeof(double));
  for (i1 = 0; i1 < i; i1++) {
    x->data[i1] = corners_n1->data[i1] * corners3->v2->data[i1] +
      corners_n1->data[i1 + corners_n1->size[0]] * corners3->v2->data[i1 +
      corners3->v2->size[0]];
  }

  emxFree_real_T(&corners_n1);
  emxInit_real_T1(&b_x, 1);
  i1 = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, i1, (int)sizeof(double));
  i = x->size[0];
  for (i1 = 0; i1 < i; i1++) {
    b_x->data[i1] = x->data[i1];
  }

  for (ix = 0; ix + 1 <= x->size[0]; ix++) {
    if (b_x->data[ix] < 0.0) {
      b_mtmp = -1.0;
    } else if (b_x->data[ix] > 0.0) {
      b_mtmp = 1.0;
    } else if (b_x->data[ix] == 0.0) {
      b_mtmp = 0.0;
    } else {
      b_mtmp = b_x->data[ix];
    }

    b_x->data[ix] = b_mtmp;
  }

  emxFree_real_T(&x);
  emxInit_real_T1(&c_x, 1);
  i1 = c_x->size[0];
  c_x->size[0] = b_x->size[0];
  emxEnsureCapacity((emxArray__common *)c_x, i1, (int)sizeof(double));
  i = b_x->size[0];
  for (i1 = 0; i1 < i; i1++) {
    c_x->data[i1] = -b_x->data[i1];
  }

  emxFree_real_T(&b_x);
  emxInit_real_T(&d_x, 2);
  i1 = d_x->size[0] * d_x->size[1];
  d_x->size[0] = c_x->size[0];
  d_x->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)d_x, i1, (int)sizeof(double));
  i = c_x->size[0];
  for (i1 = 0; i1 < i; i1++) {
    for (i2 = 0; i2 < 2; i2++) {
      d_x->data[i1 + d_x->size[0] * i2] = c_x->data[i1];
    }
  }

  emxFree_real_T(&c_x);
  i1 = corners3->v2->size[0] * corners3->v2->size[1];
  emxEnsureCapacity((emxArray__common *)corners3->v2, i1, (int)sizeof(double));
  i = corners3->v2->size[1];
  for (i1 = 0; i1 < i; i1++) {
    ix = corners3->v2->size[0];
    for (i2 = 0; i2 < ix; i2++) {
      corners3->v2->data[i2 + corners3->v2->size[0] * i1] *= d_x->data[i2 +
        d_x->size[0] * i1];
    }
  }

  emxFree_real_T(&d_x);

  //  convert to 0-based index
  i1 = corners3->p->size[0] * corners3->p->size[1];
  emxEnsureCapacity((emxArray__common *)corners3->p, i1, (int)sizeof(double));
  end = corners3->p->size[0];
  ix = corners3->p->size[1];
  i = end * ix;
  for (i1 = 0; i1 < i; i1++) {
    corners3->p->data[i1]--;
  }

  // disp('Find Corners OK');
}

//
// return immediately, if there do not exist any chessboards
// Arguments    : emxArray_real_T *chessboard
//                const emxArray_real_T *corners_p
//                double border_type
// Return Type  : void
//
static void growChessboard(emxArray_real_T *chessboard, const emxArray_real_T
  *corners_p, double border_type)
{
  int ndbl;
  int apnd;
  int cdiff;
  int absb;
  emxArray_real_T *unused;
  int i29;
  emxArray_int32_T *r10;
  emxArray_int32_T *b_chessboard;
  emxArray_real_T *cand;
  emxArray_real_T *pred;
  int i30;
  emxArray_real_T *idx;
  emxArray_real_T *b_corners_p;
  emxArray_real_T *c_corners_p;
  emxArray_real_T *d_corners_p;
  emxArray_boolean_T *b_idx;
  emxArray_int32_T *c_idx;
  boolean_T empty_non_axis_sizes;
  emxArray_int32_T *d_idx;
  emxArray_int32_T *e_idx;
  emxArray_int32_T *f_idx;
  emxArray_real_T *b_unused;
  emxArray_int32_T *g_idx;
  boolean_T guard2 = false;
  emxArray_real_T *c_chessboard;
  boolean_T guard1 = false;
  if ((chessboard->size[0] == 0) || (chessboard->size[1] == 0)) {
  } else {
    //  extract feature locations
    //  list of unused feature elements
    if (corners_p->size[0] < 1) {
      ndbl = 0;
      apnd = 0;
    } else {
      ndbl = (int)floor(((double)corners_p->size[0] - 1.0) + 0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - corners_p->size[0]) + 1;
      absb = corners_p->size[0];
      if (fabs((double)cdiff) < 4.4408920985006262E-16 * (double)absb) {
        ndbl++;
        apnd = corners_p->size[0];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }
    }

    emxInit_real_T(&unused, 2);
    i29 = unused->size[0] * unused->size[1];
    unused->size[0] = 1;
    unused->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)unused, i29, (int)sizeof(double));
    if (ndbl > 0) {
      unused->data[0] = 1.0;
      if (ndbl > 1) {
        unused->data[ndbl - 1] = apnd;
        cdiff = (ndbl - 1) / 2;
        for (absb = 1; absb < cdiff; absb++) {
          unused->data[absb] = 1.0 + (double)absb;
          unused->data[(ndbl - absb) - 1] = apnd - absb;
        }

        if (cdiff << 1 == ndbl - 1) {
          unused->data[cdiff] = (1.0 + (double)apnd) / 2.0;
        } else {
          unused->data[cdiff] = 1.0 + (double)cdiff;
          unused->data[cdiff + 1] = apnd - cdiff;
        }
      }
    }

    emxInit_int32_T(&r10, 1);
    ndbl = chessboard->size[0] * chessboard->size[1] - 1;
    cdiff = 0;
    for (absb = 0; absb <= ndbl; absb++) {
      if (chessboard->data[absb] != 0.0) {
        cdiff++;
      }
    }

    i29 = r10->size[0];
    r10->size[0] = cdiff;
    emxEnsureCapacity((emxArray__common *)r10, i29, (int)sizeof(int));
    cdiff = 0;
    for (absb = 0; absb <= ndbl; absb++) {
      if (chessboard->data[absb] != 0.0) {
        r10->data[cdiff] = absb + 1;
        cdiff++;
      }
    }

    emxInit_int32_T(&b_chessboard, 1);
    i29 = b_chessboard->size[0];
    b_chessboard->size[0] = r10->size[0];
    emxEnsureCapacity((emxArray__common *)b_chessboard, i29, (int)sizeof(int));
    apnd = r10->size[0];
    for (i29 = 0; i29 < apnd; i29++) {
      b_chessboard->data[i29] = (int)chessboard->data[r10->data[i29] - 1];
    }

    emxFree_int32_T(&r10);
    emxInit_real_T(&cand, 2);
    c_nullAssignment(unused, b_chessboard);

    //  candidates from unused corners
    apnd = corners_p->size[1];
    i29 = cand->size[0] * cand->size[1];
    cand->size[0] = unused->size[1];
    cand->size[1] = apnd;
    emxEnsureCapacity((emxArray__common *)cand, i29, (int)sizeof(double));
    emxFree_int32_T(&b_chessboard);
    for (i29 = 0; i29 < apnd; i29++) {
      absb = unused->size[1];
      for (i30 = 0; i30 < absb; i30++) {
        cand->data[i30 + cand->size[0] * i29] = corners_p->data[((int)
          unused->data[unused->size[0] * i30] + corners_p->size[0] * i29) - 1];
      }
    }

    //  switch border type 1..4
    emxInit_real_T(&pred, 2);
    emxInit_real_T(&idx, 2);
    switch ((int)border_type) {
     case 1:
      emxInit_real_T(&b_corners_p, 2);
      apnd = chessboard->size[0];
      cdiff = chessboard->size[1];
      absb = corners_p->size[1];
      i29 = b_corners_p->size[0] * b_corners_p->size[1];
      b_corners_p->size[0] = apnd;
      b_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)b_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          b_corners_p->data[i30 + b_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[i30 + chessboard->size[0] * (cdiff - 3)] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&c_corners_p, 2);
      apnd = chessboard->size[0];
      cdiff = chessboard->size[1];
      absb = corners_p->size[1];
      i29 = c_corners_p->size[0] * c_corners_p->size[1];
      c_corners_p->size[0] = apnd;
      c_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)c_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          c_corners_p->data[i30 + c_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[i30 + chessboard->size[0] * (cdiff - 2)] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&d_corners_p, 2);
      apnd = chessboard->size[0];
      cdiff = chessboard->size[1];
      absb = corners_p->size[1];
      i29 = d_corners_p->size[0] * d_corners_p->size[1];
      d_corners_p->size[0] = apnd;
      d_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)d_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          d_corners_p->data[i30 + d_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[i30 + chessboard->size[0] * (cdiff - 1)] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_boolean_T1(&b_idx, 2);
      predictCorners(b_corners_p, c_corners_p, d_corners_p, pred);
      assignClosestCorners(cand, pred, idx);
      i29 = b_idx->size[0] * b_idx->size[1];
      b_idx->size[0] = 1;
      b_idx->size[1] = idx->size[1];
      emxEnsureCapacity((emxArray__common *)b_idx, i29, (int)sizeof(boolean_T));
      apnd = idx->size[0] * idx->size[1];
      emxFree_real_T(&d_corners_p);
      emxFree_real_T(&c_corners_p);
      emxFree_real_T(&b_corners_p);
      for (i29 = 0; i29 < apnd; i29++) {
        b_idx->data[i29] = (idx->data[i29] != 0.0);
      }

      if (all(b_idx)) {
        emxInit_int32_T(&c_idx, 1);
        emxInit_int32_T(&d_idx, 1);
        emxInit_int32_T(&e_idx, 1);
        emxInit_int32_T(&f_idx, 1);
        if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0))) {
          cdiff = chessboard->size[0];
        } else {
          i29 = c_idx->size[0];
          c_idx->size[0] = idx->size[1];
          emxEnsureCapacity((emxArray__common *)c_idx, i29, (int)sizeof(int));
          apnd = idx->size[1];
          for (i29 = 0; i29 < apnd; i29++) {
            c_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
          }

          if (!(c_idx->size[0] == 0)) {
            i29 = f_idx->size[0];
            f_idx->size[0] = idx->size[1];
            emxEnsureCapacity((emxArray__common *)f_idx, i29, (int)sizeof(int));
            apnd = idx->size[1];
            for (i29 = 0; i29 < apnd; i29++) {
              f_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
            }

            cdiff = f_idx->size[0];
          } else {
            cdiff = chessboard->size[0];
            if (cdiff >= 0) {
            } else {
              cdiff = 0;
            }

            i29 = d_idx->size[0];
            d_idx->size[0] = idx->size[1];
            emxEnsureCapacity((emxArray__common *)d_idx, i29, (int)sizeof(int));
            apnd = idx->size[1];
            for (i29 = 0; i29 < apnd; i29++) {
              d_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
            }

            if (d_idx->size[0] > cdiff) {
              i29 = e_idx->size[0];
              e_idx->size[0] = idx->size[1];
              emxEnsureCapacity((emxArray__common *)e_idx, i29, (int)sizeof(int));
              apnd = idx->size[1];
              for (i29 = 0; i29 < apnd; i29++) {
                e_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
              }

              cdiff = e_idx->size[0];
            }
          }
        }

        emxFree_int32_T(&f_idx);
        emxFree_int32_T(&e_idx);
        emxFree_int32_T(&d_idx);
        emxFree_int32_T(&c_idx);
        empty_non_axis_sizes = (cdiff == 0);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          absb = chessboard->size[1];
        } else {
          absb = 0;
        }

        emxInit_int32_T(&g_idx, 1);
        guard2 = false;
        if (empty_non_axis_sizes) {
          guard2 = true;
        } else {
          i29 = g_idx->size[0];
          g_idx->size[0] = idx->size[1];
          emxEnsureCapacity((emxArray__common *)g_idx, i29, (int)sizeof(int));
          apnd = idx->size[1];
          for (i29 = 0; i29 < apnd; i29++) {
            g_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
          }

          if (!(g_idx->size[0] == 0)) {
            guard2 = true;
          } else {
            ndbl = 0;
          }
        }

        if (guard2) {
          ndbl = 1;
        }

        emxFree_int32_T(&g_idx);
        emxInit_real_T1(&b_unused, 1);
        i29 = b_unused->size[0];
        b_unused->size[0] = idx->size[1];
        emxEnsureCapacity((emxArray__common *)b_unused, i29, (int)sizeof(double));
        apnd = idx->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          b_unused->data[i29] = unused->data[(int)idx->data[idx->size[0] * i29]
            - 1];
        }

        emxInit_real_T(&c_chessboard, 2);
        i29 = c_chessboard->size[0] * c_chessboard->size[1];
        c_chessboard->size[0] = cdiff;
        c_chessboard->size[1] = absb + ndbl;
        emxEnsureCapacity((emxArray__common *)c_chessboard, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < absb; i29++) {
          for (i30 = 0; i30 < cdiff; i30++) {
            c_chessboard->data[i30 + c_chessboard->size[0] * i29] =
              chessboard->data[i30 + cdiff * i29];
          }
        }

        for (i29 = 0; i29 < ndbl; i29++) {
          for (i30 = 0; i30 < cdiff; i30++) {
            c_chessboard->data[i30 + c_chessboard->size[0] * (i29 + absb)] =
              b_unused->data[i30 + cdiff * i29];
          }
        }

        emxFree_real_T(&b_unused);
        i29 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = c_chessboard->size[0];
        chessboard->size[1] = c_chessboard->size[1];
        emxEnsureCapacity((emxArray__common *)chessboard, i29, (int)sizeof
                          (double));
        apnd = c_chessboard->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          absb = c_chessboard->size[0];
          for (i30 = 0; i30 < absb; i30++) {
            chessboard->data[i30 + chessboard->size[0] * i29] =
              c_chessboard->data[i30 + c_chessboard->size[0] * i29];
          }
        }

        emxFree_real_T(&c_chessboard);
      }

      emxFree_boolean_T(&b_idx);
      break;

     case 2:
      emxInit_real_T(&b_corners_p, 2);
      apnd = chessboard->size[1];
      cdiff = chessboard->size[0];
      absb = corners_p->size[1];
      i29 = b_corners_p->size[0] * b_corners_p->size[1];
      b_corners_p->size[0] = apnd;
      b_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)b_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          b_corners_p->data[i30 + b_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[(cdiff + chessboard->size[0] * i30) - 3] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&c_corners_p, 2);
      apnd = chessboard->size[1];
      cdiff = chessboard->size[0];
      absb = corners_p->size[1];
      i29 = c_corners_p->size[0] * c_corners_p->size[1];
      c_corners_p->size[0] = apnd;
      c_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)c_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          c_corners_p->data[i30 + c_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[(cdiff + chessboard->size[0] * i30) - 2] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&d_corners_p, 2);
      apnd = chessboard->size[1];
      cdiff = chessboard->size[0];
      absb = corners_p->size[1];
      i29 = d_corners_p->size[0] * d_corners_p->size[1];
      d_corners_p->size[0] = apnd;
      d_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)d_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          d_corners_p->data[i30 + d_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[(cdiff + chessboard->size[0] * i30) - 1] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_boolean_T1(&b_idx, 2);
      predictCorners(b_corners_p, c_corners_p, d_corners_p, pred);
      assignClosestCorners(cand, pred, idx);
      i29 = b_idx->size[0] * b_idx->size[1];
      b_idx->size[0] = 1;
      b_idx->size[1] = idx->size[1];
      emxEnsureCapacity((emxArray__common *)b_idx, i29, (int)sizeof(boolean_T));
      apnd = idx->size[0] * idx->size[1];
      emxFree_real_T(&d_corners_p);
      emxFree_real_T(&c_corners_p);
      emxFree_real_T(&b_corners_p);
      for (i29 = 0; i29 < apnd; i29++) {
        b_idx->data[i29] = (idx->data[i29] != 0.0);
      }

      if (all(b_idx)) {
        if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0))) {
          cdiff = chessboard->size[1];
        } else if (!(idx->size[1] == 0)) {
          cdiff = idx->size[1];
        } else {
          cdiff = chessboard->size[1];
          if (cdiff >= 0) {
          } else {
            cdiff = 0;
          }

          if (idx->size[1] > cdiff) {
            cdiff = idx->size[1];
          }
        }

        empty_non_axis_sizes = (cdiff == 0);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          absb = chessboard->size[0];
        } else {
          absb = 0;
        }

        if (empty_non_axis_sizes || (!(idx->size[1] == 0))) {
          ndbl = 1;
        } else {
          ndbl = 0;
        }

        emxInit_real_T(&b_unused, 2);
        i29 = b_unused->size[0] * b_unused->size[1];
        b_unused->size[0] = 1;
        b_unused->size[1] = idx->size[1];
        emxEnsureCapacity((emxArray__common *)b_unused, i29, (int)sizeof(double));
        apnd = idx->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          b_unused->data[b_unused->size[0] * i29] = unused->data[(int)idx->
            data[idx->size[0] * i29] - 1];
        }

        emxInit_real_T(&c_chessboard, 2);
        i29 = c_chessboard->size[0] * c_chessboard->size[1];
        c_chessboard->size[0] = absb + ndbl;
        c_chessboard->size[1] = cdiff;
        emxEnsureCapacity((emxArray__common *)c_chessboard, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < cdiff; i29++) {
          for (i30 = 0; i30 < absb; i30++) {
            c_chessboard->data[i30 + c_chessboard->size[0] * i29] =
              chessboard->data[i30 + absb * i29];
          }
        }

        for (i29 = 0; i29 < cdiff; i29++) {
          for (i30 = 0; i30 < ndbl; i30++) {
            c_chessboard->data[(i30 + absb) + c_chessboard->size[0] * i29] =
              b_unused->data[i30 + ndbl * i29];
          }
        }

        emxFree_real_T(&b_unused);
        i29 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = c_chessboard->size[0];
        chessboard->size[1] = c_chessboard->size[1];
        emxEnsureCapacity((emxArray__common *)chessboard, i29, (int)sizeof
                          (double));
        apnd = c_chessboard->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          absb = c_chessboard->size[0];
          for (i30 = 0; i30 < absb; i30++) {
            chessboard->data[i30 + chessboard->size[0] * i29] =
              c_chessboard->data[i30 + c_chessboard->size[0] * i29];
          }
        }

        emxFree_real_T(&c_chessboard);
      }

      emxFree_boolean_T(&b_idx);
      break;

     case 3:
      emxInit_real_T(&b_corners_p, 2);
      apnd = chessboard->size[0];
      absb = corners_p->size[1];
      i29 = b_corners_p->size[0] * b_corners_p->size[1];
      b_corners_p->size[0] = apnd;
      b_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)b_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          b_corners_p->data[i30 + b_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[i30 + (chessboard->size[0] << 1)] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&c_corners_p, 2);
      apnd = chessboard->size[0];
      absb = corners_p->size[1];
      i29 = c_corners_p->size[0] * c_corners_p->size[1];
      c_corners_p->size[0] = apnd;
      c_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)c_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          c_corners_p->data[i30 + c_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[i30 + chessboard->size[0]] + corners_p->
              size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&d_corners_p, 2);
      apnd = chessboard->size[0];
      absb = corners_p->size[1];
      i29 = d_corners_p->size[0] * d_corners_p->size[1];
      d_corners_p->size[0] = apnd;
      d_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)d_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          d_corners_p->data[i30 + d_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[i30] + corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_boolean_T1(&b_idx, 2);
      predictCorners(b_corners_p, c_corners_p, d_corners_p, pred);
      assignClosestCorners(cand, pred, idx);
      i29 = b_idx->size[0] * b_idx->size[1];
      b_idx->size[0] = 1;
      b_idx->size[1] = idx->size[1];
      emxEnsureCapacity((emxArray__common *)b_idx, i29, (int)sizeof(boolean_T));
      apnd = idx->size[0] * idx->size[1];
      emxFree_real_T(&d_corners_p);
      emxFree_real_T(&c_corners_p);
      emxFree_real_T(&b_corners_p);
      for (i29 = 0; i29 < apnd; i29++) {
        b_idx->data[i29] = (idx->data[i29] != 0.0);
      }

      if (all(b_idx)) {
        emxInit_int32_T(&c_idx, 1);
        i29 = c_idx->size[0];
        c_idx->size[0] = idx->size[1];
        emxEnsureCapacity((emxArray__common *)c_idx, i29, (int)sizeof(int));
        apnd = idx->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          c_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
        }

        emxInit_int32_T(&d_idx, 1);
        emxInit_int32_T(&e_idx, 1);
        emxInit_int32_T(&f_idx, 1);
        if (!(c_idx->size[0] == 0)) {
          i29 = f_idx->size[0];
          f_idx->size[0] = idx->size[1];
          emxEnsureCapacity((emxArray__common *)f_idx, i29, (int)sizeof(int));
          apnd = idx->size[1];
          for (i29 = 0; i29 < apnd; i29++) {
            f_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
          }

          absb = f_idx->size[0];
        } else if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0)))
        {
          absb = chessboard->size[0];
        } else {
          i29 = d_idx->size[0];
          d_idx->size[0] = idx->size[1];
          emxEnsureCapacity((emxArray__common *)d_idx, i29, (int)sizeof(int));
          apnd = idx->size[1];
          for (i29 = 0; i29 < apnd; i29++) {
            d_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
          }

          if (d_idx->size[0] > 0) {
            i29 = e_idx->size[0];
            e_idx->size[0] = idx->size[1];
            emxEnsureCapacity((emxArray__common *)e_idx, i29, (int)sizeof(int));
            apnd = idx->size[1];
            for (i29 = 0; i29 < apnd; i29++) {
              e_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
            }

            absb = e_idx->size[0];
          } else {
            absb = 0;
          }

          if (chessboard->size[0] > absb) {
            absb = chessboard->size[0];
          }
        }

        emxFree_int32_T(&f_idx);
        emxFree_int32_T(&e_idx);
        emxFree_int32_T(&d_idx);
        emxFree_int32_T(&c_idx);
        empty_non_axis_sizes = (absb == 0);
        emxInit_int32_T(&g_idx, 1);
        guard1 = false;
        if (empty_non_axis_sizes) {
          guard1 = true;
        } else {
          i29 = g_idx->size[0];
          g_idx->size[0] = idx->size[1];
          emxEnsureCapacity((emxArray__common *)g_idx, i29, (int)sizeof(int));
          apnd = idx->size[1];
          for (i29 = 0; i29 < apnd; i29++) {
            g_idx->data[i29] = (int)idx->data[idx->size[0] * i29];
          }

          if (!(g_idx->size[0] == 0)) {
            guard1 = true;
          } else {
            ndbl = 0;
          }
        }

        if (guard1) {
          ndbl = 1;
        }

        emxFree_int32_T(&g_idx);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          cdiff = chessboard->size[1];
        } else {
          cdiff = 0;
        }

        emxInit_real_T1(&b_unused, 1);
        i29 = b_unused->size[0];
        b_unused->size[0] = idx->size[1];
        emxEnsureCapacity((emxArray__common *)b_unused, i29, (int)sizeof(double));
        apnd = idx->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          b_unused->data[i29] = unused->data[(int)idx->data[idx->size[0] * i29]
            - 1];
        }

        emxInit_real_T(&c_chessboard, 2);
        i29 = c_chessboard->size[0] * c_chessboard->size[1];
        c_chessboard->size[0] = absb;
        c_chessboard->size[1] = ndbl + cdiff;
        emxEnsureCapacity((emxArray__common *)c_chessboard, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < ndbl; i29++) {
          for (i30 = 0; i30 < absb; i30++) {
            c_chessboard->data[i30 + c_chessboard->size[0] * i29] =
              b_unused->data[i30 + absb * i29];
          }
        }

        emxFree_real_T(&b_unused);
        for (i29 = 0; i29 < cdiff; i29++) {
          for (i30 = 0; i30 < absb; i30++) {
            c_chessboard->data[i30 + c_chessboard->size[0] * (i29 + ndbl)] =
              chessboard->data[i30 + absb * i29];
          }
        }

        i29 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = c_chessboard->size[0];
        chessboard->size[1] = c_chessboard->size[1];
        emxEnsureCapacity((emxArray__common *)chessboard, i29, (int)sizeof
                          (double));
        apnd = c_chessboard->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          absb = c_chessboard->size[0];
          for (i30 = 0; i30 < absb; i30++) {
            chessboard->data[i30 + chessboard->size[0] * i29] =
              c_chessboard->data[i30 + c_chessboard->size[0] * i29];
          }
        }

        emxFree_real_T(&c_chessboard);
      }

      emxFree_boolean_T(&b_idx);
      break;

     case 4:
      emxInit_real_T(&b_corners_p, 2);
      apnd = chessboard->size[1];
      absb = corners_p->size[1];
      i29 = b_corners_p->size[0] * b_corners_p->size[1];
      b_corners_p->size[0] = apnd;
      b_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)b_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          b_corners_p->data[i30 + b_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[2 + chessboard->size[0] * i30] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&c_corners_p, 2);
      apnd = chessboard->size[1];
      absb = corners_p->size[1];
      i29 = c_corners_p->size[0] * c_corners_p->size[1];
      c_corners_p->size[0] = apnd;
      c_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)c_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          c_corners_p->data[i30 + c_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[1 + chessboard->size[0] * i30] +
              corners_p->size[0] * i29) - 1];
        }
      }

      emxInit_real_T(&d_corners_p, 2);
      apnd = chessboard->size[1];
      absb = corners_p->size[1];
      i29 = d_corners_p->size[0] * d_corners_p->size[1];
      d_corners_p->size[0] = apnd;
      d_corners_p->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)d_corners_p, i29, (int)sizeof(double));
      for (i29 = 0; i29 < absb; i29++) {
        for (i30 = 0; i30 < apnd; i30++) {
          d_corners_p->data[i30 + d_corners_p->size[0] * i29] = corners_p->data
            [((int)chessboard->data[chessboard->size[0] * i30] + corners_p->
              size[0] * i29) - 1];
        }
      }

      emxInit_boolean_T1(&b_idx, 2);
      predictCorners(b_corners_p, c_corners_p, d_corners_p, pred);
      assignClosestCorners(cand, pred, idx);
      i29 = b_idx->size[0] * b_idx->size[1];
      b_idx->size[0] = 1;
      b_idx->size[1] = idx->size[1];
      emxEnsureCapacity((emxArray__common *)b_idx, i29, (int)sizeof(boolean_T));
      apnd = idx->size[0] * idx->size[1];
      emxFree_real_T(&d_corners_p);
      emxFree_real_T(&c_corners_p);
      emxFree_real_T(&b_corners_p);
      for (i29 = 0; i29 < apnd; i29++) {
        b_idx->data[i29] = (idx->data[i29] != 0.0);
      }

      if (all(b_idx)) {
        if (!(idx->size[1] == 0)) {
          cdiff = idx->size[1];
        } else if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0)))
        {
          cdiff = chessboard->size[1];
        } else {
          cdiff = idx->size[1];
          if (cdiff >= 0) {
          } else {
            cdiff = 0;
          }

          if (chessboard->size[1] > cdiff) {
            cdiff = chessboard->size[1];
          }
        }

        empty_non_axis_sizes = (cdiff == 0);
        if (empty_non_axis_sizes || (!(idx->size[1] == 0))) {
          absb = 1;
        } else {
          absb = 0;
        }

        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          ndbl = chessboard->size[0];
        } else {
          ndbl = 0;
        }

        emxInit_real_T(&b_unused, 2);
        i29 = b_unused->size[0] * b_unused->size[1];
        b_unused->size[0] = 1;
        b_unused->size[1] = idx->size[1];
        emxEnsureCapacity((emxArray__common *)b_unused, i29, (int)sizeof(double));
        apnd = idx->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          b_unused->data[b_unused->size[0] * i29] = unused->data[(int)idx->
            data[idx->size[0] * i29] - 1];
        }

        emxInit_real_T(&c_chessboard, 2);
        i29 = c_chessboard->size[0] * c_chessboard->size[1];
        c_chessboard->size[0] = absb + ndbl;
        c_chessboard->size[1] = cdiff;
        emxEnsureCapacity((emxArray__common *)c_chessboard, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < cdiff; i29++) {
          for (i30 = 0; i30 < absb; i30++) {
            c_chessboard->data[i30 + c_chessboard->size[0] * i29] =
              b_unused->data[i30 + absb * i29];
          }
        }

        emxFree_real_T(&b_unused);
        for (i29 = 0; i29 < cdiff; i29++) {
          for (i30 = 0; i30 < ndbl; i30++) {
            c_chessboard->data[(i30 + absb) + c_chessboard->size[0] * i29] =
              chessboard->data[i30 + ndbl * i29];
          }
        }

        i29 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = c_chessboard->size[0];
        chessboard->size[1] = c_chessboard->size[1];
        emxEnsureCapacity((emxArray__common *)chessboard, i29, (int)sizeof
                          (double));
        apnd = c_chessboard->size[1];
        for (i29 = 0; i29 < apnd; i29++) {
          absb = c_chessboard->size[0];
          for (i30 = 0; i30 < absb; i30++) {
            chessboard->data[i30 + chessboard->size[0] * i29] =
              c_chessboard->data[i30 + c_chessboard->size[0] * i29];
          }
        }

        emxFree_real_T(&c_chessboard);
      }

      emxFree_boolean_T(&b_idx);
      break;
    }

    emxFree_real_T(&idx);
    emxFree_real_T(&pred);
    emxFree_real_T(&cand);
    emxFree_real_T(&unused);
  }
}

//
// return if not enough corners
// Arguments    : const emxArray_real_T *corners_p
//                const emxArray_real_T *corners_v1
//                const emxArray_real_T *corners_v2
//                double idx
//                emxArray_real_T *chessboard
// Return Type  : void
//
static void initChessboard(const emxArray_real_T *corners_p, const
  emxArray_real_T *corners_v1, const emxArray_real_T *corners_v2, double idx,
  emxArray_real_T *chessboard)
{
  int k;
  emxArray_real_T *v1;
  int ix;
  emxArray_real_T *v2;
  emxArray_real_T *b_chessboard;
  emxArray_real_T *b_v1;
  double dist1[2];
  emxArray_real_T *c_chessboard;
  emxArray_real_T *d_chessboard;
  emxArray_real_T *b_v2;
  double dist2[6];
  emxArray_real_T *e_chessboard;
  emxArray_real_T *c_v2;
  emxArray_real_T *f_chessboard;
  emxArray_real_T *g_chessboard;
  emxArray_real_T *d_v2;
  emxArray_real_T *h_chessboard;
  emxArray_real_T *i_chessboard;
  boolean_T x[2];
  boolean_T y;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T b_x[6];
  boolean_T exitg1;
  double xbar;
  double r;
  double b_y;
  if (corners_p->size[0] < 9) {
    k = chessboard->size[0] * chessboard->size[1];
    chessboard->size[0] = 0;
    chessboard->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)chessboard, k, (int)sizeof(double));
  } else {
    //  init chessboard hypothesis
    k = chessboard->size[0] * chessboard->size[1];
    chessboard->size[0] = 3;
    chessboard->size[1] = 3;
    emxEnsureCapacity((emxArray__common *)chessboard, k, (int)sizeof(double));
    for (k = 0; k < 9; k++) {
      chessboard->data[k] = 0.0;
    }

    emxInit_real_T(&v1, 2);

    //  extract feature index and orientation (central element)
    ix = corners_v1->size[1];
    k = v1->size[0] * v1->size[1];
    v1->size[0] = 1;
    v1->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)v1, k, (int)sizeof(double));
    for (k = 0; k < ix; k++) {
      v1->data[v1->size[0] * k] = corners_v1->data[((int)idx + corners_v1->size
        [0] * k) - 1];
    }

    emxInit_real_T(&v2, 2);
    ix = corners_v2->size[1];
    k = v2->size[0] * v2->size[1];
    v2->size[0] = 1;
    v2->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)v2, k, (int)sizeof(double));
    for (k = 0; k < ix; k++) {
      v2->data[v2->size[0] * k] = corners_v2->data[((int)idx + corners_v2->size
        [0] * k) - 1];
    }

    emxInit_real_T(&b_chessboard, 2);
    chessboard->data[1 + chessboard->size[0]] = idx;

    //  find left/right/top/bottom neighbors
    k = b_chessboard->size[0] * b_chessboard->size[1];
    b_chessboard->size[0] = chessboard->size[0];
    b_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)b_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    for (k = 0; k < ix; k++) {
      b_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&b_v1, 2);
    directionalNeighbor(idx, v1, b_chessboard, corners_p, &chessboard->data[1 +
                        (chessboard->size[0] << 1)], &dist1[0]);
    k = b_v1->size[0] * b_v1->size[1];
    b_v1->size[0] = 1;
    b_v1->size[1] = v1->size[1];
    emxEnsureCapacity((emxArray__common *)b_v1, k, (int)sizeof(double));
    ix = v1->size[0] * v1->size[1];
    emxFree_real_T(&b_chessboard);
    for (k = 0; k < ix; k++) {
      b_v1->data[k] = -v1->data[k];
    }

    emxFree_real_T(&v1);
    emxInit_real_T(&c_chessboard, 2);
    k = c_chessboard->size[0] * c_chessboard->size[1];
    c_chessboard->size[0] = chessboard->size[0];
    c_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)c_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    for (k = 0; k < ix; k++) {
      c_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&d_chessboard, 2);
    directionalNeighbor(idx, b_v1, c_chessboard, corners_p, &chessboard->data[1],
                        &dist1[1]);
    k = d_chessboard->size[0] * d_chessboard->size[1];
    d_chessboard->size[0] = chessboard->size[0];
    d_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)d_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    emxFree_real_T(&c_chessboard);
    emxFree_real_T(&b_v1);
    for (k = 0; k < ix; k++) {
      d_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&b_v2, 2);
    directionalNeighbor(idx, v2, d_chessboard, corners_p, &chessboard->data[2 +
                        chessboard->size[0]], &dist2[0]);
    k = b_v2->size[0] * b_v2->size[1];
    b_v2->size[0] = 1;
    b_v2->size[1] = v2->size[1];
    emxEnsureCapacity((emxArray__common *)b_v2, k, (int)sizeof(double));
    ix = v2->size[0] * v2->size[1];
    emxFree_real_T(&d_chessboard);
    for (k = 0; k < ix; k++) {
      b_v2->data[k] = -v2->data[k];
    }

    emxInit_real_T(&e_chessboard, 2);
    k = e_chessboard->size[0] * e_chessboard->size[1];
    e_chessboard->size[0] = chessboard->size[0];
    e_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)e_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    for (k = 0; k < ix; k++) {
      e_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&c_v2, 2);
    directionalNeighbor(idx, b_v2, e_chessboard, corners_p, &chessboard->
                        data[chessboard->size[0]], &dist2[1]);

    //  find top-left/top-right/bottom-left/bottom-right neighbors
    k = c_v2->size[0] * c_v2->size[1];
    c_v2->size[0] = 1;
    c_v2->size[1] = v2->size[1];
    emxEnsureCapacity((emxArray__common *)c_v2, k, (int)sizeof(double));
    ix = v2->size[0] * v2->size[1];
    emxFree_real_T(&e_chessboard);
    emxFree_real_T(&b_v2);
    for (k = 0; k < ix; k++) {
      c_v2->data[k] = -v2->data[k];
    }

    emxInit_real_T(&f_chessboard, 2);
    k = f_chessboard->size[0] * f_chessboard->size[1];
    f_chessboard->size[0] = chessboard->size[0];
    f_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)f_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    for (k = 0; k < ix; k++) {
      f_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&g_chessboard, 2);
    directionalNeighbor(chessboard->data[1], c_v2, f_chessboard, corners_p,
                        &chessboard->data[0], &dist2[2]);
    k = g_chessboard->size[0] * g_chessboard->size[1];
    g_chessboard->size[0] = chessboard->size[0];
    g_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)g_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    emxFree_real_T(&f_chessboard);
    emxFree_real_T(&c_v2);
    for (k = 0; k < ix; k++) {
      g_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&d_v2, 2);
    directionalNeighbor(chessboard->data[1], v2, g_chessboard, corners_p,
                        &chessboard->data[2], &dist2[3]);
    k = d_v2->size[0] * d_v2->size[1];
    d_v2->size[0] = 1;
    d_v2->size[1] = v2->size[1];
    emxEnsureCapacity((emxArray__common *)d_v2, k, (int)sizeof(double));
    ix = v2->size[0] * v2->size[1];
    emxFree_real_T(&g_chessboard);
    for (k = 0; k < ix; k++) {
      d_v2->data[k] = -v2->data[k];
    }

    emxInit_real_T(&h_chessboard, 2);
    k = h_chessboard->size[0] * h_chessboard->size[1];
    h_chessboard->size[0] = chessboard->size[0];
    h_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)h_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    for (k = 0; k < ix; k++) {
      h_chessboard->data[k] = chessboard->data[k];
    }

    emxInit_real_T(&i_chessboard, 2);
    directionalNeighbor(chessboard->data[1 + (chessboard->size[0] << 1)], d_v2,
                        h_chessboard, corners_p, &chessboard->data
                        [chessboard->size[0] << 1], &dist2[4]);
    k = i_chessboard->size[0] * i_chessboard->size[1];
    i_chessboard->size[0] = chessboard->size[0];
    i_chessboard->size[1] = chessboard->size[1];
    emxEnsureCapacity((emxArray__common *)i_chessboard, k, (int)sizeof(double));
    ix = chessboard->size[0] * chessboard->size[1];
    emxFree_real_T(&h_chessboard);
    emxFree_real_T(&d_v2);
    for (k = 0; k < ix; k++) {
      i_chessboard->data[k] = chessboard->data[k];
    }

    directionalNeighbor(chessboard->data[1 + (chessboard->size[0] << 1)], v2,
                        i_chessboard, corners_p, &chessboard->data[2 +
                        (chessboard->size[0] << 1)], &dist2[5]);

    //  initialization must be homogenously distributed
    emxFree_real_T(&i_chessboard);
    emxFree_real_T(&v2);
    for (k = 0; k < 2; k++) {
      x[k] = rtIsInf(dist1[k]);
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
    if (y) {
      guard1 = true;
    } else {
      for (k = 0; k < 6; k++) {
        b_x[k] = rtIsInf(dist2[k]);
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

      if (y) {
        guard1 = true;
      } else {
        xbar = (dist1[0] + dist1[1]) / 2.0;
        r = dist1[0] - xbar;
        xbar = dist1[1] - xbar;
        if (sqrt(r * r + xbar * xbar) / ((dist1[0] + dist1[1]) / 2.0) > 0.3) {
          guard1 = true;
        } else {
          ix = 0;
          xbar = dist2[0];
          for (k = 0; k < 5; k++) {
            ix++;
            xbar += dist2[ix];
          }

          xbar /= 6.0;
          ix = 0;
          r = dist2[0] - xbar;
          b_y = r * r;
          for (k = 0; k < 5; k++) {
            ix++;
            r = dist2[ix] - xbar;
            b_y += r * r;
          }

          b_y /= 5.0;
          xbar = dist2[0];
          for (k = 0; k < 5; k++) {
            xbar += dist2[k + 1];
          }

          if (sqrt(b_y) / (xbar / 6.0) > 0.3) {
            guard1 = true;
          }
        }
      }
    }

    if (guard1) {
      k = chessboard->size[0] * chessboard->size[1];
      chessboard->size[0] = 0;
      chessboard->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)chessboard, k, (int)sizeof(double));
    }
  }
}

//
// Arguments    : const emxArray_real_T *x
// Return Type  : double
//
static double mean(const emxArray_real_T *x)
{
  double y;
  int k;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  y /= (double)x->size[0];
  return y;
}

//
// Arguments    : emxArray_int32_T *idx
//                emxArray_real_T *x
//                int offset
//                int np
//                int nq
//                emxArray_int32_T *iwork
//                emxArray_real_T *xwork
// Return Type  : void
//
static void merge(emxArray_int32_T *idx, emxArray_real_T *x, int offset, int np,
                  int nq, emxArray_int32_T *iwork, emxArray_real_T *xwork)
{
  int n;
  int qend;
  int p;
  int iout;
  int exitg1;
  if ((np == 0) || (nq == 0)) {
  } else {
    n = np + nq;
    for (qend = 0; qend + 1 <= n; qend++) {
      iwork->data[qend] = idx->data[offset + qend];
      xwork->data[qend] = x->data[offset + qend];
    }

    p = 0;
    n = np;
    qend = np + nq;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork->data[p] >= xwork->data[n]) {
        idx->data[iout] = iwork->data[p];
        x->data[iout] = xwork->data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx->data[iout] = iwork->data[n];
        x->data[iout] = xwork->data[n];
        if (n + 1 < qend) {
          n++;
        } else {
          n = iout - p;
          while (p + 1 <= np) {
            idx->data[(n + p) + 1] = iwork->data[p];
            x->data[(n + p) + 1] = xwork->data[p];
            p++;
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

//
// Arguments    : emxArray_int32_T *idx
//                emxArray_real_T *x
//                int offset
//                int n
//                int preSortLevel
//                emxArray_int32_T *iwork
//                emxArray_real_T *xwork
// Return Type  : void
//
static void merge_block(emxArray_int32_T *idx, emxArray_real_T *x, int offset,
  int n, int preSortLevel, emxArray_int32_T *iwork, emxArray_real_T *xwork)
{
  int nPairs;
  int bLen;
  int tailOffset;
  int nTail;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        merge(idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }

    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 1; nTail <= nPairs; nTail++) {
      merge(idx, x, offset + (nTail - 1) * tailOffset, bLen, bLen, iwork, xwork);
    }

    bLen = tailOffset;
  }

  if (n > bLen) {
    merge(idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

//
// extract parameters
// Arguments    : const double img[921600]
//                double tau
//                emxArray_real_T *maxima
// Return Type  : void
//
static void nonMaximumSuppression(const double img[921600], double tau,
  emxArray_real_T *maxima)
{
  int i3;
  emxArray_real_T *b_maxima;
  int i;
  int b_i;
  int j;
  int b_j;
  int maxi;
  int maxj;
  double maxval;
  int i2;
  int failed;
  int b_i2;
  int j2;
  boolean_T exitg1;
  int b_j2;
  int result;
  boolean_T exitg2;
  int i4;
  int loop_ub;

  //  init maxima list
  i3 = maxima->size[0] * maxima->size[1];
  maxima->size[0] = 0;
  maxima->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)maxima, i3, (int)sizeof(double));

  //  non maximum suppression
  emxInit_real_T(&b_maxima, 2);
  for (i = 0; i < 316; i++) {
    b_i = 8 + (i << 2);
    for (j = 0; j < 176; j++) {
      b_j = 8 + (j << 2);
      maxi = b_i + 1;
      maxj = b_j + 1;
      maxval = img[b_j + 720 * b_i];
      for (i2 = 0; i2 < 4; i2++) {
        b_i2 = b_i + i2;
        for (j2 = 0; j2 < 4; j2++) {
          b_j2 = b_j + j2;
          if (img[b_j2 + 720 * b_i2] > maxval) {
            maxi = b_i2 + 1;
            maxj = b_j2 + 1;
            maxval = img[b_j2 + 720 * b_i2];
          }
        }
      }

      failed = 0;
      i2 = 0;
      exitg1 = false;
      while ((!exitg1) && (i2 <= 6)) {
        b_i2 = (maxi + i2) - 3;
        j2 = 0;
        exitg2 = false;
        while ((!exitg2) && (j2 <= 6)) {
          b_j2 = (maxj + j2) - 3;
          if ((img[(b_j2 + 720 * (b_i2 - 1)) - 1] > maxval) && ((b_i2 < b_i + 1)
               || (b_i2 > b_i + 4) || (b_j2 < b_j + 1) || (b_j2 > b_j + 4))) {
            failed = 1;
            exitg2 = true;
          } else {
            j2++;
          }
        }

        if (failed != 0) {
          exitg1 = true;
        } else {
          i2++;
        }
      }

      if ((maxval >= tau) && (!(failed != 0))) {
        if (!((maxima->size[0] == 0) || (maxima->size[1] == 0))) {
          result = maxima->size[0];
        } else {
          result = 0;
        }

        i3 = b_maxima->size[0] * b_maxima->size[1];
        b_maxima->size[0] = result + 1;
        b_maxima->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)b_maxima, i3, (int)sizeof(double));
        for (i3 = 0; i3 < 2; i3++) {
          for (i4 = 0; i4 < result; i4++) {
            b_maxima->data[i4 + b_maxima->size[0] * i3] = maxima->data[i4 +
              result * i3];
          }
        }

        b_maxima->data[result] = maxi;
        b_maxima->data[result + b_maxima->size[0]] = maxj;
        i3 = maxima->size[0] * maxima->size[1];
        maxima->size[0] = b_maxima->size[0];
        maxima->size[1] = b_maxima->size[1];
        emxEnsureCapacity((emxArray__common *)maxima, i3, (int)sizeof(double));
        result = b_maxima->size[1];
        for (i3 = 0; i3 < result; i3++) {
          loop_ub = b_maxima->size[0];
          for (i4 = 0; i4 < loop_ub; i4++) {
            maxima->data[i4 + maxima->size[0] * i3] = b_maxima->data[i4 +
              b_maxima->size[0] * i3];
          }
        }
      }
    }
  }

  emxFree_real_T(&b_maxima);
}

//
// Arguments    : const double x[2]
// Return Type  : double
//
static double norm(const double x[2])
{
  double y;
  double scale;
  int k;
  double absxk;
  double t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 2; k++) {
    absxk = fabs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

//
// Arguments    : emxArray_real_T *x
//                const emxArray_boolean_T *idx
// Return Type  : void
//
static void nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx)
{
  int nrowx;
  int ncolx;
  int nrows;
  int k;
  int i;
  int j;
  emxArray_real_T *b_x;
  nrowx = x->size[0];
  ncolx = x->size[1];
  nrows = 0;
  for (k = 1; k <= idx->size[0]; k++) {
    nrows += idx->data[k - 1];
  }

  nrows = x->size[0] - nrows;
  i = 0;
  for (k = 1; k <= nrowx; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      for (j = 0; j + 1 <= ncolx; j++) {
        x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
      }

      i++;
    }
  }

  if (1 > nrows) {
    i = 0;
  } else {
    i = nrows;
  }

  emxInit_real_T(&b_x, 2);
  nrows = x->size[1];
  j = b_x->size[0] * b_x->size[1];
  b_x->size[0] = i;
  b_x->size[1] = nrows;
  emxEnsureCapacity((emxArray__common *)b_x, j, (int)sizeof(double));
  for (j = 0; j < nrows; j++) {
    for (nrowx = 0; nrowx < i; nrowx++) {
      b_x->data[nrowx + b_x->size[0] * j] = x->data[nrowx + x->size[0] * j];
    }
  }

  j = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, j, (int)sizeof(double));
  i = b_x->size[1];
  for (j = 0; j < i; j++) {
    nrows = b_x->size[0];
    for (nrowx = 0; nrowx < nrows; nrowx++) {
      x->data[nrowx + x->size[0] * j] = b_x->data[nrowx + b_x->size[0] * j];
    }
  }

  emxFree_real_T(&b_x);
}

//
// Arguments    : const double a[921600]
//                double y[921600]
// Return Type  : void
//
static void power(const double a[921600], double y[921600])
{
  int k;
  for (k = 0; k < 921600; k++) {
    y[k] = a[k] * a[k];
  }
}

//
// compute vectors
// Arguments    : const emxArray_real_T *p1
//                const emxArray_real_T *p2
//                const emxArray_real_T *p3
//                emxArray_real_T *pred
// Return Type  : void
//
static void predictCorners(const emxArray_real_T *p1, const emxArray_real_T *p2,
  const emxArray_real_T *p3, emxArray_real_T *pred)
{
  emxArray_real_T *v1;
  int k;
  int loop_ub;
  emxArray_real_T *v2;
  emxArray_real_T *b_v1;
  emxArray_real_T *c_v1;
  emxArray_real_T *a1;
  emxArray_real_T *b_v2;
  emxArray_real_T *c_v2;
  emxArray_real_T *a3;
  emxArray_real_T *d_v1;
  emxArray_real_T *s1;
  emxArray_real_T *e_v1;
  emxArray_real_T *d_v2;
  emxArray_real_T *b;
  emxArray_real_T *e_v2;
  emxArray_real_T *x;
  emxArray_real_T *r7;
  emxArray_real_T *r8;
  emxArray_real_T *b_a1;
  int i12;
  int b_loop_ub;
  emxInit_real_T(&v1, 2);
  k = v1->size[0] * v1->size[1];
  v1->size[0] = p2->size[0];
  v1->size[1] = p2->size[1];
  emxEnsureCapacity((emxArray__common *)v1, k, (int)sizeof(double));
  loop_ub = p2->size[0] * p2->size[1];
  for (k = 0; k < loop_ub; k++) {
    v1->data[k] = p2->data[k] - p1->data[k];
  }

  emxInit_real_T(&v2, 2);
  k = v2->size[0] * v2->size[1];
  v2->size[0] = p3->size[0];
  v2->size[1] = p3->size[1];
  emxEnsureCapacity((emxArray__common *)v2, k, (int)sizeof(double));
  loop_ub = p3->size[0] * p3->size[1];
  for (k = 0; k < loop_ub; k++) {
    v2->data[k] = p3->data[k] - p2->data[k];
  }

  emxInit_real_T1(&b_v1, 1);

  //  predict angles
  loop_ub = v1->size[0];
  k = b_v1->size[0];
  b_v1->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_v1, k, (int)sizeof(double));
  for (k = 0; k < loop_ub; k++) {
    b_v1->data[k] = v1->data[k + v1->size[0]];
  }

  emxInit_real_T1(&c_v1, 1);
  loop_ub = v1->size[0];
  k = c_v1->size[0];
  c_v1->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_v1, k, (int)sizeof(double));
  for (k = 0; k < loop_ub; k++) {
    c_v1->data[k] = v1->data[k];
  }

  emxInit_real_T1(&a1, 1);
  emxInit_real_T1(&b_v2, 1);
  c_atan2(b_v1, c_v1, a1);
  loop_ub = v2->size[0];
  k = b_v2->size[0];
  b_v2->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_v2, k, (int)sizeof(double));
  emxFree_real_T(&c_v1);
  emxFree_real_T(&b_v1);
  for (k = 0; k < loop_ub; k++) {
    b_v2->data[k] = v2->data[k + v2->size[0]];
  }

  emxInit_real_T1(&c_v2, 1);
  loop_ub = v2->size[0];
  k = c_v2->size[0];
  c_v2->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_v2, k, (int)sizeof(double));
  for (k = 0; k < loop_ub; k++) {
    c_v2->data[k] = v2->data[k];
  }

  emxInit_real_T1(&a3, 1);
  c_atan2(b_v2, c_v2, a3);
  k = a3->size[0];
  emxEnsureCapacity((emxArray__common *)a3, k, (int)sizeof(double));
  loop_ub = a3->size[0];
  emxFree_real_T(&c_v2);
  emxFree_real_T(&b_v2);
  for (k = 0; k < loop_ub; k++) {
    a3->data[k] = 2.0 * a3->data[k] - a1->data[k];
  }

  emxInit_real_T1(&d_v1, 1);

  //  predict scales
  loop_ub = v1->size[0];
  k = d_v1->size[0];
  d_v1->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)d_v1, k, (int)sizeof(double));
  for (k = 0; k < loop_ub; k++) {
    d_v1->data[k] = v1->data[k];
  }

  emxInit_real_T1(&s1, 1);
  emxInit_real_T1(&e_v1, 1);
  b_power(d_v1, s1);
  loop_ub = v1->size[0];
  k = e_v1->size[0];
  e_v1->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)e_v1, k, (int)sizeof(double));
  emxFree_real_T(&d_v1);
  for (k = 0; k < loop_ub; k++) {
    e_v1->data[k] = v1->data[k + v1->size[0]];
  }

  emxFree_real_T(&v1);
  b_power(e_v1, a1);
  k = s1->size[0];
  emxEnsureCapacity((emxArray__common *)s1, k, (int)sizeof(double));
  loop_ub = s1->size[0];
  emxFree_real_T(&e_v1);
  for (k = 0; k < loop_ub; k++) {
    s1->data[k] += a1->data[k];
  }

  emxInit_real_T1(&d_v2, 1);
  c_sqrt(s1);
  loop_ub = v2->size[0];
  k = d_v2->size[0];
  d_v2->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)d_v2, k, (int)sizeof(double));
  for (k = 0; k < loop_ub; k++) {
    d_v2->data[k] = v2->data[k];
  }

  emxInit_real_T1(&b, 1);
  emxInit_real_T1(&e_v2, 1);
  b_power(d_v2, b);
  loop_ub = v2->size[0];
  k = e_v2->size[0];
  e_v2->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)e_v2, k, (int)sizeof(double));
  emxFree_real_T(&d_v2);
  for (k = 0; k < loop_ub; k++) {
    e_v2->data[k] = v2->data[k + v2->size[0]];
  }

  emxFree_real_T(&v2);
  b_power(e_v2, a1);
  k = b->size[0];
  emxEnsureCapacity((emxArray__common *)b, k, (int)sizeof(double));
  loop_ub = b->size[0];
  emxFree_real_T(&e_v2);
  for (k = 0; k < loop_ub; k++) {
    b->data[k] += a1->data[k];
  }

  c_sqrt(b);

  //  predict p3 (the factor 0.75 ensures that under extreme
  //  distortions (omnicam) the closer prediction is selected)
  k = a1->size[0];
  a1->size[0] = a3->size[0];
  emxEnsureCapacity((emxArray__common *)a1, k, (int)sizeof(double));
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    a1->data[k] = a3->data[k];
  }

  for (k = 0; k + 1 <= a3->size[0]; k++) {
    a1->data[k] = cos(a1->data[k]);
  }

  emxInit_real_T1(&x, 1);
  k = x->size[0];
  x->size[0] = a3->size[0];
  emxEnsureCapacity((emxArray__common *)x, k, (int)sizeof(double));
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    x->data[k] = a3->data[k];
  }

  for (k = 0; k + 1 <= a3->size[0]; k++) {
    x->data[k] = sin(x->data[k]);
  }

  emxFree_real_T(&a3);
  emxInit_real_T1(&r7, 1);
  k = r7->size[0];
  r7->size[0] = b->size[0];
  emxEnsureCapacity((emxArray__common *)r7, k, (int)sizeof(double));
  loop_ub = b->size[0];
  for (k = 0; k < loop_ub; k++) {
    r7->data[k] = 0.75 * (2.0 * b->data[k] - s1->data[k]);
  }

  emxFree_real_T(&b);
  emxFree_real_T(&s1);
  emxInit_real_T(&r8, 2);
  emxInit_real_T(&b_a1, 2);
  k = r8->size[0] * r8->size[1];
  r8->size[0] = r7->size[0];
  r8->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)r8, k, (int)sizeof(double));
  loop_ub = r7->size[0];
  for (k = 0; k < loop_ub; k++) {
    for (i12 = 0; i12 < 2; i12++) {
      r8->data[k + r8->size[0] * i12] = r7->data[k];
    }
  }

  emxFree_real_T(&r7);
  k = b_a1->size[0] * b_a1->size[1];
  b_a1->size[0] = a1->size[0];
  b_a1->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b_a1, k, (int)sizeof(double));
  loop_ub = a1->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_a1->data[k] = a1->data[k];
  }

  emxFree_real_T(&a1);
  loop_ub = x->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_a1->data[k + b_a1->size[0]] = x->data[k];
  }

  emxFree_real_T(&x);
  k = pred->size[0] * pred->size[1];
  pred->size[0] = p3->size[0];
  pred->size[1] = p3->size[1];
  emxEnsureCapacity((emxArray__common *)pred, k, (int)sizeof(double));
  loop_ub = p3->size[1];
  for (k = 0; k < loop_ub; k++) {
    b_loop_ub = p3->size[0];
    for (i12 = 0; i12 < b_loop_ub; i12++) {
      pred->data[i12 + pred->size[0] * k] = p3->data[i12 + p3->size[0] * k] +
        r8->data[i12 + r8->size[0] * k] * b_a1->data[i12 + b_a1->size[0] * k];
    }
  }

  emxFree_real_T(&b_a1);
  emxFree_real_T(&r8);
}

//
// image dimensions
// Arguments    : const double img_angle[921600]
//                const double img_weight[921600]
//                b_struct_T *corners
//                double r
// Return Type  : void
//
static void refineCorners(const double img_angle[921600], const double
  img_weight[921600], b_struct_T *corners, double r)
{
  int i;
  emxArray_int32_T *r9;
  emxArray_real_T *b_img_angle;
  emxArray_real_T *b_img_weight;
  double varargin_1;
  double d0;
  int i15;
  int unnamed_idx_1;
  int i16;
  int i17;
  int i18;
  int i19;
  int i20;
  int i21;
  int i22;
  int loop_ub;
  int b_loop_ub;
  double v1[2];
  double v2[2];

  //  for all corners do
  i = 0;
  emxInit_int32_T(&r9, 1);
  emxInit_real_T(&b_img_angle, 2);
  emxInit_real_T(&b_img_weight, 2);
  while (i <= corners->p->size[0] - 1) {
    //  extract current corner location
    //  estimate edge orientations
    varargin_1 = corners->p->data[i + corners->p->size[0]] - r;
    if (varargin_1 >= 1.0) {
      d0 = varargin_1;
    } else {
      d0 = 1.0;
    }

    varargin_1 = corners->p->data[i + corners->p->size[0]] + r;
    if (varargin_1 <= 720.0) {
    } else {
      varargin_1 = 720.0;
    }

    if (d0 > varargin_1) {
      i15 = 0;
      unnamed_idx_1 = 0;
    } else {
      i15 = (int)d0 - 1;
      unnamed_idx_1 = (int)varargin_1;
    }

    varargin_1 = corners->p->data[i] - r;
    if (varargin_1 >= 1.0) {
      d0 = varargin_1;
    } else {
      d0 = 1.0;
    }

    varargin_1 = corners->p->data[i] + r;
    if (varargin_1 <= 720.0) {
    } else {
      varargin_1 = 720.0;
    }

    if (d0 > varargin_1) {
      i16 = 0;
      i17 = 0;
    } else {
      i16 = (int)d0 - 1;
      i17 = (int)varargin_1;
    }

    varargin_1 = corners->p->data[i + corners->p->size[0]] - r;
    if (varargin_1 >= 1.0) {
      d0 = varargin_1;
    } else {
      d0 = 1.0;
    }

    varargin_1 = corners->p->data[i + corners->p->size[0]] + r;
    if (varargin_1 <= 720.0) {
    } else {
      varargin_1 = 720.0;
    }

    if (d0 > varargin_1) {
      i18 = 0;
      i19 = 0;
    } else {
      i18 = (int)d0 - 1;
      i19 = (int)varargin_1;
    }

    varargin_1 = corners->p->data[i] - r;
    if (varargin_1 >= 1.0) {
      d0 = varargin_1;
    } else {
      d0 = 1.0;
    }

    varargin_1 = corners->p->data[i] + r;
    if (varargin_1 <= 720.0) {
    } else {
      varargin_1 = 720.0;
    }

    if (d0 > varargin_1) {
      i20 = 0;
      i21 = 0;
    } else {
      i20 = (int)d0 - 1;
      i21 = (int)varargin_1;
    }

    i22 = b_img_angle->size[0] * b_img_angle->size[1];
    b_img_angle->size[0] = unnamed_idx_1 - i15;
    b_img_angle->size[1] = i17 - i16;
    emxEnsureCapacity((emxArray__common *)b_img_angle, i22, (int)sizeof(double));
    loop_ub = i17 - i16;
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = unnamed_idx_1 - i15;
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        b_img_angle->data[i22 + b_img_angle->size[0] * i17] = img_angle[(i15 +
          i22) + 720 * (i16 + i17)];
      }
    }

    i15 = b_img_weight->size[0] * b_img_weight->size[1];
    b_img_weight->size[0] = i19 - i18;
    b_img_weight->size[1] = i21 - i20;
    emxEnsureCapacity((emxArray__common *)b_img_weight, i15, (int)sizeof(double));
    loop_ub = i21 - i20;
    for (i15 = 0; i15 < loop_ub; i15++) {
      b_loop_ub = i19 - i18;
      for (unnamed_idx_1 = 0; unnamed_idx_1 < b_loop_ub; unnamed_idx_1++) {
        b_img_weight->data[unnamed_idx_1 + b_img_weight->size[0] * i15] =
          img_weight[(i18 + unnamed_idx_1) + 720 * (i20 + i15)];
      }
    }

    edgeOrientations(b_img_angle, b_img_weight, v1, v2);
    loop_ub = corners->v1->size[1];
    i15 = r9->size[0];
    r9->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r9, i15, (int)sizeof(int));
    for (i15 = 0; i15 < loop_ub; i15++) {
      r9->data[i15] = i15;
    }

    unnamed_idx_1 = r9->size[0];
    for (i15 = 0; i15 < unnamed_idx_1; i15++) {
      corners->v1->data[i + corners->v1->size[0] * r9->data[i15]] = v1[i15];
    }

    loop_ub = corners->v2->size[1];
    i15 = r9->size[0];
    r9->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r9, i15, (int)sizeof(int));
    for (i15 = 0; i15 < loop_ub; i15++) {
      r9->data[i15] = i15;
    }

    unnamed_idx_1 = r9->size[0];
    for (i15 = 0; i15 < unnamed_idx_1; i15++) {
      corners->v2->data[i + corners->v2->size[0] * r9->data[i15]] = v2[i15];
    }

    //  continue, if invalid edge orientations
    i++;
  }

  emxFree_real_T(&b_img_weight);
  emxFree_real_T(&b_img_angle);
  emxFree_int32_T(&r9);
}

//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  int b_u0;
  int b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }

    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }

    y = atan2((double)b_u0, (double)b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

//
// Arguments    : double u
// Return Type  : double
//
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

//
// Arguments    : const double img[921600]
//                const double img_weight[921600]
//                struct_T *corners
//                const double radius[3]
// Return Type  : void
//
static void scoreCorners(const double img[921600], const double img_weight
  [921600], struct_T *corners, const double radius[3])
{
  int i;
  emxArray_real_T *img_sub;
  emxArray_real_T *img_weight_sub;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
  emxArray_real_T *img_filter;
  emxArray_real_T *vec_weight;
  emxArray_real_T *template_a1;
  emxArray_real_T *template_a2;
  emxArray_real_T *template_b1;
  emxArray_real_T *template_b2;
  emxArray_real_T *A;
  emxArray_real_T *b_template_b2;
  emxArray_real_T *b_template_b1;
  emxArray_real_T *b_template_a2;
  emxArray_real_T *b_template_a1;
  emxArray_real_T *b_vec_weight;
  emxArray_real_T *b_v1;
  emxArray_real_T *b_v2;
  double u;
  double v;
  double score[3];
  int j;
  int ixstart;
  double mtmp;
  double varargin_2;
  int ix;
  boolean_T exitg1;
  int i23;
  int i24;
  int i25;
  int i26;
  int i27;
  int i28;
  double c[2];
  int x;
  int y;
  int iv0[1];
  short iv1[2];
  emxArray_real_T b_img_weight_sub;
  double p1[2];
  int iv2[1];
  double b_y;
  int b_img_filter[1];
  double b_p1[2];
  boolean_T guard1 = false;
  int c_img_filter[1];
  double a1;
  double a2;
  double b1;
  double b2;
  double mu;
  double score_a;
  double score_b;
  double score_1;
  double score_2;
  double c_y;
  double b_mtmp;

  //  for all corners do
  i = 0;
  emxInit_real_T(&img_sub, 2);
  emxInit_real_T(&img_weight_sub, 2);
  emxInit_real_T(&v1, 2);
  emxInit_real_T(&v2, 2);
  emxInit_real_T(&img_filter, 2);
  emxInit_real_T1(&vec_weight, 1);
  emxInit_real_T(&template_a1, 2);
  emxInit_real_T(&template_a2, 2);
  emxInit_real_T(&template_b1, 2);
  emxInit_real_T(&template_b2, 2);
  emxInit_real_T1(&A, 1);
  emxInit_real_T1(&b_template_b2, 1);
  emxInit_real_T1(&b_template_b1, 1);
  emxInit_real_T1(&b_template_a2, 1);
  emxInit_real_T1(&b_template_a1, 1);
  emxInit_real_T1(&b_vec_weight, 1);
  emxInit_real_T1(&b_v1, 1);
  emxInit_real_T1(&b_v2, 1);
  while (i <= corners->p->size[0] - 1) {
    //  corner location
    u = rt_roundd_snf(corners->p->data[i]);
    v = rt_roundd_snf(corners->p->data[i + corners->p->size[0]]);

    //  compute corner statistics @ radius 1
    for (j = 0; j < 3; j++) {
      score[j] = 0.0;
      if ((u > radius[j]) && (u <= 1280.0 - radius[j]) && (v > radius[j]) && (v <=
           720.0 - radius[j])) {
        mtmp = v - radius[j];
        varargin_2 = v + radius[j];
        if (mtmp > varargin_2) {
          i23 = 0;
          i24 = 0;
        } else {
          i23 = (int)mtmp - 1;
          i24 = (int)varargin_2;
        }

        mtmp = u - radius[j];
        varargin_2 = u + radius[j];
        if (mtmp > varargin_2) {
          i25 = 0;
          i26 = 0;
        } else {
          i25 = (int)mtmp - 1;
          i26 = (int)varargin_2;
        }

        i27 = img_sub->size[0] * img_sub->size[1];
        img_sub->size[0] = i24 - i23;
        img_sub->size[1] = i26 - i25;
        emxEnsureCapacity((emxArray__common *)img_sub, i27, (int)sizeof(double));
        ix = i26 - i25;
        for (i26 = 0; i26 < ix; i26++) {
          ixstart = i24 - i23;
          for (i27 = 0; i27 < ixstart; i27++) {
            img_sub->data[i27 + img_sub->size[0] * i26] = img[(i23 + i27) + 720 *
              (i25 + i26)];
          }
        }

        mtmp = v - radius[j];
        varargin_2 = v + radius[j];
        if (mtmp > varargin_2) {
          i23 = 0;
          i24 = 0;
        } else {
          i23 = (int)mtmp - 1;
          i24 = (int)varargin_2;
        }

        mtmp = u - radius[j];
        varargin_2 = u + radius[j];
        if (mtmp > varargin_2) {
          i25 = 0;
          i26 = 0;
        } else {
          i25 = (int)mtmp - 1;
          i26 = (int)varargin_2;
        }

        i27 = img_weight_sub->size[0] * img_weight_sub->size[1];
        img_weight_sub->size[0] = i24 - i23;
        img_weight_sub->size[1] = i26 - i25;
        emxEnsureCapacity((emxArray__common *)img_weight_sub, i27, (int)sizeof
                          (double));
        ix = i26 - i25;
        for (i27 = 0; i27 < ix; i27++) {
          ixstart = i24 - i23;
          for (i28 = 0; i28 < ixstart; i28++) {
            img_weight_sub->data[i28 + img_weight_sub->size[0] * i27] =
              img_weight[(i23 + i28) + 720 * (i25 + i27)];
          }
        }

        ix = corners->v1->size[1];
        i27 = v1->size[0] * v1->size[1];
        v1->size[0] = 1;
        v1->size[1] = ix;
        emxEnsureCapacity((emxArray__common *)v1, i27, (int)sizeof(double));
        for (i27 = 0; i27 < ix; i27++) {
          v1->data[v1->size[0] * i27] = corners->v1->data[i + corners->v1->size
            [0] * i27];
        }

        ix = corners->v2->size[1];
        i27 = v2->size[0] * v2->size[1];
        v2->size[0] = 1;
        v2->size[1] = ix;
        emxEnsureCapacity((emxArray__common *)v2, i27, (int)sizeof(double));
        for (i27 = 0; i27 < ix; i27++) {
          v2->data[v2->size[0] * i27] = corners->v2->data[i + corners->v2->size
            [0] * i27];
        }

        //  center
        ixstart = i24 - i23;
        for (i27 = 0; i27 < 2; i27++) {
          c[i27] = ((double)ixstart + 1.0) / 2.0;
        }

        //  compute gradient filter kernel (bandwith = 3 px)
        i27 = img_filter->size[0] * img_filter->size[1];
        img_filter->size[0] = i24 - i23;
        img_filter->size[1] = i26 - i25;
        emxEnsureCapacity((emxArray__common *)img_filter, i27, (int)sizeof
                          (double));
        ix = (i24 - i23) * (i26 - i25);
        for (i27 = 0; i27 < ix; i27++) {
          img_filter->data[i27] = -1.0;
        }

        i27 = (i26 - i25) - 1;
        for (x = 0; x <= i27; x++) {
          i28 = (i24 - i23) - 1;
          for (y = 0; y <= i28; y++) {
            iv1[0] = (short)(1 + x);
            iv1[1] = (short)(1 + y);
            for (ixstart = 0; ixstart < 2; ixstart++) {
              p1[ixstart] = (double)iv1[ixstart] - c[ixstart];
            }

            ixstart = b_v1->size[0];
            b_v1->size[0] = v1->size[1];
            emxEnsureCapacity((emxArray__common *)b_v1, ixstart, (int)sizeof
                              (double));
            ix = v1->size[1];
            for (ixstart = 0; ixstart < ix; ixstart++) {
              b_v1->data[ixstart] = v1->data[v1->size[0] * ixstart];
            }

            b_y = 0.0;
            for (ixstart = 0; ixstart < 2; ixstart++) {
              b_y += p1[ixstart] * b_v1->data[ixstart];
            }

            ixstart = b_v2->size[0];
            b_v2->size[0] = v2->size[1];
            emxEnsureCapacity((emxArray__common *)b_v2, ixstart, (int)sizeof
                              (double));
            ix = v2->size[1];
            for (ixstart = 0; ixstart < ix; ixstart++) {
              b_v2->data[ixstart] = v2->data[v2->size[0] * ixstart];
            }

            mtmp = 0.0;
            for (ixstart = 0; ixstart < 2; ixstart++) {
              mtmp += p1[ixstart] * b_v2->data[ixstart];
            }

            for (ixstart = 0; ixstart < 2; ixstart++) {
              b_p1[ixstart] = p1[ixstart] - b_y * v1->data[ixstart];
            }

            guard1 = false;
            if (norm(b_p1) <= 1.5) {
              guard1 = true;
            } else {
              for (ixstart = 0; ixstart < 2; ixstart++) {
                b_p1[ixstart] = p1[ixstart] - mtmp * v2->data[ixstart];
              }

              if (norm(b_p1) <= 1.5) {
                guard1 = true;
              }
            }

            if (guard1) {
              img_filter->data[y + img_filter->size[0] * x] = 1.0;
            }
          }
        }

        //  convert into vectors
        //  normalize
        ixstart = i24 - i23;
        ix = i26 - i25;
        iv0[0] = (i24 - i23) * (i26 - i25);
        b_img_weight_sub = *img_weight_sub;
        b_img_weight_sub.size = (int *)&iv0;
        b_img_weight_sub.numDimensions = 1;
        mtmp = mean(&b_img_weight_sub);
        i27 = vec_weight->size[0];
        vec_weight->size[0] = ixstart * ix;
        emxEnsureCapacity((emxArray__common *)vec_weight, i27, (int)sizeof
                          (double));
        ix *= ixstart;
        for (i27 = 0; i27 < ix; i27++) {
          vec_weight->data[i27] = img_weight_sub->data[i27] - mtmp;
        }

        iv2[0] = (i24 - i23) * (i26 - i25);
        b_img_weight_sub = *img_weight_sub;
        b_img_weight_sub.size = (int *)&iv2;
        b_img_weight_sub.numDimensions = 1;
        b_y = b_std(&b_img_weight_sub);
        i23 = vec_weight->size[0];
        emxEnsureCapacity((emxArray__common *)vec_weight, i23, (int)sizeof
                          (double));
        ix = vec_weight->size[0];
        for (i23 = 0; i23 < ix; i23++) {
          vec_weight->data[i23] /= b_y;
        }

        b_img_filter[0] = img_filter->size[0] * img_filter->size[1];
        b_img_weight_sub = *img_filter;
        b_img_weight_sub.size = (int *)&b_img_filter;
        b_img_weight_sub.numDimensions = 1;
        mtmp = mean(&b_img_weight_sub);
        i23 = A->size[0];
        A->size[0] = img_filter->size[0] * img_filter->size[1];
        emxEnsureCapacity((emxArray__common *)A, i23, (int)sizeof(double));
        ix = img_filter->size[0] * img_filter->size[1];
        for (i23 = 0; i23 < ix; i23++) {
          A->data[i23] = img_filter->data[i23] - mtmp;
        }

        c_img_filter[0] = img_filter->size[0] * img_filter->size[1];
        b_img_weight_sub = *img_filter;
        b_img_weight_sub.size = (int *)&c_img_filter;
        b_img_weight_sub.numDimensions = 1;
        b_y = b_std(&b_img_weight_sub);

        //  compute gradient score
        i23 = b_vec_weight->size[0];
        b_vec_weight->size[0] = vec_weight->size[0];
        emxEnsureCapacity((emxArray__common *)b_vec_weight, i23, (int)sizeof
                          (double));
        ix = vec_weight->size[0];
        for (i23 = 0; i23 < ix; i23++) {
          b_vec_weight->data[i23] = vec_weight->data[i23] * (A->data[i23] / b_y);
        }

        mtmp = sum(b_vec_weight);
        b_y = mtmp / ((double)vec_weight->size[0] - 1.0);

        //  create intensity filter kernel
        createCorrelationPatch(rt_atan2d_snf(corners->v1->data[i + corners->
          v1->size[0]], corners->v1->data[i]), rt_atan2d_snf(corners->v2->data[i
          + corners->v2->size[0]], corners->v2->data[i]), c[0] - 1.0,
          template_a1, template_a2, template_b1, template_b2);

        //  checkerboard responses
        i23 = b_template_a1->size[0];
        b_template_a1->size[0] = template_a1->size[0] * template_a1->size[1];
        emxEnsureCapacity((emxArray__common *)b_template_a1, i23, (int)sizeof
                          (double));
        ix = template_a1->size[0] * template_a1->size[1];
        for (i23 = 0; i23 < ix; i23++) {
          b_template_a1->data[i23] = template_a1->data[i23] * img_sub->data[i23];
        }

        a1 = sum(b_template_a1);
        i23 = b_template_a2->size[0];
        b_template_a2->size[0] = template_a2->size[0] * template_a2->size[1];
        emxEnsureCapacity((emxArray__common *)b_template_a2, i23, (int)sizeof
                          (double));
        ix = template_a2->size[0] * template_a2->size[1];
        for (i23 = 0; i23 < ix; i23++) {
          b_template_a2->data[i23] = template_a2->data[i23] * img_sub->data[i23];
        }

        a2 = sum(b_template_a2);
        i23 = b_template_b1->size[0];
        b_template_b1->size[0] = template_b1->size[0] * template_b1->size[1];
        emxEnsureCapacity((emxArray__common *)b_template_b1, i23, (int)sizeof
                          (double));
        ix = template_b1->size[0] * template_b1->size[1];
        for (i23 = 0; i23 < ix; i23++) {
          b_template_b1->data[i23] = template_b1->data[i23] * img_sub->data[i23];
        }

        b1 = sum(b_template_b1);
        i23 = b_template_b2->size[0];
        b_template_b2->size[0] = template_b2->size[0] * template_b2->size[1];
        emxEnsureCapacity((emxArray__common *)b_template_b2, i23, (int)sizeof
                          (double));
        ix = template_b2->size[0] * template_b2->size[1];
        for (i23 = 0; i23 < ix; i23++) {
          b_template_b2->data[i23] = template_b2->data[i23] * img_sub->data[i23];
        }

        b2 = sum(b_template_b2);

        //  mean
        mu = (((a1 + a2) + b1) + b2) / 4.0;

        //  case 1: a=white, b=black
        mtmp = a1 - mu;
        varargin_2 = a2 - mu;
        if ((mtmp <= varargin_2) || rtIsNaN(varargin_2)) {
          score_a = mtmp;
        } else {
          score_a = varargin_2;
        }

        mtmp = mu - b1;
        varargin_2 = mu - b2;
        if ((mtmp <= varargin_2) || rtIsNaN(varargin_2)) {
          score_b = mtmp;
        } else {
          score_b = varargin_2;
        }

        if ((score_a <= score_b) || rtIsNaN(score_b)) {
          score_1 = score_a;
        } else {
          score_1 = score_b;
        }

        //  case 2: b=white, a=black
        mtmp = mu - a1;
        varargin_2 = mu - a2;
        if ((mtmp <= varargin_2) || rtIsNaN(varargin_2)) {
          score_a = mtmp;
        } else {
          score_a = varargin_2;
        }

        mtmp = b1 - mu;
        varargin_2 = b2 - mu;
        if ((mtmp <= varargin_2) || rtIsNaN(varargin_2)) {
          score_b = mtmp;
        } else {
          score_b = varargin_2;
        }

        if ((score_a <= score_b) || rtIsNaN(score_b)) {
          score_2 = score_a;
        } else {
          score_2 = score_b;
        }

        //  intensity score: max. of the 2 cases
        if ((score_1 >= score_2) || rtIsNaN(score_2)) {
          mtmp = score_1;
        } else {
          mtmp = score_2;
        }

        //  final score: product of gradient and intensity score
        if (b_y >= 0.0) {
          c_y = b_y;
        } else {
          c_y = 0.0;
        }

        if (mtmp >= 0.0) {
          b_mtmp = mtmp;
        } else {
          b_mtmp = 0.0;
        }

        score[j] = c_y * b_mtmp;
      }
    }

    //  take highest score
    ixstart = 1;
    mtmp = score[0];
    if (rtIsNaN(score[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 4)) {
        ixstart = ix;
        if (!rtIsNaN(score[ix - 1])) {
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

    corners->score->data[i] = mtmp;
    i++;
  }

  emxFree_real_T(&b_v2);
  emxFree_real_T(&b_v1);
  emxFree_real_T(&b_vec_weight);
  emxFree_real_T(&b_template_a1);
  emxFree_real_T(&b_template_a2);
  emxFree_real_T(&b_template_b1);
  emxFree_real_T(&b_template_b2);
  emxFree_real_T(&A);
  emxFree_real_T(&template_b2);
  emxFree_real_T(&template_b1);
  emxFree_real_T(&template_a2);
  emxFree_real_T(&template_a1);
  emxFree_real_T(&vec_weight);
  emxFree_real_T(&img_filter);
  emxFree_real_T(&v2);
  emxFree_real_T(&v1);
  emxFree_real_T(&img_weight_sub);
  emxFree_real_T(&img_sub);
}

//
// Arguments    : emxArray_real_T *x
//                emxArray_int32_T *idx
// Return Type  : void
//
static void sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_real_T *b_x;
  unsigned int unnamed_idx_0;
  int ib;
  int m;
  int n;
  double x4[4];
  int idx4[4];
  emxArray_int32_T *iwork;
  emxArray_real_T *xwork;
  int nNaNs;
  int k;
  int wOffset;
  signed char perm[4];
  int nNonNaN;
  int p;
  int i4;
  int nBlocks;
  int b_iwork[256];
  double b_xwork[256];
  int b;
  int bLen;
  int bLen2;
  int nPairs;
  int exitg1;
  emxInit_real_T1(&b_x, 1);
  unnamed_idx_0 = (unsigned int)x->size[0];
  ib = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ib, (int)sizeof(double));
  m = x->size[0];
  for (ib = 0; ib < m; ib++) {
    b_x->data[ib] = x->data[ib];
  }

  ib = idx->size[0];
  idx->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)idx, ib, (int)sizeof(int));
  m = (int)unnamed_idx_0;
  for (ib = 0; ib < m; ib++) {
    idx->data[ib] = 0;
  }

  n = x->size[0];
  for (m = 0; m < 4; m++) {
    x4[m] = 0.0;
    idx4[m] = 0;
  }

  emxInit_int32_T(&iwork, 1);
  ib = iwork->size[0];
  iwork->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)iwork, ib, (int)sizeof(int));
  m = iwork->size[0];
  ib = iwork->size[0];
  iwork->size[0] = m;
  emxEnsureCapacity((emxArray__common *)iwork, ib, (int)sizeof(int));
  for (ib = 0; ib < m; ib++) {
    iwork->data[ib] = 0;
  }

  emxInit_real_T1(&xwork, 1);
  unnamed_idx_0 = (unsigned int)x->size[0];
  ib = xwork->size[0];
  xwork->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)xwork, ib, (int)sizeof(double));
  m = xwork->size[0];
  ib = xwork->size[0];
  xwork->size[0] = m;
  emxEnsureCapacity((emxArray__common *)xwork, ib, (int)sizeof(double));
  for (ib = 0; ib < m; ib++) {
    xwork->data[ib] = 0.0;
  }

  nNaNs = 0;
  ib = 0;
  for (k = 0; k + 1 <= n; k++) {
    if (rtIsNaN(b_x->data[k])) {
      idx->data[(n - nNaNs) - 1] = k + 1;
      xwork->data[(n - nNaNs) - 1] = b_x->data[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = k + 1;
      x4[ib - 1] = b_x->data[k];
      if (ib == 4) {
        ib = k - nNaNs;
        if (x4[0] >= x4[1]) {
          m = 1;
          wOffset = 2;
        } else {
          m = 2;
          wOffset = 1;
        }

        if (x4[2] >= x4[3]) {
          p = 3;
          i4 = 4;
        } else {
          p = 4;
          i4 = 3;
        }

        if (x4[m - 1] >= x4[p - 1]) {
          if (x4[wOffset - 1] >= x4[p - 1]) {
            perm[0] = (signed char)m;
            perm[1] = (signed char)wOffset;
            perm[2] = (signed char)p;
            perm[3] = (signed char)i4;
          } else if (x4[wOffset - 1] >= x4[i4 - 1]) {
            perm[0] = (signed char)m;
            perm[1] = (signed char)p;
            perm[2] = (signed char)wOffset;
            perm[3] = (signed char)i4;
          } else {
            perm[0] = (signed char)m;
            perm[1] = (signed char)p;
            perm[2] = (signed char)i4;
            perm[3] = (signed char)wOffset;
          }
        } else if (x4[m - 1] >= x4[i4 - 1]) {
          if (x4[wOffset - 1] >= x4[i4 - 1]) {
            perm[0] = (signed char)p;
            perm[1] = (signed char)m;
            perm[2] = (signed char)wOffset;
            perm[3] = (signed char)i4;
          } else {
            perm[0] = (signed char)p;
            perm[1] = (signed char)m;
            perm[2] = (signed char)i4;
            perm[3] = (signed char)wOffset;
          }
        } else {
          perm[0] = (signed char)p;
          perm[1] = (signed char)i4;
          perm[2] = (signed char)m;
          perm[3] = (signed char)wOffset;
        }

        idx->data[ib - 3] = idx4[perm[0] - 1];
        idx->data[ib - 2] = idx4[perm[1] - 1];
        idx->data[ib - 1] = idx4[perm[2] - 1];
        idx->data[ib] = idx4[perm[3] - 1];
        b_x->data[ib - 3] = x4[perm[0] - 1];
        b_x->data[ib - 2] = x4[perm[1] - 1];
        b_x->data[ib - 1] = x4[perm[2] - 1];
        b_x->data[ib] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  wOffset = (x->size[0] - nNaNs) - 1;
  if (ib > 0) {
    for (m = 0; m < 4; m++) {
      perm[m] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] >= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] >= x4[1]) {
      if (x4[1] >= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] >= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] >= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] >= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    for (k = 1; k <= ib; k++) {
      idx->data[(wOffset - ib) + k] = idx4[perm[k - 1] - 1];
      b_x->data[(wOffset - ib) + k] = x4[perm[k - 1] - 1];
    }
  }

  m = nNaNs >> 1;
  for (k = 1; k <= m; k++) {
    ib = idx->data[wOffset + k];
    idx->data[wOffset + k] = idx->data[n - k];
    idx->data[n - k] = ib;
    b_x->data[wOffset + k] = xwork->data[n - k];
    b_x->data[n - k] = xwork->data[wOffset + k];
  }

  if ((nNaNs & 1) != 0) {
    b_x->data[(wOffset + m) + 1] = xwork->data[(wOffset + m) + 1];
  }

  nNonNaN = x->size[0] - nNaNs;
  m = 2;
  if (nNonNaN > 1) {
    if (x->size[0] >= 256) {
      nBlocks = nNonNaN >> 8;
      if (nBlocks > 0) {
        for (i4 = 1; i4 <= nBlocks; i4++) {
          n = (i4 - 1) << 8;
          for (b = 0; b < 6; b++) {
            bLen = 1 << (b + 2);
            bLen2 = bLen << 1;
            nPairs = 256 >> (b + 3);
            for (k = 1; k <= nPairs; k++) {
              m = n + (k - 1) * bLen2;
              for (ib = 0; ib + 1 <= bLen2; ib++) {
                b_iwork[ib] = idx->data[m + ib];
                b_xwork[ib] = b_x->data[m + ib];
              }

              p = 0;
              wOffset = bLen;
              ib = m - 1;
              do {
                exitg1 = 0;
                ib++;
                if (b_xwork[p] >= b_xwork[wOffset]) {
                  idx->data[ib] = b_iwork[p];
                  b_x->data[ib] = b_xwork[p];
                  if (p + 1 < bLen) {
                    p++;
                  } else {
                    exitg1 = 1;
                  }
                } else {
                  idx->data[ib] = b_iwork[wOffset];
                  b_x->data[ib] = b_xwork[wOffset];
                  if (wOffset + 1 < bLen2) {
                    wOffset++;
                  } else {
                    ib = (ib - p) + 1;
                    while (p + 1 <= bLen) {
                      idx->data[ib + p] = b_iwork[p];
                      b_x->data[ib + p] = b_xwork[p];
                      p++;
                    }

                    exitg1 = 1;
                  }
                }
              } while (exitg1 == 0);
            }
          }
        }

        m = nBlocks << 8;
        ib = nNonNaN - m;
        if (ib > 0) {
          merge_block(idx, b_x, m, ib, 2, iwork, xwork);
        }

        m = 8;
      }
    }

    merge_block(idx, b_x, 0, nNonNaN, m, iwork, xwork);
  }

  if ((nNaNs > 0) && (nNonNaN > 0)) {
    for (k = 0; k + 1 <= nNaNs; k++) {
      xwork->data[k] = b_x->data[nNonNaN + k];
      iwork->data[k] = idx->data[nNonNaN + k];
    }

    for (k = nNonNaN - 1; k + 1 > 0; k--) {
      b_x->data[nNaNs + k] = b_x->data[k];
      idx->data[nNaNs + k] = idx->data[k];
    }

    for (k = 0; k + 1 <= nNaNs; k++) {
      b_x->data[k] = xwork->data[k];
      idx->data[k] = iwork->data[k];
    }
  }

  emxFree_real_T(&xwork);
  emxFree_int32_T(&iwork);
  ib = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity((emxArray__common *)x, ib, (int)sizeof(double));
  m = b_x->size[0];
  for (ib = 0; ib < m; ib++) {
    x->data[ib] = b_x->data[ib];
  }

  emxFree_real_T(&b_x);
}

//
// Arguments    : const emxArray_real_T *x
// Return Type  : double
//
static double sum(const emxArray_real_T *x)
{
  double y;
  int k;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

//
// Arguments    : int numDimensions
//                int *size
// Return Type  : emxArray_real_T *
//
emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size)
{
  emxArray_real_T *emx;
  int numEl;
  int i;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

//
// Arguments    : double *data
//                int numDimensions
//                int *size
// Return Type  : emxArray_real_T *
//
emxArray_real_T *emxCreateWrapperND_real_T(double *data, int numDimensions, int *
  size)
{
  emxArray_real_T *emx;
  int numEl;
  int i;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

//
// Arguments    : double *data
//                int rows
//                int cols
// Return Type  : emxArray_real_T *
//
emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols)
{
  emxArray_real_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_real_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

//
// Arguments    : int rows
//                int cols
// Return Type  : emxArray_real_T *
//
emxArray_real_T *emxCreate_real_T(int rows, int cols)
{
  emxArray_real_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_real_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

//
// Arguments    : emxArray_real_T *emxArray
// Return Type  : void
//
void emxDestroyArray_real_T(emxArray_real_T *emxArray)
{
  emxFree_real_T(&emxArray);
}

//
// Arguments    : emxArray_real_T **pEmxArray
//                int numDimensions
// Return Type  : void
//
void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxInit_real_T(pEmxArray, numDimensions);
}

//
// Arguments    : const unsigned char image[921600]
//                emxArray_real_T *corners_uv
//                emxArray_real_T *tam_chess
// Return Type  : void
//
void fce(const unsigned char image[921600], emxArray_real_T *corners_uv,
         emxArray_real_T *tam_chess)
{
  emxArray_real_T *corners_p;
  struct_T expl_temp;
  int ix;
  int ncolx;
  emxArray_real_T *corners_v1;
  emxArray_real_T *corners_v2;
  cell_wrap_0 chessboards[5];
  emxArray_real_T *p;
  emxArray_int32_T *r0;
  emxArray_real_T *b_corners_uv;
  int i;
  boolean_T y;
  int exitg2;
  int nrowx;
  int j;
  emxArray_real_T *c_corners_uv;
  unsigned int b_chessboards[2];
  int i0;
  emxArray_boolean_T *b_y;
  int i2;
  emxArray_boolean_T *c_y;
  boolean_T exitg1;
  emxInit_real_T(&corners_p, 2);
  emxInitStruct_struct_T(&expl_temp);
  findCorners(image, 0.01, &expl_temp);
  ix = corners_p->size[0] * corners_p->size[1];
  corners_p->size[0] = expl_temp.p->size[0];
  corners_p->size[1] = expl_temp.p->size[1];
  emxEnsureCapacity((emxArray__common *)corners_p, ix, (int)sizeof(double));
  ncolx = expl_temp.p->size[0] * expl_temp.p->size[1];
  for (ix = 0; ix < ncolx; ix++) {
    corners_p->data[ix] = expl_temp.p->data[ix];
  }

  emxInit_real_T(&corners_v1, 2);
  ix = corners_v1->size[0] * corners_v1->size[1];
  corners_v1->size[0] = expl_temp.v1->size[0];
  corners_v1->size[1] = expl_temp.v1->size[1];
  emxEnsureCapacity((emxArray__common *)corners_v1, ix, (int)sizeof(double));
  ncolx = expl_temp.v1->size[0] * expl_temp.v1->size[1];
  for (ix = 0; ix < ncolx; ix++) {
    corners_v1->data[ix] = expl_temp.v1->data[ix];
  }

  emxInit_real_T(&corners_v2, 2);
  ix = corners_v2->size[0] * corners_v2->size[1];
  corners_v2->size[0] = expl_temp.v2->size[0];
  corners_v2->size[1] = expl_temp.v2->size[1];
  emxEnsureCapacity((emxArray__common *)corners_v2, ix, (int)sizeof(double));
  ncolx = expl_temp.v2->size[0] * expl_temp.v2->size[1];
  for (ix = 0; ix < ncolx; ix++) {
    corners_v2->data[ix] = expl_temp.v2->data[ix];
  }

  emxFreeStruct_struct_T(&expl_temp);
  emxInitMatrix_cell_wrap_0(chessboards);
  chessboardsFromCorners(corners_p, corners_v1, corners_v2, chessboards);

  // figure; imshow(uint8(image)); hold on;
  // plotChessboards(chessboards,corners);
  ix = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = 1;
  corners_uv->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)corners_uv, ix, (int)sizeof(double));
  emxFree_real_T(&corners_v2);
  emxFree_real_T(&corners_v1);
  for (ix = 0; ix < 2; ix++) {
    corners_uv->data[ix] = 0.0;
  }

  ix = tam_chess->size[0] * tam_chess->size[1];
  tam_chess->size[0] = 5;
  tam_chess->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)tam_chess, ix, (int)sizeof(double));
  for (ix = 0; ix < 10; ix++) {
    tam_chess->data[ix] = 0.0;
  }

  emxInit_real_T(&p, 2);
  emxInit_int32_T(&r0, 1);
  emxInit_real_T(&b_corners_uv, 2);
  for (i = 0; i < 5; i++) {
    y = true;
    ix = 1;
    do {
      exitg2 = 0;
      nrowx = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
      if (ix <= nrowx) {
        if (chessboards[i].f1->data[ix - 1] == 0.0) {
          y = false;
          exitg2 = 1;
        } else {
          ix++;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (y) {
      ix = r0->size[0];
      r0->size[0] = 2;
      emxEnsureCapacity((emxArray__common *)r0, ix, (int)sizeof(int));
      for (ix = 0; ix < 2; ix++) {
        r0->data[ix] = ix;
      }

      b_chessboards[0] = (unsigned int)chessboards[i].f1->size[0];
      b_chessboards[1] = (unsigned int)chessboards[i].f1->size[1];
      for (ix = 0; ix < 2; ix++) {
        tam_chess->data[i + tam_chess->size[0] * r0->data[ix]] =
          b_chessboards[ix];
      }

      for (j = 0; j < chessboards[i].f1->size[0]; j++) {
        ncolx = chessboards[i].f1->size[1];
        nrowx = corners_p->size[1];
        ix = p->size[0] * p->size[1];
        p->size[0] = ncolx;
        p->size[1] = nrowx;
        emxEnsureCapacity((emxArray__common *)p, ix, (int)sizeof(double));
        for (ix = 0; ix < nrowx; ix++) {
          for (i0 = 0; i0 < ncolx; i0++) {
            p->data[i0 + p->size[0] * ix] = corners_p->data[((int)chessboards[i]
              .f1->data[j + chessboards[i].f1->size[0] * i0] + corners_p->size[0]
              * ix) - 1] + 1.0;
          }
        }

        if (!(corners_uv->size[0] == 0)) {
          nrowx = corners_uv->size[1];
        } else if (!((p->size[0] == 0) || (p->size[1] == 0))) {
          nrowx = p->size[1];
        } else {
          nrowx = corners_uv->size[1];
          if (p->size[1] > nrowx) {
            nrowx = p->size[1];
          }
        }

        if (!(corners_uv->size[0] == 0)) {
          ncolx = corners_uv->size[0];
        } else {
          ncolx = 0;
        }

        if (!((p->size[0] == 0) || (p->size[1] == 0))) {
          i2 = p->size[0];
        } else {
          i2 = 0;
        }

        ix = b_corners_uv->size[0] * b_corners_uv->size[1];
        b_corners_uv->size[0] = ncolx + i2;
        b_corners_uv->size[1] = nrowx;
        emxEnsureCapacity((emxArray__common *)b_corners_uv, ix, (int)sizeof
                          (double));
        for (ix = 0; ix < nrowx; ix++) {
          for (i0 = 0; i0 < ncolx; i0++) {
            b_corners_uv->data[i0 + b_corners_uv->size[0] * ix] =
              corners_uv->data[i0 + ncolx * ix];
          }
        }

        for (ix = 0; ix < nrowx; ix++) {
          for (i0 = 0; i0 < i2; i0++) {
            b_corners_uv->data[(i0 + ncolx) + b_corners_uv->size[0] * ix] =
              p->data[i0 + i2 * ix];
          }
        }

        ix = corners_uv->size[0] * corners_uv->size[1];
        corners_uv->size[0] = b_corners_uv->size[0];
        corners_uv->size[1] = b_corners_uv->size[1];
        emxEnsureCapacity((emxArray__common *)corners_uv, ix, (int)sizeof(double));
        ncolx = b_corners_uv->size[1];
        for (ix = 0; ix < ncolx; ix++) {
          nrowx = b_corners_uv->size[0];
          for (i0 = 0; i0 < nrowx; i0++) {
            corners_uv->data[i0 + corners_uv->size[0] * ix] = b_corners_uv->
              data[i0 + b_corners_uv->size[0] * ix];
          }
        }
      }
    }
  }

  emxFree_real_T(&b_corners_uv);
  emxFree_int32_T(&r0);
  emxFree_real_T(&p);
  emxFreeMatrix_cell_wrap_0(chessboards);
  emxFree_real_T(&corners_p);
  nrowx = corners_uv->size[0] - 1;
  ncolx = corners_uv->size[1];
  for (j = 0; j + 1 <= ncolx; j++) {
    for (i = 1; i <= nrowx; i++) {
      corners_uv->data[(i + corners_uv->size[0] * j) - 1] = corners_uv->data[i +
        corners_uv->size[0] * j];
    }
  }

  if (1 > nrowx) {
    ncolx = 0;
  } else {
    ncolx = nrowx;
  }

  emxInit_real_T(&c_corners_uv, 2);
  nrowx = corners_uv->size[1];
  ix = c_corners_uv->size[0] * c_corners_uv->size[1];
  c_corners_uv->size[0] = ncolx;
  c_corners_uv->size[1] = nrowx;
  emxEnsureCapacity((emxArray__common *)c_corners_uv, ix, (int)sizeof(double));
  for (ix = 0; ix < nrowx; ix++) {
    for (i0 = 0; i0 < ncolx; i0++) {
      c_corners_uv->data[i0 + c_corners_uv->size[0] * ix] = corners_uv->data[i0
        + corners_uv->size[0] * ix];
    }
  }

  ix = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = c_corners_uv->size[0];
  corners_uv->size[1] = c_corners_uv->size[1];
  emxEnsureCapacity((emxArray__common *)corners_uv, ix, (int)sizeof(double));
  ncolx = c_corners_uv->size[1];
  for (ix = 0; ix < ncolx; ix++) {
    nrowx = c_corners_uv->size[0];
    for (i0 = 0; i0 < nrowx; i0++) {
      corners_uv->data[i0 + corners_uv->size[0] * ix] = c_corners_uv->data[i0 +
        c_corners_uv->size[0] * ix];
    }
  }

  emxFree_real_T(&c_corners_uv);
  emxInit_boolean_T(&b_y, 1);
  ix = b_y->size[0];
  b_y->size[0] = 5;
  emxEnsureCapacity((emxArray__common *)b_y, ix, (int)sizeof(boolean_T));
  for (ix = 0; ix < 5; ix++) {
    b_y->data[ix] = false;
  }

  nrowx = -1;
  ncolx = 0;
  i2 = 5;
  for (j = 0; j < 5; j++) {
    ncolx++;
    i2++;
    nrowx++;
    ix = ncolx;
    exitg1 = false;
    while ((!exitg1) && (ix <= i2)) {
      y = ((int)tam_chess->data[ix - 1] == 0);
      if (!y) {
        b_y->data[nrowx] = true;
        exitg1 = true;
      } else {
        ix += 5;
      }
    }
  }

  emxInit_boolean_T(&c_y, 1);
  ix = c_y->size[0];
  c_y->size[0] = b_y->size[0];
  emxEnsureCapacity((emxArray__common *)c_y, ix, (int)sizeof(boolean_T));
  ncolx = b_y->size[0];
  for (ix = 0; ix < ncolx; ix++) {
    c_y->data[ix] = !b_y->data[ix];
  }

  emxFree_boolean_T(&b_y);
  nullAssignment(tam_chess, c_y);
  emxFree_boolean_T(&c_y);
}

//
// Arguments    : void
// Return Type  : void
//
void fce_initialize()
{
  rt_InitInfAndNaN(8U);
}

//
// Arguments    : void
// Return Type  : void
//
void fce_terminate()
{
  // (no terminate code required)
}

//
// File trailer for fce.cpp
//
// [EOF]
//
