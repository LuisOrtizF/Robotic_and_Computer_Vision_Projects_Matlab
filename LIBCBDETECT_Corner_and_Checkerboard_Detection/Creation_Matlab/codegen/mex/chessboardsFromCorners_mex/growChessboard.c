/*
 * growChessboard.c
 *
 * Code generation for function 'growChessboard'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "growChessboard.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "all.h"
#include "sqrt.h"
#include "power.h"
#include "indexShapeCheck.h"
#include "eml_int_forloop_overflow_check.h"
#include "atan2.h"
#include "nullAssignment.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo yb_emlrtRSI = { 14, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ac_emlrtRSI = { 15, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo bc_emlrtRSI = { 25, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo cc_emlrtRSI = { 26, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo dc_emlrtRSI = { 27, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ec_emlrtRSI = { 28, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo fc_emlrtRSI = { 32, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo gc_emlrtRSI = { 33, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo hc_emlrtRSI = { 34, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ic_emlrtRSI = { 35, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo jc_emlrtRSI = { 39, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo kc_emlrtRSI = { 40, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo lc_emlrtRSI = { 41, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo mc_emlrtRSI = { 42, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo nc_emlrtRSI = { 46, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo oc_emlrtRSI = { 47, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo pc_emlrtRSI = { 48, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo qc_emlrtRSI = { 49, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo rc_emlrtRSI = { 61, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo sc_emlrtRSI = { 62, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo tc_emlrtRSI = { 66, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo uc_emlrtRSI = { 67, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo vc_emlrtRSI = { 72, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo yc_emlrtRSI = { 10, "cos",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\cos.m" };

static emlrtRSInfo ad_emlrtRSI = { 10, "sin",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sin.m" };

static emlrtRSInfo dd_emlrtRSI = { 88, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ed_emlrtRSI = { 96, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo fd_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo gd_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo hd_emlrtRSI = { 40, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo id_emlrtRSI = { 188, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo jd_emlrtRSI = { 187, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo kd_emlrtRSI = { 186, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 2, 23, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 54, 17, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 57, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 58, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 61, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 63, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 66, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 75, 17, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 84, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 25, 9, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo f_emlrtECI = { 2, 57, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo g_emlrtECI = { 2, 58, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo h_emlrtECI = { -1, 63, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo i_emlrtECI = { -1, 66, 15, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo j_emlrtECI = { -1, 67, 15, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo k_emlrtECI = { -1, 68, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo l_emlrtECI = { 2, 72, 17, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo m_emlrtECI = { 2, 72, 12, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 68, 1, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 126, 19, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 172, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtECInfo n_emlrtECI = { -1, 98, 7, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo o_emlrtECI = { -1, 88, 7, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 88, 11, "D", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtECInfo p_emlrtECI = { -1, 88, 21, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo q_emlrtECI = { 2, 87, 16, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo n_emlrtBCI = { -1, -1, 87, 47, "pred", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 98, 7, "idxx", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 99, 9, "D", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 100, 11, "D", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 25, 46, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 25, 71, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 25, 96, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 32, 44, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 32, 69, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 32, 94, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 39, 46, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 39, 67, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 39, 88, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 46, 44, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 46, 65, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 46, 86, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 14, 20, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { 1, 100, 25, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { 1, 100, 25, 58, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { 1, 100, 25, 83, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 28, 36, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { 1, 100, 32, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { 1, 100, 32, 58, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { 1, 100, 32, 83, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 35, 37, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { 1, 100, 39, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { 1, 100, 39, 54, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { 1, 100, 39, 75, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 42, 25, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo xc_emlrtBCI = { 1, 100, 46, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { 1, 100, 46, 54, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { 1, 100, 46, 75, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 49, 25, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

/* Function Declarations */
static void assignClosestCorners(const emlrtStack *sp, const real_T cand_data[],
  const int32_T cand_size[2], const emxArray_real_T *pred, real_T idxx_data[],
  int32_T idxx_size[2]);
static void predictCorners(const emlrtStack *sp, const emxArray_real_T *p1,
  const emxArray_real_T *p2, const emxArray_real_T *p3, emxArray_real_T *pred);

/* Function Definitions */
static void assignClosestCorners(const emlrtStack *sp, const real_T cand_data[],
  const int32_T cand_size[2], const emxArray_real_T *pred, real_T idxx_data[],
  int32_T idxx_size[2])
{
  emxArray_real_T *D;
  int32_T i10;
  int32_T ixstart;
  int32_T i;
  emxArray_real_T *y;
  emxArray_real_T *r5;
  int32_T ii;
  int32_T cand[2];
  int32_T b_y[2];
  boolean_T guard1 = false;
  boolean_T b2;
  real_T delta_data[100];
  real_T b_delta_data[200];
  int32_T delta_size[1];
  emxArray_real_T c_delta_data;
  real_T mtmp;
  int32_T nx;
  int32_T ii_data[1];
  real_T d_delta_data[100];
  real_T tmp_data[100];
  boolean_T exitg2;
  int32_T b_delta_size[1];
  int32_T x_size_idx_0;
  int32_T x_size_idx_1;
  emxArray_real_T e_delta_data;
  boolean_T x_data[10000];
  int32_T k;
  int32_T idx;
  real_T b_tmp_data[100];
  int32_T ii_size_idx_0;
  int32_T c_tmp_data[100];
  int32_T jj_data[1];
  boolean_T exitg1;
  int32_T row_data[1];
  int32_T col_data[1];
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T iv3[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 3U, 2);

  /*  return error if not enough candidates are available */
  if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 5, cand_size[0] < pred->size[0]))
  {
    covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 11);
    idxx_size[0] = 1;
    idxx_size[1] = 1;
    idxx_data[0] = 0.0;
  } else {
    emxInit_real_T(sp, &D, 2, &n_emlrtRTEI, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 12);

    /*  build distance matrix */
    i10 = D->size[0] * D->size[1];
    D->size[0] = cand_size[0];
    D->size[1] = pred->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)D, i10, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    ixstart = cand_size[0] * pred->size[0];
    for (i10 = 0; i10 < ixstart; i10++) {
      D->data[i10] = 0.0;
    }

    i = 0;
    emxInit_real_T(sp, &y, 2, &m_emlrtRTEI, true);
    emxInit_real_T1(sp, &r5, 1, &m_emlrtRTEI, true);
    while (i <= pred->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 0, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 13);
      i10 = pred->size[0];
      ii = i + 1;
      if (!((ii >= 1) && (ii <= i10))) {
        emlrtDynamicBoundsCheckR2012b(ii, 1, i10, &n_emlrtBCI, sp);
      }

      i10 = y->size[0] * y->size[1];
      y->size[0] = cand_size[0];
      y->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                        &m_emlrtRTEI);
      ixstart = cand_size[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        for (ii = 0; ii < 2; ii++) {
          y->data[i10 + y->size[0] * ii] = pred->data[i + pred->size[0] * ii];
        }
      }

      for (i10 = 0; i10 < 2; i10++) {
        cand[i10] = cand_size[i10];
      }

      for (i10 = 0; i10 < 2; i10++) {
        b_y[i10] = y->size[i10];
      }

      if ((cand[0] != b_y[0]) || (cand[1] != b_y[1])) {
        emlrtSizeEqCheckNDR2012b(&cand[0], &b_y[0], &q_emlrtECI, sp);
      }

      ixstart = cand_size[0] * cand_size[1];
      for (i10 = 0; i10 < ixstart; i10++) {
        b_delta_data[i10] = cand_data[i10] - y->data[i10];
      }

      ixstart = cand_size[0];
      delta_size[0] = cand_size[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        delta_data[i10] = b_delta_data[i10];
      }

      c_delta_data.data = (real_T *)&delta_data;
      c_delta_data.size = (int32_T *)&delta_size;
      c_delta_data.allocatedSize = 100;
      c_delta_data.numDimensions = 1;
      c_delta_data.canFreeData = false;
      st.site = &dd_emlrtRSI;
      power(&st, &c_delta_data, r5);
      ii_data[0] = r5->size[0];
      ixstart = r5->size[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        tmp_data[i10] = r5->data[i10];
      }

      ixstart = cand_size[0];
      b_delta_size[0] = cand_size[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        d_delta_data[i10] = b_delta_data[i10 + cand_size[0]];
      }

      e_delta_data.data = (real_T *)&d_delta_data;
      e_delta_data.size = (int32_T *)&b_delta_size;
      e_delta_data.allocatedSize = 100;
      e_delta_data.numDimensions = 1;
      e_delta_data.canFreeData = false;
      st.site = &dd_emlrtRSI;
      power(&st, &e_delta_data, r5);
      nx = r5->size[0];
      ixstart = r5->size[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        b_tmp_data[i10] = r5->data[i10];
      }

      if (ii_data[0] != nx) {
        emlrtSizeEqCheck1DR2012b(ii_data[0], nx, &p_emlrtECI, sp);
      }

      ixstart = D->size[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        c_tmp_data[i10] = i10;
      }

      i10 = D->size[1];
      ii = i + 1;
      if (!((ii >= 1) && (ii <= i10))) {
        emlrtDynamicBoundsCheckR2012b(ii, 1, i10, &m_emlrtBCI, sp);
      }

      i10 = r5->size[0];
      r5->size[0] = ii_data[0];
      emxEnsureCapacity(sp, (emxArray__common *)r5, i10, (int32_T)sizeof(real_T),
                        &m_emlrtRTEI);
      nx = ii_data[0];
      for (i10 = 0; i10 < nx; i10++) {
        r5->data[i10] = tmp_data[i10] + b_tmp_data[i10];
      }

      st.site = &dd_emlrtRSI;
      b_sqrt(&st, r5);
      ii_data[0] = r5->size[0];
      nx = r5->size[0];
      for (i10 = 0; i10 < nx; i10++) {
        tmp_data[i10] = r5->data[i10];
      }

      jj_data[0] = ixstart;
      emlrtSubAssignSizeCheckR2012b(jj_data, 1, ii_data, 1, &o_emlrtECI, sp);
      ixstart = ii_data[0];
      for (i10 = 0; i10 < ixstart; i10++) {
        D->data[c_tmp_data[i10] + D->size[0] * i] = tmp_data[i10];
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&r5);
    emxFree_real_T(&y);
    covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 0, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 14);
    idxx_size[0] = 1;
    idxx_size[1] = pred->size[0];
    ixstart = pred->size[0];
    for (i10 = 0; i10 < ixstart; i10++) {
      idxx_data[i10] = 0.0;
    }

    /*  search greedily for closest corners */
    i = 0;
    while (i <= pred->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 15);
      st.site = &ed_emlrtRSI;
      b_st.site = &fd_emlrtRSI;
      c_st.site = &gd_emlrtRSI;
      ii = D->size[0] * D->size[1];
      guard1 = false;
      if (ii == 1) {
        guard1 = true;
      } else {
        ii = D->size[0] * D->size[1];
        if (ii != 1) {
          guard1 = true;
        } else {
          b2 = false;
        }
      }

      if (guard1) {
        b2 = true;
      }

      if (b2) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &ob_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      ii = D->size[0] * D->size[1];
      if (ii > 0) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &nb_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      ixstart = 1;
      ii = D->size[0] * D->size[1];
      mtmp = D->data[0];
      nx = D->size[0] * D->size[1];
      if (nx > 1) {
        if (muDoubleScalarIsNaN(D->data[0])) {
          nx = 2;
          exitg2 = false;
          while ((!exitg2) && (nx <= ii)) {
            ixstart = nx;
            if (!muDoubleScalarIsNaN(D->data[nx - 1])) {
              mtmp = D->data[nx - 1];
              exitg2 = true;
            } else {
              nx++;
            }
          }
        }

        nx = D->size[0] * D->size[1];
        if (ixstart < nx) {
          while (ixstart + 1 <= ii) {
            if (D->data[ixstart] < mtmp) {
              mtmp = D->data[ixstart];
            }

            ixstart++;
          }
        }
      }

      st.site = &ed_emlrtRSI;
      x_size_idx_0 = D->size[0];
      x_size_idx_1 = D->size[1];
      ixstart = D->size[0] * D->size[1];
      for (i10 = 0; i10 < ixstart; i10++) {
        x_data[i10] = (D->data[i10] == mtmp);
      }

      b_st.site = &hd_emlrtRSI;
      nx = x_size_idx_0 * x_size_idx_1;
      k = muIntScalarMin_sint32(1, nx);
      if (k <= nx) {
      } else {
        emlrtErrorWithMessageIdR2012b(&b_st, &ub_emlrtRTEI,
          "Coder:builtins:AssertionFailed", 0);
      }

      idx = 0;
      if ((!((x_size_idx_0 == 1) || (x_size_idx_1 == 1))) || (x_size_idx_0 != 1)
          || (x_size_idx_1 <= 1)) {
        b2 = true;
      } else {
        b2 = false;
      }

      if (b2) {
      } else {
        emlrtErrorWithMessageIdR2012b(&b_st, &vb_emlrtRTEI,
          "Coder:toolbox:find_incompatibleShape", 0);
      }

      ii_size_idx_0 = k;
      if (nx == 0) {
        ii_size_idx_0 = 0;
        k = 0;
      } else {
        ii = 1;
        ixstart = 1;
        exitg1 = false;
        while ((!exitg1) && (ixstart <= x_size_idx_1)) {
          if (x_data[(ii + x_size_idx_0 * (ixstart - 1)) - 1]) {
            idx = 1;
            ii_data[0] = ii;
            jj_data[0] = ixstart;
            exitg1 = true;
          } else {
            ii++;
            if (ii > x_size_idx_0) {
              ii = 1;
              ixstart++;
            }
          }
        }

        if (idx <= k) {
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &wb_emlrtRTEI,
            "Coder:builtins:AssertionFailed", 0);
        }

        if (k == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
            k = 0;
          }
        } else {
          ii_size_idx_0 = !(1 > idx);
          iv1[0] = 1;
          iv1[1] = ii_size_idx_0;
          c_st.site = &kd_emlrtRSI;
          b_indexShapeCheck(&c_st, k, iv1);
          i10 = !(1 > idx);
          iv2[0] = 1;
          iv2[1] = i10;
          c_st.site = &jd_emlrtRSI;
          b_indexShapeCheck(&c_st, k, iv2);
          k = i10;
          iv3[0] = 1;
          iv3[1] = !(1 > idx);
          c_st.site = &id_emlrtRSI;
          b_indexShapeCheck(&c_st, 0, iv3);
        }
      }

      for (i10 = 0; i10 < ii_size_idx_0; i10++) {
        row_data[i10] = ii_data[i10];
      }

      for (i10 = 0; i10 < k; i10++) {
        col_data[i10] = jj_data[i10];
      }

      /* Locate the first one nonzero.  */
      for (i10 = 0; i10 < k; i10++) {
        ii = col_data[i10];
        if (!((ii >= 1) && (ii <= idxx_size[1]))) {
          emlrtDynamicBoundsCheckR2012b(ii, 1, idxx_size[1], &o_emlrtBCI, sp);
        }

        ii_data[i10] = ii;
      }

      if (k != ii_size_idx_0) {
        emlrtSizeEqCheck1DR2012b(k, ii_size_idx_0, &n_emlrtECI, sp);
      }

      for (i10 = 0; i10 < ii_size_idx_0; i10++) {
        idxx_data[ii_data[i10] - 1] = row_data[i10];
      }

      nx = D->size[0];
      for (i10 = 0; i10 < ii_size_idx_0; i10++) {
        ii = row_data[i10];
        if (!((ii >= 1) && (ii <= nx))) {
          emlrtDynamicBoundsCheckR2012b(ii, 1, nx, &p_emlrtBCI, sp);
        }

        ii_data[i10] = ii;
      }

      ixstart = D->size[1];
      for (i10 = 0; i10 < ixstart; i10++) {
        for (ii = 0; ii < ii_size_idx_0; ii++) {
          D->data[(ii_data[ii] + D->size[0] * i10) - 1] = rtInf;
        }
      }

      nx = D->size[1];
      for (i10 = 0; i10 < k; i10++) {
        ii = col_data[i10];
        if (!((ii >= 1) && (ii <= nx))) {
          emlrtDynamicBoundsCheckR2012b(ii, 1, nx, &q_emlrtBCI, sp);
        }

        ii_data[i10] = ii;
      }

      ixstart = D->size[0];
      for (i10 = 0; i10 < k; i10++) {
        for (ii = 0; ii < ixstart; ii++) {
          D->data[ii + D->size[0] * (ii_data[i10] - 1)] = rtInf;
        }
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&D);
    covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 1, 0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void predictCorners(const emlrtStack *sp, const emxArray_real_T *p1,
  const emxArray_real_T *p2, const emxArray_real_T *p3, emxArray_real_T *pred)
{
  int32_T b_p2[2];
  int32_T k;
  int32_T b_p1[2];
  emxArray_real_T *v1;
  int32_T loop_ub;
  int32_T b_p3[2];
  int32_T c_p2[2];
  emxArray_real_T *v2;
  emxArray_real_T *b_v1;
  emxArray_real_T *c_v1;
  emxArray_real_T *a1;
  emxArray_real_T *b_v2;
  emxArray_real_T *c_v2;
  emxArray_real_T *a3;
  int32_T i6;
  emxArray_real_T *d_v1;
  emxArray_real_T *s1;
  emxArray_real_T *e_v1;
  emxArray_real_T *d_v2;
  emxArray_real_T *b;
  emxArray_real_T *e_v2;
  emxArray_real_T *r4;
  boolean_T overflow;
  int32_T b_pred[2];
  int32_T f_v1[2];
  int32_T c_p3[2];
  int32_T c_pred[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 3U, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 10);

  /*  compute vectors */
  for (k = 0; k < 2; k++) {
    b_p2[k] = p2->size[k];
  }

  for (k = 0; k < 2; k++) {
    b_p1[k] = p1->size[k];
  }

  emxInit_real_T(sp, &v1, 2, &h_emlrtRTEI, true);
  if ((b_p2[0] != b_p1[0]) || (b_p2[1] != b_p1[1])) {
    emlrtSizeEqCheckNDR2012b(&b_p2[0], &b_p1[0], &f_emlrtECI, sp);
  }

  k = v1->size[0] * v1->size[1];
  v1->size[0] = p2->size[0];
  v1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)v1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = p2->size[0] * p2->size[1];
  for (k = 0; k < loop_ub; k++) {
    v1->data[k] = p2->data[k] - p1->data[k];
  }

  for (k = 0; k < 2; k++) {
    b_p3[k] = p3->size[k];
  }

  for (k = 0; k < 2; k++) {
    c_p2[k] = p2->size[k];
  }

  emxInit_real_T(sp, &v2, 2, &i_emlrtRTEI, true);
  if ((b_p3[0] != c_p2[0]) || (b_p3[1] != c_p2[1])) {
    emlrtSizeEqCheckNDR2012b(&b_p3[0], &c_p2[0], &g_emlrtECI, sp);
  }

  k = v2->size[0] * v2->size[1];
  v2->size[0] = p3->size[0];
  v2->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)v2, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = p3->size[0] * p3->size[1];
  for (k = 0; k < loop_ub; k++) {
    v2->data[k] = p3->data[k] - p2->data[k];
  }

  emxInit_real_T1(sp, &b_v1, 1, &g_emlrtRTEI, true);

  /*  predict angles */
  loop_ub = v1->size[0];
  k = b_v1->size[0];
  b_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_v1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    b_v1->data[k] = v1->data[k + v1->size[0]];
  }

  emxInit_real_T1(sp, &c_v1, 1, &g_emlrtRTEI, true);
  loop_ub = v1->size[0];
  k = c_v1->size[0];
  c_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_v1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    c_v1->data[k] = v1->data[k];
  }

  emxInit_real_T1(sp, &a1, 1, &j_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_v2, 1, &g_emlrtRTEI, true);
  st.site = &rc_emlrtRSI;
  b_atan2(&st, b_v1, c_v1, a1);
  loop_ub = v2->size[0];
  k = b_v2->size[0];
  b_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_v2, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  emxFree_real_T(&c_v1);
  emxFree_real_T(&b_v1);
  for (k = 0; k < loop_ub; k++) {
    b_v2->data[k] = v2->data[k + v2->size[0]];
  }

  emxInit_real_T1(sp, &c_v2, 1, &g_emlrtRTEI, true);
  loop_ub = v2->size[0];
  k = c_v2->size[0];
  c_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_v2, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    c_v2->data[k] = v2->data[k];
  }

  emxInit_real_T1(sp, &a3, 1, &k_emlrtRTEI, true);
  st.site = &sc_emlrtRSI;
  b_atan2(&st, b_v2, c_v2, a3);
  k = a3->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)a3, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = a3->size[0];
  emxFree_real_T(&c_v2);
  emxFree_real_T(&b_v2);
  for (k = 0; k < loop_ub; k++) {
    a3->data[k] *= 2.0;
  }

  k = a3->size[0];
  i6 = a1->size[0];
  if (k != i6) {
    emlrtSizeEqCheck1DR2012b(k, i6, &h_emlrtECI, sp);
  }

  k = a3->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)a3, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    a3->data[k] -= a1->data[k];
  }

  emxInit_real_T1(sp, &d_v1, 1, &g_emlrtRTEI, true);

  /*  predict scales */
  loop_ub = v1->size[0];
  k = d_v1->size[0];
  d_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)d_v1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    d_v1->data[k] = v1->data[k];
  }

  emxInit_real_T1(sp, &s1, 1, &l_emlrtRTEI, true);
  emxInit_real_T1(sp, &e_v1, 1, &g_emlrtRTEI, true);
  st.site = &tc_emlrtRSI;
  power(&st, d_v1, s1);
  loop_ub = v1->size[0];
  k = e_v1->size[0];
  e_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)e_v1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  emxFree_real_T(&d_v1);
  for (k = 0; k < loop_ub; k++) {
    e_v1->data[k] = v1->data[k + v1->size[0]];
  }

  st.site = &tc_emlrtRSI;
  power(&st, e_v1, a1);
  k = s1->size[0];
  i6 = a1->size[0];
  if (k != i6) {
    emlrtSizeEqCheck1DR2012b(k, i6, &i_emlrtECI, sp);
  }

  k = s1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)s1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = s1->size[0];
  emxFree_real_T(&e_v1);
  for (k = 0; k < loop_ub; k++) {
    s1->data[k] += a1->data[k];
  }

  emxInit_real_T1(sp, &d_v2, 1, &g_emlrtRTEI, true);
  st.site = &tc_emlrtRSI;
  b_sqrt(&st, s1);
  loop_ub = v2->size[0];
  k = d_v2->size[0];
  d_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)d_v2, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    d_v2->data[k] = v2->data[k];
  }

  emxInit_real_T1(sp, &b, 1, &g_emlrtRTEI, true);
  emxInit_real_T1(sp, &e_v2, 1, &g_emlrtRTEI, true);
  st.site = &uc_emlrtRSI;
  power(&st, d_v2, b);
  loop_ub = v2->size[0];
  k = e_v2->size[0];
  e_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)e_v2, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  emxFree_real_T(&d_v2);
  for (k = 0; k < loop_ub; k++) {
    e_v2->data[k] = v2->data[k + v2->size[0]];
  }

  emxFree_real_T(&v2);
  st.site = &uc_emlrtRSI;
  power(&st, e_v2, a1);
  k = b->size[0];
  i6 = a1->size[0];
  if (k != i6) {
    emlrtSizeEqCheck1DR2012b(k, i6, &j_emlrtECI, sp);
  }

  k = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = b->size[0];
  emxFree_real_T(&e_v2);
  for (k = 0; k < loop_ub; k++) {
    b->data[k] += a1->data[k];
  }

  st.site = &uc_emlrtRSI;
  b_sqrt(&st, b);
  k = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = b->size[0];
  for (k = 0; k < loop_ub; k++) {
    b->data[k] *= 2.0;
  }

  emxInit_real_T1(sp, &r4, 1, &g_emlrtRTEI, true);
  k = b->size[0];
  i6 = s1->size[0];
  if (k != i6) {
    emlrtSizeEqCheck1DR2012b(k, i6, &k_emlrtECI, sp);
  }

  /*  predict p3 (the factor 0.75 ensures that under extreme */
  /*  distortions (omnicam) the closer prediction is selected) */
  k = r4->size[0];
  r4->size[0] = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r4, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = b->size[0];
  for (k = 0; k < loop_ub; k++) {
    r4->data[k] = 0.75 * (b->data[k] - s1->data[k]);
  }

  emxFree_real_T(&b);
  k = pred->size[0] * pred->size[1];
  pred->size[0] = r4->size[0];
  pred->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)pred, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = r4->size[0];
  for (k = 0; k < loop_ub; k++) {
    for (i6 = 0; i6 < 2; i6++) {
      pred->data[k + pred->size[0] * i6] = r4->data[k];
    }
  }

  emxFree_real_T(&r4);
  st.site = &vc_emlrtRSI;
  b_st.site = &yc_emlrtRSI;
  k = a1->size[0];
  a1->size[0] = a3->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)a1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    a1->data[k] = a3->data[k];
  }

  c_st.site = &qb_emlrtRSI;
  overflow = ((!(1 > a3->size[0])) && (a3->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= a3->size[0]; k++) {
    a1->data[k] = muDoubleScalarCos(a1->data[k]);
  }

  st.site = &vc_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  k = s1->size[0];
  s1->size[0] = a3->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)s1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    s1->data[k] = a3->data[k];
  }

  c_st.site = &qb_emlrtRSI;
  for (k = 0; k + 1 <= a3->size[0]; k++) {
    s1->data[k] = muDoubleScalarSin(s1->data[k]);
  }

  emxFree_real_T(&a3);
  st.site = &vc_emlrtRSI;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &cd_emlrtRSI;
  overflow = true;
  if (a1->size[0] == s1->size[0]) {
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  k = v1->size[0] * v1->size[1];
  v1->size[0] = a1->size[0];
  v1->size[1] = 2;
  emxEnsureCapacity(&b_st, (emxArray__common *)v1, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = a1->size[0];
  for (k = 0; k < loop_ub; k++) {
    v1->data[k] = a1->data[k];
  }

  emxFree_real_T(&a1);
  loop_ub = s1->size[0];
  for (k = 0; k < loop_ub; k++) {
    v1->data[k + v1->size[0]] = s1->data[k];
  }

  emxFree_real_T(&s1);
  for (k = 0; k < 2; k++) {
    b_pred[k] = pred->size[k];
  }

  for (k = 0; k < 2; k++) {
    f_v1[k] = v1->size[k];
  }

  if ((b_pred[0] != f_v1[0]) || (b_pred[1] != f_v1[1])) {
    emlrtSizeEqCheckNDR2012b(&b_pred[0], &f_v1[0], &l_emlrtECI, sp);
  }

  k = pred->size[0] * pred->size[1];
  pred->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)pred, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  k = pred->size[0];
  loop_ub = pred->size[1];
  loop_ub *= k;
  for (k = 0; k < loop_ub; k++) {
    pred->data[k] *= v1->data[k];
  }

  emxFree_real_T(&v1);
  for (k = 0; k < 2; k++) {
    c_p3[k] = p3->size[k];
  }

  for (k = 0; k < 2; k++) {
    c_pred[k] = pred->size[k];
  }

  if ((c_p3[0] != c_pred[0]) || (c_p3[1] != c_pred[1])) {
    emlrtSizeEqCheckNDR2012b(&c_p3[0], &c_pred[0], &m_emlrtECI, sp);
  }

  k = pred->size[0] * pred->size[1];
  pred->size[0] = p3->size[0];
  pred->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)pred, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = p3->size[0] * p3->size[1];
  for (k = 0; k < loop_ub; k++) {
    pred->data[k] += p3->data[k];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void growChessboard(const emlrtStack *sp, emxArray_real_T *chessboard, const
                    real_T corners_p[200], real_T border_type)
{
  int32_T end;
  int32_T i;
  emxArray_int32_T *r11;
  int32_T i33;
  int32_T trueCount;
  int32_T unused_size[2];
  real_T unused_data[100];
  emxArray_int32_T *b_chessboard;
  int32_T loop_ub;
  int32_T cand_size[2];
  emxArray_real_T *pred;
  int32_T i34;
  emxArray_real_T *b_corners_p;
  emxArray_real_T *c_corners_p;
  emxArray_real_T *d_corners_p;
  emxArray_real_T *e_corners_p;
  real_T cand_data[200];
  emxArray_real_T *f_corners_p;
  emxArray_real_T *g_corners_p;
  emxArray_real_T *h_corners_p;
  emxArray_real_T *i_corners_p;
  emxArray_real_T *j_corners_p;
  emxArray_real_T *k_corners_p;
  emxArray_real_T *l_corners_p;
  emxArray_real_T *m_corners_p;
  real_T idx_data[100];
  int32_T idx_size[2];
  boolean_T b_idx_data[100];
  int32_T b_idx_size[2];
  boolean_T empty_non_axis_sizes;
  real_T b_unused_data[100];
  emxArray_real_T *unused;
  emxArray_real_T *b_unused;
  emxArray_real_T *c_chessboard;
  emxArray_real_T *d_chessboard;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 3U, 0);

  /*  return immediately, if there do not exist any chessboards */
  if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 0, (chessboard->size[0] == 0) ||
                 (chessboard->size[1] == 0))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 0);
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 1);

    /*  extract feature locations */
    /*  list of unused feature elements */
    st.site = &yb_emlrtRSI;
    indexShapeCheck(&st, *(int32_T (*)[2])chessboard->size, *(int32_T (*)[2])
                    chessboard->size);
    end = chessboard->size[0] * chessboard->size[1];
    for (i = 0; i < end; i++) {
      if (chessboard->data[i] != 0.0) {
        i33 = chessboard->size[0] * chessboard->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i33))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i33, &kc_emlrtBCI, sp);
        }
      }
    }

    emxInit_int32_T(sp, &r11, 1, &f_emlrtRTEI, true);
    end = chessboard->size[0] * chessboard->size[1] - 1;
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (chessboard->data[i] != 0.0) {
        trueCount++;
      }
    }

    i33 = r11->size[0];
    r11->size[0] = trueCount;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i33, (int32_T)sizeof(int32_T),
                      &f_emlrtRTEI);
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (chessboard->data[i] != 0.0) {
        r11->data[trueCount] = i + 1;
        trueCount++;
      }
    }

    unused_size[0] = 1;
    unused_size[1] = 100;
    for (i33 = 0; i33 < 100; i33++) {
      unused_data[i33] = 1.0 + (real_T)i33;
    }

    emxInit_int32_T(sp, &b_chessboard, 1, &f_emlrtRTEI, true);
    i33 = b_chessboard->size[0];
    b_chessboard->size[0] = r11->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_chessboard, i33, (int32_T)sizeof
                      (int32_T), &f_emlrtRTEI);
    loop_ub = r11->size[0];
    for (i33 = 0; i33 < loop_ub; i33++) {
      b_chessboard->data[i33] = (int32_T)chessboard->data[r11->data[i33] - 1];
    }

    emxFree_int32_T(&r11);
    st.site = &ac_emlrtRSI;
    nullAssignment(&st, unused_data, unused_size, b_chessboard);

    /*  candidates from unused corners */
    cand_size[0] = unused_size[1];
    cand_size[1] = 2;
    emxFree_int32_T(&b_chessboard);
    for (i33 = 0; i33 < 2; i33++) {
      loop_ub = unused_size[1];
      for (i34 = 0; i34 < loop_ub; i34++) {
        cand_data[i34 + cand_size[0] * i33] = corners_p[((int32_T)
          unused_data[unused_size[0] * i34] + 100 * i33) - 1];
      }
    }

    /*  switch border type 1..4 */
    emxInit_real_T(sp, &pred, 2, &fb_emlrtRTEI, true);
    switch ((int32_T)border_type) {
     case 1:
      emxInit_real_T(sp, &b_corners_p, 2, &f_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 3U, 0U, 0, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 2);
      loop_ub = chessboard->size[0];
      i33 = chessboard->size[1];
      trueCount = (int32_T)((real_T)chessboard->size[1] - 2.0);
      if (!((trueCount >= 1) && (trueCount <= i33))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i33, &xb_emlrtBCI, sp);
      }

      i33 = b_corners_p->size[0] * b_corners_p->size[1];
      b_corners_p->size[0] = loop_ub;
      b_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)b_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[i34 + chessboard->size[0] * (trueCount
            - 1)];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &lc_emlrtBCI, sp);
          }

          b_corners_p->data[i34 + b_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &f_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      i33 = chessboard->size[1];
      trueCount = (int32_T)((real_T)chessboard->size[1] - 1.0);
      if (!((trueCount >= 1) && (trueCount <= i33))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i33, &yb_emlrtBCI, sp);
      }

      i33 = f_corners_p->size[0] * f_corners_p->size[1];
      f_corners_p->size[0] = loop_ub;
      f_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)f_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[i34 + chessboard->size[0] * (trueCount
            - 1)];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &mc_emlrtBCI, sp);
          }

          f_corners_p->data[i34 + f_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &j_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      i33 = chessboard->size[1];
      trueCount = chessboard->size[1];
      if (!((trueCount >= 1) && (trueCount <= i33))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i33, &ac_emlrtBCI, sp);
      }

      i33 = j_corners_p->size[0] * j_corners_p->size[1];
      j_corners_p->size[0] = loop_ub;
      j_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)j_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[i34 + chessboard->size[0] * (trueCount
            - 1)];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &nc_emlrtBCI, sp);
          }

          j_corners_p->data[i34 + j_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      st.site = &bc_emlrtRSI;
      predictCorners(&st, b_corners_p, f_corners_p, j_corners_p, pred);
      st.site = &cc_emlrtRSI;
      assignClosestCorners(&st, cand_data, cand_size, pred, idx_data, idx_size);
      b_idx_size[0] = 1;
      b_idx_size[1] = idx_size[1];
      loop_ub = idx_size[0] * idx_size[1];
      emxFree_real_T(&j_corners_p);
      emxFree_real_T(&f_corners_p);
      emxFree_real_T(&b_corners_p);
      for (i33 = 0; i33 < loop_ub; i33++) {
        b_idx_data[i33] = (idx_data[i33] != 0.0);
      }

      st.site = &dc_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 1, all(&st, b_idx_data,
            b_idx_size))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 3);
        st.site = &ec_emlrtRSI;
        loop_ub = idx_size[0] * idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          i34 = (int32_T)idx_data[i33];
          if (!((i34 >= 1) && (i34 <= unused_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, unused_size[1], &oc_emlrtBCI,
              &st);
          }
        }

        b_st.site = &od_emlrtRSI;
        if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0))) {
          trueCount = chessboard->size[0];
        } else if (!(idx_size[1] == 0)) {
          trueCount = idx_size[1];
        } else {
          trueCount = muIntScalarMax_sint32(chessboard->size[0], 0);
          if (0 > trueCount) {
            trueCount = 0;
          }
        }

        c_st.site = &cd_emlrtRSI;
        if ((trueCount == chessboard->size[0]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((trueCount == idx_size[1]) || (idx_size[1] == 0)) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (trueCount == 0);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          end = chessboard->size[1];
        } else {
          end = 0;
        }

        if (empty_non_axis_sizes || (!(idx_size[1] == 0))) {
          i = 1;
        } else {
          i = 0;
        }

        loop_ub = idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          b_unused_data[i33] = unused_data[(int32_T)idx_data[idx_size[0] * i33]
            - 1];
        }

        emxInit_real_T(&b_st, &c_chessboard, 2, &f_emlrtRTEI, true);
        i33 = c_chessboard->size[0] * c_chessboard->size[1];
        c_chessboard->size[0] = trueCount;
        c_chessboard->size[1] = end + i;
        emxEnsureCapacity(&b_st, (emxArray__common *)c_chessboard, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        for (i33 = 0; i33 < end; i33++) {
          for (i34 = 0; i34 < trueCount; i34++) {
            c_chessboard->data[i34 + c_chessboard->size[0] * i33] =
              chessboard->data[i34 + trueCount * i33];
          }
        }

        for (i33 = 0; i33 < i; i33++) {
          for (i34 = 0; i34 < trueCount; i34++) {
            c_chessboard->data[i34 + c_chessboard->size[0] * (i33 + end)] =
              b_unused_data[i34 + trueCount * i33];
          }
        }

        i33 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = c_chessboard->size[0];
        chessboard->size[1] = c_chessboard->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        loop_ub = c_chessboard->size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          trueCount = c_chessboard->size[0];
          for (i34 = 0; i34 < trueCount; i34++) {
            chessboard->data[i34 + chessboard->size[0] * i33] =
              c_chessboard->data[i34 + c_chessboard->size[0] * i33];
          }
        }

        emxFree_real_T(&c_chessboard);
      }
      break;

     case 2:
      emxInit_real_T(sp, &c_corners_p, 2, &f_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 3U, 0U, 0, 2);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 4);
      loop_ub = chessboard->size[1];
      i33 = chessboard->size[0];
      trueCount = (int32_T)((real_T)chessboard->size[0] - 2.0);
      if (!((trueCount >= 1) && (trueCount <= i33))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i33, &bc_emlrtBCI, sp);
      }

      i33 = c_corners_p->size[0] * c_corners_p->size[1];
      c_corners_p->size[0] = loop_ub;
      c_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)c_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[(trueCount + chessboard->size[0] * i34)
            - 1];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &pc_emlrtBCI, sp);
          }

          c_corners_p->data[i34 + c_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &g_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      i33 = chessboard->size[0];
      trueCount = (int32_T)((real_T)chessboard->size[0] - 1.0);
      if (!((trueCount >= 1) && (trueCount <= i33))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i33, &cc_emlrtBCI, sp);
      }

      i33 = g_corners_p->size[0] * g_corners_p->size[1];
      g_corners_p->size[0] = loop_ub;
      g_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)g_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[(trueCount + chessboard->size[0] * i34)
            - 1];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &qc_emlrtBCI, sp);
          }

          g_corners_p->data[i34 + g_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &k_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      i33 = chessboard->size[0];
      trueCount = chessboard->size[0];
      if (!((trueCount >= 1) && (trueCount <= i33))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i33, &dc_emlrtBCI, sp);
      }

      i33 = k_corners_p->size[0] * k_corners_p->size[1];
      k_corners_p->size[0] = loop_ub;
      k_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)k_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[(trueCount + chessboard->size[0] * i34)
            - 1];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &rc_emlrtBCI, sp);
          }

          k_corners_p->data[i34 + k_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      st.site = &fc_emlrtRSI;
      predictCorners(&st, c_corners_p, g_corners_p, k_corners_p, pred);
      st.site = &gc_emlrtRSI;
      assignClosestCorners(&st, cand_data, cand_size, pred, idx_data, idx_size);
      b_idx_size[0] = 1;
      b_idx_size[1] = idx_size[1];
      loop_ub = idx_size[0] * idx_size[1];
      emxFree_real_T(&k_corners_p);
      emxFree_real_T(&g_corners_p);
      emxFree_real_T(&c_corners_p);
      for (i33 = 0; i33 < loop_ub; i33++) {
        b_idx_data[i33] = (idx_data[i33] != 0.0);
      }

      st.site = &hc_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 2, all(&st, b_idx_data,
            b_idx_size))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 5);
        st.site = &ic_emlrtRSI;
        loop_ub = idx_size[0] * idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          i34 = (int32_T)idx_data[i33];
          if (!((i34 >= 1) && (i34 <= unused_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, unused_size[1], &sc_emlrtBCI,
              &st);
          }
        }

        b_st.site = &od_emlrtRSI;
        if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0))) {
          trueCount = chessboard->size[1];
        } else if (!(idx_size[1] == 0)) {
          trueCount = idx_size[1];
        } else {
          trueCount = muIntScalarMax_sint32(chessboard->size[1], 0);
          if (0 > trueCount) {
            trueCount = 0;
          }
        }

        c_st.site = &cd_emlrtRSI;
        if ((trueCount == chessboard->size[1]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((trueCount == idx_size[1]) || (idx_size[1] == 0)) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (trueCount == 0);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          end = chessboard->size[0];
        } else {
          end = 0;
        }

        if (empty_non_axis_sizes || (!(idx_size[1] == 0))) {
          i = 1;
        } else {
          i = 0;
        }

        loop_ub = idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          b_unused_data[i33] = unused_data[(int32_T)idx_data[idx_size[0] * i33]
            - 1];
        }

        emxInit_real_T(&b_st, &d_chessboard, 2, &f_emlrtRTEI, true);
        i33 = d_chessboard->size[0] * d_chessboard->size[1];
        d_chessboard->size[0] = end + i;
        d_chessboard->size[1] = trueCount;
        emxEnsureCapacity(&b_st, (emxArray__common *)d_chessboard, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        for (i33 = 0; i33 < trueCount; i33++) {
          for (i34 = 0; i34 < end; i34++) {
            d_chessboard->data[i34 + d_chessboard->size[0] * i33] =
              chessboard->data[i34 + end * i33];
          }
        }

        for (i33 = 0; i33 < trueCount; i33++) {
          for (i34 = 0; i34 < i; i34++) {
            d_chessboard->data[(i34 + end) + d_chessboard->size[0] * i33] =
              b_unused_data[i34 + i * i33];
          }
        }

        i33 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = d_chessboard->size[0];
        chessboard->size[1] = d_chessboard->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        loop_ub = d_chessboard->size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          trueCount = d_chessboard->size[0];
          for (i34 = 0; i34 < trueCount; i34++) {
            chessboard->data[i34 + chessboard->size[0] * i33] =
              d_chessboard->data[i34 + d_chessboard->size[0] * i33];
          }
        }

        emxFree_real_T(&d_chessboard);
      }
      break;

     case 3:
      emxInit_real_T(sp, &d_corners_p, 2, &f_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 3U, 0U, 0, 3);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 6);
      i33 = chessboard->size[1];
      if (!(3 <= i33)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i33, &ec_emlrtBCI, sp);
      }

      i33 = chessboard->size[1];
      if (!(2 <= i33)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i33, &fc_emlrtBCI, sp);
      }

      i33 = chessboard->size[1];
      if (!(1 <= i33)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i33, &gc_emlrtBCI, sp);
      }

      loop_ub = chessboard->size[0];
      i33 = d_corners_p->size[0] * d_corners_p->size[1];
      d_corners_p->size[0] = loop_ub;
      d_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)d_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[i34 + (chessboard->size[0] << 1)];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &tc_emlrtBCI, sp);
          }

          d_corners_p->data[i34 + d_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &h_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      i33 = h_corners_p->size[0] * h_corners_p->size[1];
      h_corners_p->size[0] = loop_ub;
      h_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)h_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[i34 + chessboard->size[0]];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &uc_emlrtBCI, sp);
          }

          h_corners_p->data[i34 + h_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &l_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      i33 = l_corners_p->size[0] * l_corners_p->size[1];
      l_corners_p->size[0] = loop_ub;
      l_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)l_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[i34];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &vc_emlrtBCI, sp);
          }

          l_corners_p->data[i34 + l_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      st.site = &jc_emlrtRSI;
      predictCorners(&st, d_corners_p, h_corners_p, l_corners_p, pred);
      st.site = &kc_emlrtRSI;
      assignClosestCorners(&st, cand_data, cand_size, pred, idx_data, idx_size);
      b_idx_size[0] = 1;
      b_idx_size[1] = idx_size[1];
      loop_ub = idx_size[0] * idx_size[1];
      emxFree_real_T(&l_corners_p);
      emxFree_real_T(&h_corners_p);
      emxFree_real_T(&d_corners_p);
      for (i33 = 0; i33 < loop_ub; i33++) {
        b_idx_data[i33] = (idx_data[i33] != 0.0);
      }

      st.site = &lc_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 3, all(&st, b_idx_data,
            b_idx_size))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 7);
        st.site = &mc_emlrtRSI;
        loop_ub = idx_size[0] * idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          i34 = (int32_T)idx_data[i33];
          if (!((i34 >= 1) && (i34 <= unused_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, unused_size[1], &wc_emlrtBCI,
              &st);
          }
        }

        b_st.site = &od_emlrtRSI;
        if (!(idx_size[1] == 0)) {
          trueCount = idx_size[1];
        } else if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0)))
        {
          trueCount = chessboard->size[0];
        } else {
          trueCount = 0;
          if (chessboard->size[0] > 0) {
            trueCount = chessboard->size[0];
          }
        }

        c_st.site = &cd_emlrtRSI;
        if ((trueCount == idx_size[1]) || (idx_size[1] == 0)) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((trueCount == chessboard->size[0]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (trueCount == 0);
        if (empty_non_axis_sizes || (!(idx_size[1] == 0))) {
          end = 1;
        } else {
          end = 0;
        }

        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          i = chessboard->size[1];
        } else {
          i = 0;
        }

        loop_ub = idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          b_unused_data[i33] = unused_data[(int32_T)idx_data[idx_size[0] * i33]
            - 1];
        }

        emxInit_real_T(&b_st, &unused, 2, &f_emlrtRTEI, true);
        i33 = unused->size[0] * unused->size[1];
        unused->size[0] = trueCount;
        unused->size[1] = end + i;
        emxEnsureCapacity(&b_st, (emxArray__common *)unused, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        for (i33 = 0; i33 < end; i33++) {
          for (i34 = 0; i34 < trueCount; i34++) {
            unused->data[i34 + unused->size[0] * i33] = b_unused_data[i34 +
              trueCount * i33];
          }
        }

        for (i33 = 0; i33 < i; i33++) {
          for (i34 = 0; i34 < trueCount; i34++) {
            unused->data[i34 + unused->size[0] * (i33 + end)] = chessboard->
              data[i34 + trueCount * i33];
          }
        }

        i33 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = unused->size[0];
        chessboard->size[1] = unused->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        loop_ub = unused->size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          trueCount = unused->size[0];
          for (i34 = 0; i34 < trueCount; i34++) {
            chessboard->data[i34 + chessboard->size[0] * i33] = unused->data[i34
              + unused->size[0] * i33];
          }
        }

        emxFree_real_T(&unused);
      }
      break;

     case 4:
      emxInit_real_T(sp, &e_corners_p, 2, &f_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 3U, 0U, 0, 4);
      covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 8);
      i33 = chessboard->size[0];
      if (!(3 <= i33)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i33, &hc_emlrtBCI, sp);
      }

      i33 = chessboard->size[0];
      if (!(2 <= i33)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i33, &ic_emlrtBCI, sp);
      }

      i33 = chessboard->size[0];
      if (!(1 <= i33)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i33, &jc_emlrtBCI, sp);
      }

      loop_ub = chessboard->size[1];
      i33 = e_corners_p->size[0] * e_corners_p->size[1];
      e_corners_p->size[0] = loop_ub;
      e_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)e_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[2 + chessboard->size[0] * i34];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &xc_emlrtBCI, sp);
          }

          e_corners_p->data[i34 + e_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &i_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      i33 = i_corners_p->size[0] * i_corners_p->size[1];
      i_corners_p->size[0] = loop_ub;
      i_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)i_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[1 + chessboard->size[0] * i34];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &yc_emlrtBCI, sp);
          }

          i_corners_p->data[i34 + i_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      emxInit_real_T(sp, &m_corners_p, 2, &f_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      i33 = m_corners_p->size[0] * m_corners_p->size[1];
      m_corners_p->size[0] = loop_ub;
      m_corners_p->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)m_corners_p, i33, (int32_T)
                        sizeof(real_T), &f_emlrtRTEI);
      for (i33 = 0; i33 < 2; i33++) {
        for (i34 = 0; i34 < loop_ub; i34++) {
          end = (int32_T)chessboard->data[chessboard->size[0] * i34];
          if (!((end >= 1) && (end <= 100))) {
            emlrtDynamicBoundsCheckR2012b(end, 1, 100, &ad_emlrtBCI, sp);
          }

          m_corners_p->data[i34 + m_corners_p->size[0] * i33] = corners_p[(end +
            100 * i33) - 1];
        }
      }

      st.site = &nc_emlrtRSI;
      predictCorners(&st, e_corners_p, i_corners_p, m_corners_p, pred);
      st.site = &oc_emlrtRSI;
      assignClosestCorners(&st, cand_data, cand_size, pred, idx_data, idx_size);
      b_idx_size[0] = 1;
      b_idx_size[1] = idx_size[1];
      loop_ub = idx_size[0] * idx_size[1];
      emxFree_real_T(&m_corners_p);
      emxFree_real_T(&i_corners_p);
      emxFree_real_T(&e_corners_p);
      for (i33 = 0; i33 < loop_ub; i33++) {
        b_idx_data[i33] = (idx_data[i33] != 0.0);
      }

      st.site = &pc_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 3U, 0U, 4, all(&st, b_idx_data,
            b_idx_size))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 9);
        st.site = &qc_emlrtRSI;
        loop_ub = idx_size[0] * idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          i34 = (int32_T)idx_data[i33];
          if (!((i34 >= 1) && (i34 <= unused_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, unused_size[1], &bd_emlrtBCI,
              &st);
          }
        }

        b_st.site = &od_emlrtRSI;
        if (!(idx_size[1] == 0)) {
          trueCount = idx_size[1];
        } else if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0)))
        {
          trueCount = chessboard->size[1];
        } else {
          trueCount = 0;
          if (chessboard->size[1] > 0) {
            trueCount = chessboard->size[1];
          }
        }

        c_st.site = &cd_emlrtRSI;
        if ((trueCount == idx_size[1]) || (idx_size[1] == 0)) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((trueCount == chessboard->size[1]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &tb_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (trueCount == 0);
        if (empty_non_axis_sizes || (!(idx_size[1] == 0))) {
          end = 1;
        } else {
          end = 0;
        }

        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          i = chessboard->size[0];
        } else {
          i = 0;
        }

        loop_ub = idx_size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          b_unused_data[i33] = unused_data[(int32_T)idx_data[idx_size[0] * i33]
            - 1];
        }

        emxInit_real_T(&b_st, &b_unused, 2, &f_emlrtRTEI, true);
        i33 = b_unused->size[0] * b_unused->size[1];
        b_unused->size[0] = end + i;
        b_unused->size[1] = trueCount;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_unused, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        for (i33 = 0; i33 < trueCount; i33++) {
          for (i34 = 0; i34 < end; i34++) {
            b_unused->data[i34 + b_unused->size[0] * i33] = b_unused_data[i34 +
              end * i33];
          }
        }

        for (i33 = 0; i33 < trueCount; i33++) {
          for (i34 = 0; i34 < i; i34++) {
            b_unused->data[(i34 + end) + b_unused->size[0] * i33] =
              chessboard->data[i34 + i * i33];
          }
        }

        i33 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = b_unused->size[0];
        chessboard->size[1] = b_unused->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i33, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        loop_ub = b_unused->size[1];
        for (i33 = 0; i33 < loop_ub; i33++) {
          trueCount = b_unused->size[0];
          for (i34 = 0; i34 < trueCount; i34++) {
            chessboard->data[i34 + chessboard->size[0] * i33] = b_unused->
              data[i34 + b_unused->size[0] * i33];
          }
        }

        emxFree_real_T(&b_unused);
      }
      break;

     default:
      covrtLogSwitch(&emlrtCoverageInstance, 3U, 0U, 0, 0);
      break;
    }

    emxFree_real_T(&pred);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (growChessboard.c) */
