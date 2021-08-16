/*
 * fce_emxutil.h
 *
 * Code generation for function 'fce_emxutil'
 *
 */

#ifndef FCE_EMXUTIL_H
#define FCE_EMXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "fce_types.h"

/* Function Declarations */
extern void emxCopyStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *dst,
  const cell_wrap_0 *src, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray,
  int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_cell_wrap_0(const emlrtStack *sp, cell_wrap_0
  data[4], int32_T size[2], int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFreeMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5]);
extern void emxFreeMatrix_cell_wrap_01(cell_wrap_0 pMatrix[4]);
extern void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);
extern void emxFreeStruct_struct_T(struct_T *pStruct);
extern void emxFreeStruct_struct_T1(b_struct_T *pStruct);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_cell_wrap_0_1x4(emxArray_cell_wrap_0_1x4 *pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix
  [5], const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitMatrix_cell_wrap_01(const emlrtStack *sp, cell_wrap_0
  pMatrix[4], const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_struct_T(const emlrtStack *sp, struct_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_struct_T1(const emlrtStack *sp, b_struct_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_boolean_T1(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_cell_wrap_0_1x4(emxArray_cell_wrap_0_1x4 *pEmxArray);
extern void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);

#endif

/* End of code generation (fce_emxutil.h) */
