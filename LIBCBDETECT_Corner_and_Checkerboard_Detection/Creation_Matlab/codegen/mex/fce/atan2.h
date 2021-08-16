/*
 * atan2.h
 *
 * Code generation for function 'atan2'
 *
 */

#ifndef ATAN2_H
#define ATAN2_H

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
extern void b_atan2(const real_T y[921600], const real_T x[921600], real_T r
                    [921600]);
extern void c_atan2(const emlrtStack *sp, const emxArray_real_T *y, const
                    emxArray_real_T *x, emxArray_real_T *r);

#endif

/* End of code generation (atan2.h) */
