/*
 * norm.h
 *
 * Code generation for function 'norm'
 *
 */

#ifndef NORM_H
#define NORM_H

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
extern real_T b_norm(const real_T x_data[], const int32_T x_size[2]);

#ifdef __WATCOMC__

#pragma aux b_norm value [8087];

#endif

extern real_T norm(const real_T x[2]);

#ifdef __WATCOMC__

#pragma aux norm value [8087];

#endif
#endif

/* End of code generation (norm.h) */
