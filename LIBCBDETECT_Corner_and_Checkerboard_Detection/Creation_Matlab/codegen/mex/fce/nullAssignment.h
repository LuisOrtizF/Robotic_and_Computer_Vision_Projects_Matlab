/*
 * nullAssignment.h
 *
 * Code generation for function 'nullAssignment'
 *
 */

#ifndef NULLASSIGNMENT_H
#define NULLASSIGNMENT_H

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
extern void b_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx);
extern void c_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_int32_T *idx);
extern void nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx);

#endif

/* End of code generation (nullAssignment.h) */
