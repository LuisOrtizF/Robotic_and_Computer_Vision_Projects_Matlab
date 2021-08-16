/*
 * sub2ind.c
 *
 * Code generation for function 'sub2ind'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "sub2ind.h"

/* Function Definitions */
boolean_T allinrange(const emxArray_real32_T *x, int32_T hi)
{
  boolean_T p;
  int32_T k;
  int32_T exitg1;
  boolean_T b0;
  k = 0;
  do {
    exitg1 = 0;
    if (k <= x->size[0] - 1) {
      if (x->data[k] >= 1.0F) {
        if ((x->data[k] <= -2.14748365E+9F) || ((x->data[k] < 2.14748365E+9F) &&
             (hi >= (int32_T)x->data[k]))) {
          p = true;
        } else {
          p = false;
        }

        if (p) {
          b0 = true;
        } else {
          b0 = false;
        }
      } else {
        b0 = false;
      }

      if (!b0) {
        p = false;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return p;
}

/* End of code generation (sub2ind.c) */
