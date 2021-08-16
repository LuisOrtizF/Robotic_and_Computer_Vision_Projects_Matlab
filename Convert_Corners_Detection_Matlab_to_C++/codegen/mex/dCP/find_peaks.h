/*
 * find_peaks.h
 *
 * Code generation for function 'find_peaks'
 *
 */

#ifndef FIND_PEAKS_H
#define FIND_PEAKS_H

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
extern void find_peaks(const emlrtStack *sp, const emxArray_real32_T *metric,
  emxArray_real32_T *loc);

#endif

/* End of code generation (find_peaks.h) */
