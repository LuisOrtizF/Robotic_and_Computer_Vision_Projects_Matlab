/*
 * extractuv.h
 *
 * Code generation for function 'extractuv'
 *
 */

#ifndef EXTRACTUV_H
#define EXTRACTUV_H

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
extern void extractuv(const emlrtStack *sp, const cell_wrap_0 chessboards[5],
                      const emxArray_real_T *corners_p, emxArray_real_T
                      *corners_uv, real_T tam_chess_data[], int32_T
                      tam_chess_size[2]);

#endif

/* End of code generation (extractuv.h) */
