/*
 * growChessboard.c
 *
 * Code generation for function 'growChessboard'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "growChessboard.h"
#include "fce_emxutil.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "power.h"
#include "indexShapeCheck.h"
#include "atan2.h"
#include "nullAssignment.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo tf_emlrtRSI = { 13, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo uf_emlrtRSI = { 14, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo vf_emlrtRSI = { 15, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo wf_emlrtRSI = { 25, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo xf_emlrtRSI = { 26, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo yf_emlrtRSI = { 27, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ag_emlrtRSI = { 28, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo bg_emlrtRSI = { 32, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo cg_emlrtRSI = { 33, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo dg_emlrtRSI = { 34, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo eg_emlrtRSI = { 35, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo fg_emlrtRSI = { 39, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo gg_emlrtRSI = { 40, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo hg_emlrtRSI = { 41, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ig_emlrtRSI = { 42, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo jg_emlrtRSI = { 46, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo kg_emlrtRSI = { 47, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo lg_emlrtRSI = { 48, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo mg_emlrtRSI = { 49, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ng_emlrtRSI = { 61, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo og_emlrtRSI = { 62, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo pg_emlrtRSI = { 66, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo qg_emlrtRSI = { 67, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo rg_emlrtRSI = { 72, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo ug_emlrtRSI = { 10, "cos",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\cos.m" };

static emlrtRSInfo vg_emlrtRSI = { 10, "sin",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sin.m" };

static emlrtRSInfo wg_emlrtRSI = { 88, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo xg_emlrtRSI = { 96, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRSInfo yg_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo ah_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo bh_emlrtRSI = { 40, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo ch_emlrtRSI = { 188, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo dh_emlrtRSI = { 187, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo eh_emlrtRSI = { 186, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 2, 23, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 54, 17, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 57, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 58, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 61, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 63, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 66, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 75, 17, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 84, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 87, 7, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 13, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 19, 5, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 25, 9, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo ac_emlrtRTEI = { 26, 9, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo u_emlrtECI = { 2, 57, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo v_emlrtECI = { 2, 58, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 61, 21, "v1", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 61, 29, "v1", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 62, 21, "v2", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 62, 29, "v2", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtECInfo w_emlrtECI = { -1, 63, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 66, 20, "v1", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 66, 31, "v1", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtECInfo x_emlrtECI = { -1, 66, 15, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 67, 20, "v2", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 67, 31, "v2", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtECInfo y_emlrtECI = { -1, 67, 15, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo ab_emlrtECI = { -1, 68, 10, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo bb_emlrtECI = { 2, 72, 17, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo cb_emlrtECI = { 2, 72, 12, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 87, 47, "pred", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtECInfo db_emlrtECI = { 2, 87, 16, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo eb_emlrtECI = { -1, 88, 21, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 88, 11, "D", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtECInfo fb_emlrtECI = { -1, 88, 7, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtECInfo gb_emlrtECI = { -1, 98, 7, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m"
};

static emlrtRTEInfo sc_emlrtRTEI = { 172, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo tc_emlrtRTEI = { 126, 19, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo uc_emlrtRTEI = { 68, 1, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 98, 7, "idxx", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 99, 9, "D", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 100, 11, "D", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 14, 20, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 46, 86, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 46, 65, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 46, 44, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 39, 88, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 39, 67, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 39, 46, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 32, 94, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 32, 69, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 32, 44, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 25, 96, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 25, 71, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 25, 46, "chessboard",
  "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 19, 14, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 19, 14, "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  1 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 25, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 25, 58, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 25, 83, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 28, 36, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 32, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 32, 58, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 32, 83, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 35, 37, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 39, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 39, 54, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 39, 75, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 42, 25, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 46, 33, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 46, 54, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 46, 75, "p", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 49, 25, "unused", "growChessboard",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
  0 };

/* Function Declarations */
static void assignClosestCorners(const emlrtStack *sp, const emxArray_real_T
  *cand, const emxArray_real_T *pred, emxArray_real_T *idxx);
static void predictCorners(const emlrtStack *sp, const emxArray_real_T *p1,
  const emxArray_real_T *p2, const emxArray_real_T *p3, emxArray_real_T *pred);

/* Function Definitions */
static void assignClosestCorners(const emlrtStack *sp, const emxArray_real_T
  *cand, const emxArray_real_T *pred, emxArray_real_T *idxx)
{
  emxArray_real_T *D;
  int32_T i23;
  int32_T idx;
  int32_T i;
  emxArray_real_T *delta;
  emxArray_real_T *r9;
  emxArray_real_T *r10;
  emxArray_int32_T *r11;
  emxArray_real_T *b_delta;
  emxArray_real_T *c_delta;
  int32_T i24;
  int32_T nx;
  int32_T b_cand[2];
  int32_T d_delta[2];
  emxArray_boolean_T *x;
  boolean_T guard1 = false;
  boolean_T overflow;
  int32_T ixstart;
  real_T mtmp;
  boolean_T exitg2;
  int32_T k;
  int32_T ii_data[1];
  int32_T ii_size_idx_0;
  int32_T jj_data[1];
  boolean_T exitg1;
  int32_T row_data[1];
  int32_T col_data[1];
  int32_T iv6[2];
  int32_T iv7[2];
  int32_T iv8[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 11U, 2);

  /*  return error if not enough candidates are available */
  if (covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 5, cand->size[0] < pred->size
                 [0])) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 11);
    i23 = idxx->size[0] * idxx->size[1];
    idxx->size[0] = 1;
    idxx->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)idxx, i23, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    idxx->data[0] = 0.0;
  } else {
    emxInit_real_T(sp, &D, 2, &jb_emlrtRTEI, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 12);

    /*  build distance matrix */
    i23 = D->size[0] * D->size[1];
    D->size[0] = cand->size[0];
    D->size[1] = pred->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)D, i23, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    idx = cand->size[0] * pred->size[0];
    for (i23 = 0; i23 < idx; i23++) {
      D->data[i23] = 0.0;
    }

    i = 0;
    emxInit_real_T(sp, &delta, 2, &kb_emlrtRTEI, true);
    emxInit_real_T1(sp, &r9, 1, &ib_emlrtRTEI, true);
    emxInit_real_T1(sp, &r10, 1, &ib_emlrtRTEI, true);
    emxInit_int32_T(sp, &r11, 1, &ib_emlrtRTEI, true);
    emxInit_real_T1(sp, &b_delta, 1, &ib_emlrtRTEI, true);
    emxInit_real_T1(sp, &c_delta, 1, &ib_emlrtRTEI, true);
    while (i <= pred->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 0, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 13);
      i23 = pred->size[0];
      i24 = i + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ub_emlrtBCI, sp);
      }

      nx = cand->size[0];
      i23 = delta->size[0] * delta->size[1];
      delta->size[0] = nx;
      delta->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)delta, i23, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      for (i23 = 0; i23 < nx; i23++) {
        for (i24 = 0; i24 < 2; i24++) {
          delta->data[i23 + delta->size[0] * i24] = pred->data[i + pred->size[0]
            * i24];
        }
      }

      for (i23 = 0; i23 < 2; i23++) {
        b_cand[i23] = cand->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        d_delta[i23] = delta->size[i23];
      }

      if ((b_cand[0] != d_delta[0]) || (b_cand[1] != d_delta[1])) {
        emlrtSizeEqCheckNDR2012b(&b_cand[0], &d_delta[0], &db_emlrtECI, sp);
      }

      i23 = delta->size[0] * delta->size[1];
      delta->size[0] = cand->size[0];
      delta->size[1] = cand->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)delta, i23, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      idx = cand->size[0] * cand->size[1];
      for (i23 = 0; i23 < idx; i23++) {
        delta->data[i23] = cand->data[i23] - delta->data[i23];
      }

      idx = delta->size[0];
      i23 = c_delta->size[0];
      c_delta->size[0] = idx;
      emxEnsureCapacity(sp, (emxArray__common *)c_delta, i23, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      for (i23 = 0; i23 < idx; i23++) {
        c_delta->data[i23] = delta->data[i23];
      }

      st.site = &wg_emlrtRSI;
      b_power(&st, c_delta, r9);
      idx = delta->size[0];
      i23 = b_delta->size[0];
      b_delta->size[0] = idx;
      emxEnsureCapacity(sp, (emxArray__common *)b_delta, i23, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      for (i23 = 0; i23 < idx; i23++) {
        b_delta->data[i23] = delta->data[i23 + delta->size[0]];
      }

      st.site = &wg_emlrtRSI;
      b_power(&st, b_delta, r10);
      i23 = r9->size[0];
      i24 = r10->size[0];
      if (i23 != i24) {
        emlrtSizeEqCheck1DR2012b(i23, i24, &eb_emlrtECI, sp);
      }

      idx = D->size[0];
      i23 = r11->size[0];
      r11->size[0] = idx;
      emxEnsureCapacity(sp, (emxArray__common *)r11, i23, (int32_T)sizeof
                        (int32_T), &ib_emlrtRTEI);
      for (i23 = 0; i23 < idx; i23++) {
        r11->data[i23] = i23;
      }

      i23 = D->size[1];
      i24 = i + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &vb_emlrtBCI, sp);
      }

      i23 = r9->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r9, i23, (int32_T)sizeof(real_T),
                        &ib_emlrtRTEI);
      idx = r9->size[0];
      for (i23 = 0; i23 < idx; i23++) {
        r9->data[i23] += r10->data[i23];
      }

      st.site = &wg_emlrtRSI;
      b_sqrt(&st, r9);
      ii_data[0] = r11->size[0];
      emlrtSubAssignSizeCheckR2012b(ii_data, 1, *(int32_T (*)[1])r9->size, 1,
        &fb_emlrtECI, sp);
      idx = r9->size[0];
      for (i23 = 0; i23 < idx; i23++) {
        D->data[r11->data[i23] + D->size[0] * i] = r9->data[i23];
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&c_delta);
    emxFree_real_T(&b_delta);
    emxFree_int32_T(&r11);
    emxFree_real_T(&r10);
    emxFree_real_T(&r9);
    emxFree_real_T(&delta);
    covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 0, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 14);
    i23 = idxx->size[0] * idxx->size[1];
    idxx->size[0] = 1;
    idxx->size[1] = pred->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)idxx, i23, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    idx = pred->size[0];
    for (i23 = 0; i23 < idx; i23++) {
      idxx->data[i23] = 0.0;
    }

    /*  search greedily for closest corners */
    i = 0;
    emxInit_boolean_T1(sp, &x, 2, &ib_emlrtRTEI, true);
    while (i <= pred->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 15);
      st.site = &xg_emlrtRSI;
      b_st.site = &yg_emlrtRSI;
      c_st.site = &ah_emlrtRSI;
      idx = D->size[0] * D->size[1];
      guard1 = false;
      if (idx == 1) {
        guard1 = true;
      } else {
        idx = D->size[0] * D->size[1];
        if (idx != 1) {
          guard1 = true;
        } else {
          overflow = false;
        }
      }

      if (guard1) {
        overflow = true;
      }

      if (overflow) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &pc_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      idx = D->size[0] * D->size[1];
      if (idx > 0) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &oc_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &mf_emlrtRSI;
      ixstart = 1;
      idx = D->size[0] * D->size[1];
      mtmp = D->data[0];
      nx = D->size[0] * D->size[1];
      if (nx > 1) {
        if (muDoubleScalarIsNaN(D->data[0])) {
          e_st.site = &of_emlrtRSI;
          nx = D->size[0] * D->size[1];
          if (2 > nx) {
            overflow = false;
          } else {
            nx = D->size[0] * D->size[1];
            overflow = (nx > 2147483646);
          }

          if (overflow) {
            f_st.site = &eb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          nx = 2;
          exitg2 = false;
          while ((!exitg2) && (nx <= idx)) {
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
          e_st.site = &nf_emlrtRSI;
          nx = D->size[0] * D->size[1];
          if (ixstart + 1 > nx) {
            overflow = false;
          } else {
            nx = D->size[0] * D->size[1];
            overflow = (nx > 2147483646);
          }

          if (overflow) {
            f_st.site = &eb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          while (ixstart + 1 <= idx) {
            if (D->data[ixstart] < mtmp) {
              mtmp = D->data[ixstart];
            }

            ixstart++;
          }
        }
      }

      st.site = &xg_emlrtRSI;
      i23 = x->size[0] * x->size[1];
      x->size[0] = D->size[0];
      x->size[1] = D->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i23, (int32_T)sizeof
                        (boolean_T), &ib_emlrtRTEI);
      idx = D->size[0] * D->size[1];
      for (i23 = 0; i23 < idx; i23++) {
        x->data[i23] = (D->data[i23] == mtmp);
      }

      b_st.site = &bh_emlrtRSI;
      nx = x->size[0] * x->size[1];
      k = muIntScalarMin_sint32(1, nx);
      if (k <= nx) {
      } else {
        emlrtErrorWithMessageIdR2012b(&b_st, &uc_emlrtRTEI,
          "Coder:builtins:AssertionFailed", 0);
      }

      idx = 0;
      if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
          (x->size[1] <= 1)) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
      } else {
        emlrtErrorWithMessageIdR2012b(&b_st, &tc_emlrtRTEI,
          "Coder:toolbox:find_incompatibleShape", 0);
      }

      ii_size_idx_0 = k;
      if (nx == 0) {
        ii_size_idx_0 = 0;
        k = 0;
      } else {
        ixstart = 1;
        nx = 1;
        exitg1 = false;
        while ((!exitg1) && (nx <= x->size[1])) {
          if (x->data[(ixstart + x->size[0] * (nx - 1)) - 1]) {
            idx = 1;
            ii_data[0] = ixstart;
            jj_data[0] = nx;
            exitg1 = true;
          } else {
            ixstart++;
            if (ixstart > x->size[0]) {
              ixstart = 1;
              nx++;
            }
          }
        }

        if (idx <= k) {
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &sc_emlrtRTEI,
            "Coder:builtins:AssertionFailed", 0);
        }

        if (k == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
            k = 0;
          }
        } else {
          ii_size_idx_0 = !(1 > idx);
          iv6[0] = 1;
          iv6[1] = ii_size_idx_0;
          c_st.site = &eh_emlrtRSI;
          b_indexShapeCheck(&c_st, k, iv6);
          i23 = !(1 > idx);
          iv7[0] = 1;
          iv7[1] = i23;
          c_st.site = &dh_emlrtRSI;
          b_indexShapeCheck(&c_st, k, iv7);
          k = i23;
          iv8[0] = 1;
          iv8[1] = !(1 > idx);
          c_st.site = &ch_emlrtRSI;
          b_indexShapeCheck(&c_st, 0, iv8);
        }
      }

      for (i23 = 0; i23 < ii_size_idx_0; i23++) {
        row_data[i23] = ii_data[i23];
      }

      for (i23 = 0; i23 < k; i23++) {
        col_data[i23] = jj_data[i23];
      }

      /* Locate the first one nonzero.  */
      ixstart = idxx->size[1];
      for (i23 = 0; i23 < k; i23++) {
        i24 = col_data[i23];
        if (!((i24 >= 1) && (i24 <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, ixstart, &wb_emlrtBCI, sp);
        }

        ii_data[i23] = i24;
      }

      if (k != ii_size_idx_0) {
        emlrtSizeEqCheck1DR2012b(k, ii_size_idx_0, &gb_emlrtECI, sp);
      }

      for (i23 = 0; i23 < ii_size_idx_0; i23++) {
        idxx->data[ii_data[i23] - 1] = row_data[i23];
      }

      ixstart = D->size[0];
      for (i23 = 0; i23 < ii_size_idx_0; i23++) {
        i24 = row_data[i23];
        if (!((i24 >= 1) && (i24 <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, ixstart, &xb_emlrtBCI, sp);
        }

        ii_data[i23] = i24;
      }

      idx = D->size[1];
      for (i23 = 0; i23 < idx; i23++) {
        for (i24 = 0; i24 < ii_size_idx_0; i24++) {
          D->data[(ii_data[i24] + D->size[0] * i23) - 1] = rtInf;
        }
      }

      ixstart = D->size[1];
      for (i23 = 0; i23 < k; i23++) {
        i24 = col_data[i23];
        if (!((i24 >= 1) && (i24 <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, ixstart, &yb_emlrtBCI, sp);
        }

        ii_data[i23] = i24;
      }

      idx = D->size[0];
      for (i23 = 0; i23 < k; i23++) {
        for (i24 = 0; i24 < idx; i24++) {
          D->data[i24 + D->size[0] * (ii_data[i23] - 1)] = rtInf;
        }
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_boolean_T(&x);
    emxFree_real_T(&D);
    covrtLogFor(&emlrtCoverageInstance, 11U, 0U, 1, 0);
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
  int32_T i19;
  emxArray_real_T *d_v1;
  emxArray_real_T *s1;
  emxArray_real_T *e_v1;
  emxArray_real_T *d_v2;
  emxArray_real_T *b;
  emxArray_real_T *e_v2;
  emxArray_real_T *r7;
  boolean_T overflow;
  emxArray_real_T *r8;
  int32_T b_pred[2];
  int32_T iv5[2];
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
  covrtLogFcn(&emlrtCoverageInstance, 11U, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 10);

  /*  compute vectors */
  for (k = 0; k < 2; k++) {
    b_p2[k] = p2->size[k];
  }

  for (k = 0; k < 2; k++) {
    b_p1[k] = p1->size[k];
  }

  emxInit_real_T(sp, &v1, 2, &db_emlrtRTEI, true);
  if ((b_p2[0] != b_p1[0]) || (b_p2[1] != b_p1[1])) {
    emlrtSizeEqCheckNDR2012b(&b_p2[0], &b_p1[0], &u_emlrtECI, sp);
  }

  k = v1->size[0] * v1->size[1];
  v1->size[0] = p2->size[0];
  v1->size[1] = p2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)v1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
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

  emxInit_real_T(sp, &v2, 2, &eb_emlrtRTEI, true);
  if ((b_p3[0] != c_p2[0]) || (b_p3[1] != c_p2[1])) {
    emlrtSizeEqCheckNDR2012b(&b_p3[0], &c_p2[0], &v_emlrtECI, sp);
  }

  k = v2->size[0] * v2->size[1];
  v2->size[0] = p3->size[0];
  v2->size[1] = p3->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)v2, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = p3->size[0] * p3->size[1];
  for (k = 0; k < loop_ub; k++) {
    v2->data[k] = p3->data[k] - p2->data[k];
  }

  emxInit_real_T1(sp, &b_v1, 1, &cb_emlrtRTEI, true);

  /*  predict angles */
  k = v1->size[1];
  if (!(2 <= k)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, k, &mb_emlrtBCI, sp);
  }

  k = v1->size[1];
  if (!(1 <= k)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, k, &nb_emlrtBCI, sp);
  }

  loop_ub = v1->size[0];
  k = b_v1->size[0];
  b_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_v1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    b_v1->data[k] = v1->data[k + v1->size[0]];
  }

  emxInit_real_T1(sp, &c_v1, 1, &cb_emlrtRTEI, true);
  loop_ub = v1->size[0];
  k = c_v1->size[0];
  c_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_v1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    c_v1->data[k] = v1->data[k];
  }

  emxInit_real_T1(sp, &a1, 1, &fb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_v2, 1, &cb_emlrtRTEI, true);
  st.site = &ng_emlrtRSI;
  c_atan2(&st, b_v1, c_v1, a1);
  k = v2->size[1];
  if (!(2 <= k)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, k, &ob_emlrtBCI, sp);
  }

  k = v2->size[1];
  if (!(1 <= k)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, k, &pb_emlrtBCI, sp);
  }

  loop_ub = v2->size[0];
  k = b_v2->size[0];
  b_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_v2, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  emxFree_real_T(&c_v1);
  emxFree_real_T(&b_v1);
  for (k = 0; k < loop_ub; k++) {
    b_v2->data[k] = v2->data[k + v2->size[0]];
  }

  emxInit_real_T1(sp, &c_v2, 1, &cb_emlrtRTEI, true);
  loop_ub = v2->size[0];
  k = c_v2->size[0];
  c_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_v2, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    c_v2->data[k] = v2->data[k];
  }

  emxInit_real_T1(sp, &a3, 1, &gb_emlrtRTEI, true);
  st.site = &og_emlrtRSI;
  c_atan2(&st, b_v2, c_v2, a3);
  k = a3->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)a3, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = a3->size[0];
  emxFree_real_T(&c_v2);
  emxFree_real_T(&b_v2);
  for (k = 0; k < loop_ub; k++) {
    a3->data[k] *= 2.0;
  }

  k = a3->size[0];
  i19 = a1->size[0];
  if (k != i19) {
    emlrtSizeEqCheck1DR2012b(k, i19, &w_emlrtECI, sp);
  }

  k = a3->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)a3, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    a3->data[k] -= a1->data[k];
  }

  emxInit_real_T1(sp, &d_v1, 1, &cb_emlrtRTEI, true);

  /*  predict scales */
  k = v1->size[1];
  if (!(1 <= k)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, k, &qb_emlrtBCI, sp);
  }

  loop_ub = v1->size[0];
  k = d_v1->size[0];
  d_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)d_v1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    d_v1->data[k] = v1->data[k];
  }

  emxInit_real_T1(sp, &s1, 1, &hb_emlrtRTEI, true);
  emxInit_real_T1(sp, &e_v1, 1, &cb_emlrtRTEI, true);
  st.site = &pg_emlrtRSI;
  b_power(&st, d_v1, s1);
  k = v1->size[1];
  if (!(2 <= k)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, k, &rb_emlrtBCI, sp);
  }

  loop_ub = v1->size[0];
  k = e_v1->size[0];
  e_v1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)e_v1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  emxFree_real_T(&d_v1);
  for (k = 0; k < loop_ub; k++) {
    e_v1->data[k] = v1->data[k + v1->size[0]];
  }

  emxFree_real_T(&v1);
  st.site = &pg_emlrtRSI;
  b_power(&st, e_v1, a1);
  k = s1->size[0];
  i19 = a1->size[0];
  if (k != i19) {
    emlrtSizeEqCheck1DR2012b(k, i19, &x_emlrtECI, sp);
  }

  k = s1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)s1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = s1->size[0];
  emxFree_real_T(&e_v1);
  for (k = 0; k < loop_ub; k++) {
    s1->data[k] += a1->data[k];
  }

  emxInit_real_T1(sp, &d_v2, 1, &cb_emlrtRTEI, true);
  st.site = &pg_emlrtRSI;
  b_sqrt(&st, s1);
  k = v2->size[1];
  if (!(1 <= k)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, k, &sb_emlrtBCI, sp);
  }

  loop_ub = v2->size[0];
  k = d_v2->size[0];
  d_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)d_v2, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  for (k = 0; k < loop_ub; k++) {
    d_v2->data[k] = v2->data[k];
  }

  emxInit_real_T1(sp, &b, 1, &cb_emlrtRTEI, true);
  emxInit_real_T1(sp, &e_v2, 1, &cb_emlrtRTEI, true);
  st.site = &qg_emlrtRSI;
  b_power(&st, d_v2, b);
  k = v2->size[1];
  if (!(2 <= k)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, k, &tb_emlrtBCI, sp);
  }

  loop_ub = v2->size[0];
  k = e_v2->size[0];
  e_v2->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)e_v2, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  emxFree_real_T(&d_v2);
  for (k = 0; k < loop_ub; k++) {
    e_v2->data[k] = v2->data[k + v2->size[0]];
  }

  emxFree_real_T(&v2);
  st.site = &qg_emlrtRSI;
  b_power(&st, e_v2, a1);
  k = b->size[0];
  i19 = a1->size[0];
  if (k != i19) {
    emlrtSizeEqCheck1DR2012b(k, i19, &y_emlrtECI, sp);
  }

  k = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = b->size[0];
  emxFree_real_T(&e_v2);
  for (k = 0; k < loop_ub; k++) {
    b->data[k] += a1->data[k];
  }

  st.site = &qg_emlrtRSI;
  b_sqrt(&st, b);
  k = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = b->size[0];
  for (k = 0; k < loop_ub; k++) {
    b->data[k] *= 2.0;
  }

  emxInit_real_T1(sp, &r7, 1, &cb_emlrtRTEI, true);
  k = b->size[0];
  i19 = s1->size[0];
  if (k != i19) {
    emlrtSizeEqCheck1DR2012b(k, i19, &ab_emlrtECI, sp);
  }

  /*  predict p3 (the factor 0.75 ensures that under extreme */
  /*  distortions (omnicam) the closer prediction is selected) */
  k = r7->size[0];
  r7->size[0] = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r7, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = b->size[0];
  for (k = 0; k < loop_ub; k++) {
    r7->data[k] = 0.75 * (b->data[k] - s1->data[k]);
  }

  emxFree_real_T(&b);
  k = pred->size[0] * pred->size[1];
  pred->size[0] = r7->size[0];
  pred->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)pred, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = r7->size[0];
  for (k = 0; k < loop_ub; k++) {
    for (i19 = 0; i19 < 2; i19++) {
      pred->data[k + pred->size[0] * i19] = r7->data[k];
    }
  }

  emxFree_real_T(&r7);
  st.site = &rg_emlrtRSI;
  b_st.site = &ug_emlrtRSI;
  k = a1->size[0];
  a1->size[0] = a3->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)a1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    a1->data[k] = a3->data[k];
  }

  c_st.site = &vd_emlrtRSI;
  overflow = ((!(1 > a3->size[0])) && (a3->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= a3->size[0]; k++) {
    a1->data[k] = muDoubleScalarCos(a1->data[k]);
  }

  st.site = &rg_emlrtRSI;
  b_st.site = &vg_emlrtRSI;
  k = s1->size[0];
  s1->size[0] = a3->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)s1, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = a3->size[0];
  for (k = 0; k < loop_ub; k++) {
    s1->data[k] = a3->data[k];
  }

  c_st.site = &vd_emlrtRSI;
  for (k = 0; k + 1 <= a3->size[0]; k++) {
    s1->data[k] = muDoubleScalarSin(s1->data[k]);
  }

  emxFree_real_T(&a3);
  st.site = &rg_emlrtRSI;
  b_st.site = &td_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  overflow = true;
  if (a1->size[0] == s1->size[0]) {
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &r8, 2, &cb_emlrtRTEI, true);
  k = r8->size[0] * r8->size[1];
  r8->size[0] = a1->size[0];
  r8->size[1] = 2;
  emxEnsureCapacity(&b_st, (emxArray__common *)r8, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = a1->size[0];
  for (k = 0; k < loop_ub; k++) {
    r8->data[k] = a1->data[k];
  }

  emxFree_real_T(&a1);
  loop_ub = s1->size[0];
  for (k = 0; k < loop_ub; k++) {
    r8->data[k + r8->size[0]] = s1->data[k];
  }

  emxFree_real_T(&s1);
  for (k = 0; k < 2; k++) {
    b_pred[k] = pred->size[k];
  }

  for (k = 0; k < 2; k++) {
    iv5[k] = r8->size[k];
  }

  if ((b_pred[0] != iv5[0]) || (b_pred[1] != iv5[1])) {
    emlrtSizeEqCheckNDR2012b(&b_pred[0], &iv5[0], &bb_emlrtECI, sp);
  }

  k = pred->size[0] * pred->size[1];
  pred->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)pred, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  k = pred->size[0];
  loop_ub = pred->size[1];
  loop_ub *= k;
  for (k = 0; k < loop_ub; k++) {
    pred->data[k] *= r8->data[k];
  }

  emxFree_real_T(&r8);
  for (k = 0; k < 2; k++) {
    c_p3[k] = p3->size[k];
  }

  for (k = 0; k < 2; k++) {
    c_pred[k] = pred->size[k];
  }

  if ((c_p3[0] != c_pred[0]) || (c_p3[1] != c_pred[1])) {
    emlrtSizeEqCheckNDR2012b(&c_p3[0], &c_pred[0], &cb_emlrtECI, sp);
  }

  k = pred->size[0] * pred->size[1];
  pred->size[0] = p3->size[0];
  pred->size[1] = p3->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)pred, k, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = p3->size[0] * p3->size[1];
  for (k = 0; k < loop_ub; k++) {
    pred->data[k] += p3->data[k];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void growChessboard(const emlrtStack *sp, emxArray_real_T *chessboard, const
                    emxArray_real_T *corners_p, real_T border_type)
{
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T absb;
  emxArray_real_T *unused;
  int32_T i41;
  emxArray_int32_T *r16;
  emxArray_int32_T *b_chessboard;
  int32_T loop_ub;
  emxArray_real_T *cand;
  emxArray_real_T *pred;
  int32_T i42;
  emxArray_real_T *idx;
  real_T d2;
  emxArray_real_T *b_corners_p;
  emxArray_real_T *c_corners_p;
  emxArray_real_T *d_corners_p;
  emxArray_real_T *e_corners_p;
  emxArray_real_T *f_corners_p;
  emxArray_real_T *g_corners_p;
  emxArray_real_T *h_corners_p;
  emxArray_real_T *i_corners_p;
  emxArray_real_T *j_corners_p;
  emxArray_real_T *k_corners_p;
  emxArray_real_T *l_corners_p;
  emxArray_real_T *m_corners_p;
  emxArray_boolean_T *b_idx;
  emxArray_boolean_T *c_idx;
  emxArray_boolean_T *d_idx;
  emxArray_boolean_T *e_idx;
  emxArray_int32_T *f_idx;
  emxArray_int32_T *g_idx;
  emxArray_int32_T *h_idx;
  emxArray_int32_T *i_idx;
  boolean_T empty_non_axis_sizes;
  emxArray_int32_T *j_idx;
  emxArray_int32_T *k_idx;
  emxArray_int32_T *l_idx;
  emxArray_int32_T *m_idx;
  emxArray_int32_T *n_idx;
  emxArray_int32_T *o_idx;
  emxArray_real_T *b_unused;
  emxArray_real_T *c_unused;
  emxArray_int32_T *p_idx;
  emxArray_int32_T *q_idx;
  boolean_T guard2 = false;
  emxArray_real_T *d_unused;
  emxArray_real_T *c_chessboard;
  emxArray_int32_T *r_idx;
  boolean_T guard3 = false;
  emxArray_int32_T *s_idx;
  boolean_T guard1 = false;
  emxArray_real_T *e_unused;
  emxArray_real_T *d_chessboard;
  emxArray_real_T *f_unused;
  emxArray_real_T *g_unused;
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
  covrtLogFcn(&emlrtCoverageInstance, 11U, 0);

  /*  return immediately, if there do not exist any chessboards */
  if (covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 0, (chessboard->size[0] == 0) ||
                 (chessboard->size[1] == 0))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 0);
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 1);

    /*  extract feature locations */
    /*  list of unused feature elements */
    st.site = &tf_emlrtRSI;
    b_st.site = &we_emlrtRSI;
    c_st.site = &xe_emlrtRSI;
    if (corners_p->size[0] < 1) {
      ndbl = 0;
      apnd = 0;
    } else {
      ndbl = (int32_T)muDoubleScalarFloor(((real_T)corners_p->size[0] - 1.0) +
        0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - corners_p->size[0]) + 1;
      absb = corners_p->size[0];
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
        ndbl++;
        apnd = corners_p->size[0];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }
    }

    emxInit_real_T(&c_st, &unused, 2, &wb_emlrtRTEI, true);
    i41 = unused->size[0] * unused->size[1];
    unused->size[0] = 1;
    unused->size[1] = ndbl;
    emxEnsureCapacity(&c_st, (emxArray__common *)unused, i41, (int32_T)sizeof
                      (real_T), &bb_emlrtRTEI);
    if (ndbl > 0) {
      unused->data[0] = 1.0;
      if (ndbl > 1) {
        unused->data[ndbl - 1] = apnd;
        cdiff = (ndbl - 1) / 2;
        for (absb = 1; absb < cdiff; absb++) {
          unused->data[absb] = 1.0 + (real_T)absb;
          unused->data[(ndbl - absb) - 1] = apnd - absb;
        }

        if (cdiff << 1 == ndbl - 1) {
          unused->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
        } else {
          unused->data[cdiff] = 1.0 + (real_T)cdiff;
          unused->data[cdiff + 1] = apnd - cdiff;
        }
      }
    }

    st.site = &uf_emlrtRSI;
    indexShapeCheck(&st, *(int32_T (*)[2])chessboard->size, *(int32_T (*)[2])
                    chessboard->size);
    absb = chessboard->size[0] * chessboard->size[1];
    for (ndbl = 0; ndbl < absb; ndbl++) {
      if (chessboard->data[ndbl] != 0.0) {
        i41 = chessboard->size[0] * chessboard->size[1];
        if (!((ndbl + 1 >= 1) && (ndbl + 1 <= i41))) {
          emlrtDynamicBoundsCheckR2012b(ndbl + 1, 1, i41, &ed_emlrtBCI, sp);
        }
      }
    }

    emxInit_int32_T(sp, &r16, 1, &bb_emlrtRTEI, true);
    absb = chessboard->size[0] * chessboard->size[1] - 1;
    cdiff = 0;
    for (ndbl = 0; ndbl <= absb; ndbl++) {
      if (chessboard->data[ndbl] != 0.0) {
        cdiff++;
      }
    }

    i41 = r16->size[0];
    r16->size[0] = cdiff;
    emxEnsureCapacity(sp, (emxArray__common *)r16, i41, (int32_T)sizeof(int32_T),
                      &bb_emlrtRTEI);
    cdiff = 0;
    for (ndbl = 0; ndbl <= absb; ndbl++) {
      if (chessboard->data[ndbl] != 0.0) {
        r16->data[cdiff] = ndbl + 1;
        cdiff++;
      }
    }

    emxInit_int32_T(sp, &b_chessboard, 1, &bb_emlrtRTEI, true);
    i41 = b_chessboard->size[0];
    b_chessboard->size[0] = r16->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_chessboard, i41, (int32_T)sizeof
                      (int32_T), &bb_emlrtRTEI);
    loop_ub = r16->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      b_chessboard->data[i41] = (int32_T)chessboard->data[r16->data[i41] - 1];
    }

    emxFree_int32_T(&r16);
    emxInit_real_T(sp, &cand, 2, &xb_emlrtRTEI, true);
    st.site = &vf_emlrtRSI;
    c_nullAssignment(&st, unused, b_chessboard);

    /*  candidates from unused corners */
    cdiff = corners_p->size[0];
    loop_ub = corners_p->size[1];
    i41 = cand->size[0] * cand->size[1];
    cand->size[0] = unused->size[1];
    cand->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)cand, i41, (int32_T)sizeof(real_T),
                      &bb_emlrtRTEI);
    emxFree_int32_T(&b_chessboard);
    for (i41 = 0; i41 < loop_ub; i41++) {
      ndbl = unused->size[1];
      for (i42 = 0; i42 < ndbl; i42++) {
        d2 = unused->data[unused->size[0] * i42];
        if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
          emlrtIntegerCheckR2012b(d2, &j_emlrtDCI, sp);
        }

        apnd = (int32_T)d2;
        if (!((apnd >= 1) && (apnd <= cdiff))) {
          emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &rd_emlrtBCI, sp);
        }

        cand->data[i42 + cand->size[0] * i41] = corners_p->data[(apnd +
          corners_p->size[0] * i41) - 1];
      }
    }

    /*  switch border type 1..4 */
    emxInit_real_T(sp, &pred, 2, &yb_emlrtRTEI, true);
    emxInit_real_T(sp, &idx, 2, &ac_emlrtRTEI, true);
    switch ((int32_T)border_type) {
     case 1:
      emxInit_real_T(sp, &b_corners_p, 2, &bb_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 11U, 0U, 0, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 2);
      loop_ub = chessboard->size[0];
      i41 = chessboard->size[1];
      absb = (int32_T)((real_T)chessboard->size[1] - 2.0);
      if (!((absb >= 1) && (absb <= i41))) {
        emlrtDynamicBoundsCheckR2012b(absb, 1, i41, &qd_emlrtBCI, sp);
      }

      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = b_corners_p->size[0] * b_corners_p->size[1];
      b_corners_p->size[0] = loop_ub;
      b_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)b_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[i42 + chessboard->size[0] * (absb - 1)];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &sd_emlrtBCI, sp);
          }

          b_corners_p->data[i42 + b_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &f_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      i41 = chessboard->size[1];
      absb = (int32_T)((real_T)chessboard->size[1] - 1.0);
      if (!((absb >= 1) && (absb <= i41))) {
        emlrtDynamicBoundsCheckR2012b(absb, 1, i41, &pd_emlrtBCI, sp);
      }

      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = f_corners_p->size[0] * f_corners_p->size[1];
      f_corners_p->size[0] = loop_ub;
      f_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)f_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[i42 + chessboard->size[0] * (absb - 1)];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &td_emlrtBCI, sp);
          }

          f_corners_p->data[i42 + f_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &j_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      i41 = chessboard->size[1];
      absb = chessboard->size[1];
      if (!((absb >= 1) && (absb <= i41))) {
        emlrtDynamicBoundsCheckR2012b(absb, 1, i41, &od_emlrtBCI, sp);
      }

      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = j_corners_p->size[0] * j_corners_p->size[1];
      j_corners_p->size[0] = loop_ub;
      j_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)j_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[i42 + chessboard->size[0] * (absb - 1)];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &ud_emlrtBCI, sp);
          }

          j_corners_p->data[i42 + j_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_boolean_T1(sp, &d_idx, 2, &bb_emlrtRTEI, true);
      st.site = &wf_emlrtRSI;
      predictCorners(&st, b_corners_p, f_corners_p, j_corners_p, pred);
      st.site = &xf_emlrtRSI;
      assignClosestCorners(&st, cand, pred, idx);
      i41 = d_idx->size[0] * d_idx->size[1];
      d_idx->size[0] = 1;
      d_idx->size[1] = idx->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)d_idx, i41, (int32_T)sizeof
                        (boolean_T), &bb_emlrtRTEI);
      loop_ub = idx->size[0] * idx->size[1];
      emxFree_real_T(&j_corners_p);
      emxFree_real_T(&f_corners_p);
      emxFree_real_T(&b_corners_p);
      for (i41 = 0; i41 < loop_ub; i41++) {
        d_idx->data[i41] = (idx->data[i41] != 0.0);
      }

      st.site = &yf_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 1, all(&st, d_idx))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 3);
        st.site = &ag_emlrtRSI;
        cdiff = unused->size[1];
        loop_ub = idx->size[0] * idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          i42 = (int32_T)idx->data[i41];
          if (!((i42 >= 1) && (i42 <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, cdiff, &vd_emlrtBCI, &st);
          }
        }

        b_st.site = &qb_emlrtRSI;
        emxInit_int32_T(&b_st, &g_idx, 1, &bb_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &h_idx, 1, &bb_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &i_idx, 1, &bb_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &j_idx, 1, &bb_emlrtRTEI, true);
        if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0))) {
          cdiff = chessboard->size[0];
        } else {
          i41 = g_idx->size[0];
          g_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)g_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            g_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          if (!(g_idx->size[0] == 0)) {
            i41 = j_idx->size[0];
            j_idx->size[0] = idx->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)j_idx, i41, (int32_T)
                              sizeof(int32_T), &bb_emlrtRTEI);
            loop_ub = idx->size[1];
            for (i41 = 0; i41 < loop_ub; i41++) {
              j_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
            }

            cdiff = j_idx->size[0];
          } else {
            cdiff = muIntScalarMax_sint32(chessboard->size[0], 0);
            i41 = h_idx->size[0];
            h_idx->size[0] = idx->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)h_idx, i41, (int32_T)
                              sizeof(int32_T), &bb_emlrtRTEI);
            loop_ub = idx->size[1];
            for (i41 = 0; i41 < loop_ub; i41++) {
              h_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
            }

            if (h_idx->size[0] > cdiff) {
              i41 = i_idx->size[0];
              i_idx->size[0] = idx->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)i_idx, i41, (int32_T)
                                sizeof(int32_T), &bb_emlrtRTEI);
              loop_ub = idx->size[1];
              for (i41 = 0; i41 < loop_ub; i41++) {
                i_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
              }

              cdiff = i_idx->size[0];
            }
          }
        }

        emxFree_int32_T(&j_idx);
        emxFree_int32_T(&i_idx);
        emxFree_int32_T(&h_idx);
        emxFree_int32_T(&g_idx);
        c_st.site = &rb_emlrtRSI;
        if ((cdiff == chessboard->size[0]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        emxInit_int32_T(&c_st, &n_idx, 1, &bb_emlrtRTEI, true);
        i41 = n_idx->size[0];
        n_idx->size[0] = idx->size[1];
        emxEnsureCapacity(&c_st, (emxArray__common *)n_idx, i41, (int32_T)sizeof
                          (int32_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          n_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
        }

        emxInit_int32_T(&c_st, &p_idx, 1, &bb_emlrtRTEI, true);
        if (cdiff == n_idx->size[0]) {
        } else {
          i41 = p_idx->size[0];
          p_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&c_st, (emxArray__common *)p_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            p_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          if (p_idx->size[0] == 0) {
          } else {
            empty_non_axis_sizes = false;
          }
        }

        emxFree_int32_T(&p_idx);
        emxFree_int32_T(&n_idx);
        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (cdiff == 0);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          absb = chessboard->size[1];
        } else {
          absb = 0;
        }

        emxInit_int32_T(&b_st, &r_idx, 1, &bb_emlrtRTEI, true);
        guard3 = false;
        if (empty_non_axis_sizes) {
          guard3 = true;
        } else {
          i41 = r_idx->size[0];
          r_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)r_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            r_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          if (!(r_idx->size[0] == 0)) {
            guard3 = true;
          } else {
            ndbl = 0;
          }
        }

        if (guard3) {
          ndbl = 1;
        }

        emxFree_int32_T(&r_idx);
        emxInit_real_T1(&b_st, &e_unused, 1, &bb_emlrtRTEI, true);
        i41 = e_unused->size[0];
        e_unused->size[0] = idx->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)e_unused, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          e_unused->data[i41] = unused->data[(int32_T)idx->data[idx->size[0] *
            i41] - 1];
        }

        emxInit_real_T(&b_st, &d_chessboard, 2, &bb_emlrtRTEI, true);
        i41 = d_chessboard->size[0] * d_chessboard->size[1];
        d_chessboard->size[0] = cdiff;
        d_chessboard->size[1] = absb + ndbl;
        emxEnsureCapacity(&b_st, (emxArray__common *)d_chessboard, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        for (i41 = 0; i41 < absb; i41++) {
          for (i42 = 0; i42 < cdiff; i42++) {
            d_chessboard->data[i42 + d_chessboard->size[0] * i41] =
              chessboard->data[i42 + cdiff * i41];
          }
        }

        for (i41 = 0; i41 < ndbl; i41++) {
          for (i42 = 0; i42 < cdiff; i42++) {
            d_chessboard->data[i42 + d_chessboard->size[0] * (i41 + absb)] =
              e_unused->data[i42 + cdiff * i41];
          }
        }

        emxFree_real_T(&e_unused);
        i41 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = d_chessboard->size[0];
        chessboard->size[1] = d_chessboard->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = d_chessboard->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          ndbl = d_chessboard->size[0];
          for (i42 = 0; i42 < ndbl; i42++) {
            chessboard->data[i42 + chessboard->size[0] * i41] =
              d_chessboard->data[i42 + d_chessboard->size[0] * i41];
          }
        }

        emxFree_real_T(&d_chessboard);
      }

      emxFree_boolean_T(&d_idx);
      break;

     case 2:
      emxInit_real_T(sp, &c_corners_p, 2, &bb_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 11U, 0U, 0, 2);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 4);
      loop_ub = chessboard->size[1];
      i41 = chessboard->size[0];
      absb = (int32_T)((real_T)chessboard->size[0] - 2.0);
      if (!((absb >= 1) && (absb <= i41))) {
        emlrtDynamicBoundsCheckR2012b(absb, 1, i41, &nd_emlrtBCI, sp);
      }

      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = c_corners_p->size[0] * c_corners_p->size[1];
      c_corners_p->size[0] = loop_ub;
      c_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)c_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[(absb + chessboard->size[0] * i42) -
            1];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &wd_emlrtBCI, sp);
          }

          c_corners_p->data[i42 + c_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &g_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      i41 = chessboard->size[0];
      absb = (int32_T)((real_T)chessboard->size[0] - 1.0);
      if (!((absb >= 1) && (absb <= i41))) {
        emlrtDynamicBoundsCheckR2012b(absb, 1, i41, &md_emlrtBCI, sp);
      }

      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = g_corners_p->size[0] * g_corners_p->size[1];
      g_corners_p->size[0] = loop_ub;
      g_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)g_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[(absb + chessboard->size[0] * i42) -
            1];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &xd_emlrtBCI, sp);
          }

          g_corners_p->data[i42 + g_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &k_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      i41 = chessboard->size[0];
      absb = chessboard->size[0];
      if (!((absb >= 1) && (absb <= i41))) {
        emlrtDynamicBoundsCheckR2012b(absb, 1, i41, &ld_emlrtBCI, sp);
      }

      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = k_corners_p->size[0] * k_corners_p->size[1];
      k_corners_p->size[0] = loop_ub;
      k_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)k_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[(absb + chessboard->size[0] * i42) -
            1];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &yd_emlrtBCI, sp);
          }

          k_corners_p->data[i42 + k_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_boolean_T1(sp, &e_idx, 2, &bb_emlrtRTEI, true);
      st.site = &bg_emlrtRSI;
      predictCorners(&st, c_corners_p, g_corners_p, k_corners_p, pred);
      st.site = &cg_emlrtRSI;
      assignClosestCorners(&st, cand, pred, idx);
      i41 = e_idx->size[0] * e_idx->size[1];
      e_idx->size[0] = 1;
      e_idx->size[1] = idx->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)e_idx, i41, (int32_T)sizeof
                        (boolean_T), &bb_emlrtRTEI);
      loop_ub = idx->size[0] * idx->size[1];
      emxFree_real_T(&k_corners_p);
      emxFree_real_T(&g_corners_p);
      emxFree_real_T(&c_corners_p);
      for (i41 = 0; i41 < loop_ub; i41++) {
        e_idx->data[i41] = (idx->data[i41] != 0.0);
      }

      st.site = &dg_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 2, all(&st, e_idx))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 5);
        st.site = &eg_emlrtRSI;
        cdiff = unused->size[1];
        loop_ub = idx->size[0] * idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          i42 = (int32_T)idx->data[i41];
          if (!((i42 >= 1) && (i42 <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, cdiff, &ae_emlrtBCI, &st);
          }
        }

        b_st.site = &qb_emlrtRSI;
        if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0))) {
          cdiff = chessboard->size[1];
        } else if (!(idx->size[1] == 0)) {
          cdiff = idx->size[1];
        } else {
          cdiff = muIntScalarMax_sint32(chessboard->size[1], 0);
          if (idx->size[1] > cdiff) {
            cdiff = idx->size[1];
          }
        }

        c_st.site = &rb_emlrtRSI;
        if ((cdiff == chessboard->size[1]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((cdiff == idx->size[1]) || (idx->size[1] == 0)) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (cdiff == 0);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          absb = chessboard->size[0];
        } else {
          absb = 0;
        }

        if (empty_non_axis_sizes || (!(idx->size[1] == 0))) {
          ndbl = 1;
        } else {
          ndbl = 0;
        }

        emxInit_real_T(&b_st, &c_unused, 2, &bb_emlrtRTEI, true);
        i41 = c_unused->size[0] * c_unused->size[1];
        c_unused->size[0] = 1;
        c_unused->size[1] = idx->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)c_unused, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          c_unused->data[c_unused->size[0] * i41] = unused->data[(int32_T)
            idx->data[idx->size[0] * i41] - 1];
        }

        emxInit_real_T(&b_st, &c_chessboard, 2, &bb_emlrtRTEI, true);
        i41 = c_chessboard->size[0] * c_chessboard->size[1];
        c_chessboard->size[0] = absb + ndbl;
        c_chessboard->size[1] = cdiff;
        emxEnsureCapacity(&b_st, (emxArray__common *)c_chessboard, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        for (i41 = 0; i41 < cdiff; i41++) {
          for (i42 = 0; i42 < absb; i42++) {
            c_chessboard->data[i42 + c_chessboard->size[0] * i41] =
              chessboard->data[i42 + absb * i41];
          }
        }

        for (i41 = 0; i41 < cdiff; i41++) {
          for (i42 = 0; i42 < ndbl; i42++) {
            c_chessboard->data[(i42 + absb) + c_chessboard->size[0] * i41] =
              c_unused->data[i42 + ndbl * i41];
          }
        }

        emxFree_real_T(&c_unused);
        i41 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = c_chessboard->size[0];
        chessboard->size[1] = c_chessboard->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = c_chessboard->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          ndbl = c_chessboard->size[0];
          for (i42 = 0; i42 < ndbl; i42++) {
            chessboard->data[i42 + chessboard->size[0] * i41] =
              c_chessboard->data[i42 + c_chessboard->size[0] * i41];
          }
        }

        emxFree_real_T(&c_chessboard);
      }

      emxFree_boolean_T(&e_idx);
      break;

     case 3:
      emxInit_real_T(sp, &d_corners_p, 2, &bb_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 11U, 0U, 0, 3);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 6);
      i41 = chessboard->size[1];
      if (!(3 <= i41)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i41, &kd_emlrtBCI, sp);
      }

      i41 = chessboard->size[1];
      if (!(2 <= i41)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i41, &jd_emlrtBCI, sp);
      }

      i41 = chessboard->size[1];
      if (!(1 <= i41)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i41, &id_emlrtBCI, sp);
      }

      loop_ub = chessboard->size[0];
      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = d_corners_p->size[0] * d_corners_p->size[1];
      d_corners_p->size[0] = loop_ub;
      d_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)d_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[i42 + (chessboard->size[0] << 1)];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &be_emlrtBCI, sp);
          }

          d_corners_p->data[i42 + d_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &h_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = h_corners_p->size[0] * h_corners_p->size[1];
      h_corners_p->size[0] = loop_ub;
      h_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)h_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[i42 + chessboard->size[0]];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &ce_emlrtBCI, sp);
          }

          h_corners_p->data[i42 + h_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &l_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[0];
      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = l_corners_p->size[0] * l_corners_p->size[1];
      l_corners_p->size[0] = loop_ub;
      l_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)l_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[i42];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &de_emlrtBCI, sp);
          }

          l_corners_p->data[i42 + l_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_boolean_T1(sp, &b_idx, 2, &bb_emlrtRTEI, true);
      st.site = &fg_emlrtRSI;
      predictCorners(&st, d_corners_p, h_corners_p, l_corners_p, pred);
      st.site = &gg_emlrtRSI;
      assignClosestCorners(&st, cand, pred, idx);
      i41 = b_idx->size[0] * b_idx->size[1];
      b_idx->size[0] = 1;
      b_idx->size[1] = idx->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_idx, i41, (int32_T)sizeof
                        (boolean_T), &bb_emlrtRTEI);
      loop_ub = idx->size[0] * idx->size[1];
      emxFree_real_T(&l_corners_p);
      emxFree_real_T(&h_corners_p);
      emxFree_real_T(&d_corners_p);
      for (i41 = 0; i41 < loop_ub; i41++) {
        b_idx->data[i41] = (idx->data[i41] != 0.0);
      }

      st.site = &hg_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 3, all(&st, b_idx))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 7);
        st.site = &ig_emlrtRSI;
        cdiff = unused->size[1];
        loop_ub = idx->size[0] * idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          i42 = (int32_T)idx->data[i41];
          if (!((i42 >= 1) && (i42 <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, cdiff, &ee_emlrtBCI, &st);
          }
        }

        emxInit_int32_T(&st, &f_idx, 1, &bb_emlrtRTEI, true);
        b_st.site = &qb_emlrtRSI;
        i41 = f_idx->size[0];
        f_idx->size[0] = idx->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)f_idx, i41, (int32_T)sizeof
                          (int32_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          f_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
        }

        emxInit_int32_T(&b_st, &k_idx, 1, &bb_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &l_idx, 1, &bb_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &m_idx, 1, &bb_emlrtRTEI, true);
        if (!(f_idx->size[0] == 0)) {
          i41 = m_idx->size[0];
          m_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)m_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            m_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          cdiff = m_idx->size[0];
        } else if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0)))
        {
          cdiff = chessboard->size[0];
        } else {
          i41 = k_idx->size[0];
          k_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)k_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            k_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          if (k_idx->size[0] > 0) {
            i41 = l_idx->size[0];
            l_idx->size[0] = idx->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)l_idx, i41, (int32_T)
                              sizeof(int32_T), &bb_emlrtRTEI);
            loop_ub = idx->size[1];
            for (i41 = 0; i41 < loop_ub; i41++) {
              l_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
            }

            cdiff = l_idx->size[0];
          } else {
            cdiff = 0;
          }

          if (chessboard->size[0] > cdiff) {
            cdiff = chessboard->size[0];
          }
        }

        emxFree_int32_T(&m_idx);
        emxFree_int32_T(&l_idx);
        emxFree_int32_T(&k_idx);
        emxFree_int32_T(&f_idx);
        emxInit_int32_T(&b_st, &o_idx, 1, &bb_emlrtRTEI, true);
        c_st.site = &rb_emlrtRSI;
        i41 = o_idx->size[0];
        o_idx->size[0] = idx->size[1];
        emxEnsureCapacity(&c_st, (emxArray__common *)o_idx, i41, (int32_T)sizeof
                          (int32_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          o_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
        }

        emxInit_int32_T(&c_st, &q_idx, 1, &bb_emlrtRTEI, true);
        guard2 = false;
        if (cdiff == o_idx->size[0]) {
          guard2 = true;
        } else {
          i41 = q_idx->size[0];
          q_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&c_st, (emxArray__common *)q_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            q_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          if (q_idx->size[0] == 0) {
            guard2 = true;
          } else {
            empty_non_axis_sizes = false;
          }
        }

        if (guard2) {
          empty_non_axis_sizes = true;
        }

        emxFree_int32_T(&q_idx);
        emxFree_int32_T(&o_idx);
        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((cdiff == chessboard->size[0]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (cdiff == 0);
        emxInit_int32_T(&b_st, &s_idx, 1, &bb_emlrtRTEI, true);
        guard1 = false;
        if (empty_non_axis_sizes) {
          guard1 = true;
        } else {
          i41 = s_idx->size[0];
          s_idx->size[0] = idx->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)s_idx, i41, (int32_T)
                            sizeof(int32_T), &bb_emlrtRTEI);
          loop_ub = idx->size[1];
          for (i41 = 0; i41 < loop_ub; i41++) {
            s_idx->data[i41] = (int32_T)idx->data[idx->size[0] * i41];
          }

          if (!(s_idx->size[0] == 0)) {
            guard1 = true;
          } else {
            absb = 0;
          }
        }

        if (guard1) {
          absb = 1;
        }

        emxFree_int32_T(&s_idx);
        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          ndbl = chessboard->size[1];
        } else {
          ndbl = 0;
        }

        emxInit_real_T1(&b_st, &f_unused, 1, &bb_emlrtRTEI, true);
        i41 = f_unused->size[0];
        f_unused->size[0] = idx->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)f_unused, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          f_unused->data[i41] = unused->data[(int32_T)idx->data[idx->size[0] *
            i41] - 1];
        }

        emxInit_real_T(&b_st, &g_unused, 2, &bb_emlrtRTEI, true);
        i41 = g_unused->size[0] * g_unused->size[1];
        g_unused->size[0] = cdiff;
        g_unused->size[1] = absb + ndbl;
        emxEnsureCapacity(&b_st, (emxArray__common *)g_unused, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        for (i41 = 0; i41 < absb; i41++) {
          for (i42 = 0; i42 < cdiff; i42++) {
            g_unused->data[i42 + g_unused->size[0] * i41] = f_unused->data[i42 +
              cdiff * i41];
          }
        }

        emxFree_real_T(&f_unused);
        for (i41 = 0; i41 < ndbl; i41++) {
          for (i42 = 0; i42 < cdiff; i42++) {
            g_unused->data[i42 + g_unused->size[0] * (i41 + absb)] =
              chessboard->data[i42 + cdiff * i41];
          }
        }

        i41 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = g_unused->size[0];
        chessboard->size[1] = g_unused->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = g_unused->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          ndbl = g_unused->size[0];
          for (i42 = 0; i42 < ndbl; i42++) {
            chessboard->data[i42 + chessboard->size[0] * i41] = g_unused->
              data[i42 + g_unused->size[0] * i41];
          }
        }

        emxFree_real_T(&g_unused);
      }

      emxFree_boolean_T(&b_idx);
      break;

     case 4:
      emxInit_real_T(sp, &e_corners_p, 2, &bb_emlrtRTEI, true);
      covrtLogSwitch(&emlrtCoverageInstance, 11U, 0U, 0, 4);
      covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 8);
      i41 = chessboard->size[0];
      if (!(3 <= i41)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i41, &hd_emlrtBCI, sp);
      }

      i41 = chessboard->size[0];
      if (!(2 <= i41)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i41, &gd_emlrtBCI, sp);
      }

      i41 = chessboard->size[0];
      if (!(1 <= i41)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i41, &fd_emlrtBCI, sp);
      }

      loop_ub = chessboard->size[1];
      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = e_corners_p->size[0] * e_corners_p->size[1];
      e_corners_p->size[0] = loop_ub;
      e_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)e_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[2 + chessboard->size[0] * i42];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &fe_emlrtBCI, sp);
          }

          e_corners_p->data[i42 + e_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &i_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = i_corners_p->size[0] * i_corners_p->size[1];
      i_corners_p->size[0] = loop_ub;
      i_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)i_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[1 + chessboard->size[0] * i42];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &ge_emlrtBCI, sp);
          }

          i_corners_p->data[i42 + i_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_real_T(sp, &m_corners_p, 2, &bb_emlrtRTEI, true);
      loop_ub = chessboard->size[1];
      cdiff = corners_p->size[0];
      ndbl = corners_p->size[1];
      i41 = m_corners_p->size[0] * m_corners_p->size[1];
      m_corners_p->size[0] = loop_ub;
      m_corners_p->size[1] = ndbl;
      emxEnsureCapacity(sp, (emxArray__common *)m_corners_p, i41, (int32_T)
                        sizeof(real_T), &bb_emlrtRTEI);
      for (i41 = 0; i41 < ndbl; i41++) {
        for (i42 = 0; i42 < loop_ub; i42++) {
          apnd = (int32_T)chessboard->data[chessboard->size[0] * i42];
          if (!((apnd >= 1) && (apnd <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(apnd, 1, cdiff, &he_emlrtBCI, sp);
          }

          m_corners_p->data[i42 + m_corners_p->size[0] * i41] = corners_p->data
            [(apnd + corners_p->size[0] * i41) - 1];
        }
      }

      emxInit_boolean_T1(sp, &c_idx, 2, &bb_emlrtRTEI, true);
      st.site = &jg_emlrtRSI;
      predictCorners(&st, e_corners_p, i_corners_p, m_corners_p, pred);
      st.site = &kg_emlrtRSI;
      assignClosestCorners(&st, cand, pred, idx);
      i41 = c_idx->size[0] * c_idx->size[1];
      c_idx->size[0] = 1;
      c_idx->size[1] = idx->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_idx, i41, (int32_T)sizeof
                        (boolean_T), &bb_emlrtRTEI);
      loop_ub = idx->size[0] * idx->size[1];
      emxFree_real_T(&m_corners_p);
      emxFree_real_T(&i_corners_p);
      emxFree_real_T(&e_corners_p);
      for (i41 = 0; i41 < loop_ub; i41++) {
        c_idx->data[i41] = (idx->data[i41] != 0.0);
      }

      st.site = &lg_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 11U, 0U, 4, all(&st, c_idx))) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 11U, 9);
        st.site = &mg_emlrtRSI;
        cdiff = unused->size[1];
        loop_ub = idx->size[0] * idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          i42 = (int32_T)idx->data[i41];
          if (!((i42 >= 1) && (i42 <= cdiff))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, cdiff, &ie_emlrtBCI, &st);
          }
        }

        b_st.site = &qb_emlrtRSI;
        if (!(idx->size[1] == 0)) {
          cdiff = idx->size[1];
        } else if (!((chessboard->size[0] == 0) || (chessboard->size[1] == 0)))
        {
          cdiff = chessboard->size[1];
        } else {
          cdiff = muIntScalarMax_sint32(idx->size[1], 0);
          if (chessboard->size[1] > cdiff) {
            cdiff = chessboard->size[1];
          }
        }

        c_st.site = &rb_emlrtRSI;
        if ((cdiff == idx->size[1]) || (idx->size[1] == 0)) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((cdiff == chessboard->size[1]) || ((chessboard->size[0] == 0) ||
             (chessboard->size[1] == 0))) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (cdiff == 0);
        if (empty_non_axis_sizes || (!(idx->size[1] == 0))) {
          absb = 1;
        } else {
          absb = 0;
        }

        if (empty_non_axis_sizes || (!((chessboard->size[0] == 0) ||
              (chessboard->size[1] == 0)))) {
          ndbl = chessboard->size[0];
        } else {
          ndbl = 0;
        }

        emxInit_real_T(&b_st, &b_unused, 2, &bb_emlrtRTEI, true);
        i41 = b_unused->size[0] * b_unused->size[1];
        b_unused->size[0] = 1;
        b_unused->size[1] = idx->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)b_unused, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = idx->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          b_unused->data[b_unused->size[0] * i41] = unused->data[(int32_T)
            idx->data[idx->size[0] * i41] - 1];
        }

        emxInit_real_T(&b_st, &d_unused, 2, &bb_emlrtRTEI, true);
        i41 = d_unused->size[0] * d_unused->size[1];
        d_unused->size[0] = absb + ndbl;
        d_unused->size[1] = cdiff;
        emxEnsureCapacity(&b_st, (emxArray__common *)d_unused, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        for (i41 = 0; i41 < cdiff; i41++) {
          for (i42 = 0; i42 < absb; i42++) {
            d_unused->data[i42 + d_unused->size[0] * i41] = b_unused->data[i42 +
              absb * i41];
          }
        }

        emxFree_real_T(&b_unused);
        for (i41 = 0; i41 < cdiff; i41++) {
          for (i42 = 0; i42 < ndbl; i42++) {
            d_unused->data[(i42 + absb) + d_unused->size[0] * i41] =
              chessboard->data[i42 + ndbl * i41];
          }
        }

        i41 = chessboard->size[0] * chessboard->size[1];
        chessboard->size[0] = d_unused->size[0];
        chessboard->size[1] = d_unused->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)chessboard, i41, (int32_T)
                          sizeof(real_T), &bb_emlrtRTEI);
        loop_ub = d_unused->size[1];
        for (i41 = 0; i41 < loop_ub; i41++) {
          ndbl = d_unused->size[0];
          for (i42 = 0; i42 < ndbl; i42++) {
            chessboard->data[i42 + chessboard->size[0] * i41] = d_unused->
              data[i42 + d_unused->size[0] * i41];
          }
        }

        emxFree_real_T(&d_unused);
      }

      emxFree_boolean_T(&c_idx);
      break;

     default:
      covrtLogSwitch(&emlrtCoverageInstance, 11U, 0U, 0, 0);
      break;
    }

    emxFree_real_T(&idx);
    emxFree_real_T(&pred);
    emxFree_real_T(&cand);
    emxFree_real_T(&unused);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (growChessboard.c) */
