/*
 * rot90.h
 *
 * Code generation for function 'rot90'
 *
 */

#ifndef ROT90_H
#define ROT90_H

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
extern void b_rot90(const emlrtStack *sp, const emxArray_real_T *A,
                    emxArray_real_T *B);
extern void rot90(const emlrtStack *sp, const emxArray_real_T *A,
                  emxArray_real_T *B);

#endif

/* End of code generation (rot90.h) */
