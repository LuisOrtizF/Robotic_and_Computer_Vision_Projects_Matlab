/*
 * bwlookup.h
 *
 * Code generation for function 'bwlookup'
 *
 */

#ifndef BWLOOKUP_H
#define BWLOOKUP_H

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
extern void bwlookup(const emlrtStack *sp, const emxArray_boolean_T *bwin,
                     emxArray_boolean_T *B);

#endif

/* End of code generation (bwlookup.h) */
