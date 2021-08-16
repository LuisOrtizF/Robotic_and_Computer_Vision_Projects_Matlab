/*
 * createCorrelationPatch.h
 *
 * Code generation for function 'createCorrelationPatch'
 *
 */

#ifndef CREATECORRELATIONPATCH_H
#define CREATECORRELATIONPATCH_H

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
extern void createCorrelationPatch(const emlrtStack *sp, real_T angle_1, real_T
  angle_2, real_T radius, emxArray_real_T *template_a1, emxArray_real_T
  *template_a2, emxArray_real_T *template_b1, emxArray_real_T *template_b2);

#endif

/* End of code generation (createCorrelationPatch.h) */
