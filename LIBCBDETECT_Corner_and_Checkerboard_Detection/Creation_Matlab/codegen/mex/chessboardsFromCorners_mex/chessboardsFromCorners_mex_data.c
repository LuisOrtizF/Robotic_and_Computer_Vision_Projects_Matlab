/*
 * chessboardsFromCorners_mex_data.c
 *
 * Code generation for function 'chessboardsFromCorners_mex_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL,
  "chessboardsFromCorners_mex", NULL, false, { 2433290357U, 2237796540U,
    4066813863U, 833189415U }, NULL };

emlrtRSInfo ib_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo mb_emlrtRSI = { 73, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

emlrtRSInfo ob_emlrtRSI = { 12, "sqrt",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

emlrtRSInfo qb_emlrtRSI = { 24, "applyScalarFunctionInPlace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"
};

emlrtRSInfo tb_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo ub_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo vb_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo wb_emlrtRSI = { 7, "std",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"
};

emlrtRSInfo xb_emlrtRSI = { 56, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

emlrtRSInfo bd_emlrtRSI = { 21, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo cd_emlrtRSI = { 101, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo nd_emlrtRSI = { 124, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRSInfo od_emlrtRSI = { 23, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo vd_emlrtRSI = { 23, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

emlrtRSInfo af_emlrtRSI = { 15, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo bf_emlrtRSI = { 116, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo cf_emlrtRSI = { 128, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo df_emlrtRSI = { 19, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo ef_emlrtRSI = { 138, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo ff_emlrtRSI = { 122, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo gf_emlrtRSI = { 112, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo hf_emlrtRSI = { 101, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo if_emlrtRSI = { 54, "xaxpy",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"
};

emlrtRSInfo lg_emlrtRSI = { 527, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRTEInfo e_emlrtRTEI = { 16, 9, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

emlrtRTEInfo nb_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRTEInfo ob_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRTEInfo rb_emlrtRTEI = { 17, 19, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

emlrtRTEInfo tb_emlrtRTEI = { 245, 27, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRTEInfo xb_emlrtRTEI = { 42, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRTEInfo yb_emlrtRTEI = { 39, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRTEInfo ac_emlrtRTEI = { 293, 1, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

/* End of code generation (chessboardsFromCorners_mex_data.c) */
