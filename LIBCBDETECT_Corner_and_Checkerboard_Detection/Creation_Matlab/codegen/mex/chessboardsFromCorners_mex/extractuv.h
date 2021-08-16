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
#include "chessboardsFromCorners_mex_types.h"

/* Function Declarations */
extern void extractuv(const emlrtStack *sp, const cell_2 *chessboards, const
                      struct0_T *corners, emxArray_real_T *corners_uv, real_T
                      tam_chess_data[], int32_T tam_chess_size[2]);

#endif

/* End of code generation (extractuv.h) */
