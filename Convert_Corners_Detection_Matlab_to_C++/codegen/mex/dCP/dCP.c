/*
 * dCP.c
 *
 * Code generation for function 'dCP'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "dCP_emxutil.h"
#include "detectCheckerboard.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 2,     /* lineNo */
  "dCP",                               /* fcnName */
  "/home/luis/Desktop/CornersDetect_Matlab_C++/dCP.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 146, /* lineNo */
  "detectCheckerboardPoints",          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 230, /* lineNo */
  "detectCheckerboardPoints",          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 231, /* lineNo */
  "detectCheckerboardPoints",          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 326, /* lineNo */
  "detectCheckerboardPoints",          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 39,  /* lineNo */
  "validateImage",                     /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+inputValidation/validateImage.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 49,  /* lineNo */
  "validateImage",                     /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+inputValidation/validateImage.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 478, /* lineNo */
  "detectCheckerboardPoints",          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 483, /* lineNo */
  "detectCheckerboardPoints",          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 469, /* lineNo */
  1,                                   /* colNo */
  "detectCheckerboardPoints",          /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/detectCheckerboardPoints.m"/* pName */
};

static emlrtRTEInfo gm_emlrtRTEI = { 114,/* lineNo */
  28,                                  /* colNo */
  "validateattributes",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pName */
};

/* Function Definitions */
void dCP(const emlrtStack *sp, const emxArray_uint8_T *I, emxArray_real_T
         *imagePoints, real_T boardSize[2])
{
  emxArray_real32_T *b_I;
  int32_T i0;
  int32_T loop_ub;
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
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &e_emlrtRSI;
  e_st.site = &f_emlrtRSI;
  f_st.site = &g_emlrtRSI;
  if ((I->size[0] == 0) || (I->size[1] == 0)) {
    emlrtErrMsgIdAndExplicitTxt(&f_st, &gm_emlrtRTEI,
      "MATLAB:validateImage:expectedNonempty", 26, "Expected I to be nonempty.");
  }

  emxInit_real32_T(&f_st, &b_I, 2, &emlrtRTEI, true);
  c_st.site = &d_emlrtRSI;
  i0 = b_I->size[0] * b_I->size[1];
  b_I->size[0] = I->size[0];
  b_I->size[1] = I->size[1];
  emxEnsureCapacity_real32_T(&c_st, b_I, i0, &emlrtRTEI);
  loop_ub = I->size[0] * I->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_I->data[i0] = (real32_T)I->data[i0] / 255.0F;
  }

  d_st.site = &h_emlrtRSI;
  detectCheckerboard(&d_st, b_I, imagePoints, boardSize);
  if ((imagePoints->size[0] == 0) || (imagePoints->size[1] == 0)) {
    d_st.site = &i_emlrtRSI;
    b_detectCheckerboard(&d_st, b_I, imagePoints, boardSize);
  }

  emxFree_real32_T(&b_I);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (dCP.c) */
