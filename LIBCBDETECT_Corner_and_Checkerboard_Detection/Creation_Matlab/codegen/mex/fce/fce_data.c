/*
 * fce_data.c
 *
 * Code generation for function 'fce_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "fce", NULL,
  false, { 2433290357U, 2237796540U, 4066813863U, 833189415U }, NULL };

emlrtRSInfo x_emlrtRSI = { 15, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo y_emlrtRSI = { 116, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo ab_emlrtRSI = { 128, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo bb_emlrtRSI = { 19, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo cb_emlrtRSI = { 112, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo db_emlrtRSI = { 138, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo eb_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo fb_emlrtRSI = { 54, "xaxpy",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"
};

emlrtRSInfo gb_emlrtRSI = { 122, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo hb_emlrtRSI = { 101, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo jb_emlrtRSI = { 12, "sqrt",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

emlrtRSInfo qb_emlrtRSI = { 23, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo rb_emlrtRSI = { 101, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo yb_emlrtRSI = { 124, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRSInfo qc_emlrtRSI = { 527, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo xc_emlrtRSI = { 19, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

emlrtRSInfo yc_emlrtRSI = { 23, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

emlrtRSInfo nd_emlrtRSI = { 7, "std",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"
};

emlrtRSInfo od_emlrtRSI = { 56, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

emlrtRSInfo td_emlrtRSI = { 21, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo vd_emlrtRSI = { 24, "applyScalarFunctionInPlace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"
};

emlrtRSInfo we_emlrtRSI = { 21, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo xe_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo hf_emlrtRSI = { 73, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

emlrtRSInfo mf_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo nf_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo of_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo pf_emlrtRSI = { 14, "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m"
};

emlrtRSInfo qf_emlrtRSI = { 22, "chessboardEnergy",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m"
};

emlrtRSInfo rf_emlrtRSI = { 37, "norm",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"
};

emlrtRSInfo sf_emlrtRSI = { 174, "norm",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"
};

emlrtRSInfo gh_emlrtRSI = { 12, "all",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

emlrtRTEInfo ab_emlrtRTEI = { 16, 9, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

emlrtRTEInfo bc_emlrtRTEI = { 245, 27, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRTEInfo gc_emlrtRTEI = { 39, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRTEInfo hc_emlrtRTEI = { 42, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRTEInfo oc_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRTEInfo pc_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRTEInfo rc_emlrtRTEI = { 17, 19, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

emlrtRTEInfo vc_emlrtRTEI = { 293, 1, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

emlrtRTEInfo wc_emlrtRTEI = { 77, 27, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

/* End of code generation (fce_data.c) */
