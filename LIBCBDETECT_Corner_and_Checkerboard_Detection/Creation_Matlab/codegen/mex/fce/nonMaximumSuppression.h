/*
 * nonMaximumSuppression.h
 *
 * Code generation for function 'nonMaximumSuppression'
 *
 */

#ifndef NONMAXIMUMSUPPRESSION_H
#define NONMAXIMUMSUPPRESSION_H

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
extern void nonMaximumSuppression(const emlrtStack *sp, const real_T img[921600],
  emxArray_real_T *maxima);

#endif

/* End of code generation (nonMaximumSuppression.h) */
