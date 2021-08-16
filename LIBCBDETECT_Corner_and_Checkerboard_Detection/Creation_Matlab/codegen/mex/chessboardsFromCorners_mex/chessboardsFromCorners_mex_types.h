/*
 * chessboardsFromCorners_mex_types.h
 *
 * Code generation for function 'chessboardsFromCorners'
 *
 */

#ifndef CHESSBOARDSFROMCORNERS_MEX_TYPES_H
#define CHESSBOARDSFROMCORNERS_MEX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c_chessboardsFromCorners_mexSta
#define typedef_c_chessboardsFromCorners_mexSta

typedef struct {
  struct {
    real_T img[921600];
    real_T img_du[921600];
    real_T img_dv[921600];
    real_T img_angle[921600];
    real_T img_weight[921600];
    real_T img_corners[921600];
    real_T img_corners_a1[921600];
    real_T img_corners_a2[921600];
    real_T img_corners_b1[921600];
    real_T img_corners_b2[921600];
    real_T img_corners_mu[921600];
    real_T img_corners_1[921600];
  } f0;
} c_chessboardsFromCorners_mexSta;

#endif                                 /*typedef_c_chessboardsFromCorners_mexSta*/

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

#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_cell_wrap_0_1x4
#define struct_emxArray_cell_wrap_0_1x4

struct emxArray_cell_wrap_0_1x4
{
  cell_wrap_0 data[4];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_cell_wrap_0_1x4*/

#ifndef typedef_emxArray_cell_wrap_0_1x4
#define typedef_emxArray_cell_wrap_0_1x4

typedef struct emxArray_cell_wrap_0_1x4 emxArray_cell_wrap_0_1x4;

#endif                                 /*typedef_emxArray_cell_wrap_0_1x4*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T p[200];
  real_T v1[200];
  real_T v2[200];
  real_T score[100];
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef struct_sYWbrjDmWU5frOvtIgqfWG
#define struct_sYWbrjDmWU5frOvtIgqfWG

struct sYWbrjDmWU5frOvtIgqfWG
{
  emxArray_real_T *p;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
  emxArray_real_T *score;
};

#endif                                 /*struct_sYWbrjDmWU5frOvtIgqfWG*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct sYWbrjDmWU5frOvtIgqfWG struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef struct_sMSfejkDb5OzQiQ5HdUN17D
#define struct_sMSfejkDb5OzQiQ5HdUN17D

struct sMSfejkDb5OzQiQ5HdUN17D
{
  emxArray_real_T *p;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
};

#endif                                 /*struct_sMSfejkDb5OzQiQ5HdUN17D*/

#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct sMSfejkDb5OzQiQ5HdUN17D struct_T;

#endif                                 /*typedef_struct_T*/
#endif

/* End of code generation (chessboardsFromCorners_mex_types.h) */
