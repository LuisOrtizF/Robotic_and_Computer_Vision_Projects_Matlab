/*
 * dCP.h
 *
 * Code generation for function 'dCP'
 *
 */

#ifndef DCP_H
#define DCP_H

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
extern void dCP(const emlrtStack *sp, const emxArray_uint8_T *I, emxArray_real_T
                *imagePoints, real_T boardSize[2]);

#endif

/* End of code generation (dCP.h) */
