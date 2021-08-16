//
// File: fce.h
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 25-Jan-2017 10:38:13
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
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int
  numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void fce(const unsigned char image[921600], emxArray_real_T *corners_uv,
                emxArray_real_T *tam_chess);
extern void fce_initialize();
extern void fce_terminate();

#endif

//
// File trailer for fce.h
//
// [EOF]
//
