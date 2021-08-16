/*
 * _coder_chessboardsFromCorners_mex_api.h
 *
 * Code generation for function '_coder_chessboardsFromCorners_mex_api'
 *
 */

#ifndef _CODER_CHESSBOARDSFROMCORNERS_MEX_API_H
#define _CODER_CHESSBOARDSFROMCORNERS_MEX_API_H

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
extern void chessboardsFromCorners_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);
extern void extractuv_api(const mxArray * const prhs[2], const mxArray *plhs[2]);
extern void findCorners_api(c_chessboardsFromCorners_mexSta *SD, const mxArray *
  const prhs[3], const mxArray *plhs[1]);

#endif

/* End of code generation (_coder_chessboardsFromCorners_mex_api.h) */
