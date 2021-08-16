//
// File: fce.h
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 24-Jan-2017 19:27:02
//
#ifndef FCE_H
#define FCE_H

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "fce_types.h"

// Function Declarations
extern void chessboardsFromCorners(const struct0_T *corners, cell_wrap_0
  chessboards[5]);
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int
  numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxDestroyMatrix_cell_wrap_0(cell_wrap_0 emxArray[5]);
extern void emxDestroy_struct1_T(struct1_T emxArray);
extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInitMatrix_cell_wrap_02(cell_wrap_0 pMatrix[5]);
extern void emxInit_struct1_T(struct1_T *pStruct);
extern void extractuv(const cell_2 *chessboards, const struct0_T *corners,
                      emxArray_real_T *corners_uv, emxArray_real_T *tam_chess);
extern void fce_initialize();
extern void fce_terminate();
extern void findCorners(const unsigned char img[921600], double tau, double
  refine_corners, struct1_T *corners3);

#endif

//
// File trailer for fce.h
//
// [EOF]
//
