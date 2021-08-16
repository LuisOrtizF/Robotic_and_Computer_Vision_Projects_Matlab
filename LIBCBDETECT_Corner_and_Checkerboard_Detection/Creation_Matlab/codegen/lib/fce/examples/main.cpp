//
// File: main.cpp
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 25-Jan-2017 10:38:13
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
static void argInit_720x1280_uint8_T(unsigned char result[921600]);
static unsigned char argInit_uint8_T();
static void main_fce();

// Function Definitions

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
static void main_fce()
{
  emxArray_real_T *corners_uv;
  emxArray_real_T *tam_chess;
  static unsigned char uv1[921600];
  emxInitArray_real_T(&corners_uv, 2);
  emxInitArray_real_T(&tam_chess, 2);

  // Initialize function 'fce' input arguments.
  // Initialize function input argument 'image'.
  // Call the entry-point 'fce'.
  argInit_720x1280_uint8_T(uv1);
  fce(uv1, corners_uv, tam_chess);
  emxDestroyArray_real_T(tam_chess);
  emxDestroyArray_real_T(corners_uv);
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
  main_fce();

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
