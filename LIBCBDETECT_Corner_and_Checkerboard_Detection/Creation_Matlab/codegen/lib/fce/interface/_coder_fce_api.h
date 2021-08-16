/*
 * File: _coder_fce_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 25-Jan-2017 10:38:13
 */

#ifndef _CODER_FCE_API_H
#define _CODER_FCE_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_fce_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void fce(uint8_T image[921600], emxArray_real_T *corners_uv,
                emxArray_real_T *tam_chess);
extern void fce_api(const mxArray *prhs[1], const mxArray *plhs[2]);
extern void fce_atexit(void);
extern void fce_initialize(void);
extern void fce_terminate(void);
extern void fce_xil_terminate(void);

#endif

/*
 * File trailer for _coder_fce_api.h
 *
 * [EOF]
 */
