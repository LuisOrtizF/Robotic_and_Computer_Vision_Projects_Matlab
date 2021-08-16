/*
 * mean.h
 *
 * Code generation for function 'mean'
 *
 */

#ifndef MEAN_H
#define MEAN_H

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
extern real_T mean(const emlrtStack *sp, const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux mean value [8087];

#endif
#endif

/* End of code generation (mean.h) */
