/*
 * initChessboard.h
 *
 * Code generation for function 'initChessboard'
 *
 */

#ifndef INITCHESSBOARD_H
#define INITCHESSBOARD_H

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
extern void initChessboard(const emlrtStack *sp, const emxArray_real_T
  *corners_p, const emxArray_real_T *corners_v1, const emxArray_real_T
  *corners_v2, real_T idx, real_T chessboard_data[], int32_T chessboard_size[2]);

#endif

/* End of code generation (initChessboard.h) */
