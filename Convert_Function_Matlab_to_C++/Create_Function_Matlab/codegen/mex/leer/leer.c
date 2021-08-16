/*
 * leer.c
 *
 * Code generation for function 'leer'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "leer.h"
#include "leer_data.h"

/* Function Definitions */
void leer(const emlrtStack *sp, real_T c, real_T d, real_T *a, real_T *b)
{
  (void)sp;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  *a = c + d;
  *b = c - d;
}

/* End of code generation (leer.c) */
