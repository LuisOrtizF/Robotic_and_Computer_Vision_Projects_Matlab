/*
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "indexShapeCheck.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo bf_emlrtRSI = { 23, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

static emlrtRSInfo cf_emlrtRSI = { 25, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

static emlrtRSInfo df_emlrtRSI = { 80, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

static emlrtRSInfo fh_emlrtRSI = { 18, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

static emlrtRTEInfo qc_emlrtRTEI = { 88, 9, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

/* Function Declarations */
static void checkSameShape(const emlrtStack *sp, const int32_T size1[2]);

/* Function Definitions */
static void checkSameShape(const emlrtStack *sp, const int32_T size1[2])
{
  boolean_T c;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  c = (size1[0] == 1);
  if (c || (!(size1[1] == 1))) {
    c = true;
  }

  st.site = &df_emlrtRSI;
  if (!c) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &qc_emlrtRTEI,
      "Coder:FE:PotentialMatrixMatrix", 0);
  }
}

void b_indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const int32_T
  indexSize[2])
{
  boolean_T guard1 = false;
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  guard1 = false;
  if (!(matrixSize != 1)) {
    nonSingletonDimFound = false;
    if (indexSize[0] != 1) {
      nonSingletonDimFound = true;
    }

    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }

    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    nonSingletonDimFound = false;
  }

  st.site = &fh_emlrtRSI;
  if (!nonSingletonDimFound) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &qc_emlrtRTEI,
      "Coder:FE:PotentialVectorVector", 0);
  }
}

void indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2], const
                     int32_T indexSize[2])
{
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nonSingletonDimFound = false;
  if (matrixSize[0] != 1) {
    nonSingletonDimFound = true;
  }

  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }

  if (nonSingletonDimFound) {
    st.site = &bf_emlrtRSI;
    checkSameShape(&st, matrixSize);
  } else {
    nonSingletonDimFound = false;
    if (indexSize[0] != 1) {
      nonSingletonDimFound = true;
    }

    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }

    if (nonSingletonDimFound) {
      st.site = &cf_emlrtRSI;
      checkSameShape(&st, indexSize);
    }
  }
}

/* End of code generation (indexShapeCheck.c) */
