#include "rt_nonfinite.h"
#include "dCP.h"
#include "main.h"
#include "dCP_emxAPI.h"

static unsigned char argInit_uint8_T();
static emxArray_uint8_T *c_argInit_UnboundedxUnbounded_u();
static void main_dCP();
static unsigned char argInit_uint8_T()
{
  return 0;
}

static emxArray_uint8_T *c_argInit_UnboundedxUnbounded_u()
{
  emxArray_uint8_T *result;
  static int iv1[2] = { 2, 2 };

  int idx0;
  int idx1;
  result = emxCreateND_uint8_T(2, *(int (*)[2])&iv1[0]);
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      result->data[idx0 + result->size[0] * idx1] = argInit_uint8_T();
    }
  }

  return result;
}

static void main_dCP()
{
  emxArray_real_T *imagePoints;
  emxArray_uint8_T *I;
  double boardSize[2];
  emxInitArray_real_T(&imagePoints, 2);
  I = c_argInit_UnboundedxUnbounded_u();
  dCP(I, imagePoints, boardSize);
  emxDestroyArray_real_T(imagePoints);
  emxDestroyArray_uint8_T(I);
}

int main(int, const char * const [])
{
  dCP_initialize();
  main_dCP();
  dCP_terminate();
  return 0;
}
