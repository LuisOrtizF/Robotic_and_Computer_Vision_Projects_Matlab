/*
 * hypot.h
 *
 * Code generation for function 'hypot'
 *
 */

#ifndef HYPOT_H
#define HYPOT_H

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
extern void b_hypot(const emlrtStack *sp, const emxArray_real32_T *x, const
                    emxArray_real32_T *y, emxArray_real32_T *r);
extern void c_hypot(const emlrtStack *sp, const emxArray_real_T *x, const
                    emxArray_real_T *y, emxArray_real_T *r);

#endif

/* End of code generation (hypot.h) */
