/*
 * indexShapeCheck.h
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

#ifndef INDEXSHAPECHECK_H
#define INDEXSHAPECHECK_H

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
#include "dCP_types.h"

/* Function Declarations */
extern void b_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
  int32_T indexSize);
extern void c_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
  const int32_T indexSize[2]);
extern void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const
  int32_T indexSize[2]);

#endif

/* End of code generation (indexShapeCheck.h) */
