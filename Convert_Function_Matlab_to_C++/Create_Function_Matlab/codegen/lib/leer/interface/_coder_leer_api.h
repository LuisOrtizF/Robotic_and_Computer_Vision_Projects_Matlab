/*
 * File: _coder_leer_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2016 19:32:38
 */

#ifndef _CODER_LEER_API_H
#define _CODER_LEER_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_leer_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void leer(real_T c, real_T d, real_T *a, real_T *b);
extern void leer_api(const mxArray * const prhs[2], const mxArray *plhs[2]);
extern void leer_atexit(void);
extern void leer_initialize(void);
extern void leer_terminate(void);
extern void leer_xil_terminate(void);

#endif

/*
 * File trailer for _coder_leer_api.h
 *
 * [EOF]
 */
