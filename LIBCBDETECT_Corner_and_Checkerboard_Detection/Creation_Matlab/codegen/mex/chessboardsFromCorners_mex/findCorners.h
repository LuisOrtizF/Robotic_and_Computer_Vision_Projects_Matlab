/*
 * findCorners.h
 *
 * Code generation for function 'findCorners'
 *
 */

#ifndef FINDCORNERS_H
#define FINDCORNERS_H

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
extern void findCorners(c_chessboardsFromCorners_mexSta *SD, const emlrtStack
  *sp, const uint8_T img[921600], real_T tau, real_T refine_corners, struct1_T
  *corners3);

#endif

/* End of code generation (findCorners.h) */
