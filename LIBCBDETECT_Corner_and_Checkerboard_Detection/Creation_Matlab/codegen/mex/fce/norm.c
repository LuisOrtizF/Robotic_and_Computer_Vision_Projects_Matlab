/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "norm.h"
#include "blas.h"

/* Function Definitions */
real_T b_norm(const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  if (x_size[1] == 0) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x_size[1];
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &x_data[0], &incx_t);
  }

  return y;
}

real_T norm(const real_T x[2])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 2; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

/* End of code generation (norm.c) */
