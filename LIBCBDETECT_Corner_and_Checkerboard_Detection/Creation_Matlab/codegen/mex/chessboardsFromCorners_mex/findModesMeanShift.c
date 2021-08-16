/*
 * findModesMeanShift.c
 *
 * Code generation for function 'findModesMeanShift'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "findModesMeanShift.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "any.h"
#include "sort1.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo rf_emlrtRSI = { 40, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtRSInfo sf_emlrtRSI = { 41, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtRSInfo tf_emlrtRSI = { 46, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtRSInfo uf_emlrtRSI = { 26, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 2, 36, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 46, 30, "modes2",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 40, 44, "modes2",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { 1, 32, 31, 14, "hist_smoothed",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 31, 14, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  1 };

static emlrtBCInfo ob_emlrtBCI = { 1, 32, 30, 14, "hist_smoothed",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 30, 14, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  1 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 47, 21, "modes2",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { 1, 32, 14, 30, "hist", "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

/* Function Definitions */
void findModesMeanShift(const emlrtStack *sp, const real_T hist[32],
  emxArray_real_T *modes2, real_T hist_smoothed[32])
{
  int32_T i16;
  int32_T i;
  int8_T r[5];
  real_T b_hist_smoothed;
  real_T y[5];
  real_T x[32];
  int32_T k;
  real_T b_x[5];
  int32_T b_modes2;
  real_T b_y[32];
  int32_T i17;
  boolean_T c_y;
  boolean_T exitg2;
  emxArray_boolean_T *c_modes2;
  emxArray_real_T *d_modes2;
  emxArray_real_T *unusedU0;
  real_T j;
  int32_T exitg1;
  real_T b_r;
  real_T b_j1;
  int32_T loop_ub;
  real_T c_r;
  real_T j2;
  emxArray_int32_T *iidx;
  emxArray_real_T *e_modes2;
  boolean_T guard1 = false;
  int32_T i18;
  boolean_T b_guard1 = false;
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
  covrtLogFcn(&emlrtCoverageInstance, 9U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 0);
  i16 = modes2->size[0] * modes2->size[1];
  modes2->size[0] = 0;
  modes2->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)modes2, i16, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);

  /*  efficient mean-shift approximation by histogram smoothing */
  /*  compute smoothed histogram */
  i = 0;
  while (i < 32) {
    covrtLogFor(&emlrtCoverageInstance, 9U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 1);
    for (k = 0; k < 5; k++) {
      b_modes2 = (i + k) - 2;
      r[k] = (int8_T)(b_modes2 - (int32_T)muDoubleScalarFloor((real_T)b_modes2 /
        32.0) * 32);
      y[k] = muDoubleScalarExp(-0.5 * (-2.0 + (real_T)k) * (-2.0 + (real_T)k)) /
        2.5066282746310002;
    }

    for (i16 = 0; i16 < 5; i16++) {
      i17 = r[i16] + 1;
      if (!((i17 >= 1) && (i17 <= 32))) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 32, &qb_emlrtBCI, sp);
      }

      b_x[i16] = hist[i17 - 1] * y[i16];
    }

    b_hist_smoothed = b_x[0];
    for (k = 0; k < 4; k++) {
      b_hist_smoothed += b_x[k + 1];
    }

    hist_smoothed[i] = b_hist_smoothed;
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 9U, 0U, 0, 0);

  /*  check if at least one entry is non-zero */
  /*  (otherwise mode finding may run infinitly) */
  b_hist_smoothed = hist_smoothed[0];
  for (i16 = 0; i16 < 32; i16++) {
    x[i16] = hist_smoothed[i16] - b_hist_smoothed;
  }

  for (k = 0; k < 32; k++) {
    b_y[k] = muDoubleScalarAbs(x[k]);
  }

  c_y = true;
  k = 0;
  exitg2 = false;
  while ((!exitg2) && (k < 32)) {
    if (!(b_y[k] < 1.0E-5)) {
      c_y = false;
      exitg2 = true;
    } else {
      k++;
    }
  }

  if (covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 0, c_y)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 2);
  } else {
    /*  mode finding */
    i = 0;
    emxInit_boolean_T(sp, &c_modes2, 1, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &d_modes2, 2, &w_emlrtRTEI, true);
    while (i < 32) {
      covrtLogFor(&emlrtCoverageInstance, 9U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 3);
      j = 1.0 + (real_T)i;
      do {
        exitg1 = 0;
        covrtLogWhile(&emlrtCoverageInstance, 9U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 4);
        b_hist_smoothed = ((j + 1.0) - 1.0) / 32.0;
        b_r = ((j + 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0;
        b_j1 = (((j + 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0)
          + 1.0;
        b_hist_smoothed = ((j - 1.0) - 1.0) / 32.0;
        c_r = ((j - 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0;
        j2 = (((j - 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0) +
          1.0;
        if (b_r + 1.0 != (int32_T)(b_r + 1.0)) {
          emlrtIntegerCheckR2012b(b_r + 1.0, &g_emlrtDCI, sp);
        }

        i16 = (int32_T)(b_r + 1.0);
        if (!((i16 >= 1) && (i16 <= 32))) {
          emlrtDynamicBoundsCheckR2012b(i16, 1, 32, &ob_emlrtBCI, sp);
        }

        if (c_r + 1.0 != (int32_T)(c_r + 1.0)) {
          emlrtIntegerCheckR2012b(c_r + 1.0, &f_emlrtDCI, sp);
        }

        i16 = (int32_T)(c_r + 1.0);
        if (!((i16 >= 1) && (i16 <= 32))) {
          emlrtDynamicBoundsCheckR2012b(i16, 1, 32, &nb_emlrtBCI, sp);
        }

        guard1 = false;
        if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 0, hist_smoothed
                         [(int32_T)b_j1 - 1] >= hist_smoothed[(int32_T)j - 1]) &&
            covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 1, hist_smoothed
                         [(int32_T)b_j1 - 1] >= hist_smoothed[(int32_T)j2 - 1]))
        {
          covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 0, true);
          covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 1, true);
          covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 5);
          j = b_r + 1.0;
          guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 0, false);
          covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 1, false);
          if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 2, hist_smoothed
                           [(int32_T)j2 - 1] > hist_smoothed[(int32_T)j - 1]) &&
              covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 3, hist_smoothed
                           [(int32_T)j2 - 1] > hist_smoothed[(int32_T)b_j1 - 1]))
          {
            covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 1, true);
            covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 2, true);
            covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 6);
            j = c_r + 1.0;
            guard1 = true;
          } else {
            exitg1 = 1;
          }
        }

        if (guard1) {
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }
      } while (exitg1 == 0);

      covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 1, false);
      covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 2, false);
      covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 7);
      b_guard1 = false;
      if (covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 4, modes2->size[0] == 0))
      {
        b_guard1 = true;
      } else {
        i16 = modes2->size[1];
        if (!(1 <= i16)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i16, &mb_emlrtBCI, sp);
        }

        loop_ub = modes2->size[0];
        i16 = c_modes2->size[0];
        c_modes2->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)c_modes2, i16, (int32_T)sizeof
                          (boolean_T), &w_emlrtRTEI);
        for (i16 = 0; i16 < loop_ub; i16++) {
          c_modes2->data[i16] = (modes2->data[i16] == j);
        }

        st.site = &rf_emlrtRSI;
        if (!covrtLogCond(&emlrtCoverageInstance, 9U, 0U, 5, any(&st, c_modes2)))
        {
          b_guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 2, false);
          covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 3, false);
        }
      }

      if (b_guard1) {
        covrtLogMcdc(&emlrtCoverageInstance, 9U, 0U, 2, true);
        covrtLogIf(&emlrtCoverageInstance, 9U, 0U, 3, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 8);
        st.site = &sf_emlrtRSI;
        b_st.site = &od_emlrtRSI;
        c_st.site = &cd_emlrtRSI;
        if ((2 == modes2->size[1]) || ((modes2->size[0] == 0) || (modes2->size[1]
              == 0))) {
          c_y = true;
        } else {
          c_y = false;
        }

        if (c_y) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if (!((modes2->size[0] == 0) || (modes2->size[1] == 0))) {
          k = modes2->size[0];
        } else {
          k = 0;
        }

        i16 = d_modes2->size[0] * d_modes2->size[1];
        d_modes2->size[0] = k + 1;
        d_modes2->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)d_modes2, i16, (int32_T)sizeof
                          (real_T), &w_emlrtRTEI);
        for (i16 = 0; i16 < 2; i16++) {
          for (i17 = 0; i17 < k; i17++) {
            d_modes2->data[i17 + d_modes2->size[0] * i16] = modes2->data[i17 + k
              * i16];
          }
        }

        d_modes2->data[k] = j;
        d_modes2->data[k + d_modes2->size[0]] = hist_smoothed[(int32_T)j - 1];
        i16 = modes2->size[0] * modes2->size[1];
        modes2->size[0] = d_modes2->size[0];
        modes2->size[1] = d_modes2->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)modes2, i16, (int32_T)sizeof
                          (real_T), &w_emlrtRTEI);
        loop_ub = d_modes2->size[1];
        for (i16 = 0; i16 < loop_ub; i16++) {
          k = d_modes2->size[0];
          for (i17 = 0; i17 < k; i17++) {
            modes2->data[i17 + modes2->size[0] * i16] = d_modes2->data[i17 +
              d_modes2->size[0] * i16];
          }
        }
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&d_modes2);
    emxFree_boolean_T(&c_modes2);
    emxInit_real_T1(sp, &unusedU0, 1, &w_emlrtRTEI, true);
    covrtLogFor(&emlrtCoverageInstance, 9U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 9U, 9);

    /*  sort */
    i16 = modes2->size[1];
    if (!(2 <= i16)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i16, &lb_emlrtBCI, sp);
    }

    st.site = &tf_emlrtRSI;
    loop_ub = modes2->size[0];
    i16 = unusedU0->size[0];
    unusedU0->size[0] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)unusedU0, i16, (int32_T)sizeof
                      (real_T), &w_emlrtRTEI);
    for (i16 = 0; i16 < loop_ub; i16++) {
      unusedU0->data[i16] = modes2->data[i16 + modes2->size[0]];
    }

    emxInit_int32_T(&st, &iidx, 1, &w_emlrtRTEI, true);
    emxInit_real_T(&st, &e_modes2, 2, &w_emlrtRTEI, true);
    b_st.site = &uf_emlrtRSI;
    sort(&b_st, unusedU0, iidx);
    k = modes2->size[0];
    b_modes2 = modes2->size[1];
    i16 = e_modes2->size[0] * e_modes2->size[1];
    e_modes2->size[0] = iidx->size[0];
    e_modes2->size[1] = b_modes2;
    emxEnsureCapacity(sp, (emxArray__common *)e_modes2, i16, (int32_T)sizeof
                      (real_T), &w_emlrtRTEI);
    emxFree_real_T(&unusedU0);
    for (i16 = 0; i16 < b_modes2; i16++) {
      loop_ub = iidx->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        i18 = iidx->data[i17];
        if (!((i18 >= 1) && (i18 <= k))) {
          emlrtDynamicBoundsCheckR2012b(i18, 1, k, &pb_emlrtBCI, sp);
        }

        e_modes2->data[i17 + e_modes2->size[0] * i16] = modes2->data[(i18 +
          modes2->size[0] * i16) - 1];
      }
    }

    emxFree_int32_T(&iidx);
    i16 = modes2->size[0] * modes2->size[1];
    modes2->size[0] = e_modes2->size[0];
    modes2->size[1] = e_modes2->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)modes2, i16, (int32_T)sizeof
                      (real_T), &w_emlrtRTEI);
    loop_ub = e_modes2->size[1];
    for (i16 = 0; i16 < loop_ub; i16++) {
      k = e_modes2->size[0];
      for (i17 = 0; i17 < k; i17++) {
        modes2->data[i17 + modes2->size[0] * i16] = e_modes2->data[i17 +
          e_modes2->size[0] * i16];
      }
    }

    emxFree_real_T(&e_modes2);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (findModesMeanShift.c) */
