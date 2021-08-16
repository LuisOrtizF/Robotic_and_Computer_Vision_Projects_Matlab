//
// File: main.cpp
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 24-Jan-2017 19:27:02
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "fce.h"
#include "main.h"

// Function Declarations
static void argInit_100x1_real_T(double result[100]);
static void argInit_100x2_real_T(double result[200]);
static void argInit_4x4_real_T(double result[16]);
static void argInit_5x7_real_T(double result[35]);
static void argInit_6x7_real_T(double result[42]);
static void argInit_720x1280_uint8_T(unsigned char result[921600]);
static void argInit_cell_2(cell_2 *result);
static double argInit_real_T();
static void argInit_struct0_T(struct0_T *result);
static unsigned char argInit_uint8_T();
static void main_chessboardsFromCorners();
static void main_extractuv();
static void main_findCorners();

// Function Definitions

//
// Arguments    : double result[100]
// Return Type  : void
//
static void argInit_100x1_real_T(double result[100])
{
  int idx0;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 100; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_real_T();
  }
}

//
// Arguments    : double result[200]
// Return Type  : void
//
static void argInit_100x2_real_T(double result[200])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 100; idx0++) {
    for (idx1 = 0; idx1 < 2; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 100 * idx1] = argInit_real_T();
    }
  }
}

//
// Arguments    : double result[16]
// Return Type  : void
//
static void argInit_4x4_real_T(double result[16])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 4; idx0++) {
    for (idx1 = 0; idx1 < 4; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + (idx1 << 2)] = argInit_real_T();
    }
  }
}

//
// Arguments    : double result[35]
// Return Type  : void
//
static void argInit_5x7_real_T(double result[35])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 5; idx0++) {
    for (idx1 = 0; idx1 < 7; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 5 * idx1] = argInit_real_T();
    }
  }
}

//
// Arguments    : double result[42]
// Return Type  : void
//
static void argInit_6x7_real_T(double result[42])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 6; idx0++) {
    for (idx1 = 0; idx1 < 7; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 6 * idx1] = argInit_real_T();
    }
  }
}

//
// Arguments    : unsigned char result[921600]
// Return Type  : void
//
static void argInit_720x1280_uint8_T(unsigned char result[921600])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 720; idx0++) {
    for (idx1 = 0; idx1 < 1280; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 720 * idx1] = argInit_uint8_T();
    }
  }
}

//
// Arguments    : cell_2 *result
// Return Type  : void
//
static void argInit_cell_2(cell_2 *result)
{
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_6x7_real_T(result->f1);
  argInit_5x7_real_T(result->f2);
  argInit_4x4_real_T(result->f3);
  argInit_6x7_real_T(result->f4);
  argInit_6x7_real_T(result->f5);
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : struct0_T *result
// Return Type  : void
//
static void argInit_struct0_T(struct0_T *result)
{
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_100x2_real_T(result->p);
  argInit_100x2_real_T(result->v1);
  argInit_100x2_real_T(result->v2);
  argInit_100x1_real_T(result->score);
}

//
// Arguments    : void
// Return Type  : unsigned char
//
static unsigned char argInit_uint8_T()
{
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_chessboardsFromCorners()
{
  cell_wrap_0 chessboards[5];
  struct0_T r9;
  emxInitMatrix_cell_wrap_02(chessboards);

  // Initialize function 'chessboardsFromCorners' input arguments.
  // Initialize function input argument 'corners'.
  // Call the entry-point 'chessboardsFromCorners'.
  argInit_struct0_T(&r9);
  chessboardsFromCorners(&r9, chessboards);
  emxDestroyMatrix_cell_wrap_0(chessboards);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_extractuv()
{
  emxArray_real_T *corners_uv;
  emxArray_real_T *tam_chess;
  cell_2 r10;
  struct0_T r11;
  emxInitArray_real_T(&corners_uv, 2);
  emxInitArray_real_T(&tam_chess, 2);

  // Initialize function 'extractuv' input arguments.
  // Initialize function input argument 'chessboards'.
  // Initialize function input argument 'corners'.
  // Call the entry-point 'extractuv'.
  argInit_cell_2(&r10);
  argInit_struct0_T(&r11);
  extractuv(&r10, &r11, corners_uv, tam_chess);
  emxDestroyArray_real_T(tam_chess);
  emxDestroyArray_real_T(corners_uv);
}

//
// Arguments    : void
// Return Type  : void
//
static void main_findCorners()
{
  struct1_T corners3;
  static unsigned char uv1[921600];
  emxInit_struct1_T(&corners3);

  // Initialize function 'findCorners' input arguments.
  // Initialize function input argument 'img'.
  // Call the entry-point 'findCorners'.
  argInit_720x1280_uint8_T(uv1);
  findCorners(uv1, argInit_real_T(), argInit_real_T(), &corners3);
  emxDestroy_struct1_T(corners3);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  fce_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_chessboardsFromCorners();
  main_extractuv();
  main_findCorners();

  // Terminate the application.
  // You do not need to do this more than one time.
  fce_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
