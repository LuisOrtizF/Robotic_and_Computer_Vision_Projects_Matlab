/*
 * isequal.c
 *
 * Code generation for function 'isequal'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "isequal.h"

/* Function Definitions */
boolean_T isequal(const emxArray_boolean_T *varargin_1, const emxArray_boolean_T
                  *varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = false;
  b_p = false;
  if ((varargin_1->size[0] != varargin_2->size[0]) || (varargin_1->size[1] !=
       varargin_2->size[1])) {
  } else {
    b_p = true;
  }

  if (b_p && (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) &&
      (!((varargin_2->size[0] == 0) || (varargin_2->size[1] == 0)))) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2->size[0] * varargin_2->size[1] - 1)) {
      if (varargin_1->data[k] != varargin_2->data[k]) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

/* End of code generation (isequal.c) */
