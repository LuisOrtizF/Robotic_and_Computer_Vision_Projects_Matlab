/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "diag.h"

/* Function Definitions */
void diag(const real_T v[841], real_T d[29])
{
  int32_T j;
  for (j = 0; j < 29; j++) {
    d[j] = v[j * 30];
  }
}

/* End of code generation (diag.c) */
