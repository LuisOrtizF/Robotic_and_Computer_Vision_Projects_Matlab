/*
 * scalexpAlloc.c
 *
 * Code generation for function 'scalexpAlloc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "scalexpAlloc.h"
#include "blas.h"

/* Function Definitions */
boolean_T b_dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1,
                     const emxArray_real_T *varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg2;
  int32_T i21;
  boolean_T exitg1;
  int32_T i22;
  p = true;
  b_p = true;
  k = 1;
  exitg2 = false;
  while ((!exitg2) && (k < 3)) {
    if (k <= 1) {
      i21 = z->size[0];
    } else {
      i21 = 1;
    }

    if (k <= 1) {
      i22 = varargin_1->size[0];
    } else {
      i22 = 1;
    }

    if (i21 != i22) {
      b_p = false;
      exitg2 = true;
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
        i21 = z->size[0];
      } else {
        i21 = 1;
      }

      if (k <= 1) {
        i22 = varargin_2->size[0];
      } else {
        i22 = 1;
      }

      if (i21 != i22) {
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

boolean_T dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T i13;
  int32_T i14;
  p = true;
  b_p = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (k <= 1) {
      i13 = z->size[0];
    } else {
      i13 = 1;
    }

    if (k <= 1) {
      i14 = varargin_1->size[0];
    } else {
      i14 = 1;
    }

    if (i13 != i14) {
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

  return p;
}

/* End of code generation (scalexpAlloc.c) */
