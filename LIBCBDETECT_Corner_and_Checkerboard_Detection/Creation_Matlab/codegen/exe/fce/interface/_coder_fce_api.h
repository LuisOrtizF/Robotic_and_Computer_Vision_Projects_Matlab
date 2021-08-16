/*
 * File: _coder_fce_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 24-Jan-2017 19:27:02
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
#ifndef typedef_cell_2
#define typedef_cell_2

typedef struct {
  real_T f1[42];
  real_T f2[35];
  real_T f3[16];
  real_T f4[42];
  real_T f5[42];
} cell_2;

#endif                                 /*typedef_cell_2*/

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

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;

#endif                                 /*typedef_cell_wrap_0*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T p[200];
  real_T v1[200];
  real_T v2[200];
  real_T score[100];
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_real_T *p;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
  emxArray_real_T *score;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void chessboardsFromCorners(struct0_T *corners, cell_wrap_0 chessboards[5]);
extern void chessboardsFromCorners_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);
extern void extractuv(cell_2 *chessboards, struct0_T *corners, emxArray_real_T
                      *corners_uv, emxArray_real_T *tam_chess);
extern void extractuv_api(const mxArray * const prhs[2], const mxArray *plhs[2]);
extern void fce_atexit(void);
extern void fce_initialize(void);
extern void fce_terminate(void);
extern void fce_xil_terminate(void);
extern void findCorners(uint8_T img[921600], real_T tau, real_T refine_corners,
  struct1_T *corners3);
extern void findCorners_api(const mxArray *prhs[3], const mxArray *plhs[1]);

#endif

/*
 * File trailer for _coder_fce_api.h
 *
 * [EOF]
 */
