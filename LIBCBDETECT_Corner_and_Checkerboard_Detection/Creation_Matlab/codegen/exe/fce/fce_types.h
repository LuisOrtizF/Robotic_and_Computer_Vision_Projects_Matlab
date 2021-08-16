//
// File: fce_types.h
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 24-Jan-2017 19:27:02
//
#ifndef FCE_TYPES_H
#define FCE_TYPES_H

// Include Files
#include "rtwtypes.h"

// Type Definitions
typedef struct {
  double f1[42];
  double f2[35];
  double f3[16];
  double f4[42];
  double f5[42];
} cell_2;

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_real_T

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;

typedef struct {
  double p[200];
  double v1[200];
  double v2[200];
  double score[100];
} struct0_T;

typedef struct {
  emxArray_real_T *p;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
  emxArray_real_T *score;
} struct1_T;

#endif

//
// File trailer for fce_types.h
//
// [EOF]
//
