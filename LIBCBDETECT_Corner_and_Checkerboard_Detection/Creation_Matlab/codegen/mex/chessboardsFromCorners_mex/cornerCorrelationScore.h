/*
 * cornerCorrelationScore.h
 *
 * Code generation for function 'cornerCorrelationScore'
 *
 */

#ifndef CORNERCORRELATIONSCORE_H
#define CORNERCORRELATIONSCORE_H

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
extern real_T cornerCorrelationScore(const emlrtStack *sp, const emxArray_real_T
  *img, const emxArray_real_T *img_weight, const real_T v1_data[], const int32_T
  v1_size[2], const real_T v2_data[], const int32_T v2_size[2]);

#ifdef __WATCOMC__

#pragma aux cornerCorrelationScore value [8087];

#endif
#endif

/* End of code generation (cornerCorrelationScore.h) */
