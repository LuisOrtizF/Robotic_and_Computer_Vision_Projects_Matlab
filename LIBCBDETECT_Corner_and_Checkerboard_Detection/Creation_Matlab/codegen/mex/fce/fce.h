/*
 * fce.h
 *
 * Code generation for function 'fce'
 *
 */

#ifndef FCE_H
#define FCE_H

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
extern void fce(fceStackData *SD, const emlrtStack *sp, const uint8_T image
                [921600], emxArray_real_T *corners_uv, real_T tam_chess_data[],
                int32_T tam_chess_size[2]);

#endif

/* End of code generation (fce.h) */
