/*
 * scoreCorners.h
 *
 * Code generation for function 'scoreCorners'
 *
 */

#ifndef SCORECORNERS_H
#define SCORECORNERS_H

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
extern void scoreCorners(const emlrtStack *sp, const real_T img[921600], const
  real_T img_weight[921600], struct_T *corners, const real_T radius[3]);

#endif

/* End of code generation (scoreCorners.h) */
