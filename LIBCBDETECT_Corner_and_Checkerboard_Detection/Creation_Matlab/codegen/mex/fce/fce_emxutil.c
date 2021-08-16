/*
 * fce_emxutil.c
 *
 * Code generation for function 'fce_emxutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "fce_emxutil.h"
#include "blas.h"

/* Function Declarations */
static void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
  emxArray_real_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxExpand_cell_wrap_0_1x4(const emlrtStack *sp, cell_wrap_0 data[4],
  int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation);
static void emxTrim_cell_wrap_0_1x4(cell_wrap_0 data[4], int32_T fromIndex,
  int32_T toIndex);

/* Function Definitions */
static void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
  emxArray_real_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity(sp, (emxArray__common *)*dst, numElDst, (int32_T)sizeof
                    (real_T), srcLocation);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxExpand_cell_wrap_0_1x4(const emlrtStack *sp, cell_wrap_0 data[4],
  int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_0(sp, &data[i], srcLocation, false);
  }
}

static void emxTrim_cell_wrap_0_1x4(cell_wrap_0 data[4], int32_T fromIndex,
  int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_0(&data[i]);
  }
}

void emxCopyStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *dst, const
  cell_wrap_0 *src, const emlrtRTEInfo *srcLocation)
{
  emxCopy_real_T(sp, &dst->f1, &src->f1, srcLocation);
}

void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray, int32_T
  oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
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
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

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

void emxEnsureCapacity_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 data[4],
  int32_T size[2], int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  newNumel = size[0] * size[1];
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_0_1x4(data, newNumel, oldNumel);
  } else {
    if (oldNumel < newNumel) {
      emxExpand_cell_wrap_0_1x4(sp, data, oldNumel, newNumel, srcLocation);
    }
  }
}

void emxFreeMatrix_cell_wrap_0(cell_wrap_0 pMatrix[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    emxFreeStruct_cell_wrap_0(&pMatrix[i]);
  }
}

void emxFreeMatrix_cell_wrap_01(cell_wrap_0 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_0(&pMatrix[i]);
  }
}

void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

void emxFreeStruct_struct_T(struct_T *pStruct)
{
  emxFree_real_T(&pStruct->p);
  emxFree_real_T(&pStruct->v1);
  emxFree_real_T(&pStruct->v2);
  emxFree_real_T(&pStruct->score);
}

void emxFreeStruct_struct_T1(b_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->p);
  emxFree_real_T(&pStruct->v1);
  emxFree_real_T(&pStruct->v2);
}

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_cell_wrap_0_1x4(emxArray_cell_wrap_0_1x4 *pEmxArray)
{
  int32_T numEl;
  int32_T i;
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= pEmxArray->size[i];
  }

  for (i = 0; i < numEl; i++) {
    emxFreeStruct_cell_wrap_0(&pEmxArray->data[i]);
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
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

void emxInitMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix[5],
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    emxInitStruct_cell_wrap_0(sp, &pMatrix[i], srcLocation, doPush);
  }
}

void emxInitMatrix_cell_wrap_01(const emlrtStack *sp, cell_wrap_0 pMatrix[4],
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_0(sp, &pMatrix[i], srcLocation, doPush);
  }
}

void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 2, srcLocation, doPush);
}

void emxInitStruct_struct_T(const emlrtStack *sp, struct_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->p, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->v1, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->v2, 2, srcLocation, doPush);
  emxInit_real_T1(sp, &pStruct->score, 1, srcLocation, doPush);
}

void emxInitStruct_struct_T1(const emlrtStack *sp, b_struct_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->p, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->v1, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->v2, 2, srcLocation, doPush);
}

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_boolean_T1(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_cell_wrap_0_1x4(emxArray_cell_wrap_0_1x4 *pEmxArray)
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    pEmxArray->size[i] = 0;
  }
}

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (fce_emxutil.c) */
