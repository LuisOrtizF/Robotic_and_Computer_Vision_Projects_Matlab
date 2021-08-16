//
// File: fce_types.h
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 25-Jan-2017 10:38:13
//
#ifndef FCE_TYPES_H
#define FCE_TYPES_H

// Include Files
#include "rtwtypes.h"

// Type Definitions
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
#endif

//
// File trailer for fce_types.h
//
// [EOF]
//
