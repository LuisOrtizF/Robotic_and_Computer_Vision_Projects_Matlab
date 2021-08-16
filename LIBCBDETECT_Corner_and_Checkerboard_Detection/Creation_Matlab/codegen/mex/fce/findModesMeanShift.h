/*
 * findModesMeanShift.h
 *
 * Code generation for function 'findModesMeanShift'
 *
 */

#ifndef FINDMODESMEANSHIFT_H
#define FINDMODESMEANSHIFT_H

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
extern void findModesMeanShift(const emlrtStack *sp, const real_T hist[32],
  emxArray_real_T *modes2, real_T hist_smoothed[32]);

#endif

/* End of code generation (findModesMeanShift.h) */
