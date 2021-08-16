/*
 * xaxpy.c
 *
 * Code generation for function 'xaxpy'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "xaxpy.h"
#include "blas.h"

/* Function Definitions */
void xaxpy(int32_T n, real_T a, const real_T x[921600], int32_T ix0, real_T y
           [921600], int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  n_t = (ptrdiff_t)n;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  daxpy(&n_t, &a, &x[ix0 - 1], &incx_t, &y[iy0 - 1], &incy_t);
}

/* End of code generation (xaxpy.c) */
