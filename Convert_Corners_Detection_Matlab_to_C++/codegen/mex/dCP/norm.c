/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "norm.h"
#include "blas.h"

/* Function Definitions */
real_T norm(const emxArray_real_T *x)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &x->data[0], &incx_t);
  }

  return y;
}

/* End of code generation (norm.c) */
