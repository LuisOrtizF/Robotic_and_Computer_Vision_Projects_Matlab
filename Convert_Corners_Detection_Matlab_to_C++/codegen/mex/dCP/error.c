/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo om_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/shared/coder/coder/+coder/+internal/error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 's', 'q', 'r', 't' };

  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, varargin_1);
}

void c_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI,
    "Coder:toolbox:cat_UnsupportedVariableSizeEmpty", 0);
}

void d_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI, "MATLAB:nomem", 0);
}

void e_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 's', 'd', 'd' };

  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, varargin_1, 12, varargin_2);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI, "MATLAB:nologicalnan", 0);
}

void f_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 's', 'v', 'd' };

  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, varargin_1, 12, varargin_2);
}

void g_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &om_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", 0);
}

/* End of code generation (error.c) */
