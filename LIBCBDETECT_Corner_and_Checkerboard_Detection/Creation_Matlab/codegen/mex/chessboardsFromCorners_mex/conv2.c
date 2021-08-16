/*
 * conv2.c
 *
 * Code generation for function 'conv2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "conv2.h"
#include "xaxpy.h"
#include "blas.h"

/* Function Definitions */
void b_conv2(const real_T arg1[921600], const real_T arg2_data[], const int32_T
             arg2_size[2], real_T c[921600])
{
  int32_T cBegin;
  int32_T cBegin1;
  int32_T mb;
  int32_T j;
  int32_T lastColA;
  int32_T k;
  int32_T b_j;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  int32_T firstRowA;
  int32_T b_i;
  memset(&c[0], 0, 921600U * sizeof(real_T));
  if (!((arg2_size[0] == 0) || (arg2_size[1] == 0))) {
    cBegin = arg2_size[1] / 2;
    cBegin1 = arg2_size[0] / 2;
    mb = arg2_size[0];
    for (j = 0; j < arg2_size[1]; j++) {
      if (j + 1279 < cBegin + 1279) {
        lastColA = 1279;
      } else {
        lastColA = (cBegin - j) + 1279;
      }

      if (j < cBegin) {
        k = cBegin - j;
      } else {
        k = 0;
      }

      while (k <= lastColA) {
        if (j + k > cBegin) {
          b_j = (j + k) - cBegin;
        } else {
          b_j = 0;
        }

        iC = b_j * 720 + 1;
        b_c = k * 720;
        iB = j * mb;
        for (i = 0; i < mb; i++) {
          if (i < cBegin1) {
            firstRowA = cBegin1 - i;
          } else {
            firstRowA = 0;
          }

          if (i + 720 <= cBegin1 + 719) {
            b_i = 720;
          } else {
            b_i = (cBegin1 - i) + 720;
          }

          xaxpy(b_i - firstRowA, arg2_data[iB], arg1, (b_c + firstRowA) + 1, c,
                iC);
          iB++;
          if (i >= cBegin1) {
            iC++;
          }
        }

        k++;
      }
    }
  }
}

void conv2(const real_T arg1[921600], const real_T arg2[9], real_T c[921600])
{
  int32_T j;
  int32_T lastColA;
  int32_T k;
  int32_T b_j;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  int32_T firstRowA;
  int32_T b_i;
  memset(&c[0], 0, 921600U * sizeof(real_T));
  for (j = 0; j < 3; j++) {
    if (j + 1279 < 1280) {
      lastColA = 1279;
    } else {
      lastColA = 1280 - j;
    }

    for (k = (j < 1); k <= lastColA; k++) {
      if (j + k > 1) {
        b_j = (j + k) - 1;
      } else {
        b_j = 0;
      }

      iC = b_j * 720 + 1;
      b_c = k * 720;
      iB = j * 3;
      for (i = 0; i < 3; i++) {
        firstRowA = (i < 1);
        if (i + 720 <= 720) {
          b_i = 720;
        } else {
          b_i = 721 - i;
        }

        xaxpy(b_i - firstRowA, arg2[iB], arg1, (b_c + firstRowA) + 1, c, iC);
        iB++;
        if (i >= 1) {
          iC++;
        }
      }
    }
  }
}

/* End of code generation (conv2.c) */
