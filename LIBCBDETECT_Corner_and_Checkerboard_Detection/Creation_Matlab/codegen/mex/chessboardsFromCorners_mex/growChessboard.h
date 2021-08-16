/*
 * growChessboard.h
 *
 * Code generation for function 'growChessboard'
 *
 */

#ifndef GROWCHESSBOARD_H
#define GROWCHESSBOARD_H

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
extern void growChessboard(const emlrtStack *sp, emxArray_real_T *chessboard,
  const real_T corners_p[200], real_T border_type);

#endif

/* End of code generation (growChessboard.h) */
