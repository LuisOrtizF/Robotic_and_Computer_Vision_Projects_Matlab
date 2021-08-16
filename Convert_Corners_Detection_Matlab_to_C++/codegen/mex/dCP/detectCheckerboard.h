/*
 * detectCheckerboard.h
 *
 * Code generation for function 'detectCheckerboard'
 *
 */

#ifndef DETECTCHECKERBOARD_H
#define DETECTCHECKERBOARD_H

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
extern void b_detectCheckerboard(const emlrtStack *sp, const emxArray_real32_T
  *I, emxArray_real_T *points, real_T boardSize[2]);
extern void detectCheckerboard(const emlrtStack *sp, const emxArray_real32_T *I,
  emxArray_real_T *points, real_T boardSize[2]);

#endif

/* End of code generation (detectCheckerboard.h) */
