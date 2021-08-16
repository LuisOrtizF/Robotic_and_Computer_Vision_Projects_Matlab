/*
 * detectCheckerboard.c
 *
 * Code generation for function 'detectCheckerboard'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "detectCheckerboard.h"
#include "dCP_emxutil.h"
#include "subPixelLocation.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "cat.h"
#include "rot90.h"
#include "mean.h"
#include "indexShapeCheck.h"
#include "sort1.h"
#include "Checkerboard.h"
#include "error.h"
#include "sub2ind.h"
#include "find_peaks.h"
#include "imfilter.h"
#include "power.h"
#include "abs.h"
#include "dCP_data.h"
#include "libmwippfilter.h"
#include "libmwimfilter.h"

/* Variable Definitions */
static emlrtRSInfo j_emlrtRSI = { 5,   /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 7,   /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 9,   /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 10,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 13,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 14,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 20,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 21,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 22,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 24,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 25,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 26,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 11,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 15,  /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 6,   /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 11,  /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 12, /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 25, /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 27, /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 28, /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 33, /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 35, /* lineNo */
  "secondDerivCornerMetric",           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 34, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 35, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 40, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 41, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 42, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 16, /* lineNo */
  "sub2ind",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 39, /* lineNo */
  "sub2ind",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 71, /* lineNo */
  "sub2ind",                           /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 54, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 61, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 62, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 90, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 91, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 93, /* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 101,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 102,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 19, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 26, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/datafun/sort.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 136,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 138,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 160,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 168,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 141,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 214,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 219,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 215,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 219,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 220,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 227,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 228,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 236,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 237,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 238,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 239,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 254,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 264,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 268,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 273,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 274,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 31, /* lineNo */
  "sort",                              /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/datafun/sort.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 117,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 120,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 193,/* lineNo */
  "detectCheckerboard",                /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 21,/* lineNo */
  8,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 21,/* lineNo */
  22,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 22,/* lineNo */
  9,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 22,/* lineNo */
  26,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 30,/* lineNo */
  11,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 30,/* lineNo */
  32,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 33,/* lineNo */
  7,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 33,/* lineNo */
  28,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 5, /* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 35,/* lineNo */
  7,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 35,/* lineNo */
  32,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 10,/* lineNo */
  34,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 10,/* lineNo */
  49,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 10,/* lineNo */
  15,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 10,/* lineNo */
  11,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 14,/* lineNo */
  35,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 14,/* lineNo */
  51,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 14,/* lineNo */
  16,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 14,/* lineNo */
  12,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 1,/* lineNo */
  32,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 60,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 20,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 26,/* lineNo */
  6,                                   /* colNo */
  "sort",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/datafun/sort.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 21,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/datafun/sort.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 22,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 23,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 62,/* lineNo */
  11,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 62,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 64,/* lineNo */
  15,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 64,/* lineNo */
  5,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 236,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 244,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 232,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 240,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 236,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 244,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 232,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 240,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 237,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 245,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 233,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 241,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 237,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 245,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 233,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 241,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 46,/* lineNo */
  18,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 279,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 193,/* lineNo */
  8,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 194,/* lineNo */
  5,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 200,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 201,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 202,/* lineNo */
  8,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 203,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 204,/* lineNo */
  8,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 189,/* lineNo */
  32,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ml_emlrtRTEI = { 236,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo nl_emlrtRTEI = { 237,/* lineNo */
  25,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ol_emlrtRTEI = { 238,/* lineNo */
  25,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo pl_emlrtRTEI = { 239,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ql_emlrtRTEI = { 219,/* lineNo */
  13,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 268,/* lineNo */
  16,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 268,/* lineNo */
  47,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 227,/* lineNo */
  20,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 227,/* lineNo */
  47,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 210,/* lineNo */
  18,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 237,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 238,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo yl_emlrtRTEI = { 254,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo am_emlrtRTEI = { 264,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo bm_emlrtRTEI = { 239,/* lineNo */
  21,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  21,                                  /* lineNo */
  8,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  22,                                  /* lineNo */
  9,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  30,                                  /* lineNo */
  11,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  33,                                  /* lineNo */
  43,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  33,                                  /* lineNo */
  7,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  35,                                  /* lineNo */
  47,                                  /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  35,                                  /* lineNo */
  7,                                   /* colNo */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  36,                                  /* lineNo */
  7,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtRTEInfo hm_emlrtRTEI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo im_emlrtRTEI = { 31,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "secondDerivCornerMetric",           /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/secondDerivCornerMetric.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 230, /* lineNo */
  20,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  236,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  236,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 280,/* lineNo */
  6,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  6,                                   /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 280,/* lineNo */
  9,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 280,/* lineNo */
  13,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 280,/* lineNo */
  16,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ai_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { -1, /* nDims */
  202,                                 /* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  204,                                 /* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtDCInfo gc_emlrtDCI = { 200,/* lineNo */
  16,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 200,/* lineNo */
  1,                                   /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo dn_emlrtRTEI = { 19,/* lineNo */
  19,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtBCInfo kj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  261,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  261,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  261,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ak_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ck_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ek_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ik_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ok_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  250,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  250,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  250,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo al_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo el_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo il_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ic_emlrtECI = { 3,  /* nDims */
  227,                                 /* lineNo */
  20,                                  /* colNo */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m"/* pName */
};

static emlrtBCInfo kl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ll_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  65,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ml_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ol_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  268,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  268,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "detectCheckerboard",                /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/detectCheckerboard.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void cornerOrientations(const emlrtStack *sp, const emxArray_real32_T
  *Ix2, const emxArray_real32_T *Iy2, const emxArray_real32_T *Ixy, const
  real32_T p[2], real32_T v1[2], real32_T v2[2]);
static c_vision_internal_calibration_c *growCheckerboard(const emlrtStack *sp,
  const emxArray_real32_T *points, const emxArray_real32_T *scores, const
  emxArray_real32_T *Ix2, const emxArray_real32_T *Iy2, const emxArray_real32_T *
  Ixy, real_T theta, c_vision_internal_calibration_c *iobj_0,
  c_vision_internal_calibration_c *iobj_1, c_vision_internal_calibration_c
  *iobj_2);
static void orient(const emlrtStack *sp, c_vision_internal_calibration_c **board,
                   const emxArray_real32_T *I);
static void poly2RectMask(const emlrtStack *sp, real_T b_X[4], real_T Y[4],
  real_T height, real_T width, emxArray_boolean_T *mask);
static void rot90_checkerboard(const emlrtStack *sp,
  c_vision_internal_calibration_c **board);
static void toPoints(const emlrtStack *sp, const c_vision_internal_calibration_c
                     *this, emxArray_real_T *points, real_T boardSize[2]);

/* Function Definitions */
static void cornerOrientations(const emlrtStack *sp, const emxArray_real32_T
  *Ix2, const emxArray_real32_T *Iy2, const emxArray_real32_T *Ixy, const
  real32_T p[2], real32_T v1[2], real32_T v2[2])
{
  int32_T sgn1;
  int32_T sgn2;
  real32_T df;
  real32_T adf;
  real32_T tb;
  real32_T ab;
  real32_T tn;
  boolean_T b_p;
  real32_T sn1[2];
  real32_T cs1[2];
  static const real32_T fv0[4] = { 0.707106769F, 0.707106769F, -0.707106769F,
    0.707106769F };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  sgn1 = Ix2->size[0];
  sgn2 = (int32_T)p[1];
  if (!((sgn2 >= 1) && (sgn2 <= sgn1))) {
    emlrtDynamicBoundsCheckR2012b(sgn2, 1, sgn1, &mb_emlrtBCI, sp);
  }

  sgn1 = Ix2->size[1];
  sgn2 = (int32_T)p[0];
  if (!((sgn2 >= 1) && (sgn2 <= sgn1))) {
    emlrtDynamicBoundsCheckR2012b(sgn2, 1, sgn1, &nb_emlrtBCI, sp);
  }

  sgn1 = Ixy->size[0];
  sgn2 = (int32_T)p[1];
  if (!((sgn2 >= 1) && (sgn2 <= sgn1))) {
    emlrtDynamicBoundsCheckR2012b(sgn2, 1, sgn1, &ob_emlrtBCI, sp);
  }

  sgn1 = Ixy->size[1];
  sgn2 = (int32_T)p[0];
  if (!((sgn2 >= 1) && (sgn2 <= sgn1))) {
    emlrtDynamicBoundsCheckR2012b(sgn2, 1, sgn1, &pb_emlrtBCI, sp);
  }

  sgn1 = Iy2->size[0];
  sgn2 = (int32_T)p[1];
  if (!((sgn2 >= 1) && (sgn2 <= sgn1))) {
    emlrtDynamicBoundsCheckR2012b(sgn2, 1, sgn1, &qb_emlrtBCI, sp);
  }

  sgn1 = Iy2->size[1];
  sgn2 = (int32_T)p[0];
  if (!((sgn2 >= 1) && (sgn2 <= sgn1))) {
    emlrtDynamicBoundsCheckR2012b(sgn2, 1, sgn1, &rb_emlrtBCI, sp);
  }

  df = Ix2->data[((int32_T)p[1] + Ix2->size[0] * ((int32_T)p[0] - 1)) - 1] -
    Iy2->data[((int32_T)p[1] + Iy2->size[0] * ((int32_T)p[0] - 1)) - 1];
  adf = muSingleScalarAbs(df);
  tb = Ixy->data[((int32_T)p[1] + Ixy->size[0] * ((int32_T)p[0] - 1)) - 1] +
    Ixy->data[((int32_T)p[1] + Ixy->size[0] * ((int32_T)p[0] - 1)) - 1];
  ab = muSingleScalarAbs(tb);
  if (adf > ab) {
    tn = ab / adf;
    st.site = &ef_emlrtRSI;
    b_st.site = &if_emlrtRSI;
    st.site = &ef_emlrtRSI;
    adf *= muSingleScalarSqrt(1.0F + tn * tn);
  } else if (adf < ab) {
    tn = adf / ab;
    st.site = &ff_emlrtRSI;
    b_st.site = &if_emlrtRSI;
    st.site = &ff_emlrtRSI;
    adf = ab * muSingleScalarSqrt(1.0F + tn * tn);
  } else {
    adf = ab * 1.41421354F;
  }

  if (Ix2->data[((int32_T)p[1] + Ix2->size[0] * ((int32_T)p[0] - 1)) - 1] +
      Iy2->data[((int32_T)p[1] + Iy2->size[0] * ((int32_T)p[0] - 1)) - 1] < 0.0F)
  {
    sgn1 = -1;
  } else {
    sgn1 = 1;
  }

  if (df > 0.0F) {
    adf += df;
    sgn2 = 1;
  } else {
    adf = df - adf;
    sgn2 = -1;
  }

  if (muSingleScalarAbs(adf) > ab) {
    tn = -tb / adf;
    st.site = &gf_emlrtRSI;
    adf = 1.0F + tn * tn;
    b_p = (adf < 0.0F);
    if (b_p) {
      b_st.site = &jf_emlrtRSI;
      c_st.site = &jf_emlrtRSI;
      b_error(&c_st);
    }

    df = 1.0F / muSingleScalarSqrt(adf);
    adf = tn * df;
  } else if (ab == 0.0F) {
    adf = 1.0F;
    df = 0.0F;
  } else {
    tn = -adf / tb;
    st.site = &hf_emlrtRSI;
    adf = 1.0F + tn * tn;
    b_p = (adf < 0.0F);
    if (b_p) {
      b_st.site = &jf_emlrtRSI;
      c_st.site = &jf_emlrtRSI;
      b_error(&c_st);
    }

    adf = 1.0F / muSingleScalarSqrt(adf);
    df = tn * adf;
  }

  if (sgn1 == sgn2) {
    tn = adf;
    adf = -df;
    df = tn;
  }

  sn1[0] = -df;
  sn1[1] = adf;
  cs1[0] = adf;
  cs1[1] = df;
  for (sgn1 = 0; sgn1 < 2; sgn1++) {
    v1[sgn1] = 0.0F;
    v2[sgn1] = 0.0F;
    for (sgn2 = 0; sgn2 < 2; sgn2++) {
      v1[sgn1] += sn1[sgn2] * fv0[sgn2 + (sgn1 << 1)];
      v2[sgn1] += cs1[sgn2] * fv0[sgn2 + (sgn1 << 1)];
    }
  }
}

static c_vision_internal_calibration_c *growCheckerboard(const emlrtStack *sp,
  const emxArray_real32_T *points, const emxArray_real32_T *scores, const
  emxArray_real32_T *Ix2, const emxArray_real32_T *Iy2, const emxArray_real32_T *
  Ixy, real_T theta, c_vision_internal_calibration_c *iobj_0,
  c_vision_internal_calibration_c *iobj_1, c_vision_internal_calibration_c
  *iobj_2)
{
  c_vision_internal_calibration_c *board;
  emxArray_uint32_T *seedIdx;
  uint32_T u0;
  int32_T i7;
  int32_T loop_ub;
  int32_T b_scores;
  emxArray_real32_T *x;
  int32_T i8;
  emxArray_int32_T *sortedIdx;
  emxArray_int32_T *iidx;
  boolean_T nonSingletonDimFound;
  emxArray_uint32_T *b_seedIdx;
  c_vision_internal_calibration_c *currentBoard;
  int32_T i;
  emxArray_real_T *b_currentBoard;
  emxArray_real_T *c_currentBoard;
  real32_T b_x[2];
  real32_T v1[2];
  real32_T v2[2];
  c_vision_internal_calibration_c *tmpBoard;
  int32_T b_i;
  int32_T exitg1;
  real_T d0;
  int32_T i9;
  int32_T b_loop_ub;
  int32_T d_currentBoard;
  int32_T i10;
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
  if (scores->size[0] == 0) {
    st.site = &od_emlrtRSI;
    iobj_2->isValid = false;
    iobj_2->Energy = ((real32_T)rtInf);
    b_st.site = &wd_emlrtRSI;
    board = iobj_2;
    i7 = iobj_2->BoardIdx->size[0] * iobj_2->BoardIdx->size[1];
    iobj_2->BoardIdx->size[0] = 1;
    iobj_2->BoardIdx->size[1] = 1;
    emxEnsureCapacity_real_T(&st, iobj_2->BoardIdx, i7, &mc_emlrtRTEI);
    iobj_2->BoardIdx->data[0] = 0.0;
    i7 = iobj_2->BoardIdx->size[0] * iobj_2->BoardIdx->size[1];
    iobj_2->BoardIdx->size[0] = 3;
    iobj_2->BoardIdx->size[1] = 3;
    emxEnsureCapacity_real_T(&st, iobj_2->BoardIdx, i7, &oc_emlrtRTEI);
    for (i7 = 0; i7 < 9; i7++) {
      iobj_2->BoardIdx->data[i7] = 0.0;
    }

    i7 = iobj_2->BoardCoords->size[0] * iobj_2->BoardCoords->size[1] *
      iobj_2->BoardCoords->size[2];
    iobj_2->BoardCoords->size[0] = 1;
    iobj_2->BoardCoords->size[1] = 1;
    iobj_2->BoardCoords->size[2] = 1;
    emxEnsureCapacity_real_T1(&st, iobj_2->BoardCoords, i7, &qc_emlrtRTEI);
    iobj_2->BoardCoords->data[0] = 0.0;
    i7 = iobj_2->BoardCoords->size[0] * iobj_2->BoardCoords->size[1] *
      iobj_2->BoardCoords->size[2];
    iobj_2->BoardCoords->size[0] = 3;
    iobj_2->BoardCoords->size[1] = 3;
    iobj_2->BoardCoords->size[2] = 2;
    emxEnsureCapacity_real_T1(&st, iobj_2->BoardCoords, i7, &rc_emlrtRTEI);
    for (i7 = 0; i7 < 18; i7++) {
      iobj_2->BoardCoords->data[i7] = 0.0;
    }
  } else {
    emxInit_uint32_T(sp, &seedIdx, 2, &lc_emlrtRTEI, true);
    if (points->size[0] < 1) {
      i7 = seedIdx->size[0] * seedIdx->size[1];
      seedIdx->size[0] = 1;
      seedIdx->size[1] = 0;
      emxEnsureCapacity_uint32_T(sp, seedIdx, i7, &lc_emlrtRTEI);
    } else {
      u0 = points->size[0] + MAX_uint32_T;
      i7 = seedIdx->size[0] * seedIdx->size[1];
      seedIdx->size[0] = 1;
      seedIdx->size[1] = (int32_T)u0 + 1;
      emxEnsureCapacity_uint32_T(sp, seedIdx, i7, &lc_emlrtRTEI);
      loop_ub = (int32_T)u0;
      for (i7 = 0; i7 <= loop_ub; i7++) {
        seedIdx->data[seedIdx->size[0] * i7] = 1U + i7;
      }
    }

    st.site = &pd_emlrtRSI;
    indexShapeCheck(&st, scores->size[0], *(int32_T (*)[2])seedIdx->size);
    st.site = &pd_emlrtRSI;
    b_scores = scores->size[0];
    loop_ub = seedIdx->size[0] * seedIdx->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i8 = (int32_T)seedIdx->data[i7];
      if (!((i8 >= 1) && (i8 <= b_scores))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, b_scores, &jb_emlrtBCI, &st);
      }
    }

    emxInit_real32_T1(&st, &x, 1, &nd_emlrtRTEI, true);
    i7 = x->size[0];
    x->size[0] = seedIdx->size[1];
    emxEnsureCapacity_real32_T1(&st, x, i7, &nc_emlrtRTEI);
    loop_ub = seedIdx->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      x->data[i7] = scores->data[(int32_T)seedIdx->data[seedIdx->size[0] * i7] -
        1];
    }

    emxInit_int32_T(&st, &sortedIdx, 1, &nd_emlrtRTEI, true);
    emxInit_int32_T(&st, &iidx, 1, &nd_emlrtRTEI, true);
    b_st.site = &xd_emlrtRSI;
    sort(&b_st, x, iidx);
    i7 = sortedIdx->size[0];
    sortedIdx->size[0] = iidx->size[0];
    emxEnsureCapacity_int32_T(&st, sortedIdx, i7, &pc_emlrtRTEI);
    loop_ub = iidx->size[0];
    emxFree_real32_T(&x);
    for (i7 = 0; i7 < loop_ub; i7++) {
      sortedIdx->data[i7] = iidx->data[i7];
    }

    emxFree_int32_T(&iidx);
    st.site = &qd_emlrtRSI;
    nonSingletonDimFound = !(seedIdx->size[1] != 1);
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
      if (sortedIdx->size[0] != 1) {
        nonSingletonDimFound = true;
      }

      if (nonSingletonDimFound) {
        nonSingletonDimFound = true;
      } else {
        nonSingletonDimFound = false;
      }
    } else {
      nonSingletonDimFound = false;
    }

    b_st.site = &hd_emlrtRSI;
    if (nonSingletonDimFound) {
      emlrtErrorWithMessageIdR2012b(&b_st, &vm_emlrtRTEI,
        "Coder:FE:PotentialVectorVector", 0);
    }

    emxInit_uint32_T(&b_st, &b_seedIdx, 2, &sc_emlrtRTEI, true);
    b_scores = seedIdx->size[1];
    i7 = b_seedIdx->size[0] * b_seedIdx->size[1];
    b_seedIdx->size[0] = 1;
    b_seedIdx->size[1] = sortedIdx->size[0];
    emxEnsureCapacity_uint32_T(sp, b_seedIdx, i7, &sc_emlrtRTEI);
    loop_ub = sortedIdx->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i8 = sortedIdx->data[i7];
      if (!((i8 >= 1) && (i8 <= b_scores))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, b_scores, &kb_emlrtBCI, sp);
      }

      b_seedIdx->data[b_seedIdx->size[0] * i7] = seedIdx->data[i8 - 1];
    }

    i7 = seedIdx->size[0] * seedIdx->size[1];
    seedIdx->size[0] = 1;
    seedIdx->size[1] = b_seedIdx->size[1];
    emxEnsureCapacity_uint32_T(sp, seedIdx, i7, &tc_emlrtRTEI);
    loop_ub = b_seedIdx->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      seedIdx->data[seedIdx->size[0] * i7] = b_seedIdx->data[b_seedIdx->size[0] *
        i7];
    }

    if (sortedIdx->size[0] > 2000) {
      loop_ub = (int32_T)muDoubleScalarMin(2000.0, muDoubleScalarRound((real_T)
        seedIdx->size[1] / 2.0));
      if (1 > loop_ub) {
        loop_ub = 0;
      } else {
        i7 = seedIdx->size[1];
        if (!(1 <= i7)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i7, &p_emlrtBCI, sp);
        }

        i7 = seedIdx->size[1];
        if (!(loop_ub <= i7)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i7, &q_emlrtBCI, sp);
        }
      }

      i7 = b_seedIdx->size[0] * b_seedIdx->size[1];
      b_seedIdx->size[0] = 1;
      b_seedIdx->size[1] = loop_ub;
      emxEnsureCapacity_uint32_T(sp, b_seedIdx, i7, &uc_emlrtRTEI);
      for (i7 = 0; i7 < loop_ub; i7++) {
        b_seedIdx->data[b_seedIdx->size[0] * i7] = seedIdx->data[i7];
      }

      i7 = seedIdx->size[0] * seedIdx->size[1];
      seedIdx->size[0] = 1;
      seedIdx->size[1] = b_seedIdx->size[1];
      emxEnsureCapacity_uint32_T(sp, seedIdx, i7, &vc_emlrtRTEI);
      loop_ub = b_seedIdx->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        seedIdx->data[seedIdx->size[0] * i7] = b_seedIdx->data[b_seedIdx->size[0]
          * i7];
      }
    }

    emxFree_uint32_T(&b_seedIdx);
    emxFree_int32_T(&sortedIdx);
    st.site = &rd_emlrtRSI;
    iobj_0->isValid = false;
    iobj_0->Energy = ((real32_T)rtInf);
    b_st.site = &wd_emlrtRSI;
    board = iobj_0;
    i7 = iobj_0->BoardIdx->size[0] * iobj_0->BoardIdx->size[1];
    iobj_0->BoardIdx->size[0] = 1;
    iobj_0->BoardIdx->size[1] = 1;
    emxEnsureCapacity_real_T(&st, iobj_0->BoardIdx, i7, &mc_emlrtRTEI);
    iobj_0->BoardIdx->data[0] = 0.0;
    i7 = iobj_0->BoardIdx->size[0] * iobj_0->BoardIdx->size[1];
    iobj_0->BoardIdx->size[0] = 3;
    iobj_0->BoardIdx->size[1] = 3;
    emxEnsureCapacity_real_T(&st, iobj_0->BoardIdx, i7, &oc_emlrtRTEI);
    for (i7 = 0; i7 < 9; i7++) {
      iobj_0->BoardIdx->data[i7] = 0.0;
    }

    i7 = iobj_0->BoardCoords->size[0] * iobj_0->BoardCoords->size[1] *
      iobj_0->BoardCoords->size[2];
    iobj_0->BoardCoords->size[0] = 1;
    iobj_0->BoardCoords->size[1] = 1;
    iobj_0->BoardCoords->size[2] = 1;
    emxEnsureCapacity_real_T1(&st, iobj_0->BoardCoords, i7, &qc_emlrtRTEI);
    iobj_0->BoardCoords->data[0] = 0.0;
    i7 = iobj_0->BoardCoords->size[0] * iobj_0->BoardCoords->size[1] *
      iobj_0->BoardCoords->size[2];
    iobj_0->BoardCoords->size[0] = 3;
    iobj_0->BoardCoords->size[1] = 3;
    iobj_0->BoardCoords->size[2] = 2;
    emxEnsureCapacity_real_T1(&st, iobj_0->BoardCoords, i7, &rc_emlrtRTEI);
    for (i7 = 0; i7 < 18; i7++) {
      iobj_0->BoardCoords->data[i7] = 0.0;
    }

    st.site = &sd_emlrtRSI;
    iobj_1->isValid = false;
    iobj_1->Energy = ((real32_T)rtInf);
    b_st.site = &wd_emlrtRSI;
    currentBoard = iobj_1;
    i7 = iobj_1->BoardIdx->size[0] * iobj_1->BoardIdx->size[1];
    iobj_1->BoardIdx->size[0] = 1;
    iobj_1->BoardIdx->size[1] = 1;
    emxEnsureCapacity_real_T(&st, iobj_1->BoardIdx, i7, &mc_emlrtRTEI);
    iobj_1->BoardIdx->data[0] = 0.0;
    i7 = iobj_1->BoardIdx->size[0] * iobj_1->BoardIdx->size[1];
    iobj_1->BoardIdx->size[0] = 3;
    iobj_1->BoardIdx->size[1] = 3;
    emxEnsureCapacity_real_T(&st, iobj_1->BoardIdx, i7, &oc_emlrtRTEI);
    for (i7 = 0; i7 < 9; i7++) {
      iobj_1->BoardIdx->data[i7] = 0.0;
    }

    i7 = iobj_1->BoardCoords->size[0] * iobj_1->BoardCoords->size[1] *
      iobj_1->BoardCoords->size[2];
    iobj_1->BoardCoords->size[0] = 1;
    iobj_1->BoardCoords->size[1] = 1;
    iobj_1->BoardCoords->size[2] = 1;
    emxEnsureCapacity_real_T1(&st, iobj_1->BoardCoords, i7, &qc_emlrtRTEI);
    iobj_1->BoardCoords->data[0] = 0.0;
    i7 = iobj_1->BoardCoords->size[0] * iobj_1->BoardCoords->size[1] *
      iobj_1->BoardCoords->size[2];
    iobj_1->BoardCoords->size[0] = 3;
    iobj_1->BoardCoords->size[1] = 3;
    iobj_1->BoardCoords->size[2] = 2;
    emxEnsureCapacity_real_T1(&st, iobj_1->BoardCoords, i7, &rc_emlrtRTEI);
    for (i7 = 0; i7 < 18; i7++) {
      iobj_1->BoardCoords->data[i7] = 0.0;
    }

    i = 1;
    emxInit_real_T1(sp, &b_currentBoard, 2, &yc_emlrtRTEI, true);
    emxInit_real_T(sp, &c_currentBoard, 3, &hd_emlrtRTEI, true);
    while (i - 1 <= seedIdx->size[1] - 1) {
      i7 = points->size[0];
      i8 = seedIdx->size[1];
      if (!((i >= 1) && (i <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i8, &r_emlrtBCI, sp);
      }

      b_scores = (int32_T)seedIdx->data[i - 1];
      if (!((b_scores >= 1) && (b_scores <= i7))) {
        emlrtDynamicBoundsCheckR2012b(b_scores, 1, i7, &r_emlrtBCI, sp);
      }

      for (i7 = 0; i7 < 2; i7++) {
        b_x[i7] = points->data[(b_scores + points->size[0] * i7) - 1];
      }

      st.site = &td_emlrtRSI;
      cornerOrientations(&st, Ix2, Iy2, Ixy, b_x, v1, v2);
      if ((muSingleScalarAbs(muSingleScalarAbs(muSingleScalarAbs
             (muSingleScalarAtan2(v1[1], v1[0])) - 3.14159274F) - (real32_T)
                             theta) > 0.58904862254808621) && (muSingleScalarAbs
           (muSingleScalarAbs(muSingleScalarAbs(muSingleScalarAtan2(v2[1], v2[0]))
             - 3.14159274F) - (real32_T)theta) > 0.58904862254808621)) {
      } else {
        i7 = seedIdx->size[1];
        if (!((i >= 1) && (i <= i7))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i7, &lb_emlrtBCI, sp);
        }

        st.site = &ud_emlrtRSI;
        Checkerboard_initialize(&st, currentBoard, seedIdx->data[i - 1], points,
          v1, v2);
        st.site = &vd_emlrtRSI;
        if (currentBoard->isValid) {
          nonSingletonDimFound = true;
          while (nonSingletonDimFound) {
            b_st.site = &qg_emlrtRSI;
            currentBoard->PreviousEnergy = currentBoard->Energy;
            b_i = 0;
            do {
              exitg1 = 0;
              if (b_i < 4) {
                if (!currentBoard->IsDirectionBad[b_i]) {
                  currentBoard->LastExpandDirection = 1.0 + (real_T)b_i;
                  c_st.site = &rg_emlrtRSI;
                  c_Checkerboard_expandBoardDirec(&c_st, currentBoard, 1.0 +
                    (real_T)b_i);
                  if (currentBoard->Energy < currentBoard->PreviousEnergy) {
                    exitg1 = 1;
                  } else {
                    c_st.site = &sg_emlrtRSI;
                    currentBoard->Energy = currentBoard->PreviousEnergy;
                    d0 = currentBoard->LastExpandDirection;
                    if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
                      emlrtIntegerCheckR2012b(d0, &b_emlrtDCI, &c_st);
                    }

                    switch ((int32_T)d0) {
                     case 1:
                      i7 = currentBoard->BoardIdx->size[0];
                      if (2 > i7) {
                        i8 = 0;
                        i7 = 0;
                      } else {
                        i8 = currentBoard->BoardIdx->size[0];
                        if (!(2 <= i8)) {
                          emlrtDynamicBoundsCheckR2012b(2, 1, i8, &s_emlrtBCI,
                            &c_st);
                        }

                        i8 = 1;
                        i9 = currentBoard->BoardIdx->size[0];
                        if (!(i7 <= i9)) {
                          emlrtDynamicBoundsCheckR2012b(i7, 1, i9, &t_emlrtBCI,
                            &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardIdx->size[1];
                      i9 = b_currentBoard->size[0] * b_currentBoard->size[1];
                      b_currentBoard->size[0] = i7 - i8;
                      b_currentBoard->size[1] = b_scores;
                      emxEnsureCapacity_real_T(&c_st, b_currentBoard, i9,
                        &yc_emlrtRTEI);
                      for (i9 = 0; i9 < b_scores; i9++) {
                        loop_ub = i7 - i8;
                        for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
                          b_currentBoard->data[b_loop_ub + b_currentBoard->size
                            [0] * i9] = currentBoard->BoardIdx->data[(i8 +
                            b_loop_ub) + currentBoard->BoardIdx->size[0] * i9];
                        }
                      }

                      i7 = currentBoard->BoardIdx->size[0] *
                        currentBoard->BoardIdx->size[1];
                      currentBoard->BoardIdx->size[0] = b_currentBoard->size[0];
                      currentBoard->BoardIdx->size[1] = b_currentBoard->size[1];
                      emxEnsureCapacity_real_T(&c_st, currentBoard->BoardIdx, i7,
                        &dd_emlrtRTEI);
                      loop_ub = b_currentBoard->size[1];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = b_currentBoard->size[0];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          currentBoard->BoardIdx->data[i8 +
                            currentBoard->BoardIdx->size[0] * i7] =
                            b_currentBoard->data[i8 + b_currentBoard->size[0] *
                            i7];
                        }
                      }

                      i7 = currentBoard->BoardCoords->size[0];
                      if (2 > i7) {
                        i8 = 0;
                        i7 = 0;
                      } else {
                        i8 = currentBoard->BoardCoords->size[0];
                        if (!(2 <= i8)) {
                          emlrtDynamicBoundsCheckR2012b(2, 1, i8, &u_emlrtBCI,
                            &c_st);
                        }

                        i8 = 1;
                        i9 = currentBoard->BoardCoords->size[0];
                        if (!(i7 <= i9)) {
                          emlrtDynamicBoundsCheckR2012b(i7, 1, i9, &v_emlrtBCI,
                            &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardCoords->size[1];
                      d_currentBoard = currentBoard->BoardCoords->size[2];
                      i9 = c_currentBoard->size[0] * c_currentBoard->size[1] *
                        c_currentBoard->size[2];
                      c_currentBoard->size[0] = i7 - i8;
                      c_currentBoard->size[1] = b_scores;
                      c_currentBoard->size[2] = d_currentBoard;
                      emxEnsureCapacity_real_T1(&c_st, c_currentBoard, i9,
                        &hd_emlrtRTEI);
                      for (i9 = 0; i9 < d_currentBoard; i9++) {
                        for (b_loop_ub = 0; b_loop_ub < b_scores; b_loop_ub++) {
                          loop_ub = i7 - i8;
                          for (i10 = 0; i10 < loop_ub; i10++) {
                            c_currentBoard->data[(i10 + c_currentBoard->size[0] *
                                                  b_loop_ub) +
                              c_currentBoard->size[0] * c_currentBoard->size[1] *
                              i9] = currentBoard->BoardCoords->data[((i8 + i10)
                              + currentBoard->BoardCoords->size[0] * b_loop_ub)
                              + currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i9];
                          }
                        }
                      }

                      i7 = currentBoard->BoardCoords->size[0] *
                        currentBoard->BoardCoords->size[1] *
                        currentBoard->BoardCoords->size[2];
                      currentBoard->BoardCoords->size[0] = c_currentBoard->size
                        [0];
                      currentBoard->BoardCoords->size[1] = c_currentBoard->size
                        [1];
                      currentBoard->BoardCoords->size[2] = c_currentBoard->size
                        [2];
                      emxEnsureCapacity_real_T1(&c_st, currentBoard->BoardCoords,
                        i7, &ld_emlrtRTEI);
                      loop_ub = c_currentBoard->size[2];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = c_currentBoard->size[1];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          b_loop_ub = c_currentBoard->size[0];
                          for (i9 = 0; i9 < b_loop_ub; i9++) {
                            currentBoard->BoardCoords->data[(i9 +
                              currentBoard->BoardCoords->size[0] * i8) +
                              currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i7] =
                              c_currentBoard->data[(i9 + c_currentBoard->size[0]
                              * i8) + c_currentBoard->size[0] *
                              c_currentBoard->size[1] * i7];
                          }
                        }
                      }
                      break;

                     case 2:
                      d0 = (real_T)currentBoard->BoardIdx->size[0] - 1.0;
                      if (1.0 > d0) {
                        loop_ub = 0;
                      } else {
                        i7 = currentBoard->BoardIdx->size[0];
                        if (!(1 <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(1, 1, i7, &w_emlrtBCI,
                            &c_st);
                        }

                        i7 = currentBoard->BoardIdx->size[0];
                        loop_ub = (int32_T)d0;
                        if (!(loop_ub <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i7,
                            &x_emlrtBCI, &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardIdx->size[1];
                      i7 = b_currentBoard->size[0] * b_currentBoard->size[1];
                      b_currentBoard->size[0] = loop_ub;
                      b_currentBoard->size[1] = b_scores;
                      emxEnsureCapacity_real_T(&c_st, b_currentBoard, i7,
                        &wc_emlrtRTEI);
                      for (i7 = 0; i7 < b_scores; i7++) {
                        for (i8 = 0; i8 < loop_ub; i8++) {
                          b_currentBoard->data[i8 + b_currentBoard->size[0] * i7]
                            = currentBoard->BoardIdx->data[i8 +
                            currentBoard->BoardIdx->size[0] * i7];
                        }
                      }

                      i7 = currentBoard->BoardIdx->size[0] *
                        currentBoard->BoardIdx->size[1];
                      currentBoard->BoardIdx->size[0] = b_currentBoard->size[0];
                      currentBoard->BoardIdx->size[1] = b_currentBoard->size[1];
                      emxEnsureCapacity_real_T(&c_st, currentBoard->BoardIdx, i7,
                        &bd_emlrtRTEI);
                      loop_ub = b_currentBoard->size[1];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = b_currentBoard->size[0];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          currentBoard->BoardIdx->data[i8 +
                            currentBoard->BoardIdx->size[0] * i7] =
                            b_currentBoard->data[i8 + b_currentBoard->size[0] *
                            i7];
                        }
                      }

                      d0 = (real_T)currentBoard->BoardCoords->size[0] - 1.0;
                      if (1.0 > d0) {
                        loop_ub = 0;
                      } else {
                        i7 = currentBoard->BoardCoords->size[0];
                        if (!(1 <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(1, 1, i7, &y_emlrtBCI,
                            &c_st);
                        }

                        i7 = currentBoard->BoardCoords->size[0];
                        loop_ub = (int32_T)d0;
                        if (!(loop_ub <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i7,
                            &ab_emlrtBCI, &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardCoords->size[1];
                      d_currentBoard = currentBoard->BoardCoords->size[2];
                      i7 = c_currentBoard->size[0] * c_currentBoard->size[1] *
                        c_currentBoard->size[2];
                      c_currentBoard->size[0] = loop_ub;
                      c_currentBoard->size[1] = b_scores;
                      c_currentBoard->size[2] = d_currentBoard;
                      emxEnsureCapacity_real_T1(&c_st, c_currentBoard, i7,
                        &fd_emlrtRTEI);
                      for (i7 = 0; i7 < d_currentBoard; i7++) {
                        for (i8 = 0; i8 < b_scores; i8++) {
                          for (i9 = 0; i9 < loop_ub; i9++) {
                            c_currentBoard->data[(i9 + c_currentBoard->size[0] *
                                                  i8) + c_currentBoard->size[0] *
                              c_currentBoard->size[1] * i7] =
                              currentBoard->BoardCoords->data[(i9 +
                              currentBoard->BoardCoords->size[0] * i8) +
                              currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i7];
                          }
                        }
                      }

                      i7 = currentBoard->BoardCoords->size[0] *
                        currentBoard->BoardCoords->size[1] *
                        currentBoard->BoardCoords->size[2];
                      currentBoard->BoardCoords->size[0] = c_currentBoard->size
                        [0];
                      currentBoard->BoardCoords->size[1] = c_currentBoard->size
                        [1];
                      currentBoard->BoardCoords->size[2] = c_currentBoard->size
                        [2];
                      emxEnsureCapacity_real_T1(&c_st, currentBoard->BoardCoords,
                        i7, &jd_emlrtRTEI);
                      loop_ub = c_currentBoard->size[2];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = c_currentBoard->size[1];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          b_loop_ub = c_currentBoard->size[0];
                          for (i9 = 0; i9 < b_loop_ub; i9++) {
                            currentBoard->BoardCoords->data[(i9 +
                              currentBoard->BoardCoords->size[0] * i8) +
                              currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i7] =
                              c_currentBoard->data[(i9 + c_currentBoard->size[0]
                              * i8) + c_currentBoard->size[0] *
                              c_currentBoard->size[1] * i7];
                          }
                        }
                      }
                      break;

                     case 3:
                      i7 = currentBoard->BoardIdx->size[1];
                      if (2 > i7) {
                        i8 = 0;
                        i7 = 0;
                      } else {
                        i8 = currentBoard->BoardIdx->size[1];
                        if (!(2 <= i8)) {
                          emlrtDynamicBoundsCheckR2012b(2, 1, i8, &bb_emlrtBCI,
                            &c_st);
                        }

                        i8 = 1;
                        i9 = currentBoard->BoardIdx->size[1];
                        if (!(i7 <= i9)) {
                          emlrtDynamicBoundsCheckR2012b(i7, 1, i9, &cb_emlrtBCI,
                            &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardIdx->size[0];
                      i9 = b_currentBoard->size[0] * b_currentBoard->size[1];
                      b_currentBoard->size[0] = b_scores;
                      b_currentBoard->size[1] = i7 - i8;
                      emxEnsureCapacity_real_T(&c_st, b_currentBoard, i9,
                        &ad_emlrtRTEI);
                      loop_ub = i7 - i8;
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        for (i9 = 0; i9 < b_scores; i9++) {
                          b_currentBoard->data[i9 + b_currentBoard->size[0] * i7]
                            = currentBoard->BoardIdx->data[i9 +
                            currentBoard->BoardIdx->size[0] * (i8 + i7)];
                        }
                      }

                      i7 = currentBoard->BoardIdx->size[0] *
                        currentBoard->BoardIdx->size[1];
                      currentBoard->BoardIdx->size[0] = b_currentBoard->size[0];
                      currentBoard->BoardIdx->size[1] = b_currentBoard->size[1];
                      emxEnsureCapacity_real_T(&c_st, currentBoard->BoardIdx, i7,
                        &ed_emlrtRTEI);
                      loop_ub = b_currentBoard->size[1];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = b_currentBoard->size[0];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          currentBoard->BoardIdx->data[i8 +
                            currentBoard->BoardIdx->size[0] * i7] =
                            b_currentBoard->data[i8 + b_currentBoard->size[0] *
                            i7];
                        }
                      }

                      i7 = currentBoard->BoardCoords->size[1];
                      if (2 > i7) {
                        i8 = 0;
                        i7 = 0;
                      } else {
                        i8 = currentBoard->BoardCoords->size[1];
                        if (!(2 <= i8)) {
                          emlrtDynamicBoundsCheckR2012b(2, 1, i8, &db_emlrtBCI,
                            &c_st);
                        }

                        i8 = 1;
                        i9 = currentBoard->BoardCoords->size[1];
                        if (!(i7 <= i9)) {
                          emlrtDynamicBoundsCheckR2012b(i7, 1, i9, &eb_emlrtBCI,
                            &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardCoords->size[0];
                      d_currentBoard = currentBoard->BoardCoords->size[2];
                      i9 = c_currentBoard->size[0] * c_currentBoard->size[1] *
                        c_currentBoard->size[2];
                      c_currentBoard->size[0] = b_scores;
                      c_currentBoard->size[1] = i7 - i8;
                      c_currentBoard->size[2] = d_currentBoard;
                      emxEnsureCapacity_real_T1(&c_st, c_currentBoard, i9,
                        &id_emlrtRTEI);
                      for (i9 = 0; i9 < d_currentBoard; i9++) {
                        loop_ub = i7 - i8;
                        for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
                          for (i10 = 0; i10 < b_scores; i10++) {
                            c_currentBoard->data[(i10 + c_currentBoard->size[0] *
                                                  b_loop_ub) +
                              c_currentBoard->size[0] * c_currentBoard->size[1] *
                              i9] = currentBoard->BoardCoords->data[(i10 +
                              currentBoard->BoardCoords->size[0] * (i8 +
                              b_loop_ub)) + currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i9];
                          }
                        }
                      }

                      i7 = currentBoard->BoardCoords->size[0] *
                        currentBoard->BoardCoords->size[1] *
                        currentBoard->BoardCoords->size[2];
                      currentBoard->BoardCoords->size[0] = c_currentBoard->size
                        [0];
                      currentBoard->BoardCoords->size[1] = c_currentBoard->size
                        [1];
                      currentBoard->BoardCoords->size[2] = c_currentBoard->size
                        [2];
                      emxEnsureCapacity_real_T1(&c_st, currentBoard->BoardCoords,
                        i7, &md_emlrtRTEI);
                      loop_ub = c_currentBoard->size[2];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = c_currentBoard->size[1];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          b_loop_ub = c_currentBoard->size[0];
                          for (i9 = 0; i9 < b_loop_ub; i9++) {
                            currentBoard->BoardCoords->data[(i9 +
                              currentBoard->BoardCoords->size[0] * i8) +
                              currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i7] =
                              c_currentBoard->data[(i9 + c_currentBoard->size[0]
                              * i8) + c_currentBoard->size[0] *
                              c_currentBoard->size[1] * i7];
                          }
                        }
                      }
                      break;

                     case 4:
                      d0 = (real_T)currentBoard->BoardIdx->size[1] - 1.0;
                      if (1.0 > d0) {
                        loop_ub = 0;
                      } else {
                        i7 = currentBoard->BoardIdx->size[1];
                        if (!(1 <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(1, 1, i7, &fb_emlrtBCI,
                            &c_st);
                        }

                        i7 = currentBoard->BoardIdx->size[1];
                        loop_ub = (int32_T)d0;
                        if (!(loop_ub <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i7,
                            &gb_emlrtBCI, &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardIdx->size[0];
                      i7 = b_currentBoard->size[0] * b_currentBoard->size[1];
                      b_currentBoard->size[0] = b_scores;
                      b_currentBoard->size[1] = loop_ub;
                      emxEnsureCapacity_real_T(&c_st, b_currentBoard, i7,
                        &xc_emlrtRTEI);
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        for (i8 = 0; i8 < b_scores; i8++) {
                          b_currentBoard->data[i8 + b_currentBoard->size[0] * i7]
                            = currentBoard->BoardIdx->data[i8 +
                            currentBoard->BoardIdx->size[0] * i7];
                        }
                      }

                      i7 = currentBoard->BoardIdx->size[0] *
                        currentBoard->BoardIdx->size[1];
                      currentBoard->BoardIdx->size[0] = b_currentBoard->size[0];
                      currentBoard->BoardIdx->size[1] = b_currentBoard->size[1];
                      emxEnsureCapacity_real_T(&c_st, currentBoard->BoardIdx, i7,
                        &cd_emlrtRTEI);
                      loop_ub = b_currentBoard->size[1];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = b_currentBoard->size[0];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          currentBoard->BoardIdx->data[i8 +
                            currentBoard->BoardIdx->size[0] * i7] =
                            b_currentBoard->data[i8 + b_currentBoard->size[0] *
                            i7];
                        }
                      }

                      d0 = (real_T)currentBoard->BoardCoords->size[1] - 1.0;
                      if (1.0 > d0) {
                        loop_ub = 0;
                      } else {
                        i7 = currentBoard->BoardCoords->size[1];
                        if (!(1 <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(1, 1, i7, &hb_emlrtBCI,
                            &c_st);
                        }

                        i7 = currentBoard->BoardCoords->size[1];
                        loop_ub = (int32_T)d0;
                        if (!(loop_ub <= i7)) {
                          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i7,
                            &ib_emlrtBCI, &c_st);
                        }
                      }

                      b_scores = currentBoard->BoardCoords->size[0];
                      d_currentBoard = currentBoard->BoardCoords->size[2];
                      i7 = c_currentBoard->size[0] * c_currentBoard->size[1] *
                        c_currentBoard->size[2];
                      c_currentBoard->size[0] = b_scores;
                      c_currentBoard->size[1] = loop_ub;
                      c_currentBoard->size[2] = d_currentBoard;
                      emxEnsureCapacity_real_T1(&c_st, c_currentBoard, i7,
                        &gd_emlrtRTEI);
                      for (i7 = 0; i7 < d_currentBoard; i7++) {
                        for (i8 = 0; i8 < loop_ub; i8++) {
                          for (i9 = 0; i9 < b_scores; i9++) {
                            c_currentBoard->data[(i9 + c_currentBoard->size[0] *
                                                  i8) + c_currentBoard->size[0] *
                              c_currentBoard->size[1] * i7] =
                              currentBoard->BoardCoords->data[(i9 +
                              currentBoard->BoardCoords->size[0] * i8) +
                              currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i7];
                          }
                        }
                      }

                      i7 = currentBoard->BoardCoords->size[0] *
                        currentBoard->BoardCoords->size[1] *
                        currentBoard->BoardCoords->size[2];
                      currentBoard->BoardCoords->size[0] = c_currentBoard->size
                        [0];
                      currentBoard->BoardCoords->size[1] = c_currentBoard->size
                        [1];
                      currentBoard->BoardCoords->size[2] = c_currentBoard->size
                        [2];
                      emxEnsureCapacity_real_T1(&c_st, currentBoard->BoardCoords,
                        i7, &kd_emlrtRTEI);
                      loop_ub = c_currentBoard->size[2];
                      for (i7 = 0; i7 < loop_ub; i7++) {
                        b_scores = c_currentBoard->size[1];
                        for (i8 = 0; i8 < b_scores; i8++) {
                          b_loop_ub = c_currentBoard->size[0];
                          for (i9 = 0; i9 < b_loop_ub; i9++) {
                            currentBoard->BoardCoords->data[(i9 +
                              currentBoard->BoardCoords->size[0] * i8) +
                              currentBoard->BoardCoords->size[0] *
                              currentBoard->BoardCoords->size[1] * i7] =
                              c_currentBoard->data[(i9 + c_currentBoard->size[0]
                              * i8) + c_currentBoard->size[0] *
                              c_currentBoard->size[1] * i7];
                          }
                        }
                      }
                      break;
                    }

                    currentBoard->IsDirectionBad[b_i] = true;
                    b_i++;
                  }
                } else {
                  b_i++;
                }
              } else {
                nonSingletonDimFound = false;
                exitg1 = 1;
              }
            } while (exitg1 == 0);
          }
        }

        if (currentBoard->Energy < board->Energy) {
          tmpBoard = board;
          board = currentBoard;
          currentBoard = tmpBoard;
        }
      }

      i++;
    }

    emxFree_real_T(&c_currentBoard);
    emxFree_real_T(&b_currentBoard);
    emxFree_uint32_T(&seedIdx);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return board;
}

static void orient(const emlrtStack *sp, c_vision_internal_calibration_c **board,
                   const emxArray_real32_T *I)
{
  real32_T x;
  emxArray_real_T *b_board;
  emxArray_boolean_T *upperLeftMask;
  emxArray_boolean_T *nextSquareMask;
  int32_T j;
  int32_T i1;
  int32_T k;
  emxArray_real_T *newBoardCoords1;
  int32_T vspread;
  emxArray_real_T *newBoardCoords2;
  emxArray_real_T *r58;
  real_T upperLeftPolyX[4];
  real_T upperLeftPolyY[4];
  emxArray_int32_T *r59;
  emxArray_int32_T *r60;
  emxArray_real32_T *b_I;
  real32_T b_x;
  c_vision_internal_calibration_c *r61;
  emxArray_real_T *r62;
  emxArray_real_T *r63;
  int32_T iv24[3];
  emxArray_boolean_T *c_x;
  int32_T iv25[3];
  boolean_T overflow;
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  x = (*board)->Energy;
  if (!muSingleScalarIsInf(x)) {
    if ((*board)->BoardCoords->size[0] < (*board)->BoardCoords->size[1]) {
      emxInit_real_T1(sp, &b_board, 2, &nl_emlrtRTEI, true);
      st.site = &gi_emlrtRSI;
      b_st.site = &li_emlrtRSI;
      rot90(&b_st, (*board)->BoardIdx, b_board);
      j = (*board)->BoardIdx->size[0] * (*board)->BoardIdx->size[1];
      (*board)->BoardIdx->size[0] = b_board->size[0];
      (*board)->BoardIdx->size[1] = b_board->size[1];
      emxEnsureCapacity_real_T(&st, (*board)->BoardIdx, j, &ml_emlrtRTEI);
      i1 = b_board->size[0] * b_board->size[1];
      for (j = 0; j < i1; j++) {
        (*board)->BoardIdx->data[j] = b_board->data[j];
      }

      j = (*board)->BoardCoords->size[2];
      if (!(1 <= j)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, j, &jl_emlrtBCI, &st);
      }

      i1 = (*board)->BoardCoords->size[0];
      k = (*board)->BoardCoords->size[1];
      j = b_board->size[0] * b_board->size[1];
      b_board->size[0] = i1;
      b_board->size[1] = k;
      emxEnsureCapacity_real_T(&st, b_board, j, &nl_emlrtRTEI);
      for (j = 0; j < k; j++) {
        for (vspread = 0; vspread < i1; vspread++) {
          b_board->data[vspread + b_board->size[0] * j] = (*board)->
            BoardCoords->data[vspread + (*board)->BoardCoords->size[0] * j];
        }
      }

      emxInit_real_T1(&st, &newBoardCoords1, 2, &wl_emlrtRTEI, true);
      b_st.site = &mi_emlrtRSI;
      rot90(&b_st, b_board, newBoardCoords1);
      j = (*board)->BoardCoords->size[2];
      if (!(2 <= j)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, j, &il_emlrtBCI, &st);
      }

      i1 = (*board)->BoardCoords->size[0];
      k = (*board)->BoardCoords->size[1];
      j = b_board->size[0] * b_board->size[1];
      b_board->size[0] = i1;
      b_board->size[1] = k;
      emxEnsureCapacity_real_T(&st, b_board, j, &ol_emlrtRTEI);
      for (j = 0; j < k; j++) {
        for (vspread = 0; vspread < i1; vspread++) {
          b_board->data[vspread + b_board->size[0] * j] = (*board)->
            BoardCoords->data[(vspread + (*board)->BoardCoords->size[0] * j) + (*
            board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1]];
        }
      }

      emxInit_real_T1(&st, &newBoardCoords2, 2, &xl_emlrtRTEI, true);
      emxInit_real_T(&st, &r58, 3, &bm_emlrtRTEI, true);
      b_st.site = &ni_emlrtRSI;
      rot90(&b_st, b_board, newBoardCoords2);
      b_st.site = &oi_emlrtRSI;
      cat(&b_st, newBoardCoords1, newBoardCoords2, r58);
      j = (*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1] *
        (*board)->BoardCoords->size[2];
      (*board)->BoardCoords->size[0] = r58->size[0];
      (*board)->BoardCoords->size[1] = r58->size[1];
      (*board)->BoardCoords->size[2] = 2;
      emxEnsureCapacity_real_T1(&st, (*board)->BoardCoords, j, &pl_emlrtRTEI);
      i1 = r58->size[0] * r58->size[1] * r58->size[2];
      emxFree_real_T(&b_board);
      emxFree_real_T(&newBoardCoords2);
      emxFree_real_T(&newBoardCoords1);
      for (j = 0; j < i1; j++) {
        (*board)->BoardCoords->data[j] = r58->data[j];
      }

      emxFree_real_T(&r58);
    }

    emxInit_boolean_T(sp, &upperLeftMask, 2, &yl_emlrtRTEI, true);
    emxInit_boolean_T(sp, &nextSquareMask, 2, &am_emlrtRTEI, true);
    st.site = &hi_emlrtRSI;
    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &hl_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &gl_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &fl_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &el_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &dl_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &cl_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &bl_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &al_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &yk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &xk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &wk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &vk_emlrtBCI, &st);
    }

    upperLeftPolyX[0] = (*board)->BoardCoords->data[0];
    upperLeftPolyX[1] = (*board)->BoardCoords->data[(*board)->BoardCoords->size
      [0]];
    upperLeftPolyX[2] = (*board)->BoardCoords->data[1 + (*board)->
      BoardCoords->size[0]];
    upperLeftPolyX[3] = (*board)->BoardCoords->data[1];
    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &uk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &tk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &sk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &rk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &qk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &pk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &ok_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &nk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &mk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &lk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &kk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &jk_emlrtBCI, &st);
    }

    upperLeftPolyY[0] = (*board)->BoardCoords->data[(*board)->BoardCoords->size
      [0] * (*board)->BoardCoords->size[1]];
    upperLeftPolyY[1] = (*board)->BoardCoords->data[(*board)->BoardCoords->size
      [0] + (*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1]];
    upperLeftPolyY[2] = (*board)->BoardCoords->data[((*board)->BoardCoords->
      size[0] + (*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1])
      + 1];
    upperLeftPolyY[3] = (*board)->BoardCoords->data[1 + (*board)->
      BoardCoords->size[0] * (*board)->BoardCoords->size[1]];
    b_st.site = &ti_emlrtRSI;
    poly2RectMask(&b_st, upperLeftPolyX, upperLeftPolyY, I->size[0], I->size[1],
                  upperLeftMask);
    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &ik_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &hk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &gk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &fk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(3 <= j)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, j, &ek_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &dk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &ck_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(3 <= j)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, j, &bk_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &ak_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &yj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &xj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &wj_emlrtBCI, &st);
    }

    upperLeftPolyX[0] = (*board)->BoardCoords->data[(*board)->BoardCoords->size
      [0]];
    upperLeftPolyX[1] = (*board)->BoardCoords->data[(*board)->BoardCoords->size
      [0] << 1];
    upperLeftPolyX[2] = (*board)->BoardCoords->data[1 + ((*board)->
      BoardCoords->size[0] << 1)];
    upperLeftPolyX[3] = (*board)->BoardCoords->data[1 + (*board)->
      BoardCoords->size[0]];
    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &vj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &uj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &tj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(1 <= j)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &sj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(3 <= j)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, j, &rj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &qj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &pj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(3 <= j)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, j, &oj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &nj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[0];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &mj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[1];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &lj_emlrtBCI, &st);
    }

    j = (*board)->BoardCoords->size[2];
    if (!(2 <= j)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, j, &kj_emlrtBCI, &st);
    }

    upperLeftPolyY[0] = (*board)->BoardCoords->data[(*board)->BoardCoords->size
      [0] + (*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1]];
    upperLeftPolyY[1] = (*board)->BoardCoords->data[((*board)->BoardCoords->
      size[0] << 1) + (*board)->BoardCoords->size[0] * (*board)->
      BoardCoords->size[1]];
    upperLeftPolyY[2] = (*board)->BoardCoords->data[(((*board)->
      BoardCoords->size[0] << 1) + (*board)->BoardCoords->size[0] * (*board)
      ->BoardCoords->size[1]) + 1];
    upperLeftPolyY[3] = (*board)->BoardCoords->data[((*board)->BoardCoords->
      size[0] + (*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1])
      + 1];
    b_st.site = &ui_emlrtRSI;
    poly2RectMask(&b_st, upperLeftPolyX, upperLeftPolyY, I->size[0], I->size[1],
                  nextSquareMask);
    b_st.site = &vi_emlrtRSI;
    c_indexShapeCheck(&b_st, *(int32_T (*)[2])I->size, *(int32_T (*)[2])
                      upperLeftMask->size);
    b_st.site = &vi_emlrtRSI;
    c_indexShapeCheck(&b_st, *(int32_T (*)[2])I->size, *(int32_T (*)[2])
                      nextSquareMask->size);
    i1 = upperLeftMask->size[0] * upperLeftMask->size[1] - 1;
    k = 0;
    for (vspread = 0; vspread <= i1; vspread++) {
      if (upperLeftMask->data[vspread]) {
        k++;
      }
    }

    emxInit_int32_T(&st, &r59, 1, &vl_emlrtRTEI, true);
    j = r59->size[0];
    r59->size[0] = k;
    emxEnsureCapacity_int32_T(&st, r59, j, &ql_emlrtRTEI);
    k = 0;
    for (vspread = 0; vspread <= i1; vspread++) {
      if (upperLeftMask->data[vspread]) {
        r59->data[k] = vspread + 1;
        k++;
      }
    }

    emxFree_boolean_T(&upperLeftMask);
    i1 = nextSquareMask->size[0] * nextSquareMask->size[1] - 1;
    k = 0;
    for (vspread = 0; vspread <= i1; vspread++) {
      if (nextSquareMask->data[vspread]) {
        k++;
      }
    }

    emxInit_int32_T(&st, &r60, 1, &vl_emlrtRTEI, true);
    j = r60->size[0];
    r60->size[0] = k;
    emxEnsureCapacity_int32_T(&st, r60, j, &ql_emlrtRTEI);
    k = 0;
    for (vspread = 0; vspread <= i1; vspread++) {
      if (nextSquareMask->data[vspread]) {
        r60->data[k] = vspread + 1;
        k++;
      }
    }

    emxFree_boolean_T(&nextSquareMask);
    emxInit_real32_T1(&st, &b_I, 1, &rl_emlrtRTEI, true);
    k = I->size[0] * I->size[1];
    j = b_I->size[0];
    b_I->size[0] = r59->size[0];
    emxEnsureCapacity_real32_T1(&st, b_I, j, &rl_emlrtRTEI);
    i1 = r59->size[0];
    for (j = 0; j < i1; j++) {
      vspread = r59->data[j];
      if (!((vspread >= 1) && (vspread <= k))) {
        emlrtDynamicBoundsCheckR2012b(vspread, 1, k, &ol_emlrtBCI, &st);
      }

      b_I->data[j] = I->data[vspread - 1];
    }

    emxFree_int32_T(&r59);
    b_st.site = &vi_emlrtRSI;
    x = mean(&b_st, b_I);
    k = I->size[0] * I->size[1];
    j = b_I->size[0];
    b_I->size[0] = r60->size[0];
    emxEnsureCapacity_real32_T1(&st, b_I, j, &sl_emlrtRTEI);
    i1 = r60->size[0];
    for (j = 0; j < i1; j++) {
      vspread = r60->data[j];
      if (!((vspread >= 1) && (vspread <= k))) {
        emlrtDynamicBoundsCheckR2012b(vspread, 1, k, &pl_emlrtBCI, &st);
      }

      b_I->data[j] = I->data[vspread - 1];
    }

    emxFree_int32_T(&r60);
    b_st.site = &vi_emlrtRSI;
    b_x = mean(&b_st, b_I);
    emxFree_real32_T(&b_I);
    if (!(x < b_x)) {
      r61 = *board;
      st.site = &ii_emlrtRSI;
      rot90_checkerboard(&st, &r61);
      *board = r61;
    }

    k = (*board)->BoardCoords->size[0];
    if (k == 0) {
      vspread = 0;
    } else {
      vspread = (int32_T)muDoubleScalarRem(k, 2.0);
    }

    k = (*board)->BoardCoords->size[1];
    if (k == 0) {
      k = 0;
    } else {
      k = (int32_T)muDoubleScalarRem(k, 2.0);
    }

    if (!(((vspread == 0) ^ (k == 0)) != 0)) {
      emxInit_real_T(sp, &r62, 3, &vl_emlrtRTEI, true);
      j = (*board)->BoardCoords->size[0];
      if (!(1 <= j)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, j, &nl_emlrtBCI, sp);
      }

      j = (*board)->BoardCoords->size[1];
      if (!(1 <= j)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, j, &ml_emlrtBCI, sp);
      }

      i1 = (*board)->BoardCoords->size[2];
      j = r62->size[0] * r62->size[1] * r62->size[2];
      r62->size[0] = 1;
      r62->size[1] = 1;
      r62->size[2] = i1;
      emxEnsureCapacity_real_T1(sp, r62, j, &tl_emlrtRTEI);
      for (j = 0; j < i1; j++) {
        r62->data[r62->size[0] * r62->size[1] * j] = (*board)->BoardCoords->
          data[(*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1] *
          j];
      }

      emxInit_real_T(sp, &r63, 3, &vl_emlrtRTEI, true);
      i1 = (*board)->BoardCoords->size[2];
      j = (*board)->BoardCoords->size[1];
      k = (*board)->BoardCoords->size[1];
      if (!((k >= 1) && (k <= j))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, j, &kl_emlrtBCI, sp);
      }

      j = (*board)->BoardCoords->size[0];
      vspread = (*board)->BoardCoords->size[0];
      if (!((vspread >= 1) && (vspread <= j))) {
        emlrtDynamicBoundsCheckR2012b(vspread, 1, j, &ll_emlrtBCI, sp);
      }

      j = r63->size[0] * r63->size[1] * r63->size[2];
      r63->size[0] = 1;
      r63->size[1] = 1;
      r63->size[2] = i1;
      emxEnsureCapacity_real_T1(sp, r63, j, &ul_emlrtRTEI);
      for (j = 0; j < i1; j++) {
        r63->data[r63->size[0] * r63->size[1] * j] = (*board)->BoardCoords->
          data[((vspread + (*board)->BoardCoords->size[0] * (k - 1)) + (*board
                )->BoardCoords->size[0] * (*board)->BoardCoords->size[1] * j) -
          1];
      }

      for (j = 0; j < 3; j++) {
        iv24[j] = r62->size[j];
      }

      for (j = 0; j < 3; j++) {
        iv25[j] = r63->size[j];
      }

      emxInit_boolean_T2(sp, &c_x, 3, &tl_emlrtRTEI, true);
      emlrtSizeEqCheckNDR2012b(iv24, iv25, &ic_emlrtECI, sp);
      st.site = &ji_emlrtRSI;
      j = c_x->size[0] * c_x->size[1] * c_x->size[2];
      c_x->size[0] = 1;
      c_x->size[1] = 1;
      c_x->size[2] = r62->size[2];
      emxEnsureCapacity_boolean_T2(&st, c_x, j, &tl_emlrtRTEI);
      i1 = r62->size[0] * r62->size[1] * r62->size[2];
      for (j = 0; j < i1; j++) {
        c_x->data[j] = (r62->data[j] > r63->data[j]);
      }

      emxFree_real_T(&r63);
      emxFree_real_T(&r62);
      b_st.site = &gg_emlrtRSI;
      if ((c_x->size[2] == 1) || (c_x->size[2] != 1)) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (!overflow) {
        emlrtErrorWithMessageIdR2012b(&b_st, &xm_emlrtRTEI,
          "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
      }

      y = false;
      k = 3;
      while ((k > 2) && (c_x->size[2] == 1)) {
        k = 2;
      }

      if (3 > k) {
        k = c_x->size[2];
      } else {
        k = 1;
      }

      vspread = (c_x->size[2] - 1) * k;
      c_st.site = &fj_emlrtRSI;
      i1 = 0;
      c_st.site = &gj_emlrtRSI;
      overflow = ((!(1 > k)) && (k > 2147483646));
      if (overflow) {
        d_st.site = &pb_emlrtRSI;
        e_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (j = 1; j <= k; j++) {
        i1++;
        vspread++;
        c_st.site = &hg_emlrtRSI;
        if ((k == 0) || (i1 > vspread)) {
          overflow = false;
        } else {
          overflow = (vspread > MAX_int32_T - k);
        }

        if (k == 0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &dn_emlrtRTEI,
            "Coder:builtins:VectorStride", 0);
        }

        if (overflow) {
          d_st.site = &pb_emlrtRSI;
          e_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        ix = i1;
        exitg1 = false;
        while ((!exitg1) && (ix <= vspread)) {
          overflow = !c_x->data[ix - 1];
          if (!overflow) {
            y = true;
            exitg1 = true;
          } else {
            ix += k;
          }
        }
      }

      emxFree_boolean_T(&c_x);
      if (y) {
        r61 = *board;
        st.site = &ki_emlrtRSI;
        rot90_checkerboard(&st, &r61);
        *board = r61;
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void poly2RectMask(const emlrtStack *sp, real_T b_X[4], real_T Y[4],
  real_T height, real_T width, emxArray_boolean_T *mask)
{
  int32_T i32;
  int32_T loop_ub;
  int32_T i33;
  int32_T i34;
  int32_T i35;
  int32_T unnamed_idx_0;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &yi_emlrtRSI;
  c_sort(&b_st, b_X);
  st.site = &xi_emlrtRSI;
  b_st.site = &yi_emlrtRSI;
  c_sort(&b_st, Y);
  i32 = mask->size[0] * mask->size[1];
  mask->size[0] = (int32_T)height;
  mask->size[1] = (int32_T)width;
  emxEnsureCapacity_boolean_T(sp, mask, i32, &ck_emlrtRTEI);
  loop_ub = (int32_T)height * (int32_T)width;
  for (i32 = 0; i32 < loop_ub; i32++) {
    mask->data[i32] = false;
  }

  if (Y[1] > Y[2]) {
    i33 = 1;
    i32 = 1;
  } else {
    if (Y[1] != (int32_T)muDoubleScalarFloor(Y[1])) {
      emlrtIntegerCheckR2012b(Y[1], &cc_emlrtDCI, sp);
    }

    i32 = (int32_T)height;
    i33 = (int32_T)Y[1];
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &uh_emlrtBCI, sp);
    }

    if (Y[2] != (int32_T)muDoubleScalarFloor(Y[2])) {
      emlrtIntegerCheckR2012b(Y[2], &dc_emlrtDCI, sp);
    }

    i32 = (int32_T)height;
    i35 = (int32_T)Y[2];
    if (!((i35 >= 1) && (i35 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i35, 1, i32, &vh_emlrtBCI, sp);
    }

    i32 = i35 + 1;
  }

  if (b_X[1] > b_X[2]) {
    i34 = 1;
    i35 = 1;
  } else {
    if (b_X[1] != (int32_T)muDoubleScalarFloor(b_X[1])) {
      emlrtIntegerCheckR2012b(b_X[1], &ec_emlrtDCI, sp);
    }

    i35 = (int32_T)width;
    i34 = (int32_T)b_X[1];
    if (!((i34 >= 1) && (i34 <= i35))) {
      emlrtDynamicBoundsCheckR2012b(i34, 1, i35, &wh_emlrtBCI, sp);
    }

    if (b_X[2] != (int32_T)muDoubleScalarFloor(b_X[2])) {
      emlrtIntegerCheckR2012b(b_X[2], &fc_emlrtDCI, sp);
    }

    i35 = (int32_T)width;
    loop_ub = (int32_T)b_X[2];
    if (!((loop_ub >= 1) && (loop_ub <= i35))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i35, &xh_emlrtBCI, sp);
    }

    i35 = loop_ub + 1;
  }

  unnamed_idx_0 = i32 - i33;
  loop_ub = i35 - i34;
  for (i32 = 0; i32 < loop_ub; i32++) {
    for (i35 = 0; i35 < unnamed_idx_0; i35++) {
      mask->data[((i33 + i35) + mask->size[0] * ((i34 + i32) - 1)) - 1] = true;
    }
  }
}

static void rot90_checkerboard(const emlrtStack *sp,
  c_vision_internal_calibration_c **board)
{
  emxArray_real_T *b_board;
  int32_T i63;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *newBoardCoords1;
  int32_T i64;
  emxArray_real_T *newBoardCoords2;
  emxArray_real_T *r64;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &b_board, 2, &nl_emlrtRTEI, true);
  st.site = &li_emlrtRSI;
  b_rot90(&st, (*board)->BoardIdx, b_board);
  i63 = (*board)->BoardIdx->size[0] * (*board)->BoardIdx->size[1];
  (*board)->BoardIdx->size[0] = b_board->size[0];
  (*board)->BoardIdx->size[1] = b_board->size[1];
  emxEnsureCapacity_real_T(sp, (*board)->BoardIdx, i63, &ml_emlrtRTEI);
  loop_ub = b_board->size[0] * b_board->size[1];
  for (i63 = 0; i63 < loop_ub; i63++) {
    (*board)->BoardIdx->data[i63] = b_board->data[i63];
  }

  i63 = (*board)->BoardCoords->size[2];
  if (!(1 <= i63)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i63, &jl_emlrtBCI, sp);
  }

  loop_ub = (*board)->BoardCoords->size[0];
  b_loop_ub = (*board)->BoardCoords->size[1];
  i63 = b_board->size[0] * b_board->size[1];
  b_board->size[0] = loop_ub;
  b_board->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_board, i63, &nl_emlrtRTEI);
  for (i63 = 0; i63 < b_loop_ub; i63++) {
    for (i64 = 0; i64 < loop_ub; i64++) {
      b_board->data[i64 + b_board->size[0] * i63] = (*board)->BoardCoords->
        data[i64 + (*board)->BoardCoords->size[0] * i63];
    }
  }

  emxInit_real_T1(sp, &newBoardCoords1, 2, &wl_emlrtRTEI, true);
  st.site = &mi_emlrtRSI;
  b_rot90(&st, b_board, newBoardCoords1);
  i63 = (*board)->BoardCoords->size[2];
  if (!(2 <= i63)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i63, &il_emlrtBCI, sp);
  }

  loop_ub = (*board)->BoardCoords->size[0];
  b_loop_ub = (*board)->BoardCoords->size[1];
  i63 = b_board->size[0] * b_board->size[1];
  b_board->size[0] = loop_ub;
  b_board->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_board, i63, &ol_emlrtRTEI);
  for (i63 = 0; i63 < b_loop_ub; i63++) {
    for (i64 = 0; i64 < loop_ub; i64++) {
      b_board->data[i64 + b_board->size[0] * i63] = (*board)->BoardCoords->data
        [(i64 + (*board)->BoardCoords->size[0] * i63) + (*board)->
        BoardCoords->size[0] * (*board)->BoardCoords->size[1]];
    }
  }

  emxInit_real_T1(sp, &newBoardCoords2, 2, &xl_emlrtRTEI, true);
  emxInit_real_T(sp, &r64, 3, &bm_emlrtRTEI, true);
  st.site = &ni_emlrtRSI;
  b_rot90(&st, b_board, newBoardCoords2);
  st.site = &oi_emlrtRSI;
  cat(&st, newBoardCoords1, newBoardCoords2, r64);
  i63 = (*board)->BoardCoords->size[0] * (*board)->BoardCoords->size[1] *
    (*board)->BoardCoords->size[2];
  (*board)->BoardCoords->size[0] = r64->size[0];
  (*board)->BoardCoords->size[1] = r64->size[1];
  (*board)->BoardCoords->size[2] = 2;
  emxEnsureCapacity_real_T1(sp, (*board)->BoardCoords, i63, &pl_emlrtRTEI);
  loop_ub = r64->size[0] * r64->size[1] * r64->size[2];
  emxFree_real_T(&b_board);
  emxFree_real_T(&newBoardCoords2);
  emxFree_real_T(&newBoardCoords1);
  for (i63 = 0; i63 < loop_ub; i63++) {
    (*board)->BoardCoords->data[i63] = r64->data[i63];
  }

  emxFree_real_T(&r64);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void toPoints(const emlrtStack *sp, const c_vision_internal_calibration_c
                     *this, emxArray_real_T *points, real_T boardSize[2])
{
  emxArray_boolean_T *b_this;
  int32_T i36;
  int32_T loop_ub;
  real_T numPoints;
  emxArray_real_T *x;
  int32_T b_loop_ub;
  emxArray_int32_T *r50;
  int32_T i37;
  int32_T iv15[1];
  int32_T b_x[1];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T1(sp, &b_this, 1, &dk_emlrtRTEI, true);
  i36 = b_this->size[0];
  b_this->size[0] = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  emxEnsureCapacity_boolean_T1(sp, b_this, i36, &dk_emlrtRTEI);
  loop_ub = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  for (i36 = 0; i36 < loop_ub; i36++) {
    b_this->data[i36] = (this->BoardIdx->data[i36] == 0.0);
  }

  st.site = &hj_emlrtRSI;
  if (any(&st, b_this)) {
    i36 = points->size[0] * points->size[1];
    points->size[0] = 0;
    points->size[1] = 0;
    emxEnsureCapacity_real_T(sp, points, i36, &ek_emlrtRTEI);
    for (i36 = 0; i36 < 2; i36++) {
      boardSize[i36] = 0.0;
    }
  } else {
    numPoints = (real_T)this->BoardCoords->size[0] * (real_T)this->
      BoardCoords->size[1];
    i36 = points->size[0] * points->size[1];
    if (numPoints != (int32_T)numPoints) {
      emlrtIntegerCheckR2012b(numPoints, &gc_emlrtDCI, sp);
    }

    points->size[0] = (int32_T)numPoints;
    points->size[1] = 2;
    emxEnsureCapacity_real_T(sp, points, i36, &fk_emlrtRTEI);
    if (numPoints != (int32_T)numPoints) {
      emlrtIntegerCheckR2012b(numPoints, &hc_emlrtDCI, sp);
    }

    loop_ub = (int32_T)numPoints << 1;
    for (i36 = 0; i36 < loop_ub; i36++) {
      points->data[i36] = 0.0;
    }

    emxInit_real_T1(sp, &x, 2, &gk_emlrtRTEI, true);
    i36 = this->BoardCoords->size[2];
    if (!(1 <= i36)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i36, &yh_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[0];
    b_loop_ub = this->BoardCoords->size[1];
    i36 = x->size[0] * x->size[1];
    x->size[0] = b_loop_ub;
    x->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, x, i36, &gk_emlrtRTEI);
    for (i36 = 0; i36 < loop_ub; i36++) {
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        x->data[i37 + x->size[0] * i36] = this->BoardCoords->data[i36 +
          this->BoardCoords->size[0] * i37];
      }
    }

    emxInit_int32_T(sp, &r50, 1, &kk_emlrtRTEI, true);
    i36 = r50->size[0];
    r50->size[0] = (int32_T)numPoints;
    emxEnsureCapacity_int32_T(sp, r50, i36, &hk_emlrtRTEI);
    loop_ub = (int32_T)numPoints;
    for (i36 = 0; i36 < loop_ub; i36++) {
      r50->data[i36] = i36;
    }

    iv15[0] = r50->size[0];
    b_x[0] = x->size[0] * x->size[1];
    emlrtSubAssignSizeCheckR2012b(&iv15[0], 1, &b_x[0], 1, &wb_emlrtECI, sp);
    loop_ub = x->size[0] * x->size[1];
    for (i36 = 0; i36 < loop_ub; i36++) {
      points->data[r50->data[i36]] = x->data[i36];
    }

    i36 = this->BoardCoords->size[2];
    if (!(2 <= i36)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i36, &ai_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[0];
    b_loop_ub = this->BoardCoords->size[1];
    i36 = x->size[0] * x->size[1];
    x->size[0] = b_loop_ub;
    x->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, x, i36, &ik_emlrtRTEI);
    for (i36 = 0; i36 < loop_ub; i36++) {
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        x->data[i37 + x->size[0] * i36] = this->BoardCoords->data[(i36 +
          this->BoardCoords->size[0] * i37) + this->BoardCoords->size[0] *
          this->BoardCoords->size[1]];
      }
    }

    loop_ub = points->size[0];
    i36 = r50->size[0];
    r50->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r50, i36, &jk_emlrtRTEI);
    for (i36 = 0; i36 < loop_ub; i36++) {
      r50->data[i36] = i36;
    }

    iv15[0] = r50->size[0];
    b_x[0] = x->size[0] * x->size[1];
    emlrtSubAssignSizeCheckR2012b(&iv15[0], 1, &b_x[0], 1, &xb_emlrtECI, sp);
    loop_ub = x->size[0] * x->size[1];
    for (i36 = 0; i36 < loop_ub; i36++) {
      points->data[r50->data[i36] + points->size[0]] = x->data[i36];
    }

    emxFree_int32_T(&r50);
    emxFree_real_T(&x);
    boardSize[0] = (real_T)this->BoardCoords->size[1] + 1.0;
    boardSize[1] = (real_T)this->BoardCoords->size[0] + 1.0;
  }

  emxFree_boolean_T(&b_this);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_detectCheckerboard(const emlrtStack *sp, const emxArray_real32_T *I,
  emxArray_real_T *points, real_T boardSize[2])
{
  c_vision_internal_calibration_c lobj_5;
  c_vision_internal_calibration_c lobj_4;
  c_vision_internal_calibration_c lobj_3;
  c_vision_internal_calibration_c lobj_2;
  c_vision_internal_calibration_c lobj_1;
  c_vision_internal_calibration_c lobj_0;
  emxArray_real32_T *Ig;
  int32_T i43;
  int32_T loop_ub;
  emxArray_real32_T *Iy;
  emxArray_real32_T *I_45;
  emxArray_real32_T *r51;
  int32_T b_I_45[2];
  int32_T b_Iy[2];
  int32_T c_I_45;
  int32_T d_I_45;
  emxArray_real32_T *c45;
  emxArray_real32_T *Ixy;
  emxArray_real32_T *I_45_x;
  emxArray_real32_T *I_45_y;
  int32_T b_I_45_y[2];
  emxArray_real32_T *cxy;
  emxArray_real_T *r52;
  emxArray_int32_T *r53;
  int32_T i44;
  emxArray_int32_T *r54;
  emxArray_real32_T *points0;
  emxArray_real32_T *varargin_1;
  emxArray_real32_T *varargin_2;
  uint32_T b_varargin_1[2];
  uint32_T b_varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  emxArray_int32_T *r55;
  emxArray_real32_T *b_cxy;
  c_vision_internal_calibration_c *board0;
  c_vision_internal_calibration_c *board45;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_vision_internal(sp, &lobj_5, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_4, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_3, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_2, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_1, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_0, &jb_emlrtRTEI, true);
  emxInit_real32_T(sp, &Ig, 2, &b_emlrtRTEI, true);
  st.site = &j_emlrtRSI;
  i43 = Ig->size[0] * Ig->size[1];
  Ig->size[0] = I->size[0];
  Ig->size[1] = I->size[1];
  emxEnsureCapacity_real32_T(&st, Ig, i43, &b_emlrtRTEI);
  loop_ub = I->size[0] * I->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    Ig->data[i43] = I->data[i43];
  }

  emxInit_real32_T(&st, &Iy, 2, &f_emlrtRTEI, true);
  b_st.site = &x_emlrtRSI;
  d_imfilter(&b_st, Ig);
  i43 = Iy->size[0] * Iy->size[1];
  Iy->size[0] = Ig->size[0];
  Iy->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, Iy, i43, &c_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    Iy->data[i43] = Ig->data[i43];
  }

  emxInit_real32_T(&st, &I_45, 2, &g_emlrtRTEI, true);
  b_st.site = &y_emlrtRSI;
  imfilter(&b_st, Iy);
  b_st.site = &ab_emlrtRSI;
  b_imfilter(&b_st, Ig);
  i43 = I_45->size[0] * I_45->size[1];
  I_45->size[0] = Ig->size[0];
  I_45->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i43, &e_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45->data[i43] = Ig->data[i43] * 0.707106769F;
  }

  emxInit_real32_T(&st, &r51, 2, &jb_emlrtRTEI, true);
  i43 = r51->size[0] * r51->size[1];
  r51->size[0] = Iy->size[0];
  r51->size[1] = Iy->size[1];
  emxEnsureCapacity_real32_T(&st, r51, i43, &f_emlrtRTEI);
  loop_ub = Iy->size[0] * Iy->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    r51->data[i43] = Iy->data[i43] * 0.707106769F;
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = I_45->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_Iy[i43] = r51->size[i43];
  }

  if ((b_I_45[0] != b_Iy[0]) || (b_I_45[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_Iy[0], &emlrtECI, &st);
  }

  i43 = I_45->size[0] * I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i43, &g_emlrtRTEI);
  c_I_45 = I_45->size[0];
  d_I_45 = I_45->size[1];
  loop_ub = c_I_45 * d_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45->data[i43] += r51->data[i43];
  }

  i43 = r51->size[0] * r51->size[1];
  r51->size[0] = Ig->size[0];
  r51->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, r51, i43, &h_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    r51->data[i43] = Ig->data[i43] * 0.707106769F;
  }

  emxInit_real32_T(&st, &c45, 2, &jb_emlrtRTEI, true);
  i43 = c45->size[0] * c45->size[1];
  c45->size[0] = Iy->size[0];
  c45->size[1] = Iy->size[1];
  emxEnsureCapacity_real32_T(&st, c45, i43, &i_emlrtRTEI);
  loop_ub = Iy->size[0] * Iy->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    c45->data[i43] = Iy->data[i43] * -0.707106769F;
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_Iy[i43] = r51->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = c45->size[i43];
  }

  emxInit_real32_T(&st, &Ixy, 2, &jb_emlrtRTEI, true);
  if ((b_Iy[0] != b_I_45[0]) || (b_Iy[1] != b_I_45[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Iy[0], &b_I_45[0], &b_emlrtECI, &st);
  }

  i43 = Ixy->size[0] * Ixy->size[1];
  Ixy->size[0] = Ig->size[0];
  Ixy->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, Ixy, i43, &j_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    Ixy->data[i43] = Ig->data[i43];
  }

  emxInit_real32_T(&st, &I_45_x, 2, &k_emlrtRTEI, true);
  b_st.site = &bb_emlrtRSI;
  imfilter(&b_st, Ixy);
  i43 = I_45_x->size[0] * I_45_x->size[1];
  I_45_x->size[0] = I_45->size[0];
  I_45_x->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_x, i43, &k_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45_x->data[i43] = I_45->data[i43];
  }

  emxInit_real32_T(&st, &I_45_y, 2, &l_emlrtRTEI, true);
  b_st.site = &cb_emlrtRSI;
  b_imfilter(&b_st, I_45_x);
  i43 = I_45_y->size[0] * I_45_y->size[1];
  I_45_y->size[0] = I_45->size[0];
  I_45_y->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_y, i43, &l_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45_y->data[i43] = I_45->data[i43];
  }

  b_st.site = &db_emlrtRSI;
  imfilter(&b_st, I_45_y);
  i43 = I_45_x->size[0] * I_45_x->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_x, i43, &m_emlrtRTEI);
  d_I_45 = I_45_x->size[0];
  c_I_45 = I_45_x->size[1];
  loop_ub = d_I_45 * c_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45_x->data[i43] *= 0.707106769F;
  }

  i43 = I_45_y->size[0] * I_45_y->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_y, i43, &n_emlrtRTEI);
  d_I_45 = I_45_y->size[0];
  c_I_45 = I_45_y->size[1];
  loop_ub = d_I_45 * c_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45_y->data[i43] *= -0.707106769F;
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = I_45_x->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45_y[i43] = I_45_y->size[i43];
  }

  if ((b_I_45[0] != b_I_45_y[0]) || (b_I_45[1] != b_I_45_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_I_45_y[0], &c_emlrtECI, &st);
  }

  i43 = I_45_x->size[0] * I_45_x->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_x, i43, &o_emlrtRTEI);
  d_I_45 = I_45_x->size[0];
  c_I_45 = I_45_x->size[1];
  loop_ub = d_I_45 * c_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45_x->data[i43] += I_45_y->data[i43];
  }

  b_st.site = &eb_emlrtRSI;
  b_abs(&b_st, I_45, I_45_y);
  i43 = I_45->size[0] * I_45->size[1];
  I_45->size[0] = r51->size[0];
  I_45->size[1] = r51->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i43, &h_emlrtRTEI);
  loop_ub = r51->size[0] * r51->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45->data[i43] = r51->data[i43] + c45->data[i43];
  }

  b_st.site = &eb_emlrtRSI;
  b_abs(&b_st, I_45, r51);
  for (i43 = 0; i43 < 2; i43++) {
    b_I_45_y[i43] = I_45_y->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_Iy[i43] = r51->size[i43];
  }

  if ((b_I_45_y[0] != b_Iy[0]) || (b_I_45_y[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45_y[0], &b_Iy[0], &d_emlrtECI, &st);
  }

  b_st.site = &eb_emlrtRSI;
  b_abs(&b_st, Ixy, I_45);
  i43 = I_45->size[0] * I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i43, &p_emlrtRTEI);
  c_I_45 = I_45->size[0];
  d_I_45 = I_45->size[1];
  loop_ub = c_I_45 * d_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45->data[i43] *= 16.0F;
  }

  i43 = I_45_y->size[0] * I_45_y->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_y, i43, &q_emlrtRTEI);
  d_I_45 = I_45_y->size[0];
  c_I_45 = I_45_y->size[1];
  loop_ub = d_I_45 * c_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45_y->data[i43] = 6.0F * (I_45_y->data[i43] + r51->data[i43]);
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = I_45->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45_y[i43] = I_45_y->size[i43];
  }

  emxInit_real32_T(&st, &cxy, 2, &jb_emlrtRTEI, true);
  if ((b_I_45[0] != b_I_45_y[0]) || (b_I_45[1] != b_I_45_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_I_45_y[0], &e_emlrtECI, &st);
  }

  i43 = cxy->size[0] * cxy->size[1];
  cxy->size[0] = I_45->size[0];
  cxy->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, cxy, i43, &r_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    cxy->data[i43] = I_45->data[i43] - I_45_y->data[i43];
  }

  emxInit_real_T1(&st, &r52, 2, &jb_emlrtRTEI, true);
  i43 = r52->size[0] * r52->size[1];
  r52->size[0] = I_45->size[0];
  r52->size[1] = I_45->size[1];
  emxEnsureCapacity_real_T(&st, r52, i43, &s_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    r52->data[i43] = I_45->data[i43] - I_45_y->data[i43];
  }

  loop_ub = r52->size[0] * r52->size[1] - 1;
  d_I_45 = 0;
  for (c_I_45 = 0; c_I_45 <= loop_ub; c_I_45++) {
    if (I_45->data[c_I_45] - I_45_y->data[c_I_45] < 0.0F) {
      d_I_45++;
    }
  }

  emxInit_int32_T(&st, &r53, 1, &jb_emlrtRTEI, true);
  i43 = r53->size[0];
  r53->size[0] = d_I_45;
  emxEnsureCapacity_int32_T(&st, r53, i43, &t_emlrtRTEI);
  d_I_45 = 0;
  for (c_I_45 = 0; c_I_45 <= loop_ub; c_I_45++) {
    if (I_45->data[c_I_45] - I_45_y->data[c_I_45] < 0.0F) {
      r53->data[d_I_45] = c_I_45 + 1;
      d_I_45++;
    }
  }

  c_I_45 = I_45->size[0] * I_45->size[1];
  loop_ub = r53->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    i44 = r53->data[i43];
    if (!((i44 >= 1) && (i44 <= c_I_45))) {
      emlrtDynamicBoundsCheckR2012b(i44, 1, c_I_45, &emlrtBCI, &st);
    }

    cxy->data[i44 - 1] = 0.0F;
  }

  emxFree_int32_T(&r53);
  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, Ig, r51);
  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, Iy, c45);
  for (i43 = 0; i43 < 2; i43++) {
    b_Iy[i43] = r51->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = c45->size[i43];
  }

  if ((b_Iy[0] != b_I_45[0]) || (b_Iy[1] != b_I_45[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Iy[0], &b_I_45[0], &f_emlrtECI, &st);
  }

  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, I_45_x, I_45);
  i43 = I_45->size[0] * I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i43, &u_emlrtRTEI);
  c_I_45 = I_45->size[0];
  d_I_45 = I_45->size[1];
  loop_ub = c_I_45 * d_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    I_45->data[i43] *= 16.0F;
  }

  i43 = r51->size[0] * r51->size[1];
  emxEnsureCapacity_real32_T(&st, r51, i43, &v_emlrtRTEI);
  i43 = r51->size[0];
  i44 = r51->size[1];
  loop_ub = i43 * i44;
  for (i43 = 0; i43 < loop_ub; i43++) {
    r51->data[i43] = 6.0F * (r51->data[i43] + c45->data[i43]);
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = I_45->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_Iy[i43] = r51->size[i43];
  }

  if ((b_I_45[0] != b_Iy[0]) || (b_I_45[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_Iy[0], &g_emlrtECI, &st);
  }

  i43 = c45->size[0] * c45->size[1];
  c45->size[0] = I_45->size[0];
  c45->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, c45, i43, &w_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    c45->data[i43] = I_45->data[i43] - r51->data[i43];
  }

  i43 = r52->size[0] * r52->size[1];
  r52->size[0] = I_45->size[0];
  r52->size[1] = I_45->size[1];
  emxEnsureCapacity_real_T(&st, r52, i43, &x_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i43 = 0; i43 < loop_ub; i43++) {
    r52->data[i43] = I_45->data[i43] - r51->data[i43];
  }

  loop_ub = r52->size[0] * r52->size[1] - 1;
  d_I_45 = 0;
  emxFree_real_T(&r52);
  for (c_I_45 = 0; c_I_45 <= loop_ub; c_I_45++) {
    if (I_45->data[c_I_45] - r51->data[c_I_45] < 0.0F) {
      d_I_45++;
    }
  }

  emxInit_int32_T(&st, &r54, 1, &jb_emlrtRTEI, true);
  i43 = r54->size[0];
  r54->size[0] = d_I_45;
  emxEnsureCapacity_int32_T(&st, r54, i43, &t_emlrtRTEI);
  d_I_45 = 0;
  for (c_I_45 = 0; c_I_45 <= loop_ub; c_I_45++) {
    if (I_45->data[c_I_45] - r51->data[c_I_45] < 0.0F) {
      r54->data[d_I_45] = c_I_45 + 1;
      d_I_45++;
    }
  }

  emxFree_real32_T(&r51);
  c_I_45 = I_45->size[0] * I_45->size[1];
  loop_ub = r54->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    i44 = r54->data[i43];
    if (!((i44 >= 1) && (i44 <= c_I_45))) {
      emlrtDynamicBoundsCheckR2012b(i44, 1, c_I_45, &b_emlrtBCI, &st);
    }

    c45->data[i44 - 1] = 0.0F;
  }

  emxFree_int32_T(&r54);
  st.site = &k_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  power(&b_st, Ig, I_45_y);
  b_st.site = &xb_emlrtRSI;
  power(&b_st, Iy, I_45);
  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = Ig->size[i43];
  }

  for (i43 = 0; i43 < 2; i43++) {
    b_Iy[i43] = Iy->size[i43];
  }

  if ((b_I_45[0] != b_Iy[0]) || (b_I_45[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_Iy[0], &h_emlrtECI, &st);
  }

  b_st.site = &yb_emlrtRSI;
  c_imfilter(&b_st, I_45_y);
  b_st.site = &ac_emlrtRSI;
  c_imfilter(&b_st, I_45);
  i43 = Ig->size[0] * Ig->size[1];
  emxEnsureCapacity_real32_T(&st, Ig, i43, &y_emlrtRTEI);
  d_I_45 = Ig->size[0];
  c_I_45 = Ig->size[1];
  loop_ub = d_I_45 * c_I_45;
  for (i43 = 0; i43 < loop_ub; i43++) {
    Ig->data[i43] *= Iy->data[i43];
  }

  emxFree_real32_T(&Iy);
  emxInit_real32_T(&st, &points0, 2, &kb_emlrtRTEI, true);
  emxInit_real32_T1(&st, &varargin_1, 1, &ab_emlrtRTEI, true);
  b_st.site = &bc_emlrtRSI;
  c_imfilter(&b_st, Ig);
  st.site = &l_emlrtRSI;
  find_peaks(&st, cxy, points0);
  st.site = &m_emlrtRSI;
  loop_ub = points0->size[0];
  i43 = varargin_1->size[0];
  varargin_1->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_1, i43, &ab_emlrtRTEI);
  for (i43 = 0; i43 < loop_ub; i43++) {
    varargin_1->data[i43] = points0->data[i43 + points0->size[0]];
  }

  emxInit_real32_T1(&st, &varargin_2, 1, &bb_emlrtRTEI, true);
  loop_ub = points0->size[0];
  i43 = varargin_2->size[0];
  varargin_2->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_2, i43, &bb_emlrtRTEI);
  for (i43 = 0; i43 < loop_ub; i43++) {
    varargin_2->data[i43] = points0->data[i43];
  }

  b_st.site = &jd_emlrtRSI;
  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = cxy->size[i43];
  }

  if (!allinrange(varargin_1, b_I_45[0])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i43 = points0->size[0];
  b_varargin_1[0] = (uint32_T)i43;
  b_varargin_1[1] = 1U;
  i43 = points0->size[0];
  b_varargin_2[0] = (uint32_T)i43;
  b_varargin_2[1] = 1U;
  p = false;
  b_p = true;
  d_I_45 = 0;
  exitg1 = false;
  while ((!exitg1) && (d_I_45 < 2)) {
    if (!((int32_T)b_varargin_1[d_I_45] == (int32_T)b_varargin_2[d_I_45])) {
      b_p = false;
      exitg1 = true;
    } else {
      d_I_45++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(&b_st, &im_emlrtRTEI,
      "MATLAB:sub2ind:SubscriptVectorSize", 0);
  }

  if (!allinrange(varargin_2, b_I_45[1])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  emxInit_int32_T(&b_st, &r55, 1, &jb_emlrtRTEI, true);
  i43 = r55->size[0];
  r55->size[0] = varargin_1->size[0];
  emxEnsureCapacity_int32_T(&st, r55, i43, &cb_emlrtRTEI);
  loop_ub = varargin_1->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    r55->data[i43] = (int32_T)varargin_1->data[i43] + b_I_45[0] * ((int32_T)
      varargin_2->data[i43] - 1);
  }

  st.site = &m_emlrtRSI;
  b_indexShapeCheck(&st, *(int32_T (*)[2])cxy->size, r55->size[0]);
  d_I_45 = cxy->size[0] * cxy->size[1];
  loop_ub = r55->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    i44 = r55->data[i43];
    if (!((i44 >= 1) && (i44 <= d_I_45))) {
      emlrtDynamicBoundsCheckR2012b(i44, 1, d_I_45, &c_emlrtBCI, sp);
    }
  }

  emxInit_real32_T1(sp, &b_cxy, 1, &db_emlrtRTEI, true);
  i43 = b_cxy->size[0];
  b_cxy->size[0] = r55->size[0];
  emxEnsureCapacity_real32_T1(sp, b_cxy, i43, &db_emlrtRTEI);
  loop_ub = r55->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    b_cxy->data[i43] = cxy->data[r55->data[i43] - 1];
  }

  emxFree_real32_T(&cxy);
  st.site = &v_emlrtRSI;
  board0 = growCheckerboard(&st, points0, b_cxy, I_45_y, I_45, Ig, 0.0, &lobj_0,
    &lobj_1, &lobj_2);
  st.site = &n_emlrtRSI;
  find_peaks(&st, c45, points0);
  st.site = &o_emlrtRSI;
  loop_ub = points0->size[0];
  i43 = varargin_1->size[0];
  varargin_1->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_1, i43, &eb_emlrtRTEI);
  emxFree_real32_T(&b_cxy);
  for (i43 = 0; i43 < loop_ub; i43++) {
    varargin_1->data[i43] = points0->data[i43 + points0->size[0]];
  }

  loop_ub = points0->size[0];
  i43 = varargin_2->size[0];
  varargin_2->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_2, i43, &fb_emlrtRTEI);
  for (i43 = 0; i43 < loop_ub; i43++) {
    varargin_2->data[i43] = points0->data[i43];
  }

  b_st.site = &jd_emlrtRSI;
  for (i43 = 0; i43 < 2; i43++) {
    b_I_45[i43] = c45->size[i43];
  }

  if (!allinrange(varargin_1, b_I_45[0])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i43 = points0->size[0];
  b_varargin_1[0] = (uint32_T)i43;
  b_varargin_1[1] = 1U;
  i43 = points0->size[0];
  b_varargin_2[0] = (uint32_T)i43;
  b_varargin_2[1] = 1U;
  p = false;
  b_p = true;
  d_I_45 = 0;
  exitg1 = false;
  while ((!exitg1) && (d_I_45 < 2)) {
    if (!((int32_T)b_varargin_1[d_I_45] == (int32_T)b_varargin_2[d_I_45])) {
      b_p = false;
      exitg1 = true;
    } else {
      d_I_45++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(&b_st, &im_emlrtRTEI,
      "MATLAB:sub2ind:SubscriptVectorSize", 0);
  }

  if (!allinrange(varargin_2, b_I_45[1])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i43 = r55->size[0];
  r55->size[0] = varargin_1->size[0];
  emxEnsureCapacity_int32_T(&st, r55, i43, &gb_emlrtRTEI);
  loop_ub = varargin_1->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    r55->data[i43] = (int32_T)varargin_1->data[i43] + b_I_45[0] * ((int32_T)
      varargin_2->data[i43] - 1);
  }

  emxFree_real32_T(&varargin_2);
  st.site = &o_emlrtRSI;
  b_indexShapeCheck(&st, *(int32_T (*)[2])c45->size, r55->size[0]);
  d_I_45 = c45->size[0] * c45->size[1];
  loop_ub = r55->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    i44 = r55->data[i43];
    if (!((i44 >= 1) && (i44 <= d_I_45))) {
      emlrtDynamicBoundsCheckR2012b(i44, 1, d_I_45, &d_emlrtBCI, sp);
    }
  }

  i43 = varargin_1->size[0];
  varargin_1->size[0] = r55->size[0];
  emxEnsureCapacity_real32_T1(sp, varargin_1, i43, &hb_emlrtRTEI);
  loop_ub = r55->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    varargin_1->data[i43] = c45->data[r55->data[i43] - 1];
  }

  emxFree_int32_T(&r55);
  emxFree_real32_T(&c45);
  st.site = &w_emlrtRSI;
  board45 = growCheckerboard(&st, points0, varargin_1, I_45_y, I_45, Ig,
    0.78539816339744828, &lobj_3, &lobj_4, &lobj_5);
  i43 = points->size[0] * points->size[1];
  points->size[0] = 0;
  points->size[1] = 0;
  emxEnsureCapacity_real_T(sp, points, i43, &ib_emlrtRTEI);
  emxFree_real32_T(&varargin_1);
  emxFree_real32_T(&I_45_y);
  emxFree_real32_T(&I_45);
  emxFree_real32_T(&Ig);
  emxFree_real32_T(&points0);
  for (i43 = 0; i43 < 2; i43++) {
    boardSize[i43] = 0.0;
  }

  if (board0->isValid && (board0->Energy < board45->Energy)) {
    board45 = board0;
    st.site = &p_emlrtRSI;
    orient(&st, &board45, I);
    st.site = &q_emlrtRSI;
    toPoints(&st, board45, points, boardSize);
    st.site = &r_emlrtRSI;
    subPixelLocation(&st, Ixy, points);
  } else {
    if (board45->isValid) {
      st.site = &s_emlrtRSI;
      orient(&st, &board45, I);
      st.site = &t_emlrtRSI;
      toPoints(&st, board45, points, boardSize);
      st.site = &u_emlrtRSI;
      subPixelLocation(&st, I_45_x, points);
    }
  }

  emxFree_real32_T(&I_45_x);
  emxFree_real32_T(&Ixy);
  c_emxFreeStruct_vision_internal(&lobj_0);
  c_emxFreeStruct_vision_internal(&lobj_1);
  c_emxFreeStruct_vision_internal(&lobj_2);
  c_emxFreeStruct_vision_internal(&lobj_3);
  c_emxFreeStruct_vision_internal(&lobj_4);
  c_emxFreeStruct_vision_internal(&lobj_5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void detectCheckerboard(const emlrtStack *sp, const emxArray_real32_T *I,
  emxArray_real_T *points, real_T boardSize[2])
{
  c_vision_internal_calibration_c lobj_5;
  c_vision_internal_calibration_c lobj_4;
  c_vision_internal_calibration_c lobj_3;
  c_vision_internal_calibration_c lobj_2;
  c_vision_internal_calibration_c lobj_1;
  c_vision_internal_calibration_c lobj_0;
  real_T finalSize[2];
  real_T pad[2];
  emxArray_real32_T *Ig;
  emxArray_real32_T *a;
  int32_T i1;
  boolean_T tooBig;
  int32_T i;
  int32_T loop_ub;
  emxArray_real32_T *Iy;
  real_T padSize[2];
  emxArray_real32_T *I_45;
  boolean_T conn[225];
  real_T connDims[2];
  static const real_T kernel[225] = { 1.9045144150126372E-7, 9.67192226178406E-7,
    3.8253194603479479E-6, 1.1782813454257782E-5, 2.8265500088842114E-5,
    5.2806906275779393E-5, 7.6833595263807038E-5, 8.7063869616745574E-5,
    7.6833595263807038E-5, 5.2806906275779393E-5, 2.8265500088842114E-5,
    1.1782813454257782E-5, 3.8253194603479479E-6, 9.67192226178406E-7,
    1.9045144150126372E-7, 9.67192226178406E-7, 4.9118074140370011E-6,
    1.9426575170726453E-5, 5.98380641576443E-5, 0.00014354405374659103,
    0.00026817559812550236, 0.00039019319288270693, 0.00044214681291224515,
    0.00039019319288270693, 0.00026817559812550236, 0.00014354405374659103,
    5.98380641576443E-5, 1.9426575170726453E-5, 4.9118074140370011E-6,
    9.67192226178406E-7, 3.8253194603479479E-6, 1.9426575170726453E-5,
    7.6833595263807038E-5, 0.00023666413469452708, 0.00056772774568680253,
    0.0010606550658014775, 0.0015432440146124532, 0.0017487245678627402,
    0.0015432440146124532, 0.0010606550658014775, 0.00056772774568680253,
    0.00023666413469452708, 7.6833595263807038E-5, 1.9426575170726453E-5,
    3.8253194603479479E-6, 1.1782813454257782E-5, 5.98380641576443E-5,
    0.00023666413469452708, 0.00072897685522068864, 0.0017487245678627402,
    0.0032670476045719744, 0.0047535262158011835, 0.0053864508780477162,
    0.0047535262158011835, 0.0032670476045719744, 0.0017487245678627402,
    0.00072897685522068864, 0.00023666413469452708, 5.98380641576443E-5,
    1.1782813454257782E-5, 2.8265500088842114E-5, 0.00014354405374659103,
    0.00056772774568680253, 0.0017487245678627402, 0.0041949721617992172,
    0.0078372397828220981, 0.01140311659831037, 0.012921423933516047,
    0.01140311659831037, 0.0078372397828220981, 0.0041949721617992172,
    0.0017487245678627402, 0.00056772774568680253, 0.00014354405374659103,
    2.8265500088842114E-5, 5.2806906275779393E-5, 0.00026817559812550236,
    0.0010606550658014775, 0.0032670476045719744, 0.0078372397828220981,
    0.014641891541684373, 0.021303826486921626, 0.024140398028059319,
    0.021303826486921626, 0.014641891541684373, 0.0078372397828220981,
    0.0032670476045719744, 0.0010606550658014775, 0.00026817559812550236,
    5.2806906275779393E-5, 7.6833595263807038E-5, 0.00039019319288270693,
    0.0015432440146124532, 0.0047535262158011835, 0.01140311659831037,
    0.021303826486921626, 0.0309968846369868, 0.035124071876292469,
    0.0309968846369868, 0.021303826486921626, 0.01140311659831037,
    0.0047535262158011835, 0.0015432440146124532, 0.00039019319288270693,
    7.6833595263807038E-5, 8.7063869616745574E-5, 0.00044214681291224515,
    0.0017487245678627402, 0.0053864508780477162, 0.012921423933516047,
    0.024140398028059319, 0.035124071876292469, 0.039800787712028829,
    0.035124071876292469, 0.024140398028059319, 0.012921423933516047,
    0.0053864508780477162, 0.0017487245678627402, 0.00044214681291224515,
    8.7063869616745574E-5, 7.6833595263807038E-5, 0.00039019319288270693,
    0.0015432440146124532, 0.0047535262158011835, 0.01140311659831037,
    0.021303826486921626, 0.0309968846369868, 0.035124071876292469,
    0.0309968846369868, 0.021303826486921626, 0.01140311659831037,
    0.0047535262158011835, 0.0015432440146124532, 0.00039019319288270693,
    7.6833595263807038E-5, 5.2806906275779393E-5, 0.00026817559812550236,
    0.0010606550658014775, 0.0032670476045719744, 0.0078372397828220981,
    0.014641891541684373, 0.021303826486921626, 0.024140398028059319,
    0.021303826486921626, 0.014641891541684373, 0.0078372397828220981,
    0.0032670476045719744, 0.0010606550658014775, 0.00026817559812550236,
    5.2806906275779393E-5, 2.8265500088842114E-5, 0.00014354405374659103,
    0.00056772774568680253, 0.0017487245678627402, 0.0041949721617992172,
    0.0078372397828220981, 0.01140311659831037, 0.012921423933516047,
    0.01140311659831037, 0.0078372397828220981, 0.0041949721617992172,
    0.0017487245678627402, 0.00056772774568680253, 0.00014354405374659103,
    2.8265500088842114E-5, 1.1782813454257782E-5, 5.98380641576443E-5,
    0.00023666413469452708, 0.00072897685522068864, 0.0017487245678627402,
    0.0032670476045719744, 0.0047535262158011835, 0.0053864508780477162,
    0.0047535262158011835, 0.0032670476045719744, 0.0017487245678627402,
    0.00072897685522068864, 0.00023666413469452708, 5.98380641576443E-5,
    1.1782813454257782E-5, 3.8253194603479479E-6, 1.9426575170726453E-5,
    7.6833595263807038E-5, 0.00023666413469452708, 0.00056772774568680253,
    0.0010606550658014775, 0.0015432440146124532, 0.0017487245678627402,
    0.0015432440146124532, 0.0010606550658014775, 0.00056772774568680253,
    0.00023666413469452708, 7.6833595263807038E-5, 1.9426575170726453E-5,
    3.8253194603479479E-6, 9.67192226178406E-7, 4.9118074140370011E-6,
    1.9426575170726453E-5, 5.98380641576443E-5, 0.00014354405374659103,
    0.00026817559812550236, 0.00039019319288270693, 0.00044214681291224515,
    0.00039019319288270693, 0.00026817559812550236, 0.00014354405374659103,
    5.98380641576443E-5, 1.9426575170726453E-5, 4.9118074140370011E-6,
    9.67192226178406E-7, 1.9045144150126372E-7, 9.67192226178406E-7,
    3.8253194603479479E-6, 1.1782813454257782E-5, 2.8265500088842114E-5,
    5.2806906275779393E-5, 7.6833595263807038E-5, 8.7063869616745574E-5,
    7.6833595263807038E-5, 5.2806906275779393E-5, 2.8265500088842114E-5,
    1.1782813454257782E-5, 3.8253194603479479E-6, 9.67192226178406E-7,
    1.9045144150126372E-7 };

  static const real_T nonZeroKernel[225] = { 1.9045144150126372E-7,
    9.67192226178406E-7, 3.8253194603479479E-6, 1.1782813454257782E-5,
    2.8265500088842114E-5, 5.2806906275779393E-5, 7.6833595263807038E-5,
    8.7063869616745574E-5, 7.6833595263807038E-5, 5.2806906275779393E-5,
    2.8265500088842114E-5, 1.1782813454257782E-5, 3.8253194603479479E-6,
    9.67192226178406E-7, 1.9045144150126372E-7, 9.67192226178406E-7,
    4.9118074140370011E-6, 1.9426575170726453E-5, 5.98380641576443E-5,
    0.00014354405374659103, 0.00026817559812550236, 0.00039019319288270693,
    0.00044214681291224515, 0.00039019319288270693, 0.00026817559812550236,
    0.00014354405374659103, 5.98380641576443E-5, 1.9426575170726453E-5,
    4.9118074140370011E-6, 9.67192226178406E-7, 3.8253194603479479E-6,
    1.9426575170726453E-5, 7.6833595263807038E-5, 0.00023666413469452708,
    0.00056772774568680253, 0.0010606550658014775, 0.0015432440146124532,
    0.0017487245678627402, 0.0015432440146124532, 0.0010606550658014775,
    0.00056772774568680253, 0.00023666413469452708, 7.6833595263807038E-5,
    1.9426575170726453E-5, 3.8253194603479479E-6, 1.1782813454257782E-5,
    5.98380641576443E-5, 0.00023666413469452708, 0.00072897685522068864,
    0.0017487245678627402, 0.0032670476045719744, 0.0047535262158011835,
    0.0053864508780477162, 0.0047535262158011835, 0.0032670476045719744,
    0.0017487245678627402, 0.00072897685522068864, 0.00023666413469452708,
    5.98380641576443E-5, 1.1782813454257782E-5, 2.8265500088842114E-5,
    0.00014354405374659103, 0.00056772774568680253, 0.0017487245678627402,
    0.0041949721617992172, 0.0078372397828220981, 0.01140311659831037,
    0.012921423933516047, 0.01140311659831037, 0.0078372397828220981,
    0.0041949721617992172, 0.0017487245678627402, 0.00056772774568680253,
    0.00014354405374659103, 2.8265500088842114E-5, 5.2806906275779393E-5,
    0.00026817559812550236, 0.0010606550658014775, 0.0032670476045719744,
    0.0078372397828220981, 0.014641891541684373, 0.021303826486921626,
    0.024140398028059319, 0.021303826486921626, 0.014641891541684373,
    0.0078372397828220981, 0.0032670476045719744, 0.0010606550658014775,
    0.00026817559812550236, 5.2806906275779393E-5, 7.6833595263807038E-5,
    0.00039019319288270693, 0.0015432440146124532, 0.0047535262158011835,
    0.01140311659831037, 0.021303826486921626, 0.0309968846369868,
    0.035124071876292469, 0.0309968846369868, 0.021303826486921626,
    0.01140311659831037, 0.0047535262158011835, 0.0015432440146124532,
    0.00039019319288270693, 7.6833595263807038E-5, 8.7063869616745574E-5,
    0.00044214681291224515, 0.0017487245678627402, 0.0053864508780477162,
    0.012921423933516047, 0.024140398028059319, 0.035124071876292469,
    0.039800787712028829, 0.035124071876292469, 0.024140398028059319,
    0.012921423933516047, 0.0053864508780477162, 0.0017487245678627402,
    0.00044214681291224515, 8.7063869616745574E-5, 7.6833595263807038E-5,
    0.00039019319288270693, 0.0015432440146124532, 0.0047535262158011835,
    0.01140311659831037, 0.021303826486921626, 0.0309968846369868,
    0.035124071876292469, 0.0309968846369868, 0.021303826486921626,
    0.01140311659831037, 0.0047535262158011835, 0.0015432440146124532,
    0.00039019319288270693, 7.6833595263807038E-5, 5.2806906275779393E-5,
    0.00026817559812550236, 0.0010606550658014775, 0.0032670476045719744,
    0.0078372397828220981, 0.014641891541684373, 0.021303826486921626,
    0.024140398028059319, 0.021303826486921626, 0.014641891541684373,
    0.0078372397828220981, 0.0032670476045719744, 0.0010606550658014775,
    0.00026817559812550236, 5.2806906275779393E-5, 2.8265500088842114E-5,
    0.00014354405374659103, 0.00056772774568680253, 0.0017487245678627402,
    0.0041949721617992172, 0.0078372397828220981, 0.01140311659831037,
    0.012921423933516047, 0.01140311659831037, 0.0078372397828220981,
    0.0041949721617992172, 0.0017487245678627402, 0.00056772774568680253,
    0.00014354405374659103, 2.8265500088842114E-5, 1.1782813454257782E-5,
    5.98380641576443E-5, 0.00023666413469452708, 0.00072897685522068864,
    0.0017487245678627402, 0.0032670476045719744, 0.0047535262158011835,
    0.0053864508780477162, 0.0047535262158011835, 0.0032670476045719744,
    0.0017487245678627402, 0.00072897685522068864, 0.00023666413469452708,
    5.98380641576443E-5, 1.1782813454257782E-5, 3.8253194603479479E-6,
    1.9426575170726453E-5, 7.6833595263807038E-5, 0.00023666413469452708,
    0.00056772774568680253, 0.0010606550658014775, 0.0015432440146124532,
    0.0017487245678627402, 0.0015432440146124532, 0.0010606550658014775,
    0.00056772774568680253, 0.00023666413469452708, 7.6833595263807038E-5,
    1.9426575170726453E-5, 3.8253194603479479E-6, 9.67192226178406E-7,
    4.9118074140370011E-6, 1.9426575170726453E-5, 5.98380641576443E-5,
    0.00014354405374659103, 0.00026817559812550236, 0.00039019319288270693,
    0.00044214681291224515, 0.00039019319288270693, 0.00026817559812550236,
    0.00014354405374659103, 5.98380641576443E-5, 1.9426575170726453E-5,
    4.9118074140370011E-6, 9.67192226178406E-7, 1.9045144150126372E-7,
    9.67192226178406E-7, 3.8253194603479479E-6, 1.1782813454257782E-5,
    2.8265500088842114E-5, 5.2806906275779393E-5, 7.6833595263807038E-5,
    8.7063869616745574E-5, 7.6833595263807038E-5, 5.2806906275779393E-5,
    2.8265500088842114E-5, 1.1782813454257782E-5, 3.8253194603479479E-6,
    9.67192226178406E-7, 1.9045144150126372E-7 };

  emxArray_real32_T *r0;
  int32_T b_I_45[2];
  int32_T b_Iy[2];
  int32_T c_I_45;
  emxArray_real32_T *c45;
  emxArray_real32_T *Ixy;
  emxArray_real32_T *I_45_x;
  int32_T b_a[2];
  emxArray_real32_T *cxy;
  emxArray_real_T *r1;
  emxArray_int32_T *r2;
  int32_T i2;
  emxArray_int32_T *r3;
  emxArray_real32_T *points0;
  emxArray_real32_T *varargin_1;
  emxArray_real32_T *varargin_2;
  boolean_T p;
  boolean_T exitg1;
  emxArray_int32_T *r4;
  emxArray_real32_T *b_cxy;
  c_vision_internal_calibration_c *board0;
  c_vision_internal_calibration_c *board45;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_vision_internal(sp, &lobj_5, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_4, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_3, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_2, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_1, &jb_emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &lobj_0, &jb_emlrtRTEI, true);
  st.site = &j_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  finalSize[0] = I->size[0];
  pad[0] = 7.0;
  finalSize[1] = I->size[1];
  pad[1] = 7.0;
  emxInit_real32_T(&b_st, &Ig, 2, &b_emlrtRTEI, true);
  emxInit_real32_T(&b_st, &a, 2, &lb_emlrtRTEI, true);
  if ((I->size[0] == 0) || (I->size[1] == 0)) {
    i1 = Ig->size[0] * Ig->size[1];
    Ig->size[0] = I->size[0];
    Ig->size[1] = I->size[1];
    emxEnsureCapacity_real32_T(&b_st, Ig, i1, &b_emlrtRTEI);
    loop_ub = I->size[0] * I->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Ig->data[i1] = I->data[i1];
    }
  } else {
    c_st.site = &gb_emlrtRSI;
    padImage(&c_st, I, pad, a);
    c_st.site = &hb_emlrtRSI;
    d_st.site = &qb_emlrtRSI;
    tooBig = true;
    for (i = 0; i < 2; i++) {
      if (tooBig && ((int32_T)(uint32_T)finalSize[i] > 65500)) {
        tooBig = true;
      } else {
        tooBig = false;
      }
    }

    tooBig = !tooBig;
    e_st.site = &rb_emlrtRSI;
    i1 = Ig->size[0] * Ig->size[1];
    Ig->size[0] = (int32_T)finalSize[0];
    Ig->size[1] = (int32_T)finalSize[1];
    emxEnsureCapacity_real32_T(&e_st, Ig, i1, &d_emlrtRTEI);
    if (tooBig) {
      for (i1 = 0; i1 < 2; i1++) {
        padSize[i1] = a->size[i1];
      }

      for (i1 = 0; i1 < 2; i1++) {
        connDims[i1] = 15.0;
      }

      ippfilter_real32(&a->data[0], &Ig->data[0], finalSize, 2.0, padSize,
                       kernel, connDims, true);
    } else {
      for (i1 = 0; i1 < 2; i1++) {
        padSize[i1] = a->size[i1];
      }

      for (i1 = 0; i1 < 225; i1++) {
        conn[i1] = true;
      }

      for (i1 = 0; i1 < 2; i1++) {
        connDims[i1] = 15.0;
      }

      imfilter_real32(&a->data[0], &Ig->data[0], 2.0, finalSize, 2.0, padSize,
                      nonZeroKernel, 225.0, conn, 2.0, connDims, pad, 2.0, true,
                      true);
    }
  }

  emxInit_real32_T(&b_st, &Iy, 2, &f_emlrtRTEI, true);
  i1 = Iy->size[0] * Iy->size[1];
  Iy->size[0] = Ig->size[0];
  Iy->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, Iy, i1, &c_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Iy->data[i1] = Ig->data[i1];
  }

  emxInit_real32_T(&st, &I_45, 2, &g_emlrtRTEI, true);
  b_st.site = &y_emlrtRSI;
  imfilter(&b_st, Iy);
  b_st.site = &ab_emlrtRSI;
  b_imfilter(&b_st, Ig);
  i1 = I_45->size[0] * I_45->size[1];
  I_45->size[0] = Ig->size[0];
  I_45->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i1, &e_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45->data[i1] = Ig->data[i1] * 0.707106769F;
  }

  emxInit_real32_T(&st, &r0, 2, &jb_emlrtRTEI, true);
  i1 = r0->size[0] * r0->size[1];
  r0->size[0] = Iy->size[0];
  r0->size[1] = Iy->size[1];
  emxEnsureCapacity_real32_T(&st, r0, i1, &f_emlrtRTEI);
  loop_ub = Iy->size[0] * Iy->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = Iy->data[i1] * 0.707106769F;
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = I_45->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_Iy[i1] = r0->size[i1];
  }

  if ((b_I_45[0] != b_Iy[0]) || (b_I_45[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_Iy[0], &emlrtECI, &st);
  }

  i1 = I_45->size[0] * I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i1, &g_emlrtRTEI);
  i = I_45->size[0];
  c_I_45 = I_45->size[1];
  loop_ub = i * c_I_45;
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45->data[i1] += r0->data[i1];
  }

  i1 = r0->size[0] * r0->size[1];
  r0->size[0] = Ig->size[0];
  r0->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, r0, i1, &h_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = Ig->data[i1] * 0.707106769F;
  }

  emxInit_real32_T(&st, &c45, 2, &jb_emlrtRTEI, true);
  i1 = c45->size[0] * c45->size[1];
  c45->size[0] = Iy->size[0];
  c45->size[1] = Iy->size[1];
  emxEnsureCapacity_real32_T(&st, c45, i1, &i_emlrtRTEI);
  loop_ub = Iy->size[0] * Iy->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    c45->data[i1] = Iy->data[i1] * -0.707106769F;
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_Iy[i1] = r0->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = c45->size[i1];
  }

  emxInit_real32_T(&st, &Ixy, 2, &jb_emlrtRTEI, true);
  if ((b_Iy[0] != b_I_45[0]) || (b_Iy[1] != b_I_45[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Iy[0], &b_I_45[0], &b_emlrtECI, &st);
  }

  i1 = Ixy->size[0] * Ixy->size[1];
  Ixy->size[0] = Ig->size[0];
  Ixy->size[1] = Ig->size[1];
  emxEnsureCapacity_real32_T(&st, Ixy, i1, &j_emlrtRTEI);
  loop_ub = Ig->size[0] * Ig->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ixy->data[i1] = Ig->data[i1];
  }

  emxInit_real32_T(&st, &I_45_x, 2, &k_emlrtRTEI, true);
  b_st.site = &bb_emlrtRSI;
  imfilter(&b_st, Ixy);
  i1 = I_45_x->size[0] * I_45_x->size[1];
  I_45_x->size[0] = I_45->size[0];
  I_45_x->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_x, i1, &k_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45_x->data[i1] = I_45->data[i1];
  }

  b_st.site = &cb_emlrtRSI;
  b_imfilter(&b_st, I_45_x);
  i1 = a->size[0] * a->size[1];
  a->size[0] = I_45->size[0];
  a->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, a, i1, &l_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    a->data[i1] = I_45->data[i1];
  }

  b_st.site = &db_emlrtRSI;
  imfilter(&b_st, a);
  i1 = I_45_x->size[0] * I_45_x->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_x, i1, &m_emlrtRTEI);
  c_I_45 = I_45_x->size[0];
  i = I_45_x->size[1];
  loop_ub = c_I_45 * i;
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45_x->data[i1] *= 0.707106769F;
  }

  i1 = a->size[0] * a->size[1];
  emxEnsureCapacity_real32_T(&st, a, i1, &n_emlrtRTEI);
  c_I_45 = a->size[0];
  i = a->size[1];
  loop_ub = c_I_45 * i;
  for (i1 = 0; i1 < loop_ub; i1++) {
    a->data[i1] *= -0.707106769F;
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = I_45_x->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_a[i1] = a->size[i1];
  }

  if ((b_I_45[0] != b_a[0]) || (b_I_45[1] != b_a[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_a[0], &c_emlrtECI, &st);
  }

  i1 = I_45_x->size[0] * I_45_x->size[1];
  emxEnsureCapacity_real32_T(&st, I_45_x, i1, &o_emlrtRTEI);
  c_I_45 = I_45_x->size[0];
  i = I_45_x->size[1];
  loop_ub = c_I_45 * i;
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45_x->data[i1] += a->data[i1];
  }

  b_st.site = &eb_emlrtRSI;
  b_abs(&b_st, I_45, a);
  i1 = I_45->size[0] * I_45->size[1];
  I_45->size[0] = r0->size[0];
  I_45->size[1] = r0->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i1, &h_emlrtRTEI);
  loop_ub = r0->size[0] * r0->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45->data[i1] = r0->data[i1] + c45->data[i1];
  }

  b_st.site = &eb_emlrtRSI;
  b_abs(&b_st, I_45, r0);
  for (i1 = 0; i1 < 2; i1++) {
    b_a[i1] = a->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_Iy[i1] = r0->size[i1];
  }

  if ((b_a[0] != b_Iy[0]) || (b_a[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_a[0], &b_Iy[0], &d_emlrtECI, &st);
  }

  b_st.site = &eb_emlrtRSI;
  b_abs(&b_st, Ixy, I_45);
  i1 = I_45->size[0] * I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i1, &p_emlrtRTEI);
  i = I_45->size[0];
  c_I_45 = I_45->size[1];
  loop_ub = i * c_I_45;
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45->data[i1] *= 4.0F;
  }

  i1 = a->size[0] * a->size[1];
  emxEnsureCapacity_real32_T(&st, a, i1, &q_emlrtRTEI);
  c_I_45 = a->size[0];
  i = a->size[1];
  loop_ub = c_I_45 * i;
  for (i1 = 0; i1 < loop_ub; i1++) {
    a->data[i1] = 3.0F * (a->data[i1] + r0->data[i1]);
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = I_45->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_a[i1] = a->size[i1];
  }

  emxInit_real32_T(&st, &cxy, 2, &jb_emlrtRTEI, true);
  if ((b_I_45[0] != b_a[0]) || (b_I_45[1] != b_a[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_a[0], &e_emlrtECI, &st);
  }

  i1 = cxy->size[0] * cxy->size[1];
  cxy->size[0] = I_45->size[0];
  cxy->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, cxy, i1, &r_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    cxy->data[i1] = I_45->data[i1] - a->data[i1];
  }

  emxInit_real_T1(&st, &r1, 2, &jb_emlrtRTEI, true);
  i1 = r1->size[0] * r1->size[1];
  r1->size[0] = I_45->size[0];
  r1->size[1] = I_45->size[1];
  emxEnsureCapacity_real_T(&st, r1, i1, &s_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1->data[i1] = I_45->data[i1] - a->data[i1];
  }

  loop_ub = r1->size[0] * r1->size[1] - 1;
  c_I_45 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (I_45->data[i] - a->data[i] < 0.0F) {
      c_I_45++;
    }
  }

  emxInit_int32_T(&st, &r2, 1, &jb_emlrtRTEI, true);
  i1 = r2->size[0];
  r2->size[0] = c_I_45;
  emxEnsureCapacity_int32_T(&st, r2, i1, &t_emlrtRTEI);
  c_I_45 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (I_45->data[i] - a->data[i] < 0.0F) {
      r2->data[c_I_45] = i + 1;
      c_I_45++;
    }
  }

  i = I_45->size[0] * I_45->size[1];
  loop_ub = r2->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    i2 = r2->data[i1];
    if (!((i2 >= 1) && (i2 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i, &emlrtBCI, &st);
    }

    cxy->data[i2 - 1] = 0.0F;
  }

  emxFree_int32_T(&r2);
  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, Ig, r0);
  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, Iy, c45);
  for (i1 = 0; i1 < 2; i1++) {
    b_Iy[i1] = r0->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = c45->size[i1];
  }

  if ((b_Iy[0] != b_I_45[0]) || (b_Iy[1] != b_I_45[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Iy[0], &b_I_45[0], &f_emlrtECI, &st);
  }

  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, I_45_x, I_45);
  i1 = I_45->size[0] * I_45->size[1];
  emxEnsureCapacity_real32_T(&st, I_45, i1, &u_emlrtRTEI);
  i = I_45->size[0];
  c_I_45 = I_45->size[1];
  loop_ub = i * c_I_45;
  for (i1 = 0; i1 < loop_ub; i1++) {
    I_45->data[i1] *= 4.0F;
  }

  i1 = r0->size[0] * r0->size[1];
  emxEnsureCapacity_real32_T(&st, r0, i1, &v_emlrtRTEI);
  i1 = r0->size[0];
  i2 = r0->size[1];
  loop_ub = i1 * i2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = 3.0F * (r0->data[i1] + c45->data[i1]);
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = I_45->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_Iy[i1] = r0->size[i1];
  }

  if ((b_I_45[0] != b_Iy[0]) || (b_I_45[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_Iy[0], &g_emlrtECI, &st);
  }

  i1 = c45->size[0] * c45->size[1];
  c45->size[0] = I_45->size[0];
  c45->size[1] = I_45->size[1];
  emxEnsureCapacity_real32_T(&st, c45, i1, &w_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    c45->data[i1] = I_45->data[i1] - r0->data[i1];
  }

  i1 = r1->size[0] * r1->size[1];
  r1->size[0] = I_45->size[0];
  r1->size[1] = I_45->size[1];
  emxEnsureCapacity_real_T(&st, r1, i1, &x_emlrtRTEI);
  loop_ub = I_45->size[0] * I_45->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1->data[i1] = I_45->data[i1] - r0->data[i1];
  }

  loop_ub = r1->size[0] * r1->size[1] - 1;
  c_I_45 = 0;
  emxFree_real_T(&r1);
  for (i = 0; i <= loop_ub; i++) {
    if (I_45->data[i] - r0->data[i] < 0.0F) {
      c_I_45++;
    }
  }

  emxInit_int32_T(&st, &r3, 1, &jb_emlrtRTEI, true);
  i1 = r3->size[0];
  r3->size[0] = c_I_45;
  emxEnsureCapacity_int32_T(&st, r3, i1, &t_emlrtRTEI);
  c_I_45 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (I_45->data[i] - r0->data[i] < 0.0F) {
      r3->data[c_I_45] = i + 1;
      c_I_45++;
    }
  }

  emxFree_real32_T(&r0);
  i = I_45->size[0] * I_45->size[1];
  loop_ub = r3->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    i2 = r3->data[i1];
    if (!((i2 >= 1) && (i2 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i, &b_emlrtBCI, &st);
    }

    c45->data[i2 - 1] = 0.0F;
  }

  emxFree_int32_T(&r3);
  st.site = &k_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  power(&b_st, Ig, a);
  b_st.site = &xb_emlrtRSI;
  power(&b_st, Iy, I_45);
  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = Ig->size[i1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    b_Iy[i1] = Iy->size[i1];
  }

  if ((b_I_45[0] != b_Iy[0]) || (b_I_45[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_I_45[0], &b_Iy[0], &h_emlrtECI, &st);
  }

  b_st.site = &yb_emlrtRSI;
  c_imfilter(&b_st, a);
  b_st.site = &ac_emlrtRSI;
  c_imfilter(&b_st, I_45);
  i1 = Ig->size[0] * Ig->size[1];
  emxEnsureCapacity_real32_T(&st, Ig, i1, &y_emlrtRTEI);
  c_I_45 = Ig->size[0];
  i = Ig->size[1];
  loop_ub = c_I_45 * i;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ig->data[i1] *= Iy->data[i1];
  }

  emxFree_real32_T(&Iy);
  emxInit_real32_T(&st, &points0, 2, &kb_emlrtRTEI, true);
  emxInit_real32_T1(&st, &varargin_1, 1, &ab_emlrtRTEI, true);
  b_st.site = &bc_emlrtRSI;
  c_imfilter(&b_st, Ig);
  st.site = &l_emlrtRSI;
  find_peaks(&st, cxy, points0);
  st.site = &m_emlrtRSI;
  loop_ub = points0->size[0];
  i1 = varargin_1->size[0];
  varargin_1->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_1, i1, &ab_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    varargin_1->data[i1] = points0->data[i1 + points0->size[0]];
  }

  emxInit_real32_T1(&st, &varargin_2, 1, &bb_emlrtRTEI, true);
  loop_ub = points0->size[0];
  i1 = varargin_2->size[0];
  varargin_2->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_2, i1, &bb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    varargin_2->data[i1] = points0->data[i1];
  }

  b_st.site = &jd_emlrtRSI;
  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = cxy->size[i1];
  }

  if (!allinrange(varargin_1, b_I_45[0])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i1 = points0->size[0];
  connDims[0] = i1;
  connDims[1] = 1.0;
  i1 = points0->size[0];
  pad[0] = i1;
  pad[1] = 1.0;
  tooBig = false;
  p = true;
  c_I_45 = 0;
  exitg1 = false;
  while ((!exitg1) && (c_I_45 < 2)) {
    if (!((int32_T)(uint32_T)connDims[c_I_45] == (int32_T)(uint32_T)pad[c_I_45]))
    {
      p = false;
      exitg1 = true;
    } else {
      c_I_45++;
    }
  }

  if (p) {
    tooBig = true;
  }

  if (!tooBig) {
    emlrtErrorWithMessageIdR2012b(&b_st, &im_emlrtRTEI,
      "MATLAB:sub2ind:SubscriptVectorSize", 0);
  }

  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  if (!allinrange(varargin_2, b_I_45[1])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  emxInit_int32_T(&b_st, &r4, 1, &jb_emlrtRTEI, true);
  i1 = r4->size[0];
  r4->size[0] = varargin_1->size[0];
  emxEnsureCapacity_int32_T(&st, r4, i1, &cb_emlrtRTEI);
  loop_ub = varargin_1->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r4->data[i1] = (int32_T)varargin_1->data[i1] + b_I_45[0] * ((int32_T)
      varargin_2->data[i1] - 1);
  }

  st.site = &m_emlrtRSI;
  b_indexShapeCheck(&st, *(int32_T (*)[2])cxy->size, r4->size[0]);
  c_I_45 = cxy->size[0] * cxy->size[1];
  loop_ub = r4->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    i2 = r4->data[i1];
    if (!((i2 >= 1) && (i2 <= c_I_45))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, c_I_45, &c_emlrtBCI, sp);
    }
  }

  emxInit_real32_T1(sp, &b_cxy, 1, &db_emlrtRTEI, true);
  i1 = b_cxy->size[0];
  b_cxy->size[0] = r4->size[0];
  emxEnsureCapacity_real32_T1(sp, b_cxy, i1, &db_emlrtRTEI);
  loop_ub = r4->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_cxy->data[i1] = cxy->data[r4->data[i1] - 1];
  }

  emxFree_real32_T(&cxy);
  st.site = &v_emlrtRSI;
  board0 = growCheckerboard(&st, points0, b_cxy, a, I_45, Ig, 0.0, &lobj_0,
    &lobj_1, &lobj_2);
  st.site = &n_emlrtRSI;
  find_peaks(&st, c45, points0);
  st.site = &o_emlrtRSI;
  loop_ub = points0->size[0];
  i1 = varargin_1->size[0];
  varargin_1->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_1, i1, &eb_emlrtRTEI);
  emxFree_real32_T(&b_cxy);
  for (i1 = 0; i1 < loop_ub; i1++) {
    varargin_1->data[i1] = points0->data[i1 + points0->size[0]];
  }

  loop_ub = points0->size[0];
  i1 = varargin_2->size[0];
  varargin_2->size[0] = loop_ub;
  emxEnsureCapacity_real32_T1(&st, varargin_2, i1, &fb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    varargin_2->data[i1] = points0->data[i1];
  }

  b_st.site = &jd_emlrtRSI;
  for (i1 = 0; i1 < 2; i1++) {
    b_I_45[i1] = c45->size[i1];
  }

  if (!allinrange(varargin_1, b_I_45[0])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i1 = points0->size[0];
  connDims[0] = i1;
  connDims[1] = 1.0;
  i1 = points0->size[0];
  pad[0] = i1;
  pad[1] = 1.0;
  tooBig = false;
  p = true;
  c_I_45 = 0;
  exitg1 = false;
  while ((!exitg1) && (c_I_45 < 2)) {
    if (!((int32_T)(uint32_T)connDims[c_I_45] == (int32_T)(uint32_T)pad[c_I_45]))
    {
      p = false;
      exitg1 = true;
    } else {
      c_I_45++;
    }
  }

  if (p) {
    tooBig = true;
  }

  if (!tooBig) {
    emlrtErrorWithMessageIdR2012b(&b_st, &im_emlrtRTEI,
      "MATLAB:sub2ind:SubscriptVectorSize", 0);
  }

  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  if (!allinrange(varargin_2, b_I_45[1])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &hm_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i1 = r4->size[0];
  r4->size[0] = varargin_1->size[0];
  emxEnsureCapacity_int32_T(&st, r4, i1, &gb_emlrtRTEI);
  loop_ub = varargin_1->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r4->data[i1] = (int32_T)varargin_1->data[i1] + b_I_45[0] * ((int32_T)
      varargin_2->data[i1] - 1);
  }

  emxFree_real32_T(&varargin_2);
  st.site = &o_emlrtRSI;
  b_indexShapeCheck(&st, *(int32_T (*)[2])c45->size, r4->size[0]);
  c_I_45 = c45->size[0] * c45->size[1];
  loop_ub = r4->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    i2 = r4->data[i1];
    if (!((i2 >= 1) && (i2 <= c_I_45))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, c_I_45, &d_emlrtBCI, sp);
    }
  }

  i1 = varargin_1->size[0];
  varargin_1->size[0] = r4->size[0];
  emxEnsureCapacity_real32_T1(sp, varargin_1, i1, &hb_emlrtRTEI);
  loop_ub = r4->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    varargin_1->data[i1] = c45->data[r4->data[i1] - 1];
  }

  emxFree_int32_T(&r4);
  emxFree_real32_T(&c45);
  st.site = &w_emlrtRSI;
  board45 = growCheckerboard(&st, points0, varargin_1, a, I_45, Ig,
    0.78539816339744828, &lobj_3, &lobj_4, &lobj_5);
  i1 = points->size[0] * points->size[1];
  points->size[0] = 0;
  points->size[1] = 0;
  emxEnsureCapacity_real_T(sp, points, i1, &ib_emlrtRTEI);
  emxFree_real32_T(&varargin_1);
  emxFree_real32_T(&a);
  emxFree_real32_T(&I_45);
  emxFree_real32_T(&Ig);
  emxFree_real32_T(&points0);
  for (i1 = 0; i1 < 2; i1++) {
    boardSize[i1] = 0.0;
  }

  if (board0->isValid && (board0->Energy < board45->Energy)) {
    board45 = board0;
    st.site = &p_emlrtRSI;
    orient(&st, &board45, I);
    st.site = &q_emlrtRSI;
    toPoints(&st, board45, points, boardSize);
    st.site = &r_emlrtRSI;
    subPixelLocation(&st, Ixy, points);
  } else {
    if (board45->isValid) {
      st.site = &s_emlrtRSI;
      orient(&st, &board45, I);
      st.site = &t_emlrtRSI;
      toPoints(&st, board45, points, boardSize);
      st.site = &u_emlrtRSI;
      subPixelLocation(&st, I_45_x, points);
    }
  }

  emxFree_real32_T(&I_45_x);
  emxFree_real32_T(&Ixy);
  c_emxFreeStruct_vision_internal(&lobj_0);
  c_emxFreeStruct_vision_internal(&lobj_1);
  c_emxFreeStruct_vision_internal(&lobj_2);
  c_emxFreeStruct_vision_internal(&lobj_3);
  c_emxFreeStruct_vision_internal(&lobj_4);
  c_emxFreeStruct_vision_internal(&lobj_5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (detectCheckerboard.c) */
