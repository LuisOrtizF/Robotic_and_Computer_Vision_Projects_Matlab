/*
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "indexShapeCheck.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo md_emlrtRSI = { 14, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 80, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 23, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 25, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
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

  st.site = &nd_emlrtRSI;
  if (c) {
    emlrtErrorWithMessageIdR2012b(&st, &vm_emlrtRTEI,
      "Coder:FE:PotentialMatrixMatrix", 0);
  }
}

void b_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
  int32_T indexSize)
{
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
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
    nonSingletonDimFound = false;
    if (indexSize != 1) {
      nonSingletonDimFound = true;
    }

    if (nonSingletonDimFound) {
      st.site = &md_emlrtRSI;
      nonSingletonDimFound = ((matrixSize[0] == 1) != (indexSize == 1));
      if (nonSingletonDimFound || (matrixSize[1] != 1)) {
        nonSingletonDimFound = true;
      } else {
        nonSingletonDimFound = false;
      }

      b_st.site = &nd_emlrtRSI;
      if (nonSingletonDimFound) {
        emlrtErrorWithMessageIdR2012b(&b_st, &vm_emlrtRTEI,
          "Coder:FE:PotentialMatrixMatrix", 0);
      }
    }
  }
}

void c_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2], const
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
    st.site = &bj_emlrtRSI;
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
      st.site = &cj_emlrtRSI;
      checkSameShape(&st, indexSize);
    }
  }
}

void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const int32_T
                     indexSize[2])
{
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nonSingletonDimFound = !(matrixSize != 1);
  if (nonSingletonDimFound) {
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
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }

  st.site = &hd_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2012b(&st, &vm_emlrtRTEI,
      "Coder:FE:PotentialVectorVector", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */
