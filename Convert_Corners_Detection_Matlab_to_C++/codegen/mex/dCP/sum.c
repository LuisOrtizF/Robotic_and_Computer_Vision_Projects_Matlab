/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "sum.h"

/* Function Definitions */
real_T sum(const boolean_T x[29])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 28; k++) {
    y += (real_T)x[k + 1];
  }

  return y;
}

/* End of code generation (sum.c) */
