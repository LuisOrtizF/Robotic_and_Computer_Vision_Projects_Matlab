/*
 * chessboardEnergy.h
 *
 * Code generation for function 'chessboardEnergy'
 *
 */

#ifndef CHESSBOARDENERGY_H
#define CHESSBOARDENERGY_H

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
extern real_T chessboardEnergy(const emlrtStack *sp, const emxArray_real_T
  *chessboard, const real_T corners_p[200]);

#ifdef __WATCOMC__

#pragma aux chessboardEnergy value [8087];

#endif
#endif

/* End of code generation (chessboardEnergy.h) */
