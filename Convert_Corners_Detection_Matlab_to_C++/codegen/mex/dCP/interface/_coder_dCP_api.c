/*
 * _coder_dCP_api.c
 *
 * Code generation for function '_coder_dCP_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "_coder_dCP_api.h"
#include "dCP_emxutil.h"
#include "dCP_data.h"

/* Variable Definitions */
static emlrtRTEInfo mk_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_dCP_api",                    /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint8_T *y);
static const mxArray *b_emlrt_marshallOut(const real_T u[2]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint8_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *I, const
  char_T *identifier, emxArray_uint8_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint8_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[2])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv21[2] = { 0, 0 };

  static const int32_T iv22[2] = { 1, 2 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv21, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m2, iv22, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint8_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv23[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "uint8", false, 2U, dims, &bv0[0],
    iv23);
  ret->size[0] = iv23[0];
  ret->size[1] = iv23[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (uint8_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *I, const
  char_T *identifier, emxArray_uint8_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(I), &thisId, y);
  emlrtDestroyArray(&I);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv20[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv20, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

void dCP_api(const mxArray * const prhs[1], const mxArray *plhs[2])
{
  real_T (*boardSize)[2];
  emxArray_uint8_T *I;
  emxArray_real_T *imagePoints;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  boardSize = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_uint8_T(&st, &I, 2, &mk_emlrtRTEI, true);
  emxInit_real_T1(&st, &imagePoints, 2, &mk_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "I", I);

  /* Invoke the target function */
  dCP(&st, I, imagePoints, *boardSize);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(imagePoints);
  plhs[1] = b_emlrt_marshallOut(*boardSize);
  imagePoints->canFreeData = false;
  emxFree_real_T(&imagePoints);
  I->canFreeData = false;
  emxFree_uint8_T(&I);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_dCP_api.c) */
