/*
 * _coder_fce_api.c
 *
 * Code generation for function '_coder_fce_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "_coder_fce_api.h"
#include "fce_emxutil.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo nb_emlrtRTEI = { 1, 1, "_coder_fce_api", "" };

/* Function Declarations */
static uint8_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[921600];
static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static uint8_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[921600];
static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *image,
  const char_T *identifier))[921600];
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static uint8_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[921600]
{
  uint8_T (*y)[921600];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv12[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u_data);
  emlrtSetDimensions((mxArray *)m1, u_size, 2);
  emlrtAssign(&y, m1);
  return y;
}

static uint8_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[921600]
{
  uint8_T (*ret)[921600];
  static const int32_T dims[2] = { 720, 1280 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint8", false, 2U, dims);
  ret = (uint8_T (*)[921600])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *image,
  const char_T *identifier))[921600]
{
  uint8_T (*y)[921600];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(image), &thisId);
  emlrtDestroyArray(&image);
  return y;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv11[2] = { 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv11, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

void fce_api(fceStackData *SD, const mxArray * const prhs[1], const mxArray
             *plhs[2])
{
  real_T (*tam_chess_data)[10];
  emxArray_real_T *corners_uv;
  uint8_T (*image)[921600];
  int32_T tam_chess_size[2];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  tam_chess_data = (real_T (*)[10])mxMalloc(sizeof(real_T [10]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &corners_uv, 2, &nb_emlrtRTEI, true);

  /* Marshall function inputs */
  image = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "image");

  /* Invoke the target function */
  fce(SD, &st, *image, corners_uv, *tam_chess_data, tam_chess_size);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(corners_uv);
  plhs[1] = b_emlrt_marshallOut(*tam_chess_data, tam_chess_size);
  corners_uv->canFreeData = false;
  emxFree_real_T(&corners_uv);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_fce_api.c) */
