/*
 * findModesMeanShift.c
 *
 * Code generation for function 'findModesMeanShift'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "findModesMeanShift.h"
#include "fce_emxutil.h"
#include "any.h"
#include "sort1.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo ub_emlrtRSI = { 40, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtRSInfo vb_emlrtRSI = { 41, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtRSInfo wb_emlrtRSI = { 46, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtRSInfo ac_emlrtRSI = { 26, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 2, 36, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 46, 30, "modes2", "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 40, 44, "modes2", "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { 1, 32, 31, 14, "hist_smoothed",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 31, 14, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  1 };

static emlrtBCInfo p_emlrtBCI = { 1, 32, 30, 14, "hist_smoothed",
  "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 30, 14, "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 47, 21, "modes2", "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { 1, 32, 14, 30, "hist", "findModesMeanShift",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
  0 };

/* Function Definitions */
void findModesMeanShift(const emlrtStack *sp, const real_T hist[32],
  emxArray_real_T *modes2, real_T hist_smoothed[32])
{
  int32_T i5;
  int32_T i;
  int8_T r[5];
  real_T b_hist_smoothed;
  real_T y[5];
  real_T x[32];
  int32_T k;
  real_T b_x[5];
  int32_T b_modes2;
  real_T b_y[32];
  int32_T i6;
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
  int32_T i7;
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
  covrtLogFcn(&emlrtCoverageInstance, 5U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 0);
  i5 = modes2->size[0] * modes2->size[1];
  modes2->size[0] = 0;
  modes2->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)modes2, i5, (int32_T)sizeof(real_T),
                    &j_emlrtRTEI);

  /*  efficient mean-shift approximation by histogram smoothing */
  /*  compute smoothed histogram */
  i = 0;
  while (i < 32) {
    covrtLogFor(&emlrtCoverageInstance, 5U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 1);
    for (k = 0; k < 5; k++) {
      b_modes2 = (i + k) - 2;
      r[k] = (int8_T)(b_modes2 - (int32_T)muDoubleScalarFloor((real_T)b_modes2 /
        32.0) * 32);
      y[k] = muDoubleScalarExp(-0.5 * (-2.0 + (real_T)k) * (-2.0 + (real_T)k)) /
        2.5066282746310002;
    }

    for (i5 = 0; i5 < 5; i5++) {
      i6 = r[i5] + 1;
      if (!((i6 >= 1) && (i6 <= 32))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, 32, &r_emlrtBCI, sp);
      }

      b_x[i5] = hist[i6 - 1] * y[i5];
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

  covrtLogFor(&emlrtCoverageInstance, 5U, 0U, 0, 0);

  /*  check if at least one entry is non-zero */
  /*  (otherwise mode finding may run infinitly) */
  b_hist_smoothed = hist_smoothed[0];
  for (i5 = 0; i5 < 32; i5++) {
    x[i5] = hist_smoothed[i5] - b_hist_smoothed;
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

  if (covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 0, c_y)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 2);
  } else {
    /*  mode finding */
    i = 0;
    emxInit_boolean_T(sp, &c_modes2, 1, &j_emlrtRTEI, true);
    emxInit_real_T(sp, &d_modes2, 2, &j_emlrtRTEI, true);
    while (i < 32) {
      covrtLogFor(&emlrtCoverageInstance, 5U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 3);
      j = 1.0 + (real_T)i;
      do {
        exitg1 = 0;
        covrtLogWhile(&emlrtCoverageInstance, 5U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 4);
        b_hist_smoothed = ((j + 1.0) - 1.0) / 32.0;
        b_r = ((j + 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0;
        b_j1 = (((j + 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0)
          + 1.0;
        b_hist_smoothed = ((j - 1.0) - 1.0) / 32.0;
        c_r = ((j - 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0;
        j2 = (((j - 1.0) - 1.0) - muDoubleScalarFloor(b_hist_smoothed) * 32.0) +
          1.0;
        if (b_r + 1.0 != (int32_T)(b_r + 1.0)) {
          emlrtIntegerCheckR2012b(b_r + 1.0, &f_emlrtDCI, sp);
        }

        i5 = (int32_T)(b_r + 1.0);
        if (!((i5 >= 1) && (i5 <= 32))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, 32, &p_emlrtBCI, sp);
        }

        if (c_r + 1.0 != (int32_T)(c_r + 1.0)) {
          emlrtIntegerCheckR2012b(c_r + 1.0, &e_emlrtDCI, sp);
        }

        i5 = (int32_T)(c_r + 1.0);
        if (!((i5 >= 1) && (i5 <= 32))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, 32, &o_emlrtBCI, sp);
        }

        guard1 = false;
        if (covrtLogCond(&emlrtCoverageInstance, 5U, 0U, 0, hist_smoothed
                         [(int32_T)b_j1 - 1] >= hist_smoothed[(int32_T)j - 1]) &&
            covrtLogCond(&emlrtCoverageInstance, 5U, 0U, 1, hist_smoothed
                         [(int32_T)b_j1 - 1] >= hist_smoothed[(int32_T)j2 - 1]))
        {
          covrtLogMcdc(&emlrtCoverageInstance, 5U, 0U, 0, true);
          covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 1, true);
          covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 5);
          j = b_r + 1.0;
          guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 5U, 0U, 0, false);
          covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 1, false);
          if (covrtLogCond(&emlrtCoverageInstance, 5U, 0U, 2, hist_smoothed
                           [(int32_T)j2 - 1] > hist_smoothed[(int32_T)j - 1]) &&
              covrtLogCond(&emlrtCoverageInstance, 5U, 0U, 3, hist_smoothed
                           [(int32_T)j2 - 1] > hist_smoothed[(int32_T)b_j1 - 1]))
          {
            covrtLogMcdc(&emlrtCoverageInstance, 5U, 0U, 1, true);
            covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 2, true);
            covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 6);
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

      covrtLogMcdc(&emlrtCoverageInstance, 5U, 0U, 1, false);
      covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 2, false);
      covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 7);
      b_guard1 = false;
      if (covrtLogCond(&emlrtCoverageInstance, 5U, 0U, 4, modes2->size[0] == 0))
      {
        b_guard1 = true;
      } else {
        i5 = modes2->size[1];
        if (!(1 <= i5)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i5, &n_emlrtBCI, sp);
        }

        loop_ub = modes2->size[0];
        i5 = c_modes2->size[0];
        c_modes2->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)c_modes2, i5, (int32_T)sizeof
                          (boolean_T), &j_emlrtRTEI);
        for (i5 = 0; i5 < loop_ub; i5++) {
          c_modes2->data[i5] = (modes2->data[i5] == j);
        }

        st.site = &ub_emlrtRSI;
        if (!covrtLogCond(&emlrtCoverageInstance, 5U, 0U, 5, any(&st, c_modes2)))
        {
          b_guard1 = true;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 5U, 0U, 2, false);
          covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 3, false);
        }
      }

      if (b_guard1) {
        covrtLogMcdc(&emlrtCoverageInstance, 5U, 0U, 2, true);
        covrtLogIf(&emlrtCoverageInstance, 5U, 0U, 3, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 8);
        st.site = &vb_emlrtRSI;
        b_st.site = &qb_emlrtRSI;
        c_st.site = &rb_emlrtRSI;
        if ((2 == modes2->size[1]) || ((modes2->size[0] == 0) || (modes2->size[1]
              == 0))) {
          c_y = true;
        } else {
          c_y = false;
        }

        if (c_y) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if (!((modes2->size[0] == 0) || (modes2->size[1] == 0))) {
          k = modes2->size[0];
        } else {
          k = 0;
        }

        i5 = d_modes2->size[0] * d_modes2->size[1];
        d_modes2->size[0] = k + 1;
        d_modes2->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)d_modes2, i5, (int32_T)sizeof
                          (real_T), &j_emlrtRTEI);
        for (i5 = 0; i5 < 2; i5++) {
          for (i6 = 0; i6 < k; i6++) {
            d_modes2->data[i6 + d_modes2->size[0] * i5] = modes2->data[i6 + k *
              i5];
          }
        }

        d_modes2->data[k] = j;
        d_modes2->data[k + d_modes2->size[0]] = hist_smoothed[(int32_T)j - 1];
        i5 = modes2->size[0] * modes2->size[1];
        modes2->size[0] = d_modes2->size[0];
        modes2->size[1] = d_modes2->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)modes2, i5, (int32_T)sizeof
                          (real_T), &j_emlrtRTEI);
        loop_ub = d_modes2->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          k = d_modes2->size[0];
          for (i6 = 0; i6 < k; i6++) {
            modes2->data[i6 + modes2->size[0] * i5] = d_modes2->data[i6 +
              d_modes2->size[0] * i5];
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
    emxInit_real_T1(sp, &unusedU0, 1, &j_emlrtRTEI, true);
    covrtLogFor(&emlrtCoverageInstance, 5U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 5U, 9);

    /*  sort */
    i5 = modes2->size[1];
    if (!(2 <= i5)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i5, &m_emlrtBCI, sp);
    }

    st.site = &wb_emlrtRSI;
    loop_ub = modes2->size[0];
    i5 = unusedU0->size[0];
    unusedU0->size[0] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)unusedU0, i5, (int32_T)sizeof
                      (real_T), &j_emlrtRTEI);
    for (i5 = 0; i5 < loop_ub; i5++) {
      unusedU0->data[i5] = modes2->data[i5 + modes2->size[0]];
    }

    emxInit_int32_T(&st, &iidx, 1, &j_emlrtRTEI, true);
    emxInit_real_T(&st, &e_modes2, 2, &j_emlrtRTEI, true);
    b_st.site = &ac_emlrtRSI;
    sort(&b_st, unusedU0, iidx);
    k = modes2->size[0];
    b_modes2 = modes2->size[1];
    i5 = e_modes2->size[0] * e_modes2->size[1];
    e_modes2->size[0] = iidx->size[0];
    e_modes2->size[1] = b_modes2;
    emxEnsureCapacity(sp, (emxArray__common *)e_modes2, i5, (int32_T)sizeof
                      (real_T), &j_emlrtRTEI);
    emxFree_real_T(&unusedU0);
    for (i5 = 0; i5 < b_modes2; i5++) {
      loop_ub = iidx->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        i7 = iidx->data[i6];
        if (!((i7 >= 1) && (i7 <= k))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, k, &q_emlrtBCI, sp);
        }

        e_modes2->data[i6 + e_modes2->size[0] * i5] = modes2->data[(i7 +
          modes2->size[0] * i5) - 1];
      }
    }

    emxFree_int32_T(&iidx);
    i5 = modes2->size[0] * modes2->size[1];
    modes2->size[0] = e_modes2->size[0];
    modes2->size[1] = e_modes2->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)modes2, i5, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    loop_ub = e_modes2->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      k = e_modes2->size[0];
      for (i6 = 0; i6 < k; i6++) {
        modes2->data[i6 + modes2->size[0] * i5] = e_modes2->data[i6 +
          e_modes2->size[0] * i5];
      }
    }

    emxFree_real_T(&e_modes2);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (findModesMeanShift.c) */
