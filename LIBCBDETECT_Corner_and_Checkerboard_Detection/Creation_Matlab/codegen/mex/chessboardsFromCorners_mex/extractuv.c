/*
 * extractuv.c
 *
 * Code generation for function 'extractuv'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "nullAssignment.h"
#include "all.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = { 19, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo td_emlrtRSI = { 23, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo ud_emlrtRSI = { 25, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo wd_emlrtRSI = { 270, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo xd_emlrtRSI = { 271, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo yd_emlrtRSI = { 15, "any",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRSInfo ae_emlrtRSI = { 120, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 2, 36, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtECInfo r_emlrtECI = { -1, 15, 13, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtDCInfo emlrtDCI = { 18, 30, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m",
  1 };

static emlrtBCInfo r_emlrtBCI = { 1, 100, 18, 30, "corners.p", "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m",
  0 };

/* Function Definitions */
void extractuv(const emlrtStack *sp, const cell_2 *chessboards, const struct0_T *
               corners, emxArray_real_T *corners_uv, real_T tam_chess_data[],
               int32_T tam_chess_size[2])
{
  int32_T i1;
  int32_T iv4[2];
  int32_T iv5[2];
  int32_T j;
  emxArray_real_T *b_corners_uv;
  emxArray_real_T *c_corners_uv;
  real_T d0;
  emxArray_real_T *d_corners_uv;
  int32_T i2;
  int32_T nrowx;
  emxArray_real_T *e_corners_uv;
  emxArray_real_T *f_corners_uv;
  emxArray_real_T *g_corners_uv;
  boolean_T y_data[5];
  emxArray_real_T *r6;
  int32_T ix;
  boolean_T exitg1;
  boolean_T b_y_data[5];
  int32_T y_size[1];
  boolean_T b3;
  emxArray_boolean_T c_y_data;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 4U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 0);
  i1 = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = 1;
  corners_uv->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners_uv, i1, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    corners_uv->data[i1] = 0.0;
  }

  tam_chess_size[0] = 5;
  tam_chess_size[1] = 2;
  for (i1 = 0; i1 < 10; i1++) {
    tam_chess_data[i1] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1);
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, b_all(chessboards->f1))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 2);
    for (i1 = 0; i1 < 2; i1++) {
      iv4[i1] = 1 + i1;
      iv5[i1] = 1 + i1;
    }

    emlrtSubAssignSizeCheckR2012b(iv4, 2, iv5, 2, &r_emlrtECI, sp);
    for (i1 = 0; i1 < 2; i1++) {
      tam_chess_data[tam_chess_size[0] * i1] = 6.0 + (real_T)i1;
    }

    j = 0;
    emxInit_real_T(sp, &b_corners_uv, 2, &o_emlrtRTEI, true);
    while (j < 6) {
      covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3);
      for (i1 = 0; i1 < 7; i1++) {
        d0 = chessboards->f1[j + 6 * i1];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if (!((i2 >= 1) && (i2 <= 100))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &r_emlrtBCI, sp);
        }
      }

      st.site = &sd_emlrtRSI;
      b_st.site = &od_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
      nrowx = corners_uv->size[0];
      i1 = b_corners_uv->size[0] * b_corners_uv->size[1];
      b_corners_uv->size[0] = nrowx + 7;
      b_corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < nrowx; i2++) {
          b_corners_uv->data[i2 + b_corners_uv->size[0] * i1] = corners_uv->
            data[i2 + nrowx * i1];
        }
      }

      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 7; i2++) {
          b_corners_uv->data[(i2 + nrowx) + b_corners_uv->size[0] * i1] =
            corners->p[((int32_T)chessboards->f1[j + 6 * i2] + 100 * i1) - 1] +
            1.0;
        }
      }

      i1 = corners_uv->size[0] * corners_uv->size[1];
      corners_uv->size[0] = b_corners_uv->size[0];
      corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        nrowx = b_corners_uv->size[0];
        for (i2 = 0; i2 < nrowx; i2++) {
          corners_uv->data[i2 + corners_uv->size[0] * i1] = b_corners_uv->
            data[i2 + b_corners_uv->size[0] * i1];
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&b_corners_uv);
    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 0);
  }

  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1);
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, c_all(chessboards->f2))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 2);
    for (i1 = 0; i1 < 2; i1++) {
      iv4[i1] = 1 + i1;
      iv5[i1] = 1 + i1;
    }

    emlrtSubAssignSizeCheckR2012b(iv4, 2, iv5, 2, &r_emlrtECI, sp);
    for (i1 = 0; i1 < 2; i1++) {
      tam_chess_data[1 + tam_chess_size[0] * i1] = 5.0 + 2.0 * (real_T)i1;
    }

    j = 0;
    emxInit_real_T(sp, &c_corners_uv, 2, &o_emlrtRTEI, true);
    while (j < 5) {
      covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3);
      for (i1 = 0; i1 < 7; i1++) {
        d0 = chessboards->f2[j + 5 * i1];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if (!((i2 >= 1) && (i2 <= 100))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &r_emlrtBCI, sp);
        }
      }

      st.site = &sd_emlrtRSI;
      b_st.site = &od_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
      nrowx = corners_uv->size[0];
      i1 = c_corners_uv->size[0] * c_corners_uv->size[1];
      c_corners_uv->size[0] = nrowx + 7;
      c_corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)c_corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < nrowx; i2++) {
          c_corners_uv->data[i2 + c_corners_uv->size[0] * i1] = corners_uv->
            data[i2 + nrowx * i1];
        }
      }

      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 7; i2++) {
          c_corners_uv->data[(i2 + nrowx) + c_corners_uv->size[0] * i1] =
            corners->p[((int32_T)chessboards->f2[j + 5 * i2] + 100 * i1) - 1] +
            1.0;
        }
      }

      i1 = corners_uv->size[0] * corners_uv->size[1];
      corners_uv->size[0] = c_corners_uv->size[0];
      corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        nrowx = c_corners_uv->size[0];
        for (i2 = 0; i2 < nrowx; i2++) {
          corners_uv->data[i2 + corners_uv->size[0] * i1] = c_corners_uv->
            data[i2 + c_corners_uv->size[0] * i1];
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&c_corners_uv);
    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 0);
  }

  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1);
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, d_all(chessboards->f3))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 2);
    for (i1 = 0; i1 < 2; i1++) {
      iv4[i1] = 1 + i1;
      iv5[i1] = 1 + i1;
    }

    emlrtSubAssignSizeCheckR2012b(iv4, 2, iv5, 2, &r_emlrtECI, sp);
    for (i1 = 0; i1 < 2; i1++) {
      tam_chess_data[2 + tam_chess_size[0] * i1] = 4.0;
    }

    j = 0;
    emxInit_real_T(sp, &d_corners_uv, 2, &o_emlrtRTEI, true);
    while (j < 4) {
      covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3);
      for (i1 = 0; i1 < 4; i1++) {
        d0 = chessboards->f3[j + (i1 << 2)];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if (!((i2 >= 1) && (i2 <= 100))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &r_emlrtBCI, sp);
        }
      }

      st.site = &sd_emlrtRSI;
      b_st.site = &od_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
      nrowx = corners_uv->size[0];
      i1 = d_corners_uv->size[0] * d_corners_uv->size[1];
      d_corners_uv->size[0] = nrowx + 4;
      d_corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)d_corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < nrowx; i2++) {
          d_corners_uv->data[i2 + d_corners_uv->size[0] * i1] = corners_uv->
            data[i2 + nrowx * i1];
        }
      }

      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          d_corners_uv->data[(i2 + nrowx) + d_corners_uv->size[0] * i1] =
            corners->p[((int32_T)chessboards->f3[j + (i2 << 2)] + 100 * i1) - 1]
            + 1.0;
        }
      }

      i1 = corners_uv->size[0] * corners_uv->size[1];
      corners_uv->size[0] = d_corners_uv->size[0];
      corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        nrowx = d_corners_uv->size[0];
        for (i2 = 0; i2 < nrowx; i2++) {
          corners_uv->data[i2 + corners_uv->size[0] * i1] = d_corners_uv->
            data[i2 + d_corners_uv->size[0] * i1];
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&d_corners_uv);
    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 0);
  }

  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1);
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, b_all(chessboards->f4))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 2);
    for (i1 = 0; i1 < 2; i1++) {
      iv4[i1] = 1 + i1;
      iv5[i1] = 1 + i1;
    }

    emlrtSubAssignSizeCheckR2012b(iv4, 2, iv5, 2, &r_emlrtECI, sp);
    for (i1 = 0; i1 < 2; i1++) {
      tam_chess_data[3 + tam_chess_size[0] * i1] = 6.0 + (real_T)i1;
    }

    j = 0;
    emxInit_real_T(sp, &e_corners_uv, 2, &o_emlrtRTEI, true);
    while (j < 6) {
      covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3);
      for (i1 = 0; i1 < 7; i1++) {
        d0 = chessboards->f4[j + 6 * i1];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if (!((i2 >= 1) && (i2 <= 100))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &r_emlrtBCI, sp);
        }
      }

      st.site = &sd_emlrtRSI;
      b_st.site = &od_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
      nrowx = corners_uv->size[0];
      i1 = e_corners_uv->size[0] * e_corners_uv->size[1];
      e_corners_uv->size[0] = nrowx + 7;
      e_corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)e_corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < nrowx; i2++) {
          e_corners_uv->data[i2 + e_corners_uv->size[0] * i1] = corners_uv->
            data[i2 + nrowx * i1];
        }
      }

      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 7; i2++) {
          e_corners_uv->data[(i2 + nrowx) + e_corners_uv->size[0] * i1] =
            corners->p[((int32_T)chessboards->f4[j + 6 * i2] + 100 * i1) - 1] +
            1.0;
        }
      }

      i1 = corners_uv->size[0] * corners_uv->size[1];
      corners_uv->size[0] = e_corners_uv->size[0];
      corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        nrowx = e_corners_uv->size[0];
        for (i2 = 0; i2 < nrowx; i2++) {
          corners_uv->data[i2 + corners_uv->size[0] * i1] = e_corners_uv->
            data[i2 + e_corners_uv->size[0] * i1];
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&e_corners_uv);
    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 0);
  }

  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1);
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, b_all(chessboards->f5))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 2);
    for (i1 = 0; i1 < 2; i1++) {
      iv4[i1] = 1 + i1;
      iv5[i1] = 1 + i1;
    }

    emlrtSubAssignSizeCheckR2012b(iv4, 2, iv5, 2, &r_emlrtECI, sp);
    for (i1 = 0; i1 < 2; i1++) {
      tam_chess_data[4 + tam_chess_size[0] * i1] = 6.0 + (real_T)i1;
    }

    j = 0;
    emxInit_real_T(sp, &f_corners_uv, 2, &o_emlrtRTEI, true);
    while (j < 6) {
      covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3);
      for (i1 = 0; i1 < 7; i1++) {
        d0 = chessboards->f5[j + 6 * i1];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if (!((i2 >= 1) && (i2 <= 100))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &r_emlrtBCI, sp);
        }
      }

      st.site = &sd_emlrtRSI;
      b_st.site = &od_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
      nrowx = corners_uv->size[0];
      i1 = f_corners_uv->size[0] * f_corners_uv->size[1];
      f_corners_uv->size[0] = nrowx + 7;
      f_corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)f_corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < nrowx; i2++) {
          f_corners_uv->data[i2 + f_corners_uv->size[0] * i1] = corners_uv->
            data[i2 + nrowx * i1];
        }
      }

      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 7; i2++) {
          f_corners_uv->data[(i2 + nrowx) + f_corners_uv->size[0] * i1] =
            corners->p[((int32_T)chessboards->f5[j + 6 * i2] + 100 * i1) - 1] +
            1.0;
        }
      }

      i1 = corners_uv->size[0] * corners_uv->size[1];
      corners_uv->size[0] = f_corners_uv->size[0];
      corners_uv->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i1, (int32_T)
                        sizeof(real_T), &o_emlrtRTEI);
      for (i1 = 0; i1 < 2; i1++) {
        nrowx = f_corners_uv->size[0];
        for (i2 = 0; i2 < nrowx; i2++) {
          corners_uv->data[i2 + corners_uv->size[0] * i1] = f_corners_uv->
            data[i2 + f_corners_uv->size[0] * i1];
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&f_corners_uv);
    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 0);
  }

  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 4);
  st.site = &td_emlrtRSI;
  b_st.site = &vd_emlrtRSI;
  nrowx = corners_uv->size[0] - 1;
  c_st.site = &wd_emlrtRSI;
  for (j = 0; j < 2; j++) {
    c_st.site = &xd_emlrtRSI;
    for (i1 = 1; i1 <= nrowx; i1++) {
      corners_uv->data[(i1 + corners_uv->size[0] * j) - 1] = corners_uv->data[i1
        + corners_uv->size[0] * j];
    }
  }

  if (nrowx <= nrowx + 1) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ac_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nrowx) {
    nrowx = 0;
  }

  emxInit_real_T(&b_st, &g_corners_uv, 2, &o_emlrtRTEI, true);
  i1 = g_corners_uv->size[0] * g_corners_uv->size[1];
  g_corners_uv->size[0] = nrowx;
  g_corners_uv->size[1] = 2;
  emxEnsureCapacity(&b_st, (emxArray__common *)g_corners_uv, i1, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    for (i2 = 0; i2 < nrowx; i2++) {
      g_corners_uv->data[i2 + g_corners_uv->size[0] * i1] = corners_uv->data[i2
        + corners_uv->size[0] * i1];
    }
  }

  i1 = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = g_corners_uv->size[0];
  corners_uv->size[1] = 2;
  emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i1, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    nrowx = g_corners_uv->size[0];
    for (i2 = 0; i2 < nrowx; i2++) {
      corners_uv->data[i2 + corners_uv->size[0] * i1] = g_corners_uv->data[i2 +
        g_corners_uv->size[0] * i1];
    }
  }

  emxFree_real_T(&g_corners_uv);
  st.site = &ud_emlrtRSI;
  b_st.site = &yd_emlrtRSI;
  for (i1 = 0; i1 < 5; i1++) {
    y_data[i1] = false;
  }

  nrowx = -1;
  i1 = 0;
  i2 = 5;
  c_st.site = &ae_emlrtRSI;
  for (j = 0; j < 5; j++) {
    i1++;
    i2++;
    nrowx++;
    c_st.site = &nd_emlrtRSI;
    if ((!(i1 > i2)) && (i2 > 2147483642)) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    ix = i1;
    exitg1 = false;
    while ((!exitg1) && (ix <= i2)) {
      b3 = ((int32_T)tam_chess_data[ix - 1] == 0);
      if (!b3) {
        y_data[nrowx] = true;
        exitg1 = true;
      } else {
        ix += 5;
      }
    }
  }

  emxInit_real_T(&b_st, &r6, 2, &o_emlrtRTEI, true);
  i1 = r6->size[0] * r6->size[1];
  r6->size[0] = tam_chess_size[0];
  r6->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i1, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  nrowx = tam_chess_size[0] * tam_chess_size[1];
  for (i1 = 0; i1 < nrowx; i1++) {
    r6->data[i1] = tam_chess_data[i1];
  }

  y_size[0] = 5;
  for (i1 = 0; i1 < 5; i1++) {
    b_y_data[i1] = !y_data[i1];
  }

  c_y_data.data = (boolean_T *)&b_y_data;
  c_y_data.size = (int32_T *)&y_size;
  c_y_data.allocatedSize = 5;
  c_y_data.numDimensions = 1;
  c_y_data.canFreeData = false;
  st.site = &ud_emlrtRSI;
  b_nullAssignment(&st, r6, &c_y_data);
  tam_chess_size[0] = r6->size[0];
  tam_chess_size[1] = r6->size[1];
  nrowx = r6->size[0] * r6->size[1];
  for (i1 = 0; i1 < nrowx; i1++) {
    tam_chess_data[i1] = r6->data[i1];
  }

  emxFree_real_T(&r6);
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 1, corners_uv->size[0] == 0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 5);

    /* msg = 'No corners detected.\n'; */
    /* fprintf(msg); */
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (extractuv.c) */
