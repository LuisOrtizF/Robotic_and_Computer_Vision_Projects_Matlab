/*
 * sortIdx.h
 *
 * Code generation for function 'sortIdx'
 *
 */

#ifndef SORTIDX_H
#define SORTIDX_H

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
extern void b_merge(const emlrtStack *sp, int32_T idx[4], real_T x[4], int32_T
                    offset, int32_T np, int32_T nq, int32_T iwork[4], real_T
                    xwork[4]);
extern void sortIdx(const emlrtStack *sp, emxArray_real32_T *x, emxArray_int32_T
                    *idx);

#endif

/* End of code generation (sortIdx.h) */
