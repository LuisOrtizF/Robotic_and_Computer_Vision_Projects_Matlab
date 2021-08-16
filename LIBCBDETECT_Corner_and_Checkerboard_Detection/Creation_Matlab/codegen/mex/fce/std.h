/*
 * std.h
 *
 * Code generation for function 'std'
 *
 */

#ifndef STD_H
#define STD_H

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
extern real_T b_std(const emlrtStack *sp, const emxArray_real_T *varargin_1);

#ifdef __WATCOMC__

#pragma aux b_std value [8087];

#endif
#endif

/* End of code generation (std.h) */
