/*
 * nonMaximumSuppression.c
 *
 * Code generation for function 'nonMaximumSuppression'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "nonMaximumSuppression.h"
#include "fce_emxutil.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 45, "nonMaximumSuppression",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\nonMaximumSuppression.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 2, 19, "nonMaximumSuppression",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\nonMaximumSuppression.m"
};

static emlrtBCInfo k_emlrtBCI = { 1, 720, 34, 27, "img", "nonMaximumSuppression",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\nonMaximumSuppression.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { 1, 1280, 34, 30, "img",
  "nonMaximumSuppression",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\nonMaximumSuppression.m",
  0 };

/* Function Definitions */
void nonMaximumSuppression(const emlrtStack *sp, const real_T img[921600],
  emxArray_real_T *maxima)
{
  int32_T i3;
  int32_T i;
  emxArray_real_T *b_maxima;
  int32_T b_i;
  int32_T j;
  int32_T b_j;
  int32_T maxi;
  int32_T maxj;
  real_T maxval;
  int32_T i2;
  int32_T b_i2;
  int32_T failed;
  int32_T j2;
  int32_T exitg1;
  int32_T b_j2;
  int32_T exitg2;
  int32_T loop_ub;
  boolean_T b1;
  int32_T result;
  int32_T i4;
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
  covrtLogFcn(&emlrtCoverageInstance, 3U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 0);

  /*  extract parameters */
  /*  init maxima list */
  i3 = maxima->size[0] * maxima->size[1];
  maxima->size[0] = 0;
  maxima->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)maxima, i3, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);

  /*  non maximum suppression */
  i = 0;
  emxInit_real_T(sp, &b_maxima, 2, &h_emlrtRTEI, true);
  while (i < 316) {
    b_i = 9 + (i << 2);
    covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 0, 1);
    j = 0;
    while (j < 176) {
      b_j = 9 + (j << 2);
      covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 1);
      maxi = b_i;
      maxj = b_j;
      maxval = img[(b_j + 720 * (b_i - 1)) - 1];
      i2 = 0;
      while (i2 <= 3) {
        b_i2 = b_i + i2;
        covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 2, 1);
        j2 = 0;
        while (j2 <= 3) {
          b_j2 = b_j + j2;
          covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 3, 1);
          covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 2);
          if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 0, img[(b_j2 + 720 *
                (b_i2 - 1)) - 1] > maxval)) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 3);
            maxi = b_i2;
            maxj = b_j2;
            maxval = img[(b_j2 + 720 * (b_i2 - 1)) - 1];
          }

          j2++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 3, 0);
        i2++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 2, 0);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 4);
      failed = 0;
      i2 = 0;
      do {
        exitg1 = 0;
        if (i2 <= 6) {
          b_i2 = (maxi + i2) - 3;
          covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 4, 1);
          j2 = 0;
          do {
            exitg2 = 0;
            if (j2 <= 6) {
              b_j2 = (maxj + j2) - 3;
              covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 5, 1);
              covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 5);
              loop_ub = b_j2;
              if (!(loop_ub <= 720)) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 720, &k_emlrtBCI, sp);
              }

              loop_ub = b_i2;
              if (!(loop_ub <= 1280)) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 1280, &l_emlrtBCI, sp);
              }

              if (covrtLogCond(&emlrtCoverageInstance, 3U, 0U, 0, img[(b_j2 +
                    720 * (b_i2 - 1)) - 1] > maxval) && (covrtLogCond
                   (&emlrtCoverageInstance, 3U, 0U, 1, b_i2 < b_i) ||
                   covrtLogCond(&emlrtCoverageInstance, 3U, 0U, 2, b_i2 > b_i +
                                3) || covrtLogCond(&emlrtCoverageInstance, 3U,
                    0U, 3, b_j2 < b_j) || covrtLogCond(&emlrtCoverageInstance,
                    3U, 0U, 4, b_j2 > b_j + 3))) {
                covrtLogMcdc(&emlrtCoverageInstance, 3U, 0U, 0, true);
                covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 1, true);
                covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 6);
                failed = 1;
                exitg2 = 1;
              } else {
                covrtLogMcdc(&emlrtCoverageInstance, 3U, 0U, 0, false);
                covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 1, false);
                j2++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }
            } else {
              covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 5, 0);
              exitg2 = 1;
            }
          } while (exitg2 == 0);

          if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 2, failed != 0)) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 7);
            exitg1 = 1;
          } else {
            i2++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }
        } else {
          covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 4, 0);
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (covrtLogCond(&emlrtCoverageInstance, 3U, 0U, 5, maxval >= 0.025) &&
          (!covrtLogCond(&emlrtCoverageInstance, 3U, 0U, 6, failed != 0))) {
        covrtLogMcdc(&emlrtCoverageInstance, 3U, 0U, 1, true);
        covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 3, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 8);
        st.site = &pb_emlrtRSI;
        b_st.site = &qb_emlrtRSI;
        c_st.site = &rb_emlrtRSI;
        if ((2 == maxima->size[1]) || ((maxima->size[0] == 0) || (maxima->size[1]
              == 0))) {
          b1 = true;
        } else {
          b1 = false;
        }

        if (b1) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if (!((maxima->size[0] == 0) || (maxima->size[1] == 0))) {
          result = maxima->size[0];
        } else {
          result = 0;
        }

        i3 = b_maxima->size[0] * b_maxima->size[1];
        b_maxima->size[0] = result + 1;
        b_maxima->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)b_maxima, i3, (int32_T)sizeof
                          (real_T), &h_emlrtRTEI);
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
        emxEnsureCapacity(sp, (emxArray__common *)maxima, i3, (int32_T)sizeof
                          (real_T), &h_emlrtRTEI);
        result = b_maxima->size[1];
        for (i3 = 0; i3 < result; i3++) {
          loop_ub = b_maxima->size[0];
          for (i4 = 0; i4 < loop_ub; i4++) {
            maxima->data[i4 + maxima->size[0] * i3] = b_maxima->data[i4 +
              b_maxima->size[0] * i3];
          }
        }
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 3U, 0U, 1, false);
        covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 3, false);
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 1, 0);
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_maxima);
  covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (nonMaximumSuppression.c) */
