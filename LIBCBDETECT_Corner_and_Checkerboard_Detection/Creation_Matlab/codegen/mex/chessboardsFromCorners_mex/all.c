/*
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "all.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo md_emlrtRSI = { 12, "all",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const boolean_T x_data[], const int32_T
              x_size[2])
{
  boolean_T y;
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg2;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &md_emlrtRSI;
  p = false;
  b_p = false;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 2) {
      if (x_size[k] != 0) {
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &yb_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }

  if ((x_size[1] == 1) || (x_size[1] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &xb_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k <= x_size[1])) {
    if (!x_data[k - 1]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

boolean_T b_all(const real_T x[42])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 42)) {
    if (x[k] == 0.0) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

boolean_T c_all(const real_T x[35])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 35)) {
    if (x[k] == 0.0) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

boolean_T d_all(const real_T x[16])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    if (x[k] == 0.0) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (all.c) */
