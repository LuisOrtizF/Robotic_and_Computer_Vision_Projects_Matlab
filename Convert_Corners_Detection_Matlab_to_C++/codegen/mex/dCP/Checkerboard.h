/*
 * Checkerboard.h
 *
 * Code generation for function 'Checkerboard'
 *
 */

#ifndef CHECKERBOARD_H
#define CHECKERBOARD_H

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
extern void Checkerboard_initialize(const emlrtStack *sp,
  c_vision_internal_calibration_c *this, real_T seedIdx, const emxArray_real32_T
  *points, const real32_T v1[2], const real32_T v2[2]);
extern void c_Checkerboard_expandBoardDirec(const emlrtStack *sp,
  c_vision_internal_calibration_c *this, real_T direction);

#endif

/* End of code generation (Checkerboard.h) */
