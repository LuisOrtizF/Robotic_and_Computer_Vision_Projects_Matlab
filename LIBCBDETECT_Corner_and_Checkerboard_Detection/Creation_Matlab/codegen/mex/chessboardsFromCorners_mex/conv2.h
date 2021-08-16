/*
 * conv2.h
 *
 * Code generation for function 'conv2'
 *
 */

#ifndef CONV2_H
#define CONV2_H

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
extern void b_conv2(const real_T arg1[921600], const real_T arg2_data[], const
                    int32_T arg2_size[2], real_T c[921600]);
extern void conv2(const real_T arg1[921600], const real_T arg2[9], real_T c
                  [921600]);

#endif

/* End of code generation (conv2.h) */
