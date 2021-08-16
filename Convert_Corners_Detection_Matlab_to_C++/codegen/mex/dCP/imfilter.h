/*
 * imfilter.h
 *
 * Code generation for function 'imfilter'
 *
 */

#ifndef IMFILTER_H
#define IMFILTER_H

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
extern void b_imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1);
extern void c_imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1);
extern void d_imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1);
extern void imfilter(const emlrtStack *sp, emxArray_real32_T *varargin_1);
extern void padImage(const emlrtStack *sp, const emxArray_real32_T *a_tmp, const
                     real_T pad[2], emxArray_real32_T *a);

#endif

/* End of code generation (imfilter.h) */
