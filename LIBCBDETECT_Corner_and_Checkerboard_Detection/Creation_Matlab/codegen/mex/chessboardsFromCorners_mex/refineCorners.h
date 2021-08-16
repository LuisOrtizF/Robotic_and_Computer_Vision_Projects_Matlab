/*
 * refineCorners.h
 *
 * Code generation for function 'refineCorners'
 *
 */

#ifndef REFINECORNERS_H
#define REFINECORNERS_H

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
#include "chessboardsFromCorners_mex_types.h"

/* Function Declarations */
extern void refineCorners(const emlrtStack *sp, const real_T img_angle[921600],
  const real_T img_weight[921600], struct_T *corners);

#endif

/* End of code generation (refineCorners.h) */
