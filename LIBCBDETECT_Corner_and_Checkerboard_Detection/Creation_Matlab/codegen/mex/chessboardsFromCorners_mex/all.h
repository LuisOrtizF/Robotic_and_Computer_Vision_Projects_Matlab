/*
 * all.h
 *
 * Code generation for function 'all'
 *
 */

#ifndef ALL_H
#define ALL_H

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
extern boolean_T all(const emlrtStack *sp, const boolean_T x_data[], const
                     int32_T x_size[2]);
extern boolean_T b_all(const real_T x[42]);
extern boolean_T c_all(const real_T x[35]);
extern boolean_T d_all(const real_T x[16]);

#endif

/* End of code generation (all.h) */
