/*
 * File: _coder_fce_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 24-Jan-2017 19:27:02
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_fce_api.h"
#include "_coder_fce_mex.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "fce", NULL,
  false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200]);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[100]);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const struct1_T
  u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *chessboards,
  const char_T *identifier, cell_2 *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *corners, const
  char_T *identifier, struct0_T *y);
static const mxArray *emlrt_marshallOut(const cell_wrap_0 u[5]);
static void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel,
  int32_T elementSize);
static void emxFreeMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5]);
static void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);
static void emxFreeStruct_struct1_T(struct1_T *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInitMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix
  [5], boolean_T doPush);
static void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct,
  boolean_T doPush);
static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  boolean_T doPush);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_2 *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[42]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[35]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16]);
static uint8_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *img,
  const char_T *identifier))[921600];
static uint8_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[921600];
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tau, const
  char_T *identifier);
static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[100]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[42]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[35]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16]);
static uint8_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[921600];
static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct0_T *y
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "p", "v1", "v2", "score" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "p";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "p")), &thisId,
                     y->p);
  thisId.fIdentifier = "v1";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "v1")),
                     &thisId, y->v1);
  thisId.fIdentifier = "v2";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "v2")),
                     &thisId, y->v2);
  thisId.fIdentifier = "score";
  d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "score")),
                     &thisId, y->score);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  real_T *pData;
  int32_T i1;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m0 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m0);
  i1 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i1] = u->data[b_i + u->size[0] * i];
      i1++;
    }
  }

  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y[200]
 * Return Type  : void
 */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y[100]
 * Return Type  : void
 */
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[100])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const struct1_T u
 * Return Type  : const mxArray *
 */
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const struct1_T
  u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T i2;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m2;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &b_u, 1, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(y, b_emlrt_marshallOut(u.p), "p", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u.v1), "v1", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u.v2), "v2", 0);
  i2 = b_u->size[0];
  b_u->size[0] = u.score->size[0];
  emxEnsureCapacity((emxArray__common *)b_u, i2, (int32_T)sizeof(real_T));
  loop_ub = u.score->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_u->data[i2] = u.score->data[i2];
  }

  b_y = NULL;
  m2 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
  i2 = 0;
  for (loop_ub = 0; loop_ub < b_u->size[0]; loop_ub++) {
    pData[i2] = b_u->data[loop_ub];
    i2++;
  }

  emlrtAssign(&b_y, m2);
  emlrtAddField(y, b_y, "score", 0);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *chessboards
 *                const char_T *identifier
 *                cell_2 *y
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *chessboards,
  const char_T *identifier, cell_2 *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(chessboards), &thisId, y);
  emlrtDestroyArray(&chessboards);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *corners
 *                const char_T *identifier
 *                struct0_T *y
 * Return Type  : void
 */
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *corners, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(corners), &thisId, y);
  emlrtDestroyArray(&corners);
}

/*
 * Arguments    : const cell_wrap_0 u[5]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const cell_wrap_0 u[5])
{
  const mxArray *y;
  int32_T iv0[2];
  int32_T i0;
  const cell_wrap_0 *r0;
  y = NULL;
  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = 1 + (i0 << 2);
  }

  emlrtAssign(&y, emlrtCreateCellArrayR2014a(2, iv0));
  for (i0 = 0; i0 < 5; i0++) {
    r0 = &u[i0];
    emlrtSetCell(y, i0, b_emlrt_marshallOut(r0->f1));
  }

  return y;
}

/*
 * Arguments    : emxArray__common *emxArray
 *                int32_T oldNumel
 *                int32_T elementSize
 * Return Type  : void
 */
static void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel,
  int32_T elementSize)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : cell_wrap_0 pMatrix[5]
 * Return Type  : void
 */
static void emxFreeMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    emxFreeStruct_cell_wrap_0(&pMatrix[i]);
  }
}

/*
 * Arguments    : cell_wrap_0 *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

/*
 * Arguments    : struct1_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct1_T(struct1_T *pStruct)
{
  emxFree_real_T(&pStruct->p);
  emxFree_real_T(&pStruct->v1);
  emxFree_real_T(&pStruct->v2);
  emxFree_real_T(&pStruct->score);
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                cell_wrap_0 pMatrix[5]
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix
  [5], boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    emxInitStruct_cell_wrap_0(sp, &pMatrix[i], doPush);
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                cell_wrap_0 *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct,
  boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 2, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct1_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->p, 2, doPush);
  emxInit_real_T(sp, &pStruct->v1, 2, doPush);
  emxInit_real_T(sp, &pStruct->v2, 2, doPush);
  emxInit_real_T1(sp, &pStruct->score, 1, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                cell_2 *y
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_2 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv1[2];
  boolean_T bv0[2];
  int32_T i;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  for (i = 0; i < 2; i++) {
    iv1[i] = 1 + (i << 2);
    bv0[i] = false;
  }

  emlrtCheckCell(sp, parentId, u, 2U, iv1, bv0);
  thisId.fIdentifier = "1";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 0)), &thisId,
                     y->f1);
  thisId.fIdentifier = "2";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 1)), &thisId,
                     y->f2);
  thisId.fIdentifier = "3";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 2)), &thisId,
                     y->f3);
  thisId.fIdentifier = "4";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 3)), &thisId,
                     y->f4);
  thisId.fIdentifier = "5";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 4)), &thisId,
                     y->f5);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y[42]
 * Return Type  : void
 */
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[42])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y[35]
 * Return Type  : void
 */
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[35])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y[16]
 * Return Type  : void
 */
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *img
 *                const char_T *identifier
 * Return Type  : uint8_T (*)[921600]
 */
static uint8_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *img,
  const char_T *identifier))[921600]
{
  uint8_T (*y)[921600];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = k_emlrt_marshallIn(sp, emlrtAlias(img), &thisId);
  emlrtDestroyArray(&img);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : uint8_T (*)[921600]
 */
  static uint8_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[921600]
{
  uint8_T (*y)[921600];
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *tau
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tau, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(tau), &thisId);
  emlrtDestroyArray(&tau);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret[200]
 * Return Type  : void
 */
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200])
{
  static const int32_T dims[2] = { 100, 2 };

  int32_T i3;
  int32_T i4;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i3 = 0; i3 < 2; i3++) {
    for (i4 = 0; i4 < 100; i4++) {
      ret[i4 + 100 * i3] = (*(real_T (*)[200])mxGetData(src))[i4 + 100 * i3];
    }
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret[100]
 * Return Type  : void
 */
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[100])
{
  static const int32_T dims[1] = { 100 };

  int32_T i5;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i5 = 0; i5 < 100; i5++) {
    ret[i5] = (*(real_T (*)[100])mxGetData(src))[i5];
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret[42]
 * Return Type  : void
 */
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[42])
{
  static const int32_T dims[2] = { 6, 7 };

  int32_T i6;
  int32_T i7;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i6 = 0; i6 < 7; i6++) {
    for (i7 = 0; i7 < 6; i7++) {
      ret[i7 + 6 * i6] = (*(real_T (*)[42])mxGetData(src))[i7 + 6 * i6];
    }
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret[35]
 * Return Type  : void
 */
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[35])
{
  static const int32_T dims[2] = { 5, 7 };

  int32_T i8;
  int32_T i9;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i8 = 0; i8 < 7; i8++) {
    for (i9 = 0; i9 < 5; i9++) {
      ret[i9 + 5 * i8] = (*(real_T (*)[35])mxGetData(src))[i9 + 5 * i8];
    }
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret[16]
 * Return Type  : void
 */
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims[2] = { 4, 4 };

  int32_T i10;
  int32_T i11;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i10 = 0; i10 < 4; i10++) {
    for (i11 = 0; i11 < 4; i11++) {
      ret[i11 + (i10 << 2)] = (*(real_T (*)[16])mxGetData(src))[i11 + (i10 << 2)];
    }
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : uint8_T (*)[921600]
 */
static uint8_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[921600]
{
  uint8_T (*ret)[921600];
  static const int32_T dims[2] = { 720, 1280 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint8", false, 2U, dims);
  ret = (uint8_T (*)[921600])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
  static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void chessboardsFromCorners_api(const mxArray * const prhs[1], const mxArray
  *plhs[1])
{
  cell_wrap_0 chessboards[5];
  struct0_T corners;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitMatrix_cell_wrap_0(&st, chessboards, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP((const mxArray *)prhs[0]), "corners",
                   &corners);

  /* Invoke the target function */
  chessboardsFromCorners(&corners, chessboards);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(chessboards);
  emxFreeMatrix_cell_wrap_0(chessboards);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : const mxArray * const prhs[2]
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void extractuv_api(const mxArray * const prhs[2], const mxArray *plhs[2])
{
  emxArray_real_T *corners_uv;
  emxArray_real_T *tam_chess;
  cell_2 chessboards;
  struct0_T corners;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &corners_uv, 2, true);
  emxInit_real_T(&st, &tam_chess, 2, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAliasP((const mxArray *)prhs[0]), "chessboards",
                     &chessboards);
  emlrt_marshallIn(&st, emlrtAliasP((const mxArray *)prhs[1]), "corners",
                   &corners);

  /* Invoke the target function */
  extractuv(&chessboards, &corners, corners_uv, tam_chess);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(corners_uv);
  plhs[1] = c_emlrt_marshallOut(tam_chess);
  tam_chess->canFreeData = false;
  emxFree_real_T(&tam_chess);
  corners_uv->canFreeData = false;
  emxFree_real_T(&corners_uv);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void fce_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  fce_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void fce_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void fce_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * Arguments    : const mxArray *prhs[3]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void findCorners_api(const mxArray *prhs[3], const mxArray *plhs[1])
{
  struct1_T corners3;
  uint8_T (*img)[921600];
  real_T tau;
  real_T refine_corners;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct1_T(&st, &corners3, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  img = j_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img");
  tau = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "tau");
  refine_corners = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "refine_corners");

  /* Invoke the target function */
  findCorners(*img, tau, refine_corners, &corners3);

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(&st, corners3);
  emxFreeStruct_struct1_T(&corners3);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * File trailer for _coder_fce_api.c
 *
 * [EOF]
 */
