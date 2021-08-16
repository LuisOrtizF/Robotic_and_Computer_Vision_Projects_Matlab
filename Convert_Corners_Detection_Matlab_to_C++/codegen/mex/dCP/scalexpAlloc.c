/*
 * scalexpAlloc.c
 *
 * Code generation for function 'scalexpAlloc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "scalexpAlloc.h"

/* Function Definitions */
boolean_T b_dimagree(const emxArray_real32_T *z, const emxArray_real32_T
                     *varargin_1, const emxArray_real32_T *varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T i14;
  int32_T i15;
  p = true;
  b_p = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (k <= 1) {
      i14 = z->size[0];
      i15 = varargin_1->size[0];
    } else {
      i14 = 1;
      i15 = 1;
    }

    if (i14 != i15) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    b_p = true;
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (k <= 1) {
        i14 = z->size[0];
        i15 = varargin_2->size[0];
      } else {
        i14 = 1;
        i15 = 1;
      }

      if (i14 != i15) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (b_p) {
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  return p;
}

boolean_T c_dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1,
                     const emxArray_real_T *varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T i23;
  int32_T i24;
  p = true;
  b_p = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (k <= 1) {
      i23 = z->size[0];
      i24 = varargin_1->size[0];
    } else {
      i23 = 1;
      i24 = 1;
    }

    if (i23 != i24) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    b_p = true;
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (k <= 1) {
        i23 = z->size[0];
        i24 = varargin_2->size[0];
      } else {
        i23 = 1;
        i24 = 1;
      }

      if (i23 != i24) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (b_p) {
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  return p;
}

boolean_T dimagree(const emxArray_real32_T *z, const emxArray_real32_T
                   *varargin_1)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = true;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k + 1 < 3)) {
    if (z->size[k] != varargin_1->size[k]) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
    p = false;
  }

  return p;
}

/* End of code generation (scalexpAlloc.c) */
