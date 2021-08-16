/*
 * Checkerboard.c
 *
 * Code generation for function 'Checkerboard'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dCP.h"
#include "Checkerboard.h"
#include "norm.h"
#include "dCP_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "hypot.h"
#include "squeeze.h"
#include "bsxfun.h"
#include "any.h"
#include "all.h"
#include "dCP_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo kf_emlrtRSI = { 49, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 52, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 53, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 54, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 55, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 57, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 77, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 78, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 79, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 80, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 81, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 91, /* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 182,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 195,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 68, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 86, /* lineNo */
  "xgemm",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 87, /* lineNo */
  "xgemm",                             /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 16, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 101,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 109,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 110,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 111,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 118,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 119,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 120,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 255,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 256,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 257,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 258,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 262,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 263,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 264,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 265,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 267,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 271,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 272,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 273,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 274,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 278,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 279,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 280,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 281,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 283,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 294,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 295,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 314,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 316,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 370,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 372,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 374,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 380,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 301,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 302,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 387,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 389,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 391,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 397,/* lineNo */
  "Checkerboard",                      /* fcnName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pathName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 34,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 35,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 37,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 38,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 39,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 42,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 49,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 49,/* lineNo */
  56,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 57,/* lineNo */
  20,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 63,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 65,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 67,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 69,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 81,/* lineNo */
  32,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 86,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 87,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 88,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 89,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 101,/* lineNo */
  20,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 48,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 49,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 26,/* lineNo */
  18,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 182,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 182,/* lineNo */
  50,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 182,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 186,/* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 186,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 189,/* lineNo */
  33,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 178,/* lineNo */
  32,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 189,/* lineNo */
  19,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 257,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 262,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 273,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 278,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 265,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 257,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 273,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 301,/* lineNo */
  26,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 265,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 266,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 302,/* lineNo */
  26,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 303,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 358,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 359,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 360,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 360,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 362,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 364,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 364,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 364,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 365,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 365,/* lineNo */
  31,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 365,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 281,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 281,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 282,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 387,/* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 387,/* lineNo */
  58,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 388,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 388,/* lineNo */
  19,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 389,/* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 389,/* lineNo */
  60,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 391,/* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 391,/* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 391,/* lineNo */
  57,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 391,/* lineNo */
  70,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 394,/* lineNo */
  23,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 394,/* lineNo */
  56,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 395,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 395,/* lineNo */
  23,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 394,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 396,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 396,/* lineNo */
  58,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 396,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 255,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 256,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 250,/* lineNo */
  18,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 254,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 302,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 387,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 389,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 391,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 391,/* lineNo */
  51,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 294,/* lineNo */
  26,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 295,/* lineNo */
  26,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 296,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 294,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 310,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 313,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 313,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 314,/* lineNo */
  31,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 314,/* lineNo */
  44,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 313,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 314,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 322,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 323,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 324,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 324,/* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 326,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 328,/* lineNo */
  31,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 328,/* lineNo */
  34,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 328,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 329,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 329,/* lineNo */
  35,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 329,/* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 321,/* lineNo */
  47,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 370,/* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 370,/* lineNo */
  58,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 371,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 371,/* lineNo */
  19,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 372,/* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 372,/* lineNo */
  60,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 374,/* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 374,/* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 374,/* lineNo */
  57,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 374,/* lineNo */
  70,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 377,/* lineNo */
  23,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 377,/* lineNo */
  56,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 378,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 378,/* lineNo */
  23,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 377,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 379,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 379,/* lineNo */
  58,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 379,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 370,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 372,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 369,/* lineNo */
  30,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 374,/* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 374,/* lineNo */
  51,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 334,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 335,/* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 336,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 336,/* lineNo */
  31,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 338,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 340,/* lineNo */
  33,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 340,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 340,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 341,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 341,/* lineNo */
  37,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 341,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 333,/* lineNo */
  47,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 303,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 301,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 346,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 347,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 348,/* lineNo */
  22,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 348,/* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 350,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 352,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 352,/* lineNo */
  34,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 352,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 353,/* lineNo */
  28,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 353,/* lineNo */
  31,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 353,/* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 345,/* lineNo */
  47,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 386,/* lineNo */
  30,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 62,  /* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  63,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 64,  /* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  65,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 66,  /* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  67,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 68,  /* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  69,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 86,  /* lineNo */
  53,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  86,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 87,  /* lineNo */
  53,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  87,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 88,  /* lineNo */
  53,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  88,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 89,  /* lineNo */
  53,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  89,                                  /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 203, /* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  186,                                 /* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  186,                                 /* lineNo */
  21,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 189, /* lineNo */
  19,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  301,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 301, /* lineNo */
  46,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  301,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 302, /* lineNo */
  46,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { 2,   /* nDims */
  303,                                 /* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  359,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  359,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  360,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  360,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  364,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  365,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  365,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 387, /* lineNo */
  46,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  81,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 387, /* lineNo */
  77,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  77,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bb_emlrtECI = { 3,  /* nDims */
  387,                                 /* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  388,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 388, /* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  388,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  389,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 389, /* lineNo */
  48,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  389,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  389,                                 /* lineNo */
  83,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 389, /* lineNo */
  79,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  389,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cb_emlrtECI = { 3,  /* nDims */
  389,                                 /* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  391,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  391,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  391,                                 /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  391,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 394, /* lineNo */
  43,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  82,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 394, /* lineNo */
  78,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  394,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo db_emlrtECI = { 3,  /* nDims */
  394,                                 /* lineNo */
  23,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  395,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  395,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 395, /* lineNo */
  47,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  395,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 396, /* lineNo */
  45,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  75,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  83,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 396, /* lineNo */
  79,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { 3,  /* nDims */
  396,                                 /* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtDCInfo y_emlrtDCI = { 358, /* lineNo */
  54,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 363,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 358,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 362,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  294,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  296,                                 /* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  312,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  316,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  323,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  324,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  324,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  328,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  329,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  329,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtDCInfo db_emlrtDCI = { 322,/* lineNo */
  30,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 326,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 322,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  328,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { 3,  /* nDims */
  379,                                 /* lineNo */
  25,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  379,                                 /* lineNo */
  82,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  379,                                 /* lineNo */
  75,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  379,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  379,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { 3,  /* nDims */
  377,                                 /* lineNo */
  23,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  378,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  378,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  81,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  374,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  374,                                 /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  374,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  374,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { 3,  /* nDims */
  372,                                 /* lineNo */
  29,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo ug_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  77,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nb_emlrtECI = { 3,  /* nDims */
  370,                                 /* lineNo */
  27,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo wg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  371,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  370,                                 /* lineNo */
  75,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  370,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  294,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 294,/* lineNo */
  43,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 295,/* lineNo */
  43,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ch_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  335,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  335,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo dh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  336,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  336,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo eh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  340,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  340,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo fh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  341,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  341,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtDCInfo jb_emlrtDCI = { 334,/* lineNo */
  30,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 338,/* lineNo */
  36,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 334,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 338,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  340,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 379,/* lineNo */
  75,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  379,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 379,/* lineNo */
  42,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ih_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  379,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 378,/* lineNo */
  42,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  378,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 377,/* lineNo */
  73,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  77,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 377,/* lineNo */
  40,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 372,/* lineNo */
  77,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  81,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 372,/* lineNo */
  46,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 371,/* lineNo */
  38,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  371,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 370,/* lineNo */
  75,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ph_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  370,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 370,/* lineNo */
  44,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  370,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  347,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo rh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  348,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  348,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { -1, /* nDims */
  352,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtBCInfo sh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  353,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  353,                                 /* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m"/* pName */
};

static emlrtDCInfo xb_emlrtDCI = { 346,/* lineNo */
  54,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 351,/* lineNo */
  17,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 346,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 350,/* lineNo */
  13,                                  /* colNo */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo th_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "Checkerboard",                      /* fName */
  "/usr/local/MATLAB/R2017b/toolbox/vision/vision/+vision/+internal/+calibration/+checkerboard/Checkerboard.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void Checkerboard_expandBoardDown(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *indices,
  emxArray_real_T *newBoard, emxArray_real_T *newBoardCoords);
static void Checkerboard_expandBoardLeft(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *indices,
  emxArray_real_T *newBoard, emxArray_real_T *newBoardCoords);
static void Checkerboard_expandBoardUp(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *indices,
  emxArray_real_T *newBoard, emxArray_real_T *newBoardCoords);
static void Checkerboard_findClosestIndices(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *predictedPoints,
  emxArray_real_T *indices);
static real_T Checkerboard_findNeighbor(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real32_T *pointVectors,
  const emxArray_real32_T *euclideanDists, const real32_T v[2]);
static real32_T c_Checkerboard_computeNewEnergy(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, real32_T oldEnergy);
static void c_Checkerboard_predictPointsHor(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, emxArray_real_T *newPoints);
static void c_Checkerboard_predictPointsVer(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, emxArray_real_T *newPoints);
static real32_T d_Checkerboard_computeNewEnergy(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *idx, real32_T
  oldEnergy);
static void d_Checkerboard_predictPointsVer(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *idx,
  emxArray_real_T *newPoints);
static real32_T e_Checkerboard_computeNewEnergy(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, real32_T oldEnergy);

/* Function Definitions */
static void Checkerboard_expandBoardDown(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *indices,
  emxArray_real_T *newBoard, emxArray_real_T *newBoardCoords)
{
  int32_T i26;
  real_T d6;
  int32_T loop_ub;
  emxArray_int32_T *r30;
  int32_T i27;
  int32_T iv8[2];
  int32_T b_newBoard;
  emxArray_int32_T *r31;
  emxArray_real_T *r32;
  int32_T iv9[3];
  int32_T b_newBoardCoords;
  int32_T unnamed_idx_2;
  emxArray_int32_T *r33;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i26 = newBoard->size[0] * newBoard->size[1];
  d6 = (real_T)this->BoardIdx->size[0] + 1.0;
  if (d6 != (int32_T)d6) {
    emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
  }

  newBoard->size[0] = (int32_T)d6;
  newBoard->size[1] = this->BoardIdx->size[1];
  emxEnsureCapacity_real_T(sp, newBoard, i26, &xi_emlrtRTEI);
  d6 = (real_T)this->BoardIdx->size[0] + 1.0;
  if (d6 != (int32_T)d6) {
    emlrtIntegerCheckR2012b(d6, &lb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d6 * this->BoardIdx->size[1];
  for (i26 = 0; i26 < loop_ub; i26++) {
    newBoard->data[i26] = 0.0;
  }

  emxInit_int32_T(sp, &r30, 1, &jj_emlrtRTEI, true);
  i26 = newBoard->size[0];
  i27 = newBoard->size[0];
  if (!((i27 >= 1) && (i27 <= i26))) {
    emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &ch_emlrtBCI, sp);
  }

  loop_ub = newBoard->size[1];
  i26 = r30->size[0];
  r30->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r30, i26, &yi_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r30->data[i26] = i26;
  }

  iv8[0] = 1;
  iv8[1] = r30->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv8[0], 2, &(*(int32_T (*)[2])indices->size)[0],
    2, &ob_emlrtECI, sp);
  b_newBoard = newBoard->size[0] - 1;
  loop_ub = indices->size[1];
  for (i26 = 0; i26 < loop_ub; i26++) {
    newBoard->data[b_newBoard + newBoard->size[0] * r30->data[i26]] =
      indices->data[indices->size[0] * i26];
  }

  if (1 > newBoard->size[0] - 1) {
    loop_ub = 0;
  } else {
    i26 = newBoard->size[0];
    loop_ub = newBoard->size[0] - 1;
    if (!((loop_ub >= 1) && (loop_ub <= i26))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i26, &dh_emlrtBCI, sp);
    }
  }

  i26 = r30->size[0];
  r30->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r30, i26, &aj_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r30->data[i26] = i26;
  }

  emxInit_int32_T(sp, &r31, 1, &jj_emlrtRTEI, true);
  loop_ub = newBoard->size[1];
  i26 = r31->size[0];
  r31->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r31, i26, &bj_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r31->data[i26] = i26;
  }

  iv8[0] = r30->size[0];
  iv8[1] = r31->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv8[0], 2, &(*(int32_T (*)[2])this->
    BoardIdx->size)[0], 2, &pb_emlrtECI, sp);
  loop_ub = this->BoardIdx->size[1];
  for (i26 = 0; i26 < loop_ub; i26++) {
    b_newBoard = this->BoardIdx->size[0];
    for (i27 = 0; i27 < b_newBoard; i27++) {
      newBoard->data[r30->data[i27] + newBoard->size[0] * r31->data[i26]] =
        this->BoardIdx->data[i27 + this->BoardIdx->size[0] * i26];
    }
  }

  i26 = newBoardCoords->size[0] * newBoardCoords->size[1] * newBoardCoords->
    size[2];
  d6 = (real_T)this->BoardCoords->size[0] + 1.0;
  if (d6 != (int32_T)d6) {
    emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
  }

  newBoardCoords->size[0] = (int32_T)d6;
  newBoardCoords->size[1] = this->BoardCoords->size[1];
  newBoardCoords->size[2] = this->BoardCoords->size[2];
  emxEnsureCapacity_real_T1(sp, newBoardCoords, i26, &cj_emlrtRTEI);
  d6 = (real_T)this->BoardCoords->size[0] + 1.0;
  if (d6 != (int32_T)d6) {
    emlrtIntegerCheckR2012b(d6, &mb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d6 * this->BoardCoords->size[1] * this->BoardCoords->size[2];
  for (i26 = 0; i26 < loop_ub; i26++) {
    newBoardCoords->data[i26] = 0.0;
  }

  i26 = newBoardCoords->size[0];
  i27 = newBoardCoords->size[0];
  if (!((i27 >= 1) && (i27 <= i26))) {
    emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &eh_emlrtBCI, sp);
  }

  loop_ub = newBoardCoords->size[1];
  i26 = r30->size[0];
  r30->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r30, i26, &dj_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r30->data[i26] = i26;
  }

  loop_ub = newBoardCoords->size[2];
  i26 = r31->size[0];
  r31->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r31, i26, &ej_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r31->data[i26] = i26;
  }

  emxInit_real_T1(sp, &r32, 2, &jj_emlrtRTEI, true);
  b_newBoard = this->Points->size[0];
  i26 = r32->size[0] * r32->size[1];
  r32->size[0] = indices->size[1];
  r32->size[1] = 2;
  emxEnsureCapacity_real_T(sp, r32, i26, &fj_emlrtRTEI);
  loop_ub = indices->size[1];
  for (i26 = 0; i26 < 2; i26++) {
    for (i27 = 0; i27 < loop_ub; i27++) {
      b_newBoardCoords = (int32_T)indices->data[indices->size[0] * i27];
      if (!((b_newBoardCoords >= 1) && (b_newBoardCoords <= b_newBoard))) {
        emlrtDynamicBoundsCheckR2012b(b_newBoardCoords, 1, b_newBoard,
          &gh_emlrtBCI, sp);
      }

      r32->data[i27 + r32->size[0] * i26] = this->Points->data[(b_newBoardCoords
        + this->Points->size[0] * i26) - 1];
    }
  }

  iv9[0] = 1;
  iv9[1] = r30->size[0];
  iv9[2] = r31->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv9[0], 3, &(*(int32_T (*)[2])r32->size)[0], 2,
    &qb_emlrtECI, sp);
  b_newBoard = r30->size[0];
  unnamed_idx_2 = r31->size[0];
  b_newBoardCoords = newBoardCoords->size[0] - 1;
  for (i26 = 0; i26 < unnamed_idx_2; i26++) {
    for (i27 = 0; i27 < b_newBoard; i27++) {
      newBoardCoords->data[(b_newBoardCoords + newBoardCoords->size[0] *
                            r30->data[i27]) + newBoardCoords->size[0] *
        newBoardCoords->size[1] * r31->data[i26]] = r32->data[i27 + b_newBoard *
        i26];
    }
  }

  emxFree_real_T(&r32);
  if (1 > newBoardCoords->size[0] - 1) {
    loop_ub = 0;
  } else {
    i26 = newBoardCoords->size[0];
    loop_ub = newBoardCoords->size[0] - 1;
    if (!((loop_ub >= 1) && (loop_ub <= i26))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i26, &fh_emlrtBCI, sp);
    }
  }

  i26 = r30->size[0];
  r30->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r30, i26, &gj_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r30->data[i26] = i26;
  }

  loop_ub = newBoardCoords->size[1];
  i26 = r31->size[0];
  r31->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r31, i26, &hj_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r31->data[i26] = i26;
  }

  emxInit_int32_T(sp, &r33, 1, &jj_emlrtRTEI, true);
  loop_ub = newBoardCoords->size[2];
  i26 = r33->size[0];
  r33->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r33, i26, &ij_emlrtRTEI);
  for (i26 = 0; i26 < loop_ub; i26++) {
    r33->data[i26] = i26;
  }

  iv9[0] = r30->size[0];
  iv9[1] = r31->size[0];
  iv9[2] = r33->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv9[0], 3, &(*(int32_T (*)[3])this->
    BoardCoords->size)[0], 3, &rb_emlrtECI, sp);
  loop_ub = this->BoardCoords->size[2];
  for (i26 = 0; i26 < loop_ub; i26++) {
    b_newBoard = this->BoardCoords->size[1];
    for (i27 = 0; i27 < b_newBoard; i27++) {
      unnamed_idx_2 = this->BoardCoords->size[0];
      for (b_newBoardCoords = 0; b_newBoardCoords < unnamed_idx_2;
           b_newBoardCoords++) {
        newBoardCoords->data[(r30->data[b_newBoardCoords] + newBoardCoords->
                              size[0] * r31->data[i27]) + newBoardCoords->size[0]
          * newBoardCoords->size[1] * r33->data[i26]] = this->BoardCoords->data
          [(b_newBoardCoords + this->BoardCoords->size[0] * i27) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * i26];
      }
    }
  }

  emxFree_int32_T(&r33);
  emxFree_int32_T(&r31);
  emxFree_int32_T(&r30);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Checkerboard_expandBoardLeft(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *indices,
  emxArray_real_T *newBoard, emxArray_real_T *newBoardCoords)
{
  int32_T i29;
  real_T d8;
  int32_T loop_ub;
  emxArray_int32_T *r40;
  int32_T iv11[1];
  int32_T unnamed_idx_0;
  int32_T i30;
  int32_T i31;
  emxArray_int32_T *r41;
  int32_T iv12[2];
  emxArray_real_T *r42;
  int32_T iv13[3];
  int32_T unnamed_idx_2;
  emxArray_int32_T *r43;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i29 = newBoard->size[0] * newBoard->size[1];
  newBoard->size[0] = this->BoardIdx->size[0];
  d8 = 1.0 + (real_T)this->BoardIdx->size[1];
  if (d8 != (int32_T)d8) {
    emlrtIntegerCheckR2012b(d8, &xb_emlrtDCI, sp);
  }

  newBoard->size[1] = (int32_T)d8;
  emxEnsureCapacity_real_T(sp, newBoard, i29, &mj_emlrtRTEI);
  d8 = 1.0 + (real_T)this->BoardIdx->size[1];
  if (d8 != (int32_T)d8) {
    emlrtIntegerCheckR2012b(d8, &ac_emlrtDCI, sp);
  }

  loop_ub = this->BoardIdx->size[0] * (int32_T)d8;
  for (i29 = 0; i29 < loop_ub; i29++) {
    newBoard->data[i29] = 0.0;
  }

  emxInit_int32_T(sp, &r40, 1, &xj_emlrtRTEI, true);
  loop_ub = newBoard->size[0];
  i29 = r40->size[0];
  r40->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r40, i29, &nj_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    r40->data[i29] = i29;
  }

  iv11[0] = r40->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv11[0], 1, &(*(int32_T (*)[2])indices->size)[0],
    2, &sb_emlrtECI, sp);
  unnamed_idx_0 = r40->size[0];
  for (i29 = 0; i29 < unnamed_idx_0; i29++) {
    newBoard->data[r40->data[i29]] = indices->data[i29];
  }

  if (2 > newBoard->size[1]) {
    i29 = 0;
    i31 = 0;
  } else {
    i29 = 1;
    i30 = newBoard->size[1];
    i31 = newBoard->size[1];
    if (!((i31 >= 1) && (i31 <= i30))) {
      emlrtDynamicBoundsCheckR2012b(i31, 1, i30, &rh_emlrtBCI, sp);
    }
  }

  loop_ub = newBoard->size[0];
  i30 = r40->size[0];
  r40->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r40, i30, &oj_emlrtRTEI);
  for (i30 = 0; i30 < loop_ub; i30++) {
    r40->data[i30] = i30;
  }

  emxInit_int32_T(sp, &r41, 1, &xj_emlrtRTEI, true);
  i30 = r41->size[0];
  r41->size[0] = i31 - i29;
  emxEnsureCapacity_int32_T(sp, r41, i30, &pj_emlrtRTEI);
  loop_ub = i31 - i29;
  for (i30 = 0; i30 < loop_ub; i30++) {
    r41->data[i30] = i29 + i30;
  }

  iv12[0] = r40->size[0];
  iv12[1] = r41->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv12[0], 2, &(*(int32_T (*)[2])this->
    BoardIdx->size)[0], 2, &tb_emlrtECI, sp);
  loop_ub = this->BoardIdx->size[1];
  for (i29 = 0; i29 < loop_ub; i29++) {
    unnamed_idx_0 = this->BoardIdx->size[0];
    for (i30 = 0; i30 < unnamed_idx_0; i30++) {
      newBoard->data[r40->data[i30] + newBoard->size[0] * r41->data[i29]] =
        this->BoardIdx->data[i30 + this->BoardIdx->size[0] * i29];
    }
  }

  i29 = newBoardCoords->size[0] * newBoardCoords->size[1] * newBoardCoords->
    size[2];
  newBoardCoords->size[0] = this->BoardCoords->size[0];
  d8 = (real_T)this->BoardCoords->size[1] + 1.0;
  if (d8 != (int32_T)d8) {
    emlrtIntegerCheckR2012b(d8, &yb_emlrtDCI, sp);
  }

  newBoardCoords->size[1] = (int32_T)d8;
  newBoardCoords->size[2] = this->BoardCoords->size[2];
  emxEnsureCapacity_real_T1(sp, newBoardCoords, i29, &qj_emlrtRTEI);
  d8 = (real_T)this->BoardCoords->size[1] + 1.0;
  if (d8 != (int32_T)d8) {
    emlrtIntegerCheckR2012b(d8, &bc_emlrtDCI, sp);
  }

  loop_ub = this->BoardCoords->size[0] * (int32_T)d8 * this->BoardCoords->size[2];
  for (i29 = 0; i29 < loop_ub; i29++) {
    newBoardCoords->data[i29] = 0.0;
  }

  loop_ub = newBoardCoords->size[0];
  i29 = r40->size[0];
  r40->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r40, i29, &rj_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    r40->data[i29] = i29;
  }

  loop_ub = newBoardCoords->size[2];
  i29 = r41->size[0];
  r41->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r41, i29, &sj_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    r41->data[i29] = i29;
  }

  emxInit_real_T1(sp, &r42, 2, &xj_emlrtRTEI, true);
  unnamed_idx_0 = this->Points->size[0];
  i29 = r42->size[0] * r42->size[1];
  r42->size[0] = indices->size[1];
  r42->size[1] = 2;
  emxEnsureCapacity_real_T(sp, r42, i29, &tj_emlrtRTEI);
  loop_ub = indices->size[1];
  for (i29 = 0; i29 < 2; i29++) {
    for (i30 = 0; i30 < loop_ub; i30++) {
      i31 = (int32_T)indices->data[indices->size[0] * i30];
      if (!((i31 >= 1) && (i31 <= unnamed_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, unnamed_idx_0, &th_emlrtBCI, sp);
      }

      r42->data[i30 + r42->size[0] * i29] = this->Points->data[(i31 +
        this->Points->size[0] * i29) - 1];
    }
  }

  iv13[0] = r40->size[0];
  iv13[1] = 1;
  iv13[2] = r41->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv13[0], 3, &(*(int32_T (*)[2])r42->size)[0], 2,
    &ub_emlrtECI, sp);
  unnamed_idx_0 = r40->size[0];
  unnamed_idx_2 = r41->size[0];
  for (i29 = 0; i29 < unnamed_idx_2; i29++) {
    for (i30 = 0; i30 < unnamed_idx_0; i30++) {
      newBoardCoords->data[r40->data[i30] + newBoardCoords->size[0] *
        newBoardCoords->size[1] * r41->data[i29]] = r42->data[i30 +
        unnamed_idx_0 * i29];
    }
  }

  emxFree_real_T(&r42);
  if (2 > newBoardCoords->size[1]) {
    i29 = 0;
    i31 = 0;
  } else {
    i29 = 1;
    i30 = newBoardCoords->size[1];
    i31 = newBoardCoords->size[1];
    if (!((i31 >= 1) && (i31 <= i30))) {
      emlrtDynamicBoundsCheckR2012b(i31, 1, i30, &sh_emlrtBCI, sp);
    }
  }

  loop_ub = newBoardCoords->size[0];
  i30 = r40->size[0];
  r40->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r40, i30, &uj_emlrtRTEI);
  for (i30 = 0; i30 < loop_ub; i30++) {
    r40->data[i30] = i30;
  }

  i30 = r41->size[0];
  r41->size[0] = i31 - i29;
  emxEnsureCapacity_int32_T(sp, r41, i30, &vj_emlrtRTEI);
  loop_ub = i31 - i29;
  for (i30 = 0; i30 < loop_ub; i30++) {
    r41->data[i30] = i29 + i30;
  }

  emxInit_int32_T(sp, &r43, 1, &xj_emlrtRTEI, true);
  loop_ub = newBoardCoords->size[2];
  i29 = r43->size[0];
  r43->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r43, i29, &wj_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    r43->data[i29] = i29;
  }

  iv13[0] = r40->size[0];
  iv13[1] = r41->size[0];
  iv13[2] = r43->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv13[0], 3, &(*(int32_T (*)[3])
    this->BoardCoords->size)[0], 3, &vb_emlrtECI, sp);
  loop_ub = this->BoardCoords->size[2];
  for (i29 = 0; i29 < loop_ub; i29++) {
    unnamed_idx_0 = this->BoardCoords->size[1];
    for (i30 = 0; i30 < unnamed_idx_0; i30++) {
      unnamed_idx_2 = this->BoardCoords->size[0];
      for (i31 = 0; i31 < unnamed_idx_2; i31++) {
        newBoardCoords->data[(r40->data[i31] + newBoardCoords->size[0] *
                              r41->data[i30]) + newBoardCoords->size[0] *
          newBoardCoords->size[1] * r43->data[i29]] = this->BoardCoords->data
          [(i31 + this->BoardCoords->size[0] * i30) + this->BoardCoords->size[0]
          * this->BoardCoords->size[1] * i29];
      }
    }
  }

  emxFree_int32_T(&r43);
  emxFree_int32_T(&r41);
  emxFree_int32_T(&r40);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Checkerboard_expandBoardUp(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *indices,
  emxArray_real_T *newBoard, emxArray_real_T *newBoardCoords)
{
  int32_T i20;
  real_T d3;
  int32_T loop_ub;
  emxArray_int32_T *r20;
  int32_T iv5[2];
  int32_T i21;
  int32_T i22;
  emxArray_int32_T *r21;
  int32_T b_loop_ub;
  emxArray_real_T *r22;
  int32_T b_this;
  int32_T iv6[3];
  emxArray_int32_T *r23;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i20 = newBoard->size[0] * newBoard->size[1];
  d3 = (real_T)this->BoardIdx->size[0] + 1.0;
  if (d3 != (int32_T)d3) {
    emlrtIntegerCheckR2012b(d3, &db_emlrtDCI, sp);
  }

  newBoard->size[0] = (int32_T)d3;
  newBoard->size[1] = this->BoardIdx->size[1];
  emxEnsureCapacity_real_T(sp, newBoard, i20, &mh_emlrtRTEI);
  d3 = (real_T)this->BoardIdx->size[0] + 1.0;
  if (d3 != (int32_T)d3) {
    emlrtIntegerCheckR2012b(d3, &fb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d3 * this->BoardIdx->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    newBoard->data[i20] = 0.0;
  }

  emxInit_int32_T(sp, &r20, 1, &xh_emlrtRTEI, true);
  loop_ub = newBoard->size[1];
  i20 = r20->size[0];
  r20->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r20, i20, &nh_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r20->data[i20] = i20;
  }

  iv5[0] = 1;
  iv5[1] = r20->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv5[0], 2, &(*(int32_T (*)[2])indices->size)[0],
    2, &gb_emlrtECI, sp);
  loop_ub = indices->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    newBoard->data[newBoard->size[0] * r20->data[i20]] = indices->data
      [indices->size[0] * i20];
  }

  if (2 > newBoard->size[0]) {
    i20 = 0;
    i22 = 0;
  } else {
    i20 = 1;
    i21 = newBoard->size[0];
    i22 = newBoard->size[0];
    if (!((i22 >= 1) && (i22 <= i21))) {
      emlrtDynamicBoundsCheckR2012b(i22, 1, i21, &dg_emlrtBCI, sp);
    }
  }

  i21 = r20->size[0];
  r20->size[0] = i22 - i20;
  emxEnsureCapacity_int32_T(sp, r20, i21, &oh_emlrtRTEI);
  loop_ub = i22 - i20;
  for (i21 = 0; i21 < loop_ub; i21++) {
    r20->data[i21] = i20 + i21;
  }

  emxInit_int32_T(sp, &r21, 1, &xh_emlrtRTEI, true);
  loop_ub = newBoard->size[1];
  i20 = r21->size[0];
  r21->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r21, i20, &ph_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r21->data[i20] = i20;
  }

  iv5[0] = r20->size[0];
  iv5[1] = r21->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv5[0], 2, &(*(int32_T (*)[2])this->
    BoardIdx->size)[0], 2, &hb_emlrtECI, sp);
  loop_ub = this->BoardIdx->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_loop_ub = this->BoardIdx->size[0];
    for (i21 = 0; i21 < b_loop_ub; i21++) {
      newBoard->data[r20->data[i21] + newBoard->size[0] * r21->data[i20]] =
        this->BoardIdx->data[i21 + this->BoardIdx->size[0] * i20];
    }
  }

  i20 = newBoardCoords->size[0] * newBoardCoords->size[1] * newBoardCoords->
    size[2];
  d3 = (real_T)this->BoardCoords->size[0] + 1.0;
  if (d3 != (int32_T)d3) {
    emlrtIntegerCheckR2012b(d3, &eb_emlrtDCI, sp);
  }

  newBoardCoords->size[0] = (int32_T)d3;
  newBoardCoords->size[1] = this->BoardCoords->size[1];
  newBoardCoords->size[2] = this->BoardCoords->size[2];
  emxEnsureCapacity_real_T1(sp, newBoardCoords, i20, &qh_emlrtRTEI);
  d3 = (real_T)this->BoardCoords->size[0] + 1.0;
  if (d3 != (int32_T)d3) {
    emlrtIntegerCheckR2012b(d3, &gb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d3 * this->BoardCoords->size[1] * this->BoardCoords->size[2];
  for (i20 = 0; i20 < loop_ub; i20++) {
    newBoardCoords->data[i20] = 0.0;
  }

  loop_ub = newBoardCoords->size[1];
  i20 = r20->size[0];
  r20->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r20, i20, &rh_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r20->data[i20] = i20;
  }

  loop_ub = newBoardCoords->size[2];
  i20 = r21->size[0];
  r21->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r21, i20, &sh_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r21->data[i20] = i20;
  }

  emxInit_real_T1(sp, &r22, 2, &xh_emlrtRTEI, true);
  b_this = this->Points->size[0];
  i20 = r22->size[0] * r22->size[1];
  r22->size[0] = indices->size[1];
  r22->size[1] = 2;
  emxEnsureCapacity_real_T(sp, r22, i20, &th_emlrtRTEI);
  loop_ub = indices->size[1];
  for (i20 = 0; i20 < 2; i20++) {
    for (i21 = 0; i21 < loop_ub; i21++) {
      i22 = (int32_T)indices->data[indices->size[0] * i21];
      if (!((i22 >= 1) && (i22 <= b_this))) {
        emlrtDynamicBoundsCheckR2012b(i22, 1, b_this, &fg_emlrtBCI, sp);
      }

      r22->data[i21 + r22->size[0] * i20] = this->Points->data[(i22 +
        this->Points->size[0] * i20) - 1];
    }
  }

  iv6[0] = 1;
  iv6[1] = r20->size[0];
  iv6[2] = r21->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv6[0], 3, &(*(int32_T (*)[2])r22->size)[0], 2,
    &ib_emlrtECI, sp);
  b_this = r20->size[0];
  b_loop_ub = r21->size[0];
  for (i20 = 0; i20 < b_loop_ub; i20++) {
    for (i21 = 0; i21 < b_this; i21++) {
      newBoardCoords->data[newBoardCoords->size[0] * r20->data[i21] +
        newBoardCoords->size[0] * newBoardCoords->size[1] * r21->data[i20]] =
        r22->data[i21 + b_this * i20];
    }
  }

  emxFree_real_T(&r22);
  if (2 > newBoardCoords->size[0]) {
    i20 = 0;
    i22 = 0;
  } else {
    i20 = 1;
    i21 = newBoardCoords->size[0];
    i22 = newBoardCoords->size[0];
    if (!((i22 >= 1) && (i22 <= i21))) {
      emlrtDynamicBoundsCheckR2012b(i22, 1, i21, &eg_emlrtBCI, sp);
    }
  }

  i21 = r20->size[0];
  r20->size[0] = i22 - i20;
  emxEnsureCapacity_int32_T(sp, r20, i21, &uh_emlrtRTEI);
  loop_ub = i22 - i20;
  for (i21 = 0; i21 < loop_ub; i21++) {
    r20->data[i21] = i20 + i21;
  }

  loop_ub = newBoardCoords->size[1];
  i20 = r21->size[0];
  r21->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r21, i20, &vh_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r21->data[i20] = i20;
  }

  emxInit_int32_T(sp, &r23, 1, &xh_emlrtRTEI, true);
  loop_ub = newBoardCoords->size[2];
  i20 = r23->size[0];
  r23->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r23, i20, &wh_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r23->data[i20] = i20;
  }

  iv6[0] = r20->size[0];
  iv6[1] = r21->size[0];
  iv6[2] = r23->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv6[0], 3, &(*(int32_T (*)[3])this->
    BoardCoords->size)[0], 3, &jb_emlrtECI, sp);
  loop_ub = this->BoardCoords->size[2];
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_loop_ub = this->BoardCoords->size[1];
    for (i21 = 0; i21 < b_loop_ub; i21++) {
      b_this = this->BoardCoords->size[0];
      for (i22 = 0; i22 < b_this; i22++) {
        newBoardCoords->data[(r20->data[i22] + newBoardCoords->size[0] *
                              r21->data[i21]) + newBoardCoords->size[0] *
          newBoardCoords->size[1] * r23->data[i20]] = this->BoardCoords->data
          [(i22 + this->BoardCoords->size[0] * i21) + this->BoardCoords->size[0]
          * this->BoardCoords->size[1] * i20];
      }
    }
  }

  emxFree_int32_T(&r23);
  emxFree_int32_T(&r21);
  emxFree_int32_T(&r20);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Checkerboard_findClosestIndices(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *predictedPoints,
  emxArray_real_T *indices)
{
  int32_T acoef;
  int32_T csz_idx_0;
  int32_T i;
  emxArray_real32_T *diffs;
  emxArray_real32_T *dists;
  emxArray_real32_T *a;
  emxArray_real32_T *b_diffs;
  emxArray_real32_T *c_diffs;
  int32_T ib;
  int32_T n;
  int32_T szc;
  int32_T k;
  boolean_T overflow;
  real32_T mtmp;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  acoef = indices->size[0] * indices->size[1];
  indices->size[0] = 1;
  indices->size[1] = predictedPoints->size[0];
  emxEnsureCapacity_real_T(sp, indices, acoef, &fh_emlrtRTEI);
  csz_idx_0 = predictedPoints->size[0];
  for (acoef = 0; acoef < csz_idx_0; acoef++) {
    indices->data[acoef] = 0.0;
  }

  i = 0;
  emxInit_real32_T(sp, &diffs, 2, &kh_emlrtRTEI, true);
  emxInit_real32_T1(sp, &dists, 1, &lh_emlrtRTEI, true);
  emxInit_real32_T(sp, &a, 2, &gh_emlrtRTEI, true);
  emxInit_real32_T1(sp, &b_diffs, 1, &ih_emlrtRTEI, true);
  emxInit_real32_T1(sp, &c_diffs, 1, &jh_emlrtRTEI, true);
  while (i <= predictedPoints->size[0] - 1) {
    acoef = predictedPoints->size[0];
    ib = i + 1;
    if (!((ib >= 1) && (ib <= acoef))) {
      emlrtDynamicBoundsCheckR2012b(ib, 1, acoef, &bg_emlrtBCI, sp);
    }

    acoef = a->size[0] * a->size[1];
    a->size[0] = this->Points->size[0];
    a->size[1] = 2;
    emxEnsureCapacity_real32_T(sp, a, acoef, &gh_emlrtRTEI);
    csz_idx_0 = this->Points->size[0] * this->Points->size[1];
    for (acoef = 0; acoef < csz_idx_0; acoef++) {
      a->data[acoef] = this->Points->data[acoef];
    }

    csz_idx_0 = a->size[0];
    acoef = diffs->size[0] * diffs->size[1];
    diffs->size[0] = csz_idx_0;
    diffs->size[1] = 2;
    emxEnsureCapacity_real32_T(sp, diffs, acoef, &hh_emlrtRTEI);
    if (diffs->size[0] != 0) {
      acoef = predictedPoints->size[1];
      csz_idx_0 = (acoef != 1);
      for (n = 0; n < 2; n++) {
        ib = csz_idx_0 * n;
        szc = diffs->size[0];
        acoef = (a->size[0] != 1);
        for (k = 0; k < szc; k++) {
          diffs->data[k + diffs->size[0] * n] = a->data[acoef * k + a->size[0] *
            n] - (real32_T)predictedPoints->data[i + predictedPoints->size[0] *
            ib];
        }
      }
    }

    csz_idx_0 = diffs->size[0];
    acoef = b_diffs->size[0];
    b_diffs->size[0] = csz_idx_0;
    emxEnsureCapacity_real32_T1(sp, b_diffs, acoef, &ih_emlrtRTEI);
    for (acoef = 0; acoef < csz_idx_0; acoef++) {
      b_diffs->data[acoef] = diffs->data[acoef];
    }

    csz_idx_0 = diffs->size[0];
    acoef = c_diffs->size[0];
    c_diffs->size[0] = csz_idx_0;
    emxEnsureCapacity_real32_T1(sp, c_diffs, acoef, &jh_emlrtRTEI);
    for (acoef = 0; acoef < csz_idx_0; acoef++) {
      c_diffs->data[acoef] = diffs->data[acoef + diffs->size[0]];
    }

    st.site = &qh_emlrtRSI;
    b_hypot(&st, b_diffs, c_diffs, dists);
    csz_idx_0 = indices->size[1];
    for (n = 0; n < csz_idx_0; n++) {
      if ((int32_T)indices->data[n] > 0) {
        acoef = dists->size[0];
        ib = indices->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= ib))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, ib, &ag_emlrtBCI, sp);
        }

        ib = (int32_T)indices->data[n];
        if (!((ib >= 1) && (ib <= acoef))) {
          emlrtDynamicBoundsCheckR2012b(ib, 1, acoef, &ag_emlrtBCI, sp);
        }
      }
    }

    csz_idx_0 = indices->size[1];
    for (n = 0; n < csz_idx_0; n++) {
      if ((int32_T)indices->data[n] > 0) {
        dists->data[(int32_T)indices->data[n] - 1] = ((real32_T)rtInf);
      }
    }

    st.site = &rh_emlrtRSI;
    b_st.site = &eg_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    if ((dists->size[0] == 1) || (dists->size[0] != 1)) {
      overflow = true;
    } else {
      overflow = false;
    }

    if (!overflow) {
      emlrtErrorWithMessageIdR2012b(&c_st, &um_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (!(dists->size[0] > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &tm_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &pc_emlrtRSI;
    csz_idx_0 = 1;
    n = dists->size[0];
    mtmp = dists->data[0];
    szc = 1;
    if (dists->size[0] > 1) {
      if (muSingleScalarIsNaN(dists->data[0])) {
        e_st.site = &rc_emlrtRSI;
        overflow = (dists->size[0] > 2147483646);
        if (overflow) {
          f_st.site = &pb_emlrtRSI;
          g_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        ib = 2;
        exitg1 = false;
        while ((!exitg1) && (ib <= n)) {
          csz_idx_0 = ib;
          if (!muSingleScalarIsNaN(dists->data[ib - 1])) {
            mtmp = dists->data[ib - 1];
            szc = ib;
            exitg1 = true;
          } else {
            ib++;
          }
        }
      }

      if (csz_idx_0 < dists->size[0]) {
        e_st.site = &qc_emlrtRSI;
        overflow = ((!(csz_idx_0 + 1 > dists->size[0])) && (dists->size[0] >
          2147483646));
        if (overflow) {
          f_st.site = &pb_emlrtRSI;
          g_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (csz_idx_0 + 1 <= n) {
          if (dists->data[csz_idx_0] < mtmp) {
            mtmp = dists->data[csz_idx_0];
            szc = csz_idx_0 + 1;
          }

          csz_idx_0++;
        }
      }
    }

    acoef = indices->size[1];
    ib = 1 + i;
    if (!((ib >= 1) && (ib <= acoef))) {
      emlrtDynamicBoundsCheckR2012b(ib, 1, acoef, &cg_emlrtBCI, sp);
    }

    indices->data[ib - 1] = szc;
    i++;
  }

  emxFree_real32_T(&c_diffs);
  emxFree_real32_T(&b_diffs);
  emxFree_real32_T(&a);
  emxFree_real32_T(&dists);
  emxFree_real32_T(&diffs);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T Checkerboard_findNeighbor(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real32_T *pointVectors,
  const emxArray_real32_T *euclideanDists, const real32_T v[2])
{
  real_T neighborIdx;
  int32_T i16;
  emxArray_real32_T *angleCosines;
  real32_T b[2];
  uint32_T pointVectors_idx_0;
  int32_T ixstart;
  emxArray_real32_T *dists;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  uint32_T varargin_1[2];
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  uint32_T varargin_2[2];
  boolean_T overflow;
  boolean_T p;
  boolean_T exitg1;
  int32_T n;
  emxArray_boolean_T *r7;
  int32_T i;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  int32_T b_this;
  real_T d1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &yf_emlrtRSI;
  for (i16 = 0; i16 < 2; i16++) {
    b[i16] = v[i16];
  }

  emxInit_real32_T1(&st, &angleCosines, 1, &qe_emlrtRTEI, true);
  pointVectors_idx_0 = (uint32_T)pointVectors->size[0];
  i16 = angleCosines->size[0];
  angleCosines->size[0] = (int32_T)pointVectors_idx_0;
  emxEnsureCapacity_real32_T1(&st, angleCosines, i16, &oe_emlrtRTEI);
  ixstart = angleCosines->size[0];
  i16 = angleCosines->size[0];
  angleCosines->size[0] = ixstart;
  emxEnsureCapacity_real32_T1(&st, angleCosines, i16, &oe_emlrtRTEI);
  for (i16 = 0; i16 < ixstart; i16++) {
    angleCosines->data[i16] = 0.0F;
  }

  b_st.site = &bg_emlrtRSI;
  if (!(pointVectors->size[0] < 1)) {
    c_st.site = &cg_emlrtRSI;
    c_st.site = &dg_emlrtRSI;
    alpha1 = 1.0F;
    beta1 = 0.0F;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)pointVectors->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)pointVectors->size[0];
    ldb_t = (ptrdiff_t)2;
    ldc_t = (ptrdiff_t)pointVectors->size[0];
    sgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &pointVectors->data[0],
          &lda_t, &b[0], &ldb_t, &beta1, &angleCosines->data[0], &ldc_t);
  }

  emxInit_real32_T1(&b_st, &dists, 1, &se_emlrtRTEI, true);
  alpha1 = muSingleScalarHypot(v[0], v[1]);
  i16 = dists->size[0];
  dists->size[0] = euclideanDists->size[0];
  emxEnsureCapacity_real32_T1(sp, dists, i16, &pe_emlrtRTEI);
  ixstart = euclideanDists->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    dists->data[i16] = euclideanDists->data[i16] * alpha1;
  }

  st.site = &yf_emlrtRSI;
  varargin_1[0] = (uint32_T)angleCosines->size[0];
  varargin_1[1] = 1U;
  varargin_2[0] = (uint32_T)dists->size[0];
  varargin_2[1] = 1U;
  overflow = false;
  p = true;
  ixstart = 0;
  exitg1 = false;
  while ((!exitg1) && (ixstart < 2)) {
    if (!((int32_T)varargin_1[ixstart] == (int32_T)varargin_2[ixstart])) {
      p = false;
      exitg1 = true;
    } else {
      ixstart++;
    }
  }

  if (p) {
    overflow = true;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&st, &wm_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  i16 = angleCosines->size[0];
  emxEnsureCapacity_real32_T1(&st, angleCosines, i16, &qe_emlrtRTEI);
  ixstart = angleCosines->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    angleCosines->data[i16] /= dists->data[i16];
  }

  i16 = dists->size[0];
  dists->size[0] = euclideanDists->size[0];
  emxEnsureCapacity_real32_T1(sp, dists, i16, &re_emlrtRTEI);
  ixstart = euclideanDists->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    dists->data[i16] = 1.5F * euclideanDists->data[i16];
  }

  i16 = dists->size[0];
  n = angleCosines->size[0];
  if (i16 != n) {
    emlrtSizeEqCheck1DR2012b(i16, n, &t_emlrtECI, sp);
  }

  i16 = dists->size[0];
  emxEnsureCapacity_real32_T1(sp, dists, i16, &re_emlrtRTEI);
  ixstart = dists->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    dists->data[i16] *= 1.0F - angleCosines->data[i16];
  }

  i16 = euclideanDists->size[0];
  n = dists->size[0];
  if (i16 != n) {
    emlrtSizeEqCheck1DR2012b(i16, n, &u_emlrtECI, sp);
  }

  i16 = dists->size[0];
  dists->size[0] = euclideanDists->size[0];
  emxEnsureCapacity_real32_T1(sp, dists, i16, &se_emlrtRTEI);
  ixstart = euclideanDists->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    dists->data[i16] += euclideanDists->data[i16];
  }

  emxInit_boolean_T(sp, &r7, 2, &ue_emlrtRTEI, true);
  i16 = r7->size[0] * r7->size[1];
  r7->size[0] = this->BoardIdx->size[0];
  r7->size[1] = this->BoardIdx->size[1];
  emxEnsureCapacity_boolean_T(sp, r7, i16, &te_emlrtRTEI);
  ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  for (i16 = 0; i16 < ixstart; i16++) {
    r7->data[i16] = (this->BoardIdx->data[i16] > 0.0);
  }

  n = r7->size[0] * r7->size[1] - 1;
  ixstart = 0;
  for (i = 0; i <= n; i++) {
    if (r7->data[i]) {
      ixstart++;
    }
  }

  emxInit_int32_T(sp, &r8, 1, &ue_emlrtRTEI, true);
  i16 = r8->size[0];
  r8->size[0] = ixstart;
  emxEnsureCapacity_int32_T(sp, r8, i16, &ue_emlrtRTEI);
  ixstart = 0;
  for (i = 0; i <= n; i++) {
    if (r7->data[i]) {
      r8->data[ixstart] = i + 1;
      ixstart++;
    }
  }

  emxFree_boolean_T(&r7);
  emxInit_int32_T(sp, &r9, 1, &ue_emlrtRTEI, true);
  b_this = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  i = dists->size[0];
  i16 = r9->size[0];
  r9->size[0] = r8->size[0];
  emxEnsureCapacity_int32_T(sp, r9, i16, &ve_emlrtRTEI);
  ixstart = r8->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    n = r8->data[i16];
    if (!((n >= 1) && (n <= b_this))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, b_this, &he_emlrtBCI, sp);
    }

    d1 = this->BoardIdx->data[n - 1];
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &l_emlrtDCI, sp);
    }

    n = (int32_T)d1;
    if (!((n >= 1) && (n <= i))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i, &ie_emlrtBCI, sp);
    }

    r9->data[i16] = n;
  }

  emxFree_int32_T(&r8);
  ixstart = r9->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    dists->data[r9->data[i16] - 1] = ((real32_T)rtInf);
  }

  emxFree_int32_T(&r9);
  n = angleCosines->size[0];
  for (i = 0; i < n; i++) {
    if (angleCosines->data[i] < 0.0F) {
      i16 = dists->size[0];
      if (!((i + 1 >= 1) && (i + 1 <= i16))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, i16, &je_emlrtBCI, sp);
      }

      dists->data[i] = ((real32_T)rtInf);
    }
  }

  emxFree_real32_T(&angleCosines);
  st.site = &ag_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  if ((dists->size[0] == 1) || (dists->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&c_st, &um_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(dists->size[0] > 0)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &tm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &pc_emlrtRSI;
  ixstart = 1;
  n = dists->size[0];
  alpha1 = dists->data[0];
  i = 1;
  if (dists->size[0] > 1) {
    if (muSingleScalarIsNaN(dists->data[0])) {
      e_st.site = &rc_emlrtRSI;
      overflow = (dists->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      b_this = 2;
      exitg1 = false;
      while ((!exitg1) && (b_this <= n)) {
        ixstart = b_this;
        if (!muSingleScalarIsNaN(dists->data[b_this - 1])) {
          alpha1 = dists->data[b_this - 1];
          i = b_this;
          exitg1 = true;
        } else {
          b_this++;
        }
      }
    }

    if (ixstart < dists->size[0]) {
      e_st.site = &qc_emlrtRSI;
      overflow = ((!(ixstart + 1 > dists->size[0])) && (dists->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= n) {
        if (dists->data[ixstart] < alpha1) {
          alpha1 = dists->data[ixstart];
          i = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  emxFree_real32_T(&dists);
  neighborIdx = i;
  if (muSingleScalarIsInf(alpha1)) {
    neighborIdx = -1.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return neighborIdx;
}

static real32_T c_Checkerboard_computeNewEnergy(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, real32_T oldEnergy)
{
  real32_T newEnergy;
  emxArray_real_T *r24;
  int32_T n;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *r25;
  int32_T ixstart;
  int32_T iv7[3];
  emxArray_real_T *b;
  int32_T b_b[3];
  emxArray_real_T *r26;
  emxArray_real_T *num;
  emxArray_real_T *denom;
  emxArray_real_T *b_num;
  emxArray_real_T *c_num;
  emxArray_real_T *r27;
  emxArray_real_T *r28;
  boolean_T overflow;
  real_T mtmp;
  boolean_T exitg1;
  real_T d4;
  int32_T i;
  emxArray_real_T *d_num;
  emxArray_real_T *b_denom;
  emxArray_real_T *r29;
  int32_T c_denom[3];
  int32_T e_num[1];
  emxArray_real_T f_num;
  int32_T d_denom[1];
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r24, 3, &ti_emlrtRTEI, true);
  n = this->BoardCoords->size[0];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &yg_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = r24->size[0] * r24->size[1] * r24->size[2];
  r24->size[0] = 1;
  r24->size[1] = loop_ub;
  r24->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r24, n, &yh_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r24->data[r24->size[0] * ixstart + r24->size[0] * r24->size[1] * n] =
        this->BoardCoords->data[this->BoardCoords->size[0] * ixstart +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }
  }

  emxInit_real_T(sp, &r25, 3, &ti_emlrtRTEI, true);
  n = this->BoardCoords->size[0];
  if (!(3 <= n)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, n, &xg_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = r25->size[0] * r25->size[1] * r25->size[2];
  r25->size[0] = 1;
  r25->size[1] = loop_ub;
  r25->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r25, n, &ai_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r25->data[r25->size[0] * ixstart + r25->size[0] * r25->size[1] * n] =
        this->BoardCoords->data[(this->BoardCoords->size[0] * ixstart +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) + 2];
    }
  }

  for (n = 0; n < 3; n++) {
    iv7[n] = r24->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = r25->size[n];
  }

  emxInit_real_T(sp, &b, 3, &bi_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(iv7, b_b, &nb_emlrtECI, sp);
  n = this->BoardCoords->size[0];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &wg_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = loop_ub;
  b->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b, n, &bi_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      b->data[b->size[0] * ixstart + b->size[0] * b->size[1] * n] =
        this->BoardCoords->data[(this->BoardCoords->size[0] * ixstart +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) + 1];
    }
  }

  n = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  emxEnsureCapacity_real_T1(sp, b, n, &ci_emlrtRTEI);
  ixstart = b->size[0];
  n = b->size[1];
  b_loop_ub = b->size[2];
  loop_ub = ixstart * n * b_loop_ub;
  for (n = 0; n < loop_ub; n++) {
    b->data[n] *= 2.0;
  }

  for (n = 0; n < 3; n++) {
    iv7[n] = r24->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = b->size[n];
  }

  emxInit_real_T(sp, &r26, 3, &yh_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(iv7, b_b, &nb_emlrtECI, sp);
  n = r26->size[0] * r26->size[1] * r26->size[2];
  r26->size[0] = 1;
  r26->size[1] = r24->size[1];
  r26->size[2] = r24->size[2];
  emxEnsureCapacity_real_T1(sp, r26, n, &yh_emlrtRTEI);
  loop_ub = r24->size[0] * r24->size[1] * r24->size[2];
  for (n = 0; n < loop_ub; n++) {
    r26->data[n] = (r24->data[n] + r25->data[n]) - b->data[n];
  }

  emxFree_real_T(&b);
  emxInit_real_T1(sp, &num, 2, &ri_emlrtRTEI, true);
  st.site = &sh_emlrtRSI;
  squeeze(&st, r26, num);
  n = this->BoardCoords->size[0];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &vg_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = r24->size[0] * r24->size[1] * r24->size[2];
  r24->size[0] = 1;
  r24->size[1] = loop_ub;
  r24->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r24, n, &di_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r24->data[r24->size[0] * ixstart + r24->size[0] * r24->size[1] * n] =
        this->BoardCoords->data[this->BoardCoords->size[0] * ixstart +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }
  }

  n = this->BoardCoords->size[0];
  if (!(3 <= n)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, n, &ug_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = r25->size[0] * r25->size[1] * r25->size[2];
  r25->size[0] = 1;
  r25->size[1] = loop_ub;
  r25->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r25, n, &ei_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r25->data[r25->size[0] * ixstart + r25->size[0] * r25->size[1] * n] =
        this->BoardCoords->data[(this->BoardCoords->size[0] * ixstart +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) + 2];
    }
  }

  for (n = 0; n < 3; n++) {
    iv7[n] = r24->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = r25->size[n];
  }

  emlrtSizeEqCheckNDR2012b(iv7, b_b, &mb_emlrtECI, sp);
  n = r26->size[0] * r26->size[1] * r26->size[2];
  r26->size[0] = 1;
  r26->size[1] = r24->size[1];
  r26->size[2] = r24->size[2];
  emxEnsureCapacity_real_T1(sp, r26, n, &di_emlrtRTEI);
  loop_ub = r24->size[0] * r24->size[1] * r24->size[2];
  for (n = 0; n < loop_ub; n++) {
    r26->data[n] = r24->data[n] - r25->data[n];
  }

  emxFree_real_T(&r25);
  emxFree_real_T(&r24);
  emxInit_real_T1(sp, &denom, 2, &si_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_num, 1, &fi_emlrtRTEI, true);
  st.site = &th_emlrtRSI;
  squeeze(&st, r26, denom);
  n = num->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &tg_emlrtBCI, sp);
  }

  n = num->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &sg_emlrtBCI, sp);
  }

  n = denom->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &rg_emlrtBCI, sp);
  }

  n = denom->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &qg_emlrtBCI, sp);
  }

  loop_ub = num->size[0];
  n = b_num->size[0];
  b_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, b_num, n, &fi_emlrtRTEI);
  emxFree_real_T(&r26);
  for (n = 0; n < loop_ub; n++) {
    b_num->data[n] = num->data[n];
  }

  emxInit_real_T2(sp, &c_num, 1, &gi_emlrtRTEI, true);
  loop_ub = num->size[0];
  n = c_num->size[0];
  c_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, c_num, n, &gi_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    c_num->data[n] = num->data[n + num->size[0]];
  }

  emxFree_real_T(&num);
  emxInit_real_T2(sp, &r27, 1, &ui_emlrtRTEI, true);
  st.site = &uh_emlrtRSI;
  c_hypot(&st, b_num, c_num, r27);
  loop_ub = denom->size[0];
  n = b_num->size[0];
  b_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, b_num, n, &hi_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    b_num->data[n] = denom->data[n];
  }

  loop_ub = denom->size[0];
  n = c_num->size[0];
  c_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, c_num, n, &ii_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    c_num->data[n] = denom->data[n + denom->size[0]];
  }

  emxFree_real_T(&denom);
  emxInit_real_T2(sp, &r28, 1, &vi_emlrtRTEI, true);
  st.site = &uh_emlrtRSI;
  c_hypot(&st, b_num, c_num, r28);
  st.site = &uh_emlrtRSI;
  rdivide(&st, r27, r28, b_num);
  st.site = &uh_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  emxFree_real_T(&c_num);
  emxFree_real_T(&r28);
  emxFree_real_T(&r27);
  if ((b_num->size[0] == 1) || (b_num->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&c_st, &um_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_num->size[0] > 0)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &tm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &pc_emlrtRSI;
  ixstart = 1;
  n = b_num->size[0];
  mtmp = b_num->data[0];
  if (b_num->size[0] > 1) {
    if (muDoubleScalarIsNaN(b_num->data[0])) {
      e_st.site = &rc_emlrtRSI;
      overflow = (b_num->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      b_loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (b_loop_ub <= n)) {
        ixstart = b_loop_ub;
        if (!muDoubleScalarIsNaN(b_num->data[b_loop_ub - 1])) {
          mtmp = b_num->data[b_loop_ub - 1];
          exitg1 = true;
        } else {
          b_loop_ub++;
        }
      }
    }

    if (ixstart < b_num->size[0]) {
      e_st.site = &qc_emlrtRSI;
      overflow = ((!(ixstart + 1 > b_num->size[0])) && (b_num->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= n) {
        if (b_num->data[ixstart] > mtmp) {
          mtmp = b_num->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&b_num);
  if ((oldEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    newEnergy = oldEnergy;
  } else {
    newEnergy = (real32_T)mtmp;
  }

  d4 = (real_T)this->BoardCoords->size[1] - 2.0;
  i = 0;
  emxInit_real_T(sp, &d_num, 3, &ri_emlrtRTEI, true);
  emxInit_real_T(sp, &b_denom, 3, &si_emlrtRTEI, true);
  emxInit_real_T(sp, &r29, 3, &ti_emlrtRTEI, true);
  while (i <= (int32_T)d4 - 1) {
    n = this->BoardCoords->size[0];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &pg_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    if (!((i + 1 >= 1) && (i + 1 <= n))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, n, &og_emlrtBCI, sp);
    }

    ixstart = i + 1;
    n = d_num->size[0] * d_num->size[1] * d_num->size[2];
    d_num->size[0] = 1;
    d_num->size[1] = 1;
    d_num->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, d_num, n, &ji_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      d_num->data[d_num->size[0] * d_num->size[1] * n] = this->BoardCoords->
        data[this->BoardCoords->size[0] * (ixstart - 1) + this->
        BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }

    n = this->BoardCoords->size[0];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &ng_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    ixstart = (int32_T)((1.0 + (real_T)i) + 2.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &mg_emlrtBCI, sp);
    }

    n = r29->size[0] * r29->size[1] * r29->size[2];
    r29->size[0] = 1;
    r29->size[1] = 1;
    r29->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r29, n, &ki_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      r29->data[r29->size[0] * r29->size[1] * n] = this->BoardCoords->data
        [this->BoardCoords->size[0] * (ixstart - 1) + this->BoardCoords->size[0]
        * this->BoardCoords->size[1] * n];
    }

    for (n = 0; n < 3; n++) {
      b_b[n] = d_num->size[n];
    }

    for (n = 0; n < 3; n++) {
      iv7[n] = r29->size[n];
    }

    emlrtSizeEqCheckNDR2012b(b_b, iv7, &lb_emlrtECI, sp);
    n = this->BoardCoords->size[0];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &lg_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    ixstart = (int32_T)((1.0 + (real_T)i) + 1.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &kg_emlrtBCI, sp);
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    b_denom->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &li_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[b_denom->size[0] * b_denom->size[1] * n] = this->
        BoardCoords->data[this->BoardCoords->size[0] * (ixstart - 1) +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &mi_emlrtRTEI);
    ixstart = b_denom->size[0];
    n = b_denom->size[1];
    b_loop_ub = b_denom->size[2];
    loop_ub = ixstart * n * b_loop_ub;
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[n] *= 2.0;
    }

    for (n = 0; n < 3; n++) {
      b_b[n] = d_num->size[n];
    }

    for (n = 0; n < 3; n++) {
      c_denom[n] = b_denom->size[n];
    }

    emlrtSizeEqCheckNDR2012b(b_b, c_denom, &lb_emlrtECI, sp);
    n = d_num->size[0] * d_num->size[1] * d_num->size[2];
    d_num->size[0] = 1;
    d_num->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, d_num, n, &ni_emlrtRTEI);
    ixstart = d_num->size[0];
    n = d_num->size[1];
    b_loop_ub = d_num->size[2];
    loop_ub = ixstart * n * b_loop_ub;
    for (n = 0; n < loop_ub; n++) {
      d_num->data[n] = (d_num->data[n] + r29->data[n]) - b_denom->data[n];
    }

    n = this->BoardCoords->size[0];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &jg_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    if (!((i + 1 >= 1) && (i + 1 <= n))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, n, &ig_emlrtBCI, sp);
    }

    ixstart = i + 1;
    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    b_denom->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &oi_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[b_denom->size[0] * b_denom->size[1] * n] = this->
        BoardCoords->data[this->BoardCoords->size[0] * (ixstart - 1) +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }

    n = this->BoardCoords->size[0];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &hg_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    ixstart = (int32_T)((1.0 + (real_T)i) + 2.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &gg_emlrtBCI, sp);
    }

    n = r29->size[0] * r29->size[1] * r29->size[2];
    r29->size[0] = 1;
    r29->size[1] = 1;
    r29->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r29, n, &pi_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      r29->data[r29->size[0] * r29->size[1] * n] = this->BoardCoords->data
        [this->BoardCoords->size[0] * (ixstart - 1) + this->BoardCoords->size[0]
        * this->BoardCoords->size[1] * n];
    }

    for (n = 0; n < 3; n++) {
      c_denom[n] = b_denom->size[n];
    }

    for (n = 0; n < 3; n++) {
      iv7[n] = r29->size[n];
    }

    emlrtSizeEqCheckNDR2012b(c_denom, iv7, &kb_emlrtECI, sp);
    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &qi_emlrtRTEI);
    ixstart = b_denom->size[0];
    n = b_denom->size[1];
    b_loop_ub = b_denom->size[2];
    loop_ub = ixstart * n * b_loop_ub;
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[n] -= r29->data[n];
    }

    e_num[0] = d_num->size[2];
    f_num = *d_num;
    f_num.size = (int32_T *)&e_num;
    f_num.numDimensions = 1;
    st.site = &vh_emlrtRSI;
    mtmp = norm(&f_num);
    d_denom[0] = b_denom->size[2];
    f_num = *b_denom;
    f_num.size = (int32_T *)&d_denom;
    f_num.numDimensions = 1;
    st.site = &vh_emlrtRSI;
    y = norm(&f_num);
    mtmp /= y;
    if ((newEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    } else {
      newEnergy = (real32_T)mtmp;
    }

    i++;
  }

  emxFree_real_T(&r29);
  emxFree_real_T(&b_denom);
  emxFree_real_T(&d_num);
  ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  newEnergy = newEnergy * (real32_T)ixstart - (real32_T)(this->BoardIdx->size[0]
    * this->BoardIdx->size[1]);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return newEnergy;
}

static void c_Checkerboard_predictPointsHor(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, emxArray_real_T *newPoints)
{
  emxArray_real_T *b_this;
  int32_T b_newPoints;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *p1;
  int32_T i28;
  int32_T c_newPoints[2];
  int32_T b_p1[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_this, 3, &ef_emlrtRTEI, true);
  b_newPoints = this->BoardCoords->size[1];
  if (!(2 <= b_newPoints)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, b_newPoints, &le_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  b_newPoints = b_this->size[0] * b_this->size[1] * b_this->size[2];
  b_this->size[0] = loop_ub;
  b_this->size[1] = 1;
  b_this->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_this, b_newPoints, &ef_emlrtRTEI);
  for (b_newPoints = 0; b_newPoints < b_loop_ub; b_newPoints++) {
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_this->data[i28 + b_this->size[0] * b_this->size[1] * b_newPoints] =
        this->BoardCoords->data[(i28 + this->BoardCoords->size[0]) +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * b_newPoints];
    }
  }

  emxInit_real_T1(sp, &p1, 2, &lj_emlrtRTEI, true);
  st.site = &ai_emlrtRSI;
  b_squeeze(&st, b_this, p1);
  b_newPoints = this->BoardCoords->size[1];
  if (!(1 <= b_newPoints)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_newPoints, &ne_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  b_newPoints = b_this->size[0] * b_this->size[1] * b_this->size[2];
  b_this->size[0] = loop_ub;
  b_this->size[1] = 1;
  b_this->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_this, b_newPoints, &hf_emlrtRTEI);
  for (b_newPoints = 0; b_newPoints < b_loop_ub; b_newPoints++) {
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_this->data[i28 + b_this->size[0] * b_this->size[1] * b_newPoints] =
        this->BoardCoords->data[i28 + this->BoardCoords->size[0] *
        this->BoardCoords->size[1] * b_newPoints];
    }
  }

  st.site = &bi_emlrtRSI;
  b_squeeze(&st, b_this, newPoints);
  emxFree_real_T(&b_this);
  for (b_newPoints = 0; b_newPoints < 2; b_newPoints++) {
    c_newPoints[b_newPoints] = newPoints->size[b_newPoints];
  }

  for (b_newPoints = 0; b_newPoints < 2; b_newPoints++) {
    b_p1[b_newPoints] = p1->size[b_newPoints];
  }

  if ((c_newPoints[0] != b_p1[0]) || (c_newPoints[1] != b_p1[1])) {
    emlrtSizeEqCheckNDR2012b(&c_newPoints[0], &b_p1[0], &v_emlrtECI, sp);
  }

  b_newPoints = newPoints->size[0] * newPoints->size[1];
  emxEnsureCapacity_real_T(sp, newPoints, b_newPoints, &kj_emlrtRTEI);
  b_newPoints = newPoints->size[0];
  loop_ub = newPoints->size[1];
  loop_ub *= b_newPoints;
  for (b_newPoints = 0; b_newPoints < loop_ub; b_newPoints++) {
    newPoints->data[b_newPoints] = (newPoints->data[b_newPoints] +
      newPoints->data[b_newPoints]) - p1->data[b_newPoints];
  }

  emxFree_real_T(&p1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void c_Checkerboard_predictPointsVer(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, emxArray_real_T *newPoints)
{
  emxArray_real_T *b_this;
  int32_T b_newPoints;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *p1;
  int32_T i19;
  int32_T c_newPoints[2];
  int32_T b_p1[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_this, 3, &ah_emlrtRTEI, true);
  b_newPoints = this->BoardCoords->size[0];
  if (!(2 <= b_newPoints)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, b_newPoints, &xf_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  b_newPoints = b_this->size[0] * b_this->size[1] * b_this->size[2];
  b_this->size[0] = 1;
  b_this->size[1] = loop_ub;
  b_this->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_this, b_newPoints, &ah_emlrtRTEI);
  for (b_newPoints = 0; b_newPoints < b_loop_ub; b_newPoints++) {
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_this->data[b_this->size[0] * i19 + b_this->size[0] * b_this->size[1] *
        b_newPoints] = this->BoardCoords->data[(this->BoardCoords->size[0] * i19
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * b_newPoints)
        + 1];
    }
  }

  emxInit_real_T1(sp, &p1, 2, &dh_emlrtRTEI, true);
  st.site = &mh_emlrtRSI;
  squeeze(&st, b_this, p1);
  b_newPoints = this->BoardCoords->size[0];
  if (!(1 <= b_newPoints)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_newPoints, &yf_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  b_newPoints = b_this->size[0] * b_this->size[1] * b_this->size[2];
  b_this->size[0] = 1;
  b_this->size[1] = loop_ub;
  b_this->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_this, b_newPoints, &bh_emlrtRTEI);
  for (b_newPoints = 0; b_newPoints < b_loop_ub; b_newPoints++) {
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_this->data[b_this->size[0] * i19 + b_this->size[0] * b_this->size[1] *
        b_newPoints] = this->BoardCoords->data[this->BoardCoords->size[0] * i19
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * b_newPoints];
    }
  }

  st.site = &nh_emlrtRSI;
  squeeze(&st, b_this, newPoints);
  emxFree_real_T(&b_this);
  for (b_newPoints = 0; b_newPoints < 2; b_newPoints++) {
    c_newPoints[b_newPoints] = newPoints->size[b_newPoints];
  }

  for (b_newPoints = 0; b_newPoints < 2; b_newPoints++) {
    b_p1[b_newPoints] = p1->size[b_newPoints];
  }

  if ((c_newPoints[0] != b_p1[0]) || (c_newPoints[1] != b_p1[1])) {
    emlrtSizeEqCheckNDR2012b(&c_newPoints[0], &b_p1[0], &fb_emlrtECI, sp);
  }

  b_newPoints = newPoints->size[0] * newPoints->size[1];
  emxEnsureCapacity_real_T(sp, newPoints, b_newPoints, &ch_emlrtRTEI);
  b_newPoints = newPoints->size[0];
  loop_ub = newPoints->size[1];
  loop_ub *= b_newPoints;
  for (b_newPoints = 0; b_newPoints < loop_ub; b_newPoints++) {
    newPoints->data[b_newPoints] = (newPoints->data[b_newPoints] +
      newPoints->data[b_newPoints]) - p1->data[b_newPoints];
  }

  emxFree_real_T(&p1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real32_T d_Checkerboard_computeNewEnergy(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *idx, real32_T
  oldEnergy)
{
  real32_T newEnergy;
  emxArray_real_T *r34;
  int32_T n;
  int32_T loop_ub;
  int32_T b_loop_ub;
  real_T d7;
  int32_T b_idx;
  emxArray_real_T *r35;
  int32_T ixstart;
  int32_T iv10[3];
  emxArray_real_T *b;
  int32_T b_b[3];
  emxArray_real_T *r36;
  emxArray_real_T *num;
  emxArray_real_T *denom;
  emxArray_real_T *b_num;
  emxArray_real_T *c_num;
  emxArray_real_T *r37;
  emxArray_real_T *r38;
  boolean_T overflow;
  real_T mtmp;
  boolean_T exitg1;
  int32_T i;
  emxArray_real_T *d_num;
  emxArray_real_T *b_denom;
  emxArray_real_T *r39;
  int32_T c_denom[3];
  int32_T e_num[1];
  emxArray_real_T f_num;
  int32_T d_denom[1];
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r34, 3, &ti_emlrtRTEI, true);
  n = idx->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &qh_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = this->BoardCoords->size[0];
  d7 = idx->data[0];
  if (d7 != (int32_T)muDoubleScalarFloor(d7)) {
    emlrtIntegerCheckR2012b(d7, &wb_emlrtDCI, sp);
  }

  b_idx = (int32_T)d7;
  if (!((b_idx >= 1) && (b_idx <= n))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &yg_emlrtBCI, sp);
  }

  n = r34->size[0] * r34->size[1] * r34->size[2];
  r34->size[0] = 1;
  r34->size[1] = loop_ub;
  r34->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r34, n, &yh_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r34->data[r34->size[0] * ixstart + r34->size[0] * r34->size[1] * n] =
        this->BoardCoords->data[((b_idx + this->BoardCoords->size[0] * ixstart)
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }
  }

  emxInit_real_T(sp, &r35, 3, &ti_emlrtRTEI, true);
  n = idx->size[1];
  if (!(3 <= n)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, n, &ph_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = this->BoardCoords->size[0];
  d7 = idx->data[2];
  if (d7 != (int32_T)muDoubleScalarFloor(d7)) {
    emlrtIntegerCheckR2012b(d7, &vb_emlrtDCI, sp);
  }

  b_idx = (int32_T)d7;
  if (!((b_idx >= 1) && (b_idx <= n))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &xg_emlrtBCI, sp);
  }

  n = r35->size[0] * r35->size[1] * r35->size[2];
  r35->size[0] = 1;
  r35->size[1] = loop_ub;
  r35->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r35, n, &ai_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r35->data[r35->size[0] * ixstart + r35->size[0] * r35->size[1] * n] =
        this->BoardCoords->data[((b_idx + this->BoardCoords->size[0] * ixstart)
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }
  }

  for (n = 0; n < 3; n++) {
    iv10[n] = r34->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = r35->size[n];
  }

  emxInit_real_T(sp, &b, 3, &bi_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(iv10, b_b, &nb_emlrtECI, sp);
  n = idx->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &oh_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = this->BoardCoords->size[0];
  d7 = idx->data[1];
  if (d7 != (int32_T)muDoubleScalarFloor(d7)) {
    emlrtIntegerCheckR2012b(d7, &ub_emlrtDCI, sp);
  }

  b_idx = (int32_T)d7;
  if (!((b_idx >= 1) && (b_idx <= n))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &wg_emlrtBCI, sp);
  }

  n = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = loop_ub;
  b->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b, n, &bi_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      b->data[b->size[0] * ixstart + b->size[0] * b->size[1] * n] =
        this->BoardCoords->data[((b_idx + this->BoardCoords->size[0] * ixstart)
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }
  }

  n = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  emxEnsureCapacity_real_T1(sp, b, n, &ci_emlrtRTEI);
  ixstart = b->size[0];
  n = b->size[1];
  b_loop_ub = b->size[2];
  loop_ub = ixstart * n * b_loop_ub;
  for (n = 0; n < loop_ub; n++) {
    b->data[n] *= 2.0;
  }

  for (n = 0; n < 3; n++) {
    iv10[n] = r34->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = b->size[n];
  }

  emxInit_real_T(sp, &r36, 3, &yh_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(iv10, b_b, &nb_emlrtECI, sp);
  n = r36->size[0] * r36->size[1] * r36->size[2];
  r36->size[0] = 1;
  r36->size[1] = r34->size[1];
  r36->size[2] = r34->size[2];
  emxEnsureCapacity_real_T1(sp, r36, n, &yh_emlrtRTEI);
  loop_ub = r34->size[0] * r34->size[1] * r34->size[2];
  for (n = 0; n < loop_ub; n++) {
    r36->data[n] = (r34->data[n] + r35->data[n]) - b->data[n];
  }

  emxFree_real_T(&b);
  emxInit_real_T1(sp, &num, 2, &ri_emlrtRTEI, true);
  st.site = &sh_emlrtRSI;
  squeeze(&st, r36, num);
  n = idx->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &nh_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = this->BoardCoords->size[0];
  d7 = idx->data[0];
  if (d7 != (int32_T)muDoubleScalarFloor(d7)) {
    emlrtIntegerCheckR2012b(d7, &tb_emlrtDCI, sp);
  }

  b_idx = (int32_T)d7;
  if (!((b_idx >= 1) && (b_idx <= n))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &vg_emlrtBCI, sp);
  }

  n = r34->size[0] * r34->size[1] * r34->size[2];
  r34->size[0] = 1;
  r34->size[1] = loop_ub;
  r34->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r34, n, &di_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r34->data[r34->size[0] * ixstart + r34->size[0] * r34->size[1] * n] =
        this->BoardCoords->data[((b_idx + this->BoardCoords->size[0] * ixstart)
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }
  }

  n = idx->size[1];
  if (!(3 <= n)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, n, &mh_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  n = this->BoardCoords->size[0];
  d7 = idx->data[2];
  if (d7 != (int32_T)muDoubleScalarFloor(d7)) {
    emlrtIntegerCheckR2012b(d7, &sb_emlrtDCI, sp);
  }

  b_idx = (int32_T)d7;
  if (!((b_idx >= 1) && (b_idx <= n))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &ug_emlrtBCI, sp);
  }

  n = r35->size[0] * r35->size[1] * r35->size[2];
  r35->size[0] = 1;
  r35->size[1] = loop_ub;
  r35->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r35, n, &ei_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r35->data[r35->size[0] * ixstart + r35->size[0] * r35->size[1] * n] =
        this->BoardCoords->data[((b_idx + this->BoardCoords->size[0] * ixstart)
        + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }
  }

  for (n = 0; n < 3; n++) {
    iv10[n] = r34->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = r35->size[n];
  }

  emlrtSizeEqCheckNDR2012b(iv10, b_b, &mb_emlrtECI, sp);
  n = r36->size[0] * r36->size[1] * r36->size[2];
  r36->size[0] = 1;
  r36->size[1] = r34->size[1];
  r36->size[2] = r34->size[2];
  emxEnsureCapacity_real_T1(sp, r36, n, &di_emlrtRTEI);
  loop_ub = r34->size[0] * r34->size[1] * r34->size[2];
  for (n = 0; n < loop_ub; n++) {
    r36->data[n] = r34->data[n] - r35->data[n];
  }

  emxFree_real_T(&r35);
  emxFree_real_T(&r34);
  emxInit_real_T1(sp, &denom, 2, &si_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_num, 1, &fi_emlrtRTEI, true);
  st.site = &th_emlrtRSI;
  squeeze(&st, r36, denom);
  n = num->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &tg_emlrtBCI, sp);
  }

  n = num->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &sg_emlrtBCI, sp);
  }

  n = denom->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &rg_emlrtBCI, sp);
  }

  n = denom->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &qg_emlrtBCI, sp);
  }

  loop_ub = num->size[0];
  n = b_num->size[0];
  b_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, b_num, n, &fi_emlrtRTEI);
  emxFree_real_T(&r36);
  for (n = 0; n < loop_ub; n++) {
    b_num->data[n] = num->data[n];
  }

  emxInit_real_T2(sp, &c_num, 1, &gi_emlrtRTEI, true);
  loop_ub = num->size[0];
  n = c_num->size[0];
  c_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, c_num, n, &gi_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    c_num->data[n] = num->data[n + num->size[0]];
  }

  emxFree_real_T(&num);
  emxInit_real_T2(sp, &r37, 1, &ui_emlrtRTEI, true);
  st.site = &uh_emlrtRSI;
  c_hypot(&st, b_num, c_num, r37);
  loop_ub = denom->size[0];
  n = b_num->size[0];
  b_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, b_num, n, &hi_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    b_num->data[n] = denom->data[n];
  }

  loop_ub = denom->size[0];
  n = c_num->size[0];
  c_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, c_num, n, &ii_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    c_num->data[n] = denom->data[n + denom->size[0]];
  }

  emxFree_real_T(&denom);
  emxInit_real_T2(sp, &r38, 1, &vi_emlrtRTEI, true);
  st.site = &uh_emlrtRSI;
  c_hypot(&st, b_num, c_num, r38);
  st.site = &uh_emlrtRSI;
  rdivide(&st, r37, r38, b_num);
  st.site = &uh_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  emxFree_real_T(&c_num);
  emxFree_real_T(&r38);
  emxFree_real_T(&r37);
  if ((b_num->size[0] == 1) || (b_num->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&c_st, &um_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_num->size[0] > 0)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &tm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &pc_emlrtRSI;
  ixstart = 1;
  n = b_num->size[0];
  mtmp = b_num->data[0];
  if (b_num->size[0] > 1) {
    if (muDoubleScalarIsNaN(b_num->data[0])) {
      e_st.site = &rc_emlrtRSI;
      overflow = (b_num->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      b_loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (b_loop_ub <= n)) {
        ixstart = b_loop_ub;
        if (!muDoubleScalarIsNaN(b_num->data[b_loop_ub - 1])) {
          mtmp = b_num->data[b_loop_ub - 1];
          exitg1 = true;
        } else {
          b_loop_ub++;
        }
      }
    }

    if (ixstart < b_num->size[0]) {
      e_st.site = &qc_emlrtRSI;
      overflow = ((!(ixstart + 1 > b_num->size[0])) && (b_num->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= n) {
        if (b_num->data[ixstart] > mtmp) {
          mtmp = b_num->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&b_num);
  if ((oldEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    newEnergy = oldEnergy;
  } else {
    newEnergy = (real32_T)mtmp;
  }

  d7 = (real_T)this->BoardCoords->size[1] - 2.0;
  i = 0;
  emxInit_real_T(sp, &d_num, 3, &ri_emlrtRTEI, true);
  emxInit_real_T(sp, &b_denom, 3, &si_emlrtRTEI, true);
  emxInit_real_T(sp, &r39, 3, &ti_emlrtRTEI, true);
  while (i <= (int32_T)d7 - 1) {
    n = idx->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &lh_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    if (!((i + 1 >= 1) && (i + 1 <= n))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, n, &og_emlrtBCI, sp);
    }

    ixstart = i + 1;
    n = this->BoardCoords->size[0];
    mtmp = idx->data[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &rb_emlrtDCI, sp);
    }

    b_idx = (int32_T)mtmp;
    if (!((b_idx >= 1) && (b_idx <= n))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &pg_emlrtBCI, sp);
    }

    n = d_num->size[0] * d_num->size[1] * d_num->size[2];
    d_num->size[0] = 1;
    d_num->size[1] = 1;
    d_num->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, d_num, n, &ji_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      d_num->data[d_num->size[0] * d_num->size[1] * n] = this->BoardCoords->
        data[((b_idx + this->BoardCoords->size[0] * (ixstart - 1)) +
              this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }

    n = idx->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &kh_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    ixstart = (int32_T)((1.0 + (real_T)i) + 2.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &mg_emlrtBCI, sp);
    }

    n = this->BoardCoords->size[0];
    mtmp = idx->data[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &qb_emlrtDCI, sp);
    }

    b_idx = (int32_T)mtmp;
    if (!((b_idx >= 1) && (b_idx <= n))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &ng_emlrtBCI, sp);
    }

    n = r39->size[0] * r39->size[1] * r39->size[2];
    r39->size[0] = 1;
    r39->size[1] = 1;
    r39->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r39, n, &ki_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      r39->data[r39->size[0] * r39->size[1] * n] = this->BoardCoords->data
        [((b_idx + this->BoardCoords->size[0] * (ixstart - 1)) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }

    for (n = 0; n < 3; n++) {
      b_b[n] = d_num->size[n];
    }

    for (n = 0; n < 3; n++) {
      iv10[n] = r39->size[n];
    }

    emlrtSizeEqCheckNDR2012b(b_b, iv10, &lb_emlrtECI, sp);
    n = idx->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &jh_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    ixstart = (int32_T)((1.0 + (real_T)i) + 1.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &kg_emlrtBCI, sp);
    }

    n = this->BoardCoords->size[0];
    mtmp = idx->data[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &pb_emlrtDCI, sp);
    }

    b_idx = (int32_T)mtmp;
    if (!((b_idx >= 1) && (b_idx <= n))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &lg_emlrtBCI, sp);
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    b_denom->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &li_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[b_denom->size[0] * b_denom->size[1] * n] = this->
        BoardCoords->data[((b_idx + this->BoardCoords->size[0] * (ixstart - 1))
                           + this->BoardCoords->size[0] * this->
                           BoardCoords->size[1] * n) - 1];
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &mi_emlrtRTEI);
    b_loop_ub = b_denom->size[0];
    ixstart = b_denom->size[1];
    n = b_denom->size[2];
    loop_ub = b_loop_ub * ixstart * n;
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[n] *= 2.0;
    }

    for (n = 0; n < 3; n++) {
      b_b[n] = d_num->size[n];
    }

    for (n = 0; n < 3; n++) {
      c_denom[n] = b_denom->size[n];
    }

    emlrtSizeEqCheckNDR2012b(b_b, c_denom, &lb_emlrtECI, sp);
    n = d_num->size[0] * d_num->size[1] * d_num->size[2];
    d_num->size[0] = 1;
    d_num->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, d_num, n, &ni_emlrtRTEI);
    b_loop_ub = d_num->size[0];
    ixstart = d_num->size[1];
    n = d_num->size[2];
    loop_ub = b_loop_ub * ixstart * n;
    for (n = 0; n < loop_ub; n++) {
      d_num->data[n] = (d_num->data[n] + r39->data[n]) - b_denom->data[n];
    }

    n = idx->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &ih_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    if (!((i + 1 >= 1) && (i + 1 <= n))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, n, &ig_emlrtBCI, sp);
    }

    ixstart = i + 1;
    n = this->BoardCoords->size[0];
    mtmp = idx->data[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &ob_emlrtDCI, sp);
    }

    b_idx = (int32_T)mtmp;
    if (!((b_idx >= 1) && (b_idx <= n))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &jg_emlrtBCI, sp);
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    b_denom->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &oi_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[b_denom->size[0] * b_denom->size[1] * n] = this->
        BoardCoords->data[((b_idx + this->BoardCoords->size[0] * (ixstart - 1))
                           + this->BoardCoords->size[0] * this->
                           BoardCoords->size[1] * n) - 1];
    }

    n = idx->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &hh_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[1];
    ixstart = (int32_T)((1.0 + (real_T)i) + 2.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &gg_emlrtBCI, sp);
    }

    n = this->BoardCoords->size[0];
    mtmp = idx->data[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &nb_emlrtDCI, sp);
    }

    b_idx = (int32_T)mtmp;
    if (!((b_idx >= 1) && (b_idx <= n))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, n, &hg_emlrtBCI, sp);
    }

    n = r39->size[0] * r39->size[1] * r39->size[2];
    r39->size[0] = 1;
    r39->size[1] = 1;
    r39->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r39, n, &pi_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      r39->data[r39->size[0] * r39->size[1] * n] = this->BoardCoords->data
        [((b_idx + this->BoardCoords->size[0] * (ixstart - 1)) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * n) - 1];
    }

    for (n = 0; n < 3; n++) {
      c_denom[n] = b_denom->size[n];
    }

    for (n = 0; n < 3; n++) {
      iv10[n] = r39->size[n];
    }

    emlrtSizeEqCheckNDR2012b(c_denom, iv10, &kb_emlrtECI, sp);
    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &qi_emlrtRTEI);
    b_loop_ub = b_denom->size[0];
    ixstart = b_denom->size[1];
    n = b_denom->size[2];
    loop_ub = b_loop_ub * ixstart * n;
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[n] -= r39->data[n];
    }

    e_num[0] = d_num->size[2];
    f_num = *d_num;
    f_num.size = (int32_T *)&e_num;
    f_num.numDimensions = 1;
    st.site = &vh_emlrtRSI;
    mtmp = norm(&f_num);
    d_denom[0] = b_denom->size[2];
    f_num = *b_denom;
    f_num.size = (int32_T *)&d_denom;
    f_num.numDimensions = 1;
    st.site = &vh_emlrtRSI;
    y = norm(&f_num);
    mtmp /= y;
    if ((newEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    } else {
      newEnergy = (real32_T)mtmp;
    }

    i++;
  }

  emxFree_real_T(&r39);
  emxFree_real_T(&b_denom);
  emxFree_real_T(&d_num);
  ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  newEnergy = newEnergy * (real32_T)ixstart - (real32_T)(this->BoardIdx->size[0]
    * this->BoardIdx->size[1]);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return newEnergy;
}

static void d_Checkerboard_predictPointsVer(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, const emxArray_real_T *idx,
  emxArray_real_T *newPoints)
{
  emxArray_real_T *b_this;
  int32_T b_newPoints;
  int32_T loop_ub;
  int32_T b_loop_ub;
  real_T d5;
  int32_T b_idx;
  emxArray_real_T *p1;
  int32_T i25;
  int32_T c_newPoints[2];
  int32_T b_p1[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_this, 3, &ah_emlrtRTEI, true);
  b_newPoints = idx->size[1];
  if (!(2 <= b_newPoints)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, b_newPoints, &ah_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  d5 = idx->data[1];
  if (d5 != (int32_T)muDoubleScalarFloor(d5)) {
    emlrtIntegerCheckR2012b(d5, &hb_emlrtDCI, sp);
  }

  b_newPoints = this->BoardCoords->size[0];
  b_idx = (int32_T)d5;
  if (!((b_idx >= 1) && (b_idx <= b_newPoints))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, b_newPoints, &xf_emlrtBCI, sp);
  }

  b_newPoints = b_this->size[0] * b_this->size[1] * b_this->size[2];
  b_this->size[0] = 1;
  b_this->size[1] = loop_ub;
  b_this->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_this, b_newPoints, &ah_emlrtRTEI);
  for (b_newPoints = 0; b_newPoints < b_loop_ub; b_newPoints++) {
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_this->data[b_this->size[0] * i25 + b_this->size[0] * b_this->size[1] *
        b_newPoints] = this->BoardCoords->data[((b_idx + this->BoardCoords->
        size[0] * i25) + this->BoardCoords->size[0] * this->BoardCoords->size[1]
        * b_newPoints) - 1];
    }
  }

  emxInit_real_T1(sp, &p1, 2, &dh_emlrtRTEI, true);
  st.site = &mh_emlrtRSI;
  squeeze(&st, b_this, p1);
  b_newPoints = idx->size[1];
  if (!(1 <= b_newPoints)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_newPoints, &bh_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[1];
  b_loop_ub = this->BoardCoords->size[2];
  d5 = idx->data[0];
  if (d5 != (int32_T)muDoubleScalarFloor(d5)) {
    emlrtIntegerCheckR2012b(d5, &ib_emlrtDCI, sp);
  }

  b_newPoints = this->BoardCoords->size[0];
  b_idx = (int32_T)d5;
  if (!((b_idx >= 1) && (b_idx <= b_newPoints))) {
    emlrtDynamicBoundsCheckR2012b(b_idx, 1, b_newPoints, &yf_emlrtBCI, sp);
  }

  b_newPoints = b_this->size[0] * b_this->size[1] * b_this->size[2];
  b_this->size[0] = 1;
  b_this->size[1] = loop_ub;
  b_this->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_this, b_newPoints, &bh_emlrtRTEI);
  for (b_newPoints = 0; b_newPoints < b_loop_ub; b_newPoints++) {
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_this->data[b_this->size[0] * i25 + b_this->size[0] * b_this->size[1] *
        b_newPoints] = this->BoardCoords->data[((b_idx + this->BoardCoords->
        size[0] * i25) + this->BoardCoords->size[0] * this->BoardCoords->size[1]
        * b_newPoints) - 1];
    }
  }

  st.site = &nh_emlrtRSI;
  squeeze(&st, b_this, newPoints);
  emxFree_real_T(&b_this);
  for (b_newPoints = 0; b_newPoints < 2; b_newPoints++) {
    c_newPoints[b_newPoints] = newPoints->size[b_newPoints];
  }

  for (b_newPoints = 0; b_newPoints < 2; b_newPoints++) {
    b_p1[b_newPoints] = p1->size[b_newPoints];
  }

  if ((c_newPoints[0] != b_p1[0]) || (c_newPoints[1] != b_p1[1])) {
    emlrtSizeEqCheckNDR2012b(&c_newPoints[0], &b_p1[0], &fb_emlrtECI, sp);
  }

  b_newPoints = newPoints->size[0] * newPoints->size[1];
  emxEnsureCapacity_real_T(sp, newPoints, b_newPoints, &ch_emlrtRTEI);
  b_newPoints = newPoints->size[0];
  loop_ub = newPoints->size[1];
  loop_ub *= b_newPoints;
  for (b_newPoints = 0; b_newPoints < loop_ub; b_newPoints++) {
    newPoints->data[b_newPoints] = (newPoints->data[b_newPoints] +
      newPoints->data[b_newPoints]) - p1->data[b_newPoints];
  }

  emxFree_real_T(&p1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real32_T e_Checkerboard_computeNewEnergy(const emlrtStack *sp, const
  c_vision_internal_calibration_c *this, real32_T oldEnergy)
{
  real32_T newEnergy;
  emxArray_real_T *r44;
  int32_T n;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *r45;
  int32_T ixstart;
  int32_T iv14[3];
  emxArray_real_T *b;
  int32_T b_b[3];
  emxArray_real_T *r46;
  emxArray_real_T *num;
  emxArray_real_T *denom;
  emxArray_real_T *b_num;
  emxArray_real_T *c_num;
  emxArray_real_T *r47;
  emxArray_real_T *r48;
  boolean_T overflow;
  real_T mtmp;
  boolean_T exitg1;
  real_T d9;
  int32_T i;
  emxArray_real_T *d_num;
  emxArray_real_T *b_denom;
  emxArray_real_T *r49;
  int32_T c_denom[3];
  int32_T e_num[1];
  emxArray_real_T f_num;
  int32_T d_denom[1];
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r44, 3, &yj_emlrtRTEI, true);
  n = this->BoardCoords->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &te_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  n = r44->size[0] * r44->size[1] * r44->size[2];
  r44->size[0] = loop_ub;
  r44->size[1] = 1;
  r44->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r44, n, &xf_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r44->data[ixstart + r44->size[0] * r44->size[1] * n] = this->
        BoardCoords->data[ixstart + this->BoardCoords->size[0] *
        this->BoardCoords->size[1] * n];
    }
  }

  emxInit_real_T(sp, &r45, 3, &yj_emlrtRTEI, true);
  n = this->BoardCoords->size[1];
  if (!(3 <= n)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, n, &ve_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  n = r45->size[0] * r45->size[1] * r45->size[2];
  r45->size[0] = loop_ub;
  r45->size[1] = 1;
  r45->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r45, n, &yf_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r45->data[ixstart + r45->size[0] * r45->size[1] * n] = this->
        BoardCoords->data[(ixstart + (this->BoardCoords->size[0] << 1)) +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }
  }

  for (n = 0; n < 3; n++) {
    iv14[n] = r44->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = r45->size[n];
  }

  emxInit_real_T(sp, &b, 3, &ag_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(iv14, b_b, &bb_emlrtECI, sp);
  n = this->BoardCoords->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &xe_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  n = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = loop_ub;
  b->size[1] = 1;
  b->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b, n, &ag_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      b->data[ixstart + b->size[0] * b->size[1] * n] = this->BoardCoords->data
        [(ixstart + this->BoardCoords->size[0]) + this->BoardCoords->size[0] *
        this->BoardCoords->size[1] * n];
    }
  }

  n = b->size[0] * b->size[1] * b->size[2];
  b->size[1] = 1;
  emxEnsureCapacity_real_T1(sp, b, n, &bg_emlrtRTEI);
  ixstart = b->size[0];
  n = b->size[1];
  b_loop_ub = b->size[2];
  loop_ub = ixstart * n * b_loop_ub;
  for (n = 0; n < loop_ub; n++) {
    b->data[n] *= 2.0;
  }

  for (n = 0; n < 3; n++) {
    iv14[n] = r44->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = b->size[n];
  }

  emxInit_real_T(sp, &r46, 3, &xf_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(iv14, b_b, &bb_emlrtECI, sp);
  n = r46->size[0] * r46->size[1] * r46->size[2];
  r46->size[0] = r44->size[0];
  r46->size[1] = 1;
  r46->size[2] = r44->size[2];
  emxEnsureCapacity_real_T1(sp, r46, n, &xf_emlrtRTEI);
  loop_ub = r44->size[0] * r44->size[1] * r44->size[2];
  for (n = 0; n < loop_ub; n++) {
    r46->data[n] = (r44->data[n] + r45->data[n]) - b->data[n];
  }

  emxFree_real_T(&b);
  emxInit_real_T1(sp, &num, 2, &vg_emlrtRTEI, true);
  st.site = &ci_emlrtRSI;
  b_squeeze(&st, r46, num);
  n = this->BoardCoords->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &af_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  n = r44->size[0] * r44->size[1] * r44->size[2];
  r44->size[0] = loop_ub;
  r44->size[1] = 1;
  r44->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r44, n, &cg_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r44->data[ixstart + r44->size[0] * r44->size[1] * n] = this->
        BoardCoords->data[ixstart + this->BoardCoords->size[0] *
        this->BoardCoords->size[1] * n];
    }
  }

  n = this->BoardCoords->size[1];
  if (!(3 <= n)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, n, &cf_emlrtBCI, sp);
  }

  loop_ub = this->BoardCoords->size[0];
  b_loop_ub = this->BoardCoords->size[2];
  n = r45->size[0] * r45->size[1] * r45->size[2];
  r45->size[0] = loop_ub;
  r45->size[1] = 1;
  r45->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, r45, n, &dg_emlrtRTEI);
  for (n = 0; n < b_loop_ub; n++) {
    for (ixstart = 0; ixstart < loop_ub; ixstart++) {
      r45->data[ixstart + r45->size[0] * r45->size[1] * n] = this->
        BoardCoords->data[(ixstart + (this->BoardCoords->size[0] << 1)) +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * n];
    }
  }

  for (n = 0; n < 3; n++) {
    iv14[n] = r44->size[n];
  }

  for (n = 0; n < 3; n++) {
    b_b[n] = r45->size[n];
  }

  emlrtSizeEqCheckNDR2012b(iv14, b_b, &cb_emlrtECI, sp);
  n = r46->size[0] * r46->size[1] * r46->size[2];
  r46->size[0] = r44->size[0];
  r46->size[1] = 1;
  r46->size[2] = r44->size[2];
  emxEnsureCapacity_real_T1(sp, r46, n, &cg_emlrtRTEI);
  loop_ub = r44->size[0] * r44->size[1] * r44->size[2];
  for (n = 0; n < loop_ub; n++) {
    r46->data[n] = r44->data[n] - r45->data[n];
  }

  emxFree_real_T(&r45);
  emxFree_real_T(&r44);
  emxInit_real_T1(sp, &denom, 2, &wg_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_num, 1, &eg_emlrtRTEI, true);
  st.site = &di_emlrtRSI;
  b_squeeze(&st, r46, denom);
  n = num->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &df_emlrtBCI, sp);
  }

  n = num->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &ef_emlrtBCI, sp);
  }

  n = denom->size[1];
  if (!(1 <= n)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, n, &ff_emlrtBCI, sp);
  }

  n = denom->size[1];
  if (!(2 <= n)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, n, &gf_emlrtBCI, sp);
  }

  loop_ub = num->size[0];
  n = b_num->size[0];
  b_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, b_num, n, &eg_emlrtRTEI);
  emxFree_real_T(&r46);
  for (n = 0; n < loop_ub; n++) {
    b_num->data[n] = num->data[n];
  }

  emxInit_real_T2(sp, &c_num, 1, &fg_emlrtRTEI, true);
  loop_ub = num->size[0];
  n = c_num->size[0];
  c_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, c_num, n, &fg_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    c_num->data[n] = num->data[n + num->size[0]];
  }

  emxFree_real_T(&num);
  emxInit_real_T2(sp, &r47, 1, &xg_emlrtRTEI, true);
  st.site = &ei_emlrtRSI;
  c_hypot(&st, b_num, c_num, r47);
  loop_ub = denom->size[0];
  n = b_num->size[0];
  b_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, b_num, n, &gg_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    b_num->data[n] = denom->data[n];
  }

  loop_ub = denom->size[0];
  n = c_num->size[0];
  c_num->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(sp, c_num, n, &hg_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    c_num->data[n] = denom->data[n + denom->size[0]];
  }

  emxFree_real_T(&denom);
  emxInit_real_T2(sp, &r48, 1, &yg_emlrtRTEI, true);
  st.site = &ei_emlrtRSI;
  c_hypot(&st, b_num, c_num, r48);
  st.site = &ei_emlrtRSI;
  rdivide(&st, r47, r48, b_num);
  st.site = &ei_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  emxFree_real_T(&c_num);
  emxFree_real_T(&r48);
  emxFree_real_T(&r47);
  if ((b_num->size[0] == 1) || (b_num->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&c_st, &um_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_num->size[0] > 0)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &tm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &pc_emlrtRSI;
  ixstart = 1;
  n = b_num->size[0];
  mtmp = b_num->data[0];
  if (b_num->size[0] > 1) {
    if (muDoubleScalarIsNaN(b_num->data[0])) {
      e_st.site = &rc_emlrtRSI;
      overflow = (b_num->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      b_loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (b_loop_ub <= n)) {
        ixstart = b_loop_ub;
        if (!muDoubleScalarIsNaN(b_num->data[b_loop_ub - 1])) {
          mtmp = b_num->data[b_loop_ub - 1];
          exitg1 = true;
        } else {
          b_loop_ub++;
        }
      }
    }

    if (ixstart < b_num->size[0]) {
      e_st.site = &qc_emlrtRSI;
      overflow = ((!(ixstart + 1 > b_num->size[0])) && (b_num->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &pb_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= n) {
        if (b_num->data[ixstart] > mtmp) {
          mtmp = b_num->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&b_num);
  if ((oldEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    newEnergy = oldEnergy;
  } else {
    newEnergy = (real32_T)mtmp;
  }

  d9 = (real_T)this->BoardCoords->size[0] - 2.0;
  i = 0;
  emxInit_real_T(sp, &d_num, 3, &vg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_denom, 3, &wg_emlrtRTEI, true);
  emxInit_real_T(sp, &r49, 3, &yj_emlrtRTEI, true);
  while (i <= (int32_T)d9 - 1) {
    n = this->BoardCoords->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &jf_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= n))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, n, &hf_emlrtBCI, sp);
    }

    ixstart = i + 1;
    n = d_num->size[0] * d_num->size[1] * d_num->size[2];
    d_num->size[0] = 1;
    d_num->size[1] = 1;
    d_num->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, d_num, n, &ig_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      d_num->data[d_num->size[0] * d_num->size[1] * n] = this->BoardCoords->
        data[(ixstart + this->BoardCoords->size[0] * this->BoardCoords->size[1] *
              n) - 1];
    }

    n = this->BoardCoords->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &mf_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[0];
    ixstart = (int32_T)((1.0 + (real_T)i) + 2.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &kf_emlrtBCI, sp);
    }

    n = r49->size[0] * r49->size[1] * r49->size[2];
    r49->size[0] = 1;
    r49->size[1] = 1;
    r49->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r49, n, &jg_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      r49->data[r49->size[0] * r49->size[1] * n] = this->BoardCoords->data
        [(ixstart + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n)
        - 1];
    }

    for (n = 0; n < 3; n++) {
      b_b[n] = d_num->size[n];
    }

    for (n = 0; n < 3; n++) {
      iv14[n] = r49->size[n];
    }

    emlrtSizeEqCheckNDR2012b(b_b, iv14, &db_emlrtECI, sp);
    n = this->BoardCoords->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &pf_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[0];
    ixstart = (int32_T)((1.0 + (real_T)i) + 1.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &nf_emlrtBCI, sp);
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    b_denom->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &kg_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[b_denom->size[0] * b_denom->size[1] * n] = this->
        BoardCoords->data[(ixstart + this->BoardCoords->size[0] *
                           this->BoardCoords->size[1] * n) - 1];
    }

    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &lg_emlrtRTEI);
    ixstart = b_denom->size[0];
    n = b_denom->size[1];
    b_loop_ub = b_denom->size[2];
    loop_ub = ixstart * n * b_loop_ub;
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[n] *= 2.0;
    }

    for (n = 0; n < 3; n++) {
      b_b[n] = d_num->size[n];
    }

    for (n = 0; n < 3; n++) {
      c_denom[n] = b_denom->size[n];
    }

    emlrtSizeEqCheckNDR2012b(b_b, c_denom, &db_emlrtECI, sp);
    n = d_num->size[0] * d_num->size[1] * d_num->size[2];
    d_num->size[0] = 1;
    d_num->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, d_num, n, &mg_emlrtRTEI);
    ixstart = d_num->size[0];
    n = d_num->size[1];
    b_loop_ub = d_num->size[2];
    loop_ub = ixstart * n * b_loop_ub;
    for (n = 0; n < loop_ub; n++) {
      d_num->data[n] = (d_num->data[n] + r49->data[n]) - b_denom->data[n];
    }

    n = this->BoardCoords->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &sf_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= n))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, n, &qf_emlrtBCI, sp);
    }

    ixstart = i + 1;
    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    b_denom->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &ng_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[b_denom->size[0] * b_denom->size[1] * n] = this->
        BoardCoords->data[(ixstart + this->BoardCoords->size[0] *
                           this->BoardCoords->size[1] * n) - 1];
    }

    n = this->BoardCoords->size[1];
    if (!(1 <= n)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &vf_emlrtBCI, sp);
    }

    loop_ub = this->BoardCoords->size[2];
    n = this->BoardCoords->size[0];
    ixstart = (int32_T)((1.0 + (real_T)i) + 2.0);
    if (!((ixstart >= 1) && (ixstart <= n))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, n, &tf_emlrtBCI, sp);
    }

    n = r49->size[0] * r49->size[1] * r49->size[2];
    r49->size[0] = 1;
    r49->size[1] = 1;
    r49->size[2] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r49, n, &og_emlrtRTEI);
    for (n = 0; n < loop_ub; n++) {
      r49->data[r49->size[0] * r49->size[1] * n] = this->BoardCoords->data
        [(ixstart + this->BoardCoords->size[0] * this->BoardCoords->size[1] * n)
        - 1];
    }

    for (n = 0; n < 3; n++) {
      c_denom[n] = b_denom->size[n];
    }

    for (n = 0; n < 3; n++) {
      iv14[n] = r49->size[n];
    }

    emlrtSizeEqCheckNDR2012b(c_denom, iv14, &eb_emlrtECI, sp);
    n = b_denom->size[0] * b_denom->size[1] * b_denom->size[2];
    b_denom->size[0] = 1;
    b_denom->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, b_denom, n, &pg_emlrtRTEI);
    ixstart = b_denom->size[0];
    n = b_denom->size[1];
    b_loop_ub = b_denom->size[2];
    loop_ub = ixstart * n * b_loop_ub;
    for (n = 0; n < loop_ub; n++) {
      b_denom->data[n] -= r49->data[n];
    }

    e_num[0] = d_num->size[2];
    f_num = *d_num;
    f_num.size = (int32_T *)&e_num;
    f_num.numDimensions = 1;
    st.site = &fi_emlrtRSI;
    mtmp = norm(&f_num);
    d_denom[0] = b_denom->size[2];
    f_num = *b_denom;
    f_num.size = (int32_T *)&d_denom;
    f_num.numDimensions = 1;
    st.site = &fi_emlrtRSI;
    y = norm(&f_num);
    mtmp /= y;
    if ((newEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    } else {
      newEnergy = (real32_T)mtmp;
    }

    i++;
  }

  emxFree_real_T(&r49);
  emxFree_real_T(&b_denom);
  emxFree_real_T(&d_num);
  ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  newEnergy = newEnergy * (real32_T)ixstart - (real32_T)(this->BoardIdx->size[0]
    * this->BoardIdx->size[1]);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return newEnergy;
}

void Checkerboard_initialize(const emlrtStack *sp,
  c_vision_internal_calibration_c *this, real_T seedIdx, const emxArray_real32_T
  *points, const real32_T v1[2], const real32_T v2[2])
{
  int32_T i11;
  int32_T ixstart;
  emxArray_int32_T *r6;
  real32_T center[2];
  int32_T iv1[3];
  int32_T iv2[2];
  real_T b_center[2];
  emxArray_real32_T *pointVectors;
  emxArray_real32_T *b_pointVectors;
  emxArray_real32_T *c_pointVectors;
  emxArray_real32_T *euclideanDists;
  real32_T b_v1[2];
  emxArray_boolean_T *b_this;
  real_T c_this;
  real32_T r[2];
  real32_T l[2];
  real32_T d[2];
  real32_T u[2];
  real32_T col2;
  int32_T d_this;
  int32_T i12;
  int32_T i13;
  real32_T col1[6];
  real32_T b_col2[6];
  real32_T row3[6];
  real32_T z1[3];
  real32_T mtmp;
  boolean_T exitg1;
  real32_T boardSize;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i11 = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  this->BoardIdx->size[0] = 1;
  this->BoardIdx->size[1] = 1;
  emxEnsureCapacity_real_T(sp, this->BoardIdx, i11, &pd_emlrtRTEI);
  this->BoardIdx->data[0] = 0.0;
  i11 = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  this->BoardIdx->size[0] = 3;
  this->BoardIdx->size[1] = 3;
  emxEnsureCapacity_real_T(sp, this->BoardIdx, i11, &qd_emlrtRTEI);
  for (i11 = 0; i11 < 9; i11++) {
    this->BoardIdx->data[i11] = 0.0;
  }

  for (i11 = 0; i11 < 4; i11++) {
    this->IsDirectionBad[i11] = false;
  }

  i11 = this->BoardCoords->size[0] * this->BoardCoords->size[1] *
    this->BoardCoords->size[2];
  this->BoardCoords->size[0] = 1;
  this->BoardCoords->size[1] = 1;
  this->BoardCoords->size[2] = 1;
  emxEnsureCapacity_real_T1(sp, this->BoardCoords, i11, &rd_emlrtRTEI);
  this->BoardCoords->data[0] = 0.0;
  i11 = this->BoardCoords->size[0] * this->BoardCoords->size[1] *
    this->BoardCoords->size[2];
  this->BoardCoords->size[0] = 3;
  this->BoardCoords->size[1] = 3;
  this->BoardCoords->size[2] = 2;
  emxEnsureCapacity_real_T1(sp, this->BoardCoords, i11, &sd_emlrtRTEI);
  for (i11 = 0; i11 < 18; i11++) {
    this->BoardCoords->data[i11] = 0.0;
  }

  i11 = this->Points->size[0] * this->Points->size[1];
  this->Points->size[0] = points->size[0];
  this->Points->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, this->Points, i11, &td_emlrtRTEI);
  ixstart = points->size[0] * points->size[1];
  for (i11 = 0; i11 < ixstart; i11++) {
    this->Points->data[i11] = points->data[i11];
  }

  i11 = this->Points->size[0];
  ixstart = (int32_T)seedIdx;
  if (!((ixstart >= 1) && (ixstart <= i11))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i11, &sb_emlrtBCI, sp);
  }

  for (i11 = 0; i11 < 2; i11++) {
    center[i11] = this->Points->data[(ixstart + this->Points->size[0] * i11) - 1];
  }

  emxInit_int32_T(sp, &r6, 1, &le_emlrtRTEI, true);
  i11 = this->BoardIdx->size[0];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &tb_emlrtBCI, sp);
  }

  i11 = this->BoardIdx->size[1];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &ub_emlrtBCI, sp);
  }

  this->BoardIdx->data[1 + this->BoardIdx->size[0]] = seedIdx;
  i11 = this->BoardCoords->size[0];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &vb_emlrtBCI, sp);
  }

  i11 = this->BoardCoords->size[1];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &wb_emlrtBCI, sp);
  }

  ixstart = this->BoardCoords->size[2];
  i11 = r6->size[0];
  r6->size[0] = ixstart;
  emxEnsureCapacity_int32_T(sp, r6, i11, &ud_emlrtRTEI);
  for (i11 = 0; i11 < ixstart; i11++) {
    r6->data[i11] = i11;
  }

  iv1[0] = 1;
  iv1[1] = 1;
  iv1[2] = r6->size[0];
  for (i11 = 0; i11 < 2; i11++) {
    iv2[i11] = 1 + i11;
  }

  emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &k_emlrtECI, sp);
  for (i11 = 0; i11 < 2; i11++) {
    b_center[i11] = center[i11];
  }

  ixstart = r6->size[0];
  for (i11 = 0; i11 < ixstart; i11++) {
    this->BoardCoords->data[(this->BoardCoords->size[0] + this->
      BoardCoords->size[0] * this->BoardCoords->size[1] * r6->data[i11]) + 1] =
      b_center[i11];
  }

  emxInit_real32_T(sp, &pointVectors, 2, &je_emlrtRTEI, true);
  emxInit_real32_T1(sp, &b_pointVectors, 1, &vd_emlrtRTEI, true);
  this->LastExpandDirection = 1.0;
  this->PreviousEnergy = ((real32_T)rtInf);
  this->isValid = false;
  bsxfun(sp, this->Points, center, pointVectors);
  ixstart = pointVectors->size[0];
  i11 = b_pointVectors->size[0];
  b_pointVectors->size[0] = ixstart;
  emxEnsureCapacity_real32_T1(sp, b_pointVectors, i11, &vd_emlrtRTEI);
  for (i11 = 0; i11 < ixstart; i11++) {
    b_pointVectors->data[i11] = pointVectors->data[i11];
  }

  emxInit_real32_T1(sp, &c_pointVectors, 1, &wd_emlrtRTEI, true);
  ixstart = pointVectors->size[0];
  i11 = c_pointVectors->size[0];
  c_pointVectors->size[0] = ixstart;
  emxEnsureCapacity_real32_T1(sp, c_pointVectors, i11, &wd_emlrtRTEI);
  for (i11 = 0; i11 < ixstart; i11++) {
    c_pointVectors->data[i11] = pointVectors->data[i11 + pointVectors->size[0]];
  }

  emxInit_real32_T1(sp, &euclideanDists, 1, &ke_emlrtRTEI, true);
  st.site = &kf_emlrtRSI;
  b_hypot(&st, b_pointVectors, c_pointVectors, euclideanDists);
  i11 = this->BoardIdx->size[0];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &xb_emlrtBCI, sp);
  }

  i11 = this->BoardIdx->size[1];
  if (!(3 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i11, &yb_emlrtBCI, sp);
  }

  st.site = &lf_emlrtRSI;
  this->BoardIdx->data[1 + (this->BoardIdx->size[0] << 1)] =
    Checkerboard_findNeighbor(&st, this, pointVectors, euclideanDists, v1);
  i11 = this->BoardIdx->size[0];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &ac_emlrtBCI, sp);
  }

  i11 = this->BoardIdx->size[1];
  if (!(1 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i11, &bc_emlrtBCI, sp);
  }

  emxFree_real32_T(&c_pointVectors);
  emxFree_real32_T(&b_pointVectors);
  for (i11 = 0; i11 < 2; i11++) {
    b_v1[i11] = -v1[i11];
  }

  st.site = &mf_emlrtRSI;
  this->BoardIdx->data[1] = Checkerboard_findNeighbor(&st, this, pointVectors,
    euclideanDists, b_v1);
  i11 = this->BoardIdx->size[0];
  if (!(3 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i11, &cc_emlrtBCI, sp);
  }

  i11 = this->BoardIdx->size[1];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &dc_emlrtBCI, sp);
  }

  st.site = &nf_emlrtRSI;
  this->BoardIdx->data[2 + this->BoardIdx->size[0]] = Checkerboard_findNeighbor(
    &st, this, pointVectors, euclideanDists, v2);
  i11 = this->BoardIdx->size[0];
  if (!(1 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i11, &ec_emlrtBCI, sp);
  }

  i11 = this->BoardIdx->size[1];
  if (!(2 <= i11)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i11, &fc_emlrtBCI, sp);
  }

  for (i11 = 0; i11 < 2; i11++) {
    b_v1[i11] = -v2[i11];
  }

  emxInit_boolean_T1(sp, &b_this, 1, &xd_emlrtRTEI, true);
  st.site = &of_emlrtRSI;
  this->BoardIdx->data[this->BoardIdx->size[0]] = Checkerboard_findNeighbor(&st,
    this, pointVectors, euclideanDists, b_v1);
  i11 = b_this->size[0];
  b_this->size[0] = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  emxEnsureCapacity_boolean_T1(sp, b_this, i11, &xd_emlrtRTEI);
  ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  for (i11 = 0; i11 < ixstart; i11++) {
    b_this->data[i11] = (this->BoardIdx->data[i11] < 0.0);
  }

  st.site = &pf_emlrtRSI;
  if (any(&st, b_this)) {
    this->isValid = false;
  } else {
    i11 = this->BoardIdx->size[0];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &gc_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &hc_emlrtBCI, sp);
    }

    c_this = this->BoardIdx->data[1 + (this->BoardIdx->size[0] << 1)];
    if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
      emlrtIntegerCheckR2012b(c_this, &c_emlrtDCI, sp);
    }

    i11 = this->Points->size[0];
    ixstart = (int32_T)c_this;
    if (!((ixstart >= 1) && (ixstart <= i11))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i11, &ic_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      r[i11] = this->Points->data[(ixstart + this->Points->size[0] * i11) - 1];
    }

    i11 = this->BoardCoords->size[0];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &jc_emlrtBCI, sp);
    }

    i11 = this->BoardCoords->size[1];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &kc_emlrtBCI, sp);
    }

    ixstart = this->BoardCoords->size[2];
    i11 = r6->size[0];
    r6->size[0] = ixstart;
    emxEnsureCapacity_int32_T(sp, r6, i11, &yd_emlrtRTEI);
    for (i11 = 0; i11 < ixstart; i11++) {
      r6->data[i11] = i11;
    }

    iv1[0] = 1;
    iv1[1] = 1;
    iv1[2] = r6->size[0];
    for (i11 = 0; i11 < 2; i11++) {
      iv2[i11] = 1 + i11;
    }

    emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &l_emlrtECI, sp);
    for (i11 = 0; i11 < 2; i11++) {
      b_center[i11] = r[i11];
    }

    ixstart = r6->size[0];
    for (i11 = 0; i11 < ixstart; i11++) {
      this->BoardCoords->data[((this->BoardCoords->size[0] << 1) +
        this->BoardCoords->size[0] * this->BoardCoords->size[1] * r6->data[i11])
        + 1] = b_center[i11];
    }

    i11 = this->BoardIdx->size[0];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &lc_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &mc_emlrtBCI, sp);
    }

    c_this = this->BoardIdx->data[1];
    if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
      emlrtIntegerCheckR2012b(c_this, &d_emlrtDCI, sp);
    }

    i11 = this->Points->size[0];
    ixstart = (int32_T)c_this;
    if (!((ixstart >= 1) && (ixstart <= i11))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i11, &nc_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      l[i11] = this->Points->data[(ixstart + this->Points->size[0] * i11) - 1];
    }

    i11 = this->BoardCoords->size[0];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &oc_emlrtBCI, sp);
    }

    i11 = this->BoardCoords->size[1];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &pc_emlrtBCI, sp);
    }

    ixstart = this->BoardCoords->size[2];
    i11 = r6->size[0];
    r6->size[0] = ixstart;
    emxEnsureCapacity_int32_T(sp, r6, i11, &ae_emlrtRTEI);
    for (i11 = 0; i11 < ixstart; i11++) {
      r6->data[i11] = i11;
    }

    iv1[0] = 1;
    iv1[1] = 1;
    iv1[2] = r6->size[0];
    for (i11 = 0; i11 < 2; i11++) {
      iv2[i11] = 1 + i11;
    }

    emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &m_emlrtECI, sp);
    for (i11 = 0; i11 < 2; i11++) {
      b_center[i11] = l[i11];
    }

    ixstart = r6->size[0];
    for (i11 = 0; i11 < ixstart; i11++) {
      this->BoardCoords->data[1 + this->BoardCoords->size[0] * this->
        BoardCoords->size[1] * r6->data[i11]] = b_center[i11];
    }

    i11 = this->BoardIdx->size[0];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &qc_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &rc_emlrtBCI, sp);
    }

    c_this = this->BoardIdx->data[2 + this->BoardIdx->size[0]];
    if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
      emlrtIntegerCheckR2012b(c_this, &e_emlrtDCI, sp);
    }

    i11 = this->Points->size[0];
    ixstart = (int32_T)c_this;
    if (!((ixstart >= 1) && (ixstart <= i11))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i11, &sc_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      d[i11] = this->Points->data[(ixstart + this->Points->size[0] * i11) - 1];
    }

    i11 = this->BoardCoords->size[0];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &tc_emlrtBCI, sp);
    }

    i11 = this->BoardCoords->size[1];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &uc_emlrtBCI, sp);
    }

    ixstart = this->BoardCoords->size[2];
    i11 = r6->size[0];
    r6->size[0] = ixstart;
    emxEnsureCapacity_int32_T(sp, r6, i11, &be_emlrtRTEI);
    for (i11 = 0; i11 < ixstart; i11++) {
      r6->data[i11] = i11;
    }

    iv1[0] = 1;
    iv1[1] = 1;
    iv1[2] = r6->size[0];
    for (i11 = 0; i11 < 2; i11++) {
      iv2[i11] = 1 + i11;
    }

    emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &n_emlrtECI, sp);
    for (i11 = 0; i11 < 2; i11++) {
      b_center[i11] = d[i11];
    }

    ixstart = r6->size[0];
    for (i11 = 0; i11 < ixstart; i11++) {
      this->BoardCoords->data[(this->BoardCoords->size[0] + this->
        BoardCoords->size[0] * this->BoardCoords->size[1] * r6->data[i11]) + 2] =
        b_center[i11];
    }

    i11 = this->BoardIdx->size[0];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &vc_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &wc_emlrtBCI, sp);
    }

    c_this = this->BoardIdx->data[this->BoardIdx->size[0]];
    if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
      emlrtIntegerCheckR2012b(c_this, &f_emlrtDCI, sp);
    }

    i11 = this->Points->size[0];
    ixstart = (int32_T)c_this;
    if (!((ixstart >= 1) && (ixstart <= i11))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i11, &xc_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      u[i11] = this->Points->data[(ixstart + this->Points->size[0] * i11) - 1];
    }

    i11 = this->BoardCoords->size[0];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &yc_emlrtBCI, sp);
    }

    i11 = this->BoardCoords->size[1];
    if (!(2 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i11, &ad_emlrtBCI, sp);
    }

    ixstart = this->BoardCoords->size[2];
    i11 = r6->size[0];
    r6->size[0] = ixstart;
    emxEnsureCapacity_int32_T(sp, r6, i11, &ce_emlrtRTEI);
    for (i11 = 0; i11 < ixstart; i11++) {
      r6->data[i11] = i11;
    }

    iv1[0] = 1;
    iv1[1] = 1;
    iv1[2] = r6->size[0];
    for (i11 = 0; i11 < 2; i11++) {
      iv2[i11] = 1 + i11;
    }

    emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &o_emlrtECI, sp);
    for (i11 = 0; i11 < 2; i11++) {
      b_center[i11] = u[i11];
    }

    ixstart = r6->size[0];
    for (i11 = 0; i11 < ixstart; i11++) {
      this->BoardCoords->data[this->BoardCoords->size[0] + this->
        BoardCoords->size[0] * this->BoardCoords->size[1] * r6->data[i11]] =
        b_center[i11];
    }

    for (i11 = 0; i11 < 2; i11++) {
      u[i11] -= center[i11];
      d[i11] -= center[i11];
      r[i11] -= center[i11];
      l[i11] -= center[i11];
    }

    i11 = this->BoardIdx->size[0];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &bd_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &cd_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      b_v1[i11] = u[i11] + l[i11];
    }

    st.site = &qf_emlrtRSI;
    this->BoardIdx->data[0] = Checkerboard_findNeighbor(&st, this, pointVectors,
      euclideanDists, b_v1);
    i11 = this->BoardIdx->size[0];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &dd_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &ed_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      b_v1[i11] = d[i11] + l[i11];
    }

    st.site = &rf_emlrtRSI;
    this->BoardIdx->data[2] = Checkerboard_findNeighbor(&st, this, pointVectors,
      euclideanDists, b_v1);
    i11 = this->BoardIdx->size[0];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &fd_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &gd_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      b_v1[i11] = d[i11] + r[i11];
    }

    st.site = &sf_emlrtRSI;
    this->BoardIdx->data[2 + (this->BoardIdx->size[0] << 1)] =
      Checkerboard_findNeighbor(&st, this, pointVectors, euclideanDists, b_v1);
    i11 = this->BoardIdx->size[0];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &hd_emlrtBCI, sp);
    }

    i11 = this->BoardIdx->size[1];
    if (!(3 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i11, &id_emlrtBCI, sp);
    }

    for (i11 = 0; i11 < 2; i11++) {
      b_v1[i11] = u[i11] + r[i11];
    }

    st.site = &tf_emlrtRSI;
    this->BoardIdx->data[this->BoardIdx->size[0] << 1] =
      Checkerboard_findNeighbor(&st, this, pointVectors, euclideanDists, b_v1);
    i11 = b_this->size[0];
    b_this->size[0] = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    emxEnsureCapacity_boolean_T1(sp, b_this, i11, &de_emlrtRTEI);
    ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    for (i11 = 0; i11 < ixstart; i11++) {
      b_this->data[i11] = (this->BoardIdx->data[i11] > 0.0);
    }

    st.site = &uf_emlrtRSI;
    this->isValid = all(&st, b_this);
    if (this->isValid) {
      i11 = this->BoardCoords->size[0];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &md_emlrtBCI, sp);
      }

      i11 = this->BoardCoords->size[1];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &nd_emlrtBCI, sp);
      }

      ixstart = this->BoardCoords->size[2];
      i11 = r6->size[0];
      r6->size[0] = ixstart;
      emxEnsureCapacity_int32_T(sp, r6, i11, &ee_emlrtRTEI);
      for (i11 = 0; i11 < ixstart; i11++) {
        r6->data[i11] = i11;
      }

      iv1[0] = 1;
      iv1[1] = 1;
      iv1[2] = r6->size[0];
      for (i11 = 0; i11 < 2; i11++) {
        iv2[i11] = 1 + i11;
      }

      emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &p_emlrtECI, sp);
      i11 = this->BoardIdx->size[0];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &jd_emlrtBCI, sp);
      }

      i11 = this->BoardIdx->size[1];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &kd_emlrtBCI, sp);
      }

      c_this = this->BoardIdx->data[0];
      ixstart = this->Points->size[0];
      if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
        emlrtIntegerCheckR2012b(c_this, &g_emlrtDCI, sp);
      }

      i11 = (int32_T)c_this;
      if (!((i11 >= 1) && (i11 <= ixstart))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, ixstart, &ld_emlrtBCI, sp);
      }

      for (i11 = 0; i11 < 2; i11++) {
        b_center[i11] = this->Points->data[((int32_T)c_this + this->Points->
          size[0] * i11) - 1];
      }

      ixstart = r6->size[0];
      for (i11 = 0; i11 < ixstart; i11++) {
        this->BoardCoords->data[this->BoardCoords->size[0] * this->
          BoardCoords->size[1] * r6->data[i11]] = b_center[i11];
      }

      i11 = this->BoardCoords->size[0];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &rd_emlrtBCI, sp);
      }

      i11 = this->BoardCoords->size[1];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &sd_emlrtBCI, sp);
      }

      ixstart = this->BoardCoords->size[2];
      i11 = r6->size[0];
      r6->size[0] = ixstart;
      emxEnsureCapacity_int32_T(sp, r6, i11, &fe_emlrtRTEI);
      for (i11 = 0; i11 < ixstart; i11++) {
        r6->data[i11] = i11;
      }

      iv1[0] = 1;
      iv1[1] = 1;
      iv1[2] = r6->size[0];
      for (i11 = 0; i11 < 2; i11++) {
        iv2[i11] = 1 + i11;
      }

      emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &q_emlrtECI, sp);
      i11 = this->BoardIdx->size[0];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &od_emlrtBCI, sp);
      }

      i11 = this->BoardIdx->size[1];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &pd_emlrtBCI, sp);
      }

      c_this = this->BoardIdx->data[2];
      ixstart = this->Points->size[0];
      if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
        emlrtIntegerCheckR2012b(c_this, &h_emlrtDCI, sp);
      }

      i11 = (int32_T)c_this;
      if (!((i11 >= 1) && (i11 <= ixstart))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, ixstart, &qd_emlrtBCI, sp);
      }

      for (i11 = 0; i11 < 2; i11++) {
        b_center[i11] = this->Points->data[((int32_T)c_this + this->Points->
          size[0] * i11) - 1];
      }

      ixstart = r6->size[0];
      for (i11 = 0; i11 < ixstart; i11++) {
        this->BoardCoords->data[2 + this->BoardCoords->size[0] *
          this->BoardCoords->size[1] * r6->data[i11]] = b_center[i11];
      }

      i11 = this->BoardCoords->size[0];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &wd_emlrtBCI, sp);
      }

      i11 = this->BoardCoords->size[1];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &xd_emlrtBCI, sp);
      }

      ixstart = this->BoardCoords->size[2];
      i11 = r6->size[0];
      r6->size[0] = ixstart;
      emxEnsureCapacity_int32_T(sp, r6, i11, &ge_emlrtRTEI);
      for (i11 = 0; i11 < ixstart; i11++) {
        r6->data[i11] = i11;
      }

      iv1[0] = 1;
      iv1[1] = 1;
      iv1[2] = r6->size[0];
      for (i11 = 0; i11 < 2; i11++) {
        iv2[i11] = 1 + i11;
      }

      emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &r_emlrtECI, sp);
      i11 = this->BoardIdx->size[0];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &td_emlrtBCI, sp);
      }

      i11 = this->BoardIdx->size[1];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &ud_emlrtBCI, sp);
      }

      c_this = this->BoardIdx->data[2 + (this->BoardIdx->size[0] << 1)];
      ixstart = this->Points->size[0];
      if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
        emlrtIntegerCheckR2012b(c_this, &i_emlrtDCI, sp);
      }

      i11 = (int32_T)c_this;
      if (!((i11 >= 1) && (i11 <= ixstart))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, ixstart, &vd_emlrtBCI, sp);
      }

      for (i11 = 0; i11 < 2; i11++) {
        b_center[i11] = this->Points->data[((int32_T)c_this + this->Points->
          size[0] * i11) - 1];
      }

      ixstart = r6->size[0];
      for (i11 = 0; i11 < ixstart; i11++) {
        this->BoardCoords->data[((this->BoardCoords->size[0] << 1) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * r6->data[i11])
          + 2] = b_center[i11];
      }

      i11 = this->BoardCoords->size[0];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &ce_emlrtBCI, sp);
      }

      i11 = this->BoardCoords->size[1];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &de_emlrtBCI, sp);
      }

      ixstart = this->BoardCoords->size[2];
      i11 = r6->size[0];
      r6->size[0] = ixstart;
      emxEnsureCapacity_int32_T(sp, r6, i11, &he_emlrtRTEI);
      for (i11 = 0; i11 < ixstart; i11++) {
        r6->data[i11] = i11;
      }

      iv1[0] = 1;
      iv1[1] = 1;
      iv1[2] = r6->size[0];
      for (i11 = 0; i11 < 2; i11++) {
        iv2[i11] = 1 + i11;
      }

      emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, &iv2[0], 2, &s_emlrtECI, sp);
      i11 = this->BoardIdx->size[0];
      if (!(1 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i11, &yd_emlrtBCI, sp);
      }

      i11 = this->BoardIdx->size[1];
      if (!(3 <= i11)) {
        emlrtDynamicBoundsCheckR2012b(3, 1, i11, &ae_emlrtBCI, sp);
      }

      c_this = this->BoardIdx->data[this->BoardIdx->size[0] << 1];
      ixstart = this->Points->size[0];
      if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
        emlrtIntegerCheckR2012b(c_this, &j_emlrtDCI, sp);
      }

      i11 = (int32_T)c_this;
      if (!((i11 >= 1) && (i11 <= ixstart))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, ixstart, &be_emlrtBCI, sp);
      }

      for (i11 = 0; i11 < 2; i11++) {
        b_center[i11] = this->Points->data[((int32_T)c_this + this->Points->
          size[0] * i11) - 1];
      }

      ixstart = r6->size[0];
      for (i11 = 0; i11 < ixstart; i11++) {
        this->BoardCoords->data[(this->BoardCoords->size[0] << 1) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * r6->data[i11]]
          = b_center[i11];
      }

      st.site = &vf_emlrtRSI;
      i11 = b_this->size[0];
      b_this->size[0] = this->BoardIdx->size[0] * this->BoardIdx->size[1];
      emxEnsureCapacity_boolean_T1(&st, b_this, i11, &ie_emlrtRTEI);
      ixstart = this->BoardIdx->size[0] * this->BoardIdx->size[1];
      for (i11 = 0; i11 < ixstart; i11++) {
        b_this->data[i11] = (this->BoardIdx->data[i11] < 0.0);
      }

      b_st.site = &jg_emlrtRSI;
      if (any(&b_st, b_this)) {
        col2 = ((real32_T)rtInf);
      } else {
        b_st.site = &kg_emlrtRSI;
        i11 = this->BoardIdx->size[0];
        if (!(1 <= i11)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i11, &ee_emlrtBCI, &b_st);
        }

        ixstart = this->BoardIdx->size[1];
        d_this = this->Points->size[0];
        for (i11 = 0; i11 < 2; i11++) {
          for (i12 = 0; i12 < 3; i12++) {
            i13 = 1 + i12;
            if (!(i13 <= ixstart)) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, ixstart, &fe_emlrtBCI, &b_st);
            }

            c_this = this->BoardIdx->data[this->BoardIdx->size[0] * (i13 - 1)];
            if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
              emlrtIntegerCheckR2012b(c_this, &k_emlrtDCI, &b_st);
            }

            i13 = (int32_T)c_this;
            if (!((i13 >= 1) && (i13 <= d_this))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, d_this, &ge_emlrtBCI, &b_st);
            }

            col1[i12 + 3 * i11] = this->Points->data[(i13 + this->Points->size[0]
              * i11) - 1];
          }
        }

        b_st.site = &lg_emlrtRSI;
        i11 = this->BoardIdx->size[0];
        if (!(2 <= i11)) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i11, &ee_emlrtBCI, &b_st);
        }

        ixstart = this->BoardIdx->size[1];
        d_this = this->Points->size[0];
        for (i11 = 0; i11 < 2; i11++) {
          for (i12 = 0; i12 < 3; i12++) {
            i13 = 1 + i12;
            if (!(i13 <= ixstart)) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, ixstart, &fe_emlrtBCI, &b_st);
            }

            c_this = this->BoardIdx->data[1 + this->BoardIdx->size[0] * (i13 - 1)];
            if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
              emlrtIntegerCheckR2012b(c_this, &k_emlrtDCI, &b_st);
            }

            i13 = (int32_T)c_this;
            if (!((i13 >= 1) && (i13 <= d_this))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, d_this, &ge_emlrtBCI, &b_st);
            }

            b_col2[i12 + 3 * i11] = this->Points->data[(i13 + this->Points->
              size[0] * i11) - 1];
          }
        }

        b_st.site = &mg_emlrtRSI;
        i11 = this->BoardIdx->size[0];
        if (!(3 <= i11)) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i11, &ee_emlrtBCI, &b_st);
        }

        ixstart = this->BoardIdx->size[1];
        d_this = this->Points->size[0];
        for (i11 = 0; i11 < 2; i11++) {
          for (i12 = 0; i12 < 3; i12++) {
            i13 = 1 + i12;
            if (!(i13 <= ixstart)) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, ixstart, &fe_emlrtBCI, &b_st);
            }

            c_this = this->BoardIdx->data[2 + this->BoardIdx->size[0] * (i13 - 1)];
            if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
              emlrtIntegerCheckR2012b(c_this, &k_emlrtDCI, &b_st);
            }

            i13 = (int32_T)c_this;
            if (!((i13 >= 1) && (i13 <= d_this))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, d_this, &ge_emlrtBCI, &b_st);
            }

            row3[i12 + 3 * i11] = this->Points->data[(i13 + this->Points->size[0]
              * i11) - 1];
          }
        }

        for (i11 = 0; i11 < 6; i11++) {
          col2 = (col1[i11] + row3[i11]) - 2.0F * b_col2[i11];
          col1[i11] -= row3[i11];
          b_col2[i11] = col2;
        }

        for (ixstart = 0; ixstart < 3; ixstart++) {
          z1[ixstart] = muSingleScalarHypot(b_col2[ixstart], b_col2[3 + ixstart])
            / muSingleScalarHypot(col1[ixstart], col1[3 + ixstart]);
        }

        ixstart = 1;
        mtmp = z1[0];
        if (muSingleScalarIsNaN(z1[0])) {
          d_this = 2;
          exitg1 = false;
          while ((!exitg1) && (d_this < 4)) {
            ixstart = d_this;
            if (!muSingleScalarIsNaN(z1[d_this - 1])) {
              mtmp = z1[d_this - 1];
              exitg1 = true;
            } else {
              d_this++;
            }
          }
        }

        if (ixstart < 3) {
          while (ixstart + 1 < 4) {
            if (z1[ixstart] > mtmp) {
              mtmp = z1[ixstart];
            }

            ixstart++;
          }
        }

        b_st.site = &ng_emlrtRSI;
        i11 = this->BoardIdx->size[1];
        if (!(1 <= i11)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i11, &fe_emlrtBCI, &b_st);
        }

        ixstart = this->BoardIdx->size[0];
        d_this = this->Points->size[0];
        for (i11 = 0; i11 < 2; i11++) {
          for (i12 = 0; i12 < 3; i12++) {
            i13 = 1 + i12;
            if (!(i13 <= ixstart)) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, ixstart, &ee_emlrtBCI, &b_st);
            }

            c_this = this->BoardIdx->data[i13 - 1];
            if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
              emlrtIntegerCheckR2012b(c_this, &k_emlrtDCI, &b_st);
            }

            i13 = (int32_T)c_this;
            if (!((i13 >= 1) && (i13 <= d_this))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, d_this, &ge_emlrtBCI, &b_st);
            }

            col1[i12 + 3 * i11] = this->Points->data[(i13 + this->Points->size[0]
              * i11) - 1];
          }
        }

        b_st.site = &og_emlrtRSI;
        i11 = this->BoardIdx->size[1];
        if (!(2 <= i11)) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i11, &fe_emlrtBCI, &b_st);
        }

        ixstart = this->BoardIdx->size[0];
        d_this = this->Points->size[0];
        for (i11 = 0; i11 < 2; i11++) {
          for (i12 = 0; i12 < 3; i12++) {
            i13 = 1 + i12;
            if (!(i13 <= ixstart)) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, ixstart, &ee_emlrtBCI, &b_st);
            }

            c_this = this->BoardIdx->data[(i13 + this->BoardIdx->size[0]) - 1];
            if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
              emlrtIntegerCheckR2012b(c_this, &k_emlrtDCI, &b_st);
            }

            i13 = (int32_T)c_this;
            if (!((i13 >= 1) && (i13 <= d_this))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, d_this, &ge_emlrtBCI, &b_st);
            }

            b_col2[i12 + 3 * i11] = this->Points->data[(i13 + this->Points->
              size[0] * i11) - 1];
          }
        }

        b_st.site = &pg_emlrtRSI;
        i11 = this->BoardIdx->size[1];
        if (!(3 <= i11)) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i11, &fe_emlrtBCI, &b_st);
        }

        ixstart = this->BoardIdx->size[0];
        d_this = this->Points->size[0];
        for (i11 = 0; i11 < 2; i11++) {
          for (i12 = 0; i12 < 3; i12++) {
            i13 = 1 + i12;
            if (!(i13 <= ixstart)) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, ixstart, &ee_emlrtBCI, &b_st);
            }

            c_this = this->BoardIdx->data[(i13 + (this->BoardIdx->size[0] << 1))
              - 1];
            if (c_this != (int32_T)muDoubleScalarFloor(c_this)) {
              emlrtIntegerCheckR2012b(c_this, &k_emlrtDCI, &b_st);
            }

            i13 = (int32_T)c_this;
            if (!((i13 >= 1) && (i13 <= d_this))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, d_this, &ge_emlrtBCI, &b_st);
            }

            row3[i12 + 3 * i11] = this->Points->data[(i13 + this->Points->size[0]
              * i11) - 1];
          }
        }

        for (i11 = 0; i11 < 6; i11++) {
          col2 = (col1[i11] + row3[i11]) - 2.0F * b_col2[i11];
          col1[i11] -= row3[i11];
          b_col2[i11] = col2;
        }

        for (ixstart = 0; ixstart < 3; ixstart++) {
          z1[ixstart] = muSingleScalarHypot(b_col2[ixstart], b_col2[3 + ixstart])
            / muSingleScalarHypot(col1[ixstart], col1[3 + ixstart]);
        }

        ixstart = 1;
        col2 = z1[0];
        if (muSingleScalarIsNaN(z1[0])) {
          d_this = 2;
          exitg1 = false;
          while ((!exitg1) && (d_this < 4)) {
            ixstart = d_this;
            if (!muSingleScalarIsNaN(z1[d_this - 1])) {
              col2 = z1[d_this - 1];
              exitg1 = true;
            } else {
              d_this++;
            }
          }
        }

        if (ixstart < 3) {
          while (ixstart + 1 < 4) {
            if (z1[ixstart] > col2) {
              col2 = z1[ixstart];
            }

            ixstart++;
          }
        }

        boardSize = (real32_T)(this->BoardIdx->size[0] * this->BoardIdx->size[1]);
        col2 = boardSize * muSingleScalarMax(muSingleScalarMax(0.0F, mtmp), col2)
          - boardSize;
      }

      this->Energy = col2;
      this->isValid = (this->Energy < -7.0F);
    }
  }

  emxFree_boolean_T(&b_this);
  emxFree_int32_T(&r6);
  emxFree_real32_T(&euclideanDists);
  emxFree_real32_T(&pointVectors);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_Checkerboard_expandBoardDirec(const emlrtStack *sp,
  c_vision_internal_calibration_c *this, real_T direction)
{
  real32_T oldEnergy;
  int32_T numRows;
  emxArray_real_T *predictedPoints;
  emxArray_real_T *newIndices;
  emxArray_real_T *r10;
  emxArray_real_T *idx;
  int32_T i17;
  int32_T loop_ub;
  emxArray_real_T *b_this;
  int32_T n;
  real_T d2;
  int32_T b_idx;
  int32_T i18;
  emxArray_real_T *p2;
  int32_T b_p2[2];
  emxArray_real_T *c_p2;
  int32_T b_predictedPoints[2];
  emxArray_int32_T *r11;
  int32_T iv3[1];
  emxArray_int32_T *r12;
  emxArray_real_T *r13;
  int32_T iv4[3];
  int32_T i;
  emxArray_int32_T *r14;
  emxArray_real_T *r15;
  emxArray_real_T *r16;
  emxArray_real_T *b;
  int32_T b_b[3];
  emxArray_real_T *c_predictedPoints;
  emxArray_real_T *d_predictedPoints;
  emxArray_real_T *r17;
  emxArray_real_T *r18;
  boolean_T overflow;
  real_T mtmp;
  boolean_T exitg1;
  emxArray_real_T *num;
  emxArray_real_T *denom;
  emxArray_real_T *r19;
  int32_T b_denom[3];
  int32_T b_num[1];
  emxArray_real_T c_num;
  int32_T c_denom[1];
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  oldEnergy = this->Energy + (real32_T)(this->BoardIdx->size[0] * this->
    BoardIdx->size[1]);
  numRows = this->BoardIdx->size[0] * this->BoardIdx->size[1];
  oldEnergy /= (real32_T)numRows;
  emxInit_real_T1(sp, &predictedPoints, 2, &qg_emlrtRTEI, true);
  emxInit_real_T1(sp, &newIndices, 2, &rg_emlrtRTEI, true);
  emxInit_real_T(sp, &r10, 3, &sg_emlrtRTEI, true);
  emxInit_real_T1(sp, &idx, 2, &tg_emlrtRTEI, true);
  switch ((int32_T)direction) {
   case 1:
    st.site = &tg_emlrtRSI;
    c_Checkerboard_predictPointsVer(&st, this, predictedPoints);
    st.site = &ug_emlrtRSI;
    Checkerboard_findClosestIndices(&st, this, predictedPoints, newIndices);
    st.site = &vg_emlrtRSI;
    Checkerboard_expandBoardUp(&st, this, newIndices, predictedPoints, r10);
    i17 = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    this->BoardIdx->size[0] = predictedPoints->size[0];
    this->BoardIdx->size[1] = predictedPoints->size[1];
    emxEnsureCapacity_real_T(sp, this->BoardIdx, i17, &we_emlrtRTEI);
    loop_ub = predictedPoints->size[0] * predictedPoints->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardIdx->data[i17] = predictedPoints->data[i17];
    }

    i17 = this->BoardCoords->size[0] * this->BoardCoords->size[1] *
      this->BoardCoords->size[2];
    this->BoardCoords->size[0] = r10->size[0];
    this->BoardCoords->size[1] = r10->size[1];
    this->BoardCoords->size[2] = r10->size[2];
    emxEnsureCapacity_real_T1(sp, this->BoardCoords, i17, &cf_emlrtRTEI);
    loop_ub = r10->size[0] * r10->size[1] * r10->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardCoords->data[i17] = r10->data[i17];
    }

    st.site = &wg_emlrtRSI;
    oldEnergy = c_Checkerboard_computeNewEnergy(&st, this, oldEnergy);
    break;

   case 2:
    numRows = this->BoardCoords->size[0];
    st.site = &xg_emlrtRSI;
    if (numRows < (real_T)numRows - 2.0) {
      i17 = idx->size[0] * idx->size[1];
      idx->size[0] = 1;
      idx->size[1] = 0;
      emxEnsureCapacity_real_T(&st, idx, i17, &xe_emlrtRTEI);
    } else {
      i17 = idx->size[0] * idx->size[1];
      idx->size[0] = 1;
      idx->size[1] = (int32_T)-(((real_T)numRows - 2.0) - (real_T)numRows) + 1;
      emxEnsureCapacity_real_T(&st, idx, i17, &xe_emlrtRTEI);
      loop_ub = (int32_T)-(((real_T)numRows - 2.0) - (real_T)numRows);
      for (i17 = 0; i17 <= loop_ub; i17++) {
        idx->data[idx->size[0] * i17] = (real_T)numRows - (real_T)i17;
      }
    }

    st.site = &yg_emlrtRSI;
    d_Checkerboard_predictPointsVer(&st, this, idx, predictedPoints);
    st.site = &ah_emlrtRSI;
    Checkerboard_findClosestIndices(&st, this, predictedPoints, newIndices);
    st.site = &bh_emlrtRSI;
    Checkerboard_expandBoardDown(&st, this, newIndices, predictedPoints, r10);
    i17 = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    this->BoardIdx->size[0] = predictedPoints->size[0];
    this->BoardIdx->size[1] = predictedPoints->size[1];
    emxEnsureCapacity_real_T(sp, this->BoardIdx, i17, &bf_emlrtRTEI);
    loop_ub = predictedPoints->size[0] * predictedPoints->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardIdx->data[i17] = predictedPoints->data[i17];
    }

    i17 = this->BoardCoords->size[0] * this->BoardCoords->size[1] *
      this->BoardCoords->size[2];
    this->BoardCoords->size[0] = r10->size[0];
    this->BoardCoords->size[1] = r10->size[1];
    this->BoardCoords->size[2] = r10->size[2];
    emxEnsureCapacity_real_T1(sp, this->BoardCoords, i17, &ff_emlrtRTEI);
    loop_ub = r10->size[0] * r10->size[1] * r10->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardCoords->data[i17] = r10->data[i17];
    }

    i17 = idx->size[0] * idx->size[1];
    idx->size[0] = 1;
    emxEnsureCapacity_real_T(sp, idx, i17, &gf_emlrtRTEI);
    b_idx = idx->size[0];
    numRows = idx->size[1];
    loop_ub = b_idx * numRows;
    for (i17 = 0; i17 < loop_ub; i17++) {
      idx->data[i17]++;
    }

    st.site = &ch_emlrtRSI;
    oldEnergy = d_Checkerboard_computeNewEnergy(&st, this, idx, oldEnergy);
    break;

   case 3:
    st.site = &dh_emlrtRSI;
    c_Checkerboard_predictPointsHor(&st, this, predictedPoints);
    st.site = &eh_emlrtRSI;
    Checkerboard_findClosestIndices(&st, this, predictedPoints, newIndices);
    st.site = &fh_emlrtRSI;
    Checkerboard_expandBoardLeft(&st, this, newIndices, predictedPoints, r10);
    i17 = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    this->BoardIdx->size[0] = predictedPoints->size[0];
    this->BoardIdx->size[1] = predictedPoints->size[1];
    emxEnsureCapacity_real_T(sp, this->BoardIdx, i17, &ye_emlrtRTEI);
    loop_ub = predictedPoints->size[0] * predictedPoints->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardIdx->data[i17] = predictedPoints->data[i17];
    }

    i17 = this->BoardCoords->size[0] * this->BoardCoords->size[1] *
      this->BoardCoords->size[2];
    this->BoardCoords->size[0] = r10->size[0];
    this->BoardCoords->size[1] = r10->size[1];
    this->BoardCoords->size[2] = r10->size[2];
    emxEnsureCapacity_real_T1(sp, this->BoardCoords, i17, &df_emlrtRTEI);
    loop_ub = r10->size[0] * r10->size[1] * r10->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardCoords->data[i17] = r10->data[i17];
    }

    st.site = &gh_emlrtRSI;
    oldEnergy = e_Checkerboard_computeNewEnergy(&st, this, oldEnergy);
    break;

   case 4:
    numRows = this->BoardCoords->size[1];
    st.site = &hh_emlrtRSI;
    if (numRows < (real_T)numRows - 2.0) {
      i17 = idx->size[0] * idx->size[1];
      idx->size[0] = 1;
      idx->size[1] = 0;
      emxEnsureCapacity_real_T(&st, idx, i17, &af_emlrtRTEI);
    } else {
      i17 = idx->size[0] * idx->size[1];
      idx->size[0] = 1;
      idx->size[1] = (int32_T)-(((real_T)numRows - 2.0) - (real_T)numRows) + 1;
      emxEnsureCapacity_real_T(&st, idx, i17, &af_emlrtRTEI);
      loop_ub = (int32_T)-(((real_T)numRows - 2.0) - (real_T)numRows);
      for (i17 = 0; i17 <= loop_ub; i17++) {
        idx->data[idx->size[0] * i17] = (real_T)numRows - (real_T)i17;
      }
    }

    emxInit_real_T(&st, &b_this, 3, &ef_emlrtRTEI, true);
    st.site = &ih_emlrtRSI;
    i17 = idx->size[1];
    if (!(2 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i17, &ke_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[1];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &m_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &le_emlrtBCI, &st);
    }

    i17 = b_this->size[0] * b_this->size[1] * b_this->size[2];
    b_this->size[0] = loop_ub;
    b_this->size[1] = 1;
    b_this->size[2] = n;
    emxEnsureCapacity_real_T1(&st, b_this, i17, &ef_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_this->data[i18 + b_this->size[0] * b_this->size[1] * i17] =
          this->BoardCoords->data[(i18 + this->BoardCoords->size[0] * (b_idx - 1))
          + this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    b_st.site = &ai_emlrtRSI;
    b_squeeze(&b_st, b_this, predictedPoints);
    i17 = idx->size[1];
    if (!(1 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i17, &me_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[0];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &n_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &ne_emlrtBCI, &st);
    }

    i17 = b_this->size[0] * b_this->size[1] * b_this->size[2];
    b_this->size[0] = loop_ub;
    b_this->size[1] = 1;
    b_this->size[2] = n;
    emxEnsureCapacity_real_T1(&st, b_this, i17, &hf_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_this->data[i18 + b_this->size[0] * b_this->size[1] * i17] =
          this->BoardCoords->data[(i18 + this->BoardCoords->size[0] * (b_idx - 1))
          + this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    emxInit_real_T1(&st, &p2, 2, &ug_emlrtRTEI, true);
    b_st.site = &bi_emlrtRSI;
    b_squeeze(&b_st, b_this, p2);
    for (i17 = 0; i17 < 2; i17++) {
      b_p2[i17] = p2->size[i17];
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_predictedPoints[i17] = predictedPoints->size[i17];
    }

    emxInit_real_T1(&st, &c_p2, 2, &if_emlrtRTEI, true);
    if ((b_p2[0] != b_predictedPoints[0]) || (b_p2[1] != b_predictedPoints[1]))
    {
      emlrtSizeEqCheckNDR2012b(&b_p2[0], &b_predictedPoints[0], &v_emlrtECI, &st);
    }

    i17 = c_p2->size[0] * c_p2->size[1];
    c_p2->size[0] = p2->size[0];
    c_p2->size[1] = p2->size[1];
    emxEnsureCapacity_real_T(sp, c_p2, i17, &if_emlrtRTEI);
    loop_ub = p2->size[0] * p2->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      c_p2->data[i17] = (p2->data[i17] + p2->data[i17]) - predictedPoints->
        data[i17];
    }

    st.site = &jh_emlrtRSI;
    Checkerboard_findClosestIndices(&st, this, c_p2, newIndices);
    st.site = &kh_emlrtRSI;
    i17 = predictedPoints->size[0] * predictedPoints->size[1];
    predictedPoints->size[0] = this->BoardIdx->size[0];
    d2 = 1.0 + (real_T)this->BoardIdx->size[1];
    if (d2 != (int32_T)d2) {
      emlrtIntegerCheckR2012b(d2, &y_emlrtDCI, &st);
    }

    predictedPoints->size[1] = (int32_T)d2;
    emxEnsureCapacity_real_T(&st, predictedPoints, i17, &jf_emlrtRTEI);
    d2 = 1.0 + (real_T)this->BoardIdx->size[1];
    if (d2 != (int32_T)d2) {
      emlrtIntegerCheckR2012b(d2, &bb_emlrtDCI, &st);
    }

    loop_ub = this->BoardIdx->size[0] * (int32_T)d2;
    emxFree_real_T(&c_p2);
    for (i17 = 0; i17 < loop_ub; i17++) {
      predictedPoints->data[i17] = 0.0;
    }

    emxInit_int32_T(&st, &r11, 1, &sg_emlrtRTEI, true);
    loop_ub = predictedPoints->size[0];
    i17 = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r11, i17, &kf_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r11->data[i17] = i17;
    }

    i17 = predictedPoints->size[1];
    i18 = predictedPoints->size[1];
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &oe_emlrtBCI, &st);
    }

    iv3[0] = r11->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv3[0], 1, &(*(int32_T (*)[2])
      newIndices->size)[0], 2, &w_emlrtECI, &st);
    b_idx = r11->size[0];
    numRows = predictedPoints->size[1] - 1;
    for (i17 = 0; i17 < b_idx; i17++) {
      predictedPoints->data[r11->data[i17] + predictedPoints->size[0] * numRows]
        = newIndices->data[i17];
    }

    if (1 > predictedPoints->size[1] - 1) {
      loop_ub = 0;
    } else {
      i17 = predictedPoints->size[1];
      loop_ub = predictedPoints->size[1] - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i17))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i17, &pe_emlrtBCI, &st);
      }
    }

    n = predictedPoints->size[0];
    i17 = r11->size[0];
    r11->size[0] = n;
    emxEnsureCapacity_int32_T(&st, r11, i17, &lf_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      r11->data[i17] = i17;
    }

    emxInit_int32_T(&st, &r12, 1, &sg_emlrtRTEI, true);
    i17 = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r12, i17, &mf_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r12->data[i17] = i17;
    }

    b_p2[0] = r11->size[0];
    b_p2[1] = r12->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_p2[0], 2, &(*(int32_T (*)[2])this->
      BoardIdx->size)[0], 2, &x_emlrtECI, &st);
    loop_ub = this->BoardIdx->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      n = this->BoardIdx->size[0];
      for (i18 = 0; i18 < n; i18++) {
        predictedPoints->data[r11->data[i18] + predictedPoints->size[0] *
          r12->data[i17]] = this->BoardIdx->data[i18 + this->BoardIdx->size[0] *
          i17];
      }
    }

    i17 = r10->size[0] * r10->size[1] * r10->size[2];
    r10->size[0] = this->BoardCoords->size[0];
    d2 = (real_T)this->BoardCoords->size[1] + 1.0;
    if (d2 != (int32_T)d2) {
      emlrtIntegerCheckR2012b(d2, &ab_emlrtDCI, &st);
    }

    r10->size[1] = (int32_T)d2;
    r10->size[2] = this->BoardCoords->size[2];
    emxEnsureCapacity_real_T1(&st, r10, i17, &nf_emlrtRTEI);
    d2 = (real_T)this->BoardCoords->size[1] + 1.0;
    if (d2 != (int32_T)d2) {
      emlrtIntegerCheckR2012b(d2, &cb_emlrtDCI, &st);
    }

    loop_ub = this->BoardCoords->size[0] * (int32_T)d2 * this->BoardCoords->
      size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      r10->data[i17] = 0.0;
    }

    loop_ub = r10->size[0];
    i17 = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r11, i17, &of_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r11->data[i17] = i17;
    }

    i17 = r10->size[1];
    i18 = r10->size[1];
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &qe_emlrtBCI, &st);
    }

    loop_ub = r10->size[2];
    i17 = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r12, i17, &pf_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r12->data[i17] = i17;
    }

    emxInit_real_T1(&st, &r13, 2, &sg_emlrtRTEI, true);
    numRows = this->Points->size[0];
    i17 = r13->size[0] * r13->size[1];
    r13->size[0] = newIndices->size[1];
    r13->size[1] = 2;
    emxEnsureCapacity_real_T(&st, r13, i17, &qf_emlrtRTEI);
    for (i17 = 0; i17 < 2; i17++) {
      loop_ub = newIndices->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        i = (int32_T)newIndices->data[newIndices->size[0] * i18];
        if (!((i >= 1) && (i <= numRows))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, numRows, &wf_emlrtBCI, &st);
        }

        r13->data[i18 + r13->size[0] * i17] = this->Points->data[(i +
          this->Points->size[0] * i17) - 1];
      }
    }

    iv4[0] = r11->size[0];
    iv4[1] = 1;
    iv4[2] = r12->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv4[0], 3, &(*(int32_T (*)[2])r13->size)[0],
      2, &y_emlrtECI, &st);
    b_idx = r11->size[0];
    numRows = r12->size[0];
    i17 = r10->size[1] - 1;
    for (i18 = 0; i18 < numRows; i18++) {
      for (i = 0; i < b_idx; i++) {
        r10->data[(r11->data[i] + r10->size[0] * i17) + r10->size[0] * r10->
          size[1] * r12->data[i18]] = r13->data[i + b_idx * i18];
      }
    }

    emxFree_real_T(&r13);
    if (1 > r10->size[1] - 1) {
      loop_ub = 0;
    } else {
      i17 = r10->size[1];
      loop_ub = r10->size[1] - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i17))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i17, &re_emlrtBCI, &st);
      }
    }

    n = r10->size[0];
    i17 = r11->size[0];
    r11->size[0] = n;
    emxEnsureCapacity_int32_T(&st, r11, i17, &rf_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      r11->data[i17] = i17;
    }

    i17 = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r12, i17, &sf_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r12->data[i17] = i17;
    }

    emxInit_int32_T(&st, &r14, 1, &sg_emlrtRTEI, true);
    loop_ub = r10->size[2];
    i17 = r14->size[0];
    r14->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r14, i17, &tf_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r14->data[i17] = i17;
    }

    iv4[0] = r11->size[0];
    iv4[1] = r12->size[0];
    iv4[2] = r14->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv4[0], 3, &(*(int32_T (*)[3])
      this->BoardCoords->size)[0], 3, &ab_emlrtECI, &st);
    loop_ub = this->BoardCoords->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      n = this->BoardCoords->size[1];
      for (i18 = 0; i18 < n; i18++) {
        numRows = this->BoardCoords->size[0];
        for (i = 0; i < numRows; i++) {
          r10->data[(r11->data[i] + r10->size[0] * r12->data[i18]) + r10->size[0]
            * r10->size[1] * r14->data[i17]] = this->BoardCoords->data[(i +
            this->BoardCoords->size[0] * i18) + this->BoardCoords->size[0] *
            this->BoardCoords->size[1] * i17];
        }
      }
    }

    emxFree_int32_T(&r14);
    emxFree_int32_T(&r12);
    emxFree_int32_T(&r11);
    i17 = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    this->BoardIdx->size[0] = predictedPoints->size[0];
    this->BoardIdx->size[1] = predictedPoints->size[1];
    emxEnsureCapacity_real_T(sp, this->BoardIdx, i17, &uf_emlrtRTEI);
    loop_ub = predictedPoints->size[0] * predictedPoints->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardIdx->data[i17] = predictedPoints->data[i17];
    }

    i17 = this->BoardCoords->size[0] * this->BoardCoords->size[1] *
      this->BoardCoords->size[2];
    this->BoardCoords->size[0] = r10->size[0];
    this->BoardCoords->size[1] = r10->size[1];
    this->BoardCoords->size[2] = r10->size[2];
    emxEnsureCapacity_real_T1(sp, this->BoardCoords, i17, &vf_emlrtRTEI);
    loop_ub = r10->size[0] * r10->size[1] * r10->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      this->BoardCoords->data[i17] = r10->data[i17];
    }

    i17 = idx->size[0] * idx->size[1];
    idx->size[0] = 1;
    emxEnsureCapacity_real_T(sp, idx, i17, &wf_emlrtRTEI);
    b_idx = idx->size[0];
    numRows = idx->size[1];
    loop_ub = b_idx * numRows;
    for (i17 = 0; i17 < loop_ub; i17++) {
      idx->data[i17]++;
    }

    emxInit_real_T(sp, &r15, 3, &sg_emlrtRTEI, true);
    st.site = &lh_emlrtRSI;
    i17 = idx->size[1];
    if (!(1 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i17, &se_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[0];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &o_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &te_emlrtBCI, &st);
    }

    i17 = r15->size[0] * r15->size[1] * r15->size[2];
    r15->size[0] = loop_ub;
    r15->size[1] = 1;
    r15->size[2] = n;
    emxEnsureCapacity_real_T1(&st, r15, i17, &xf_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        r15->data[i18 + r15->size[0] * r15->size[1] * i17] = this->
          BoardCoords->data[(i18 + this->BoardCoords->size[0] * (b_idx - 1)) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    emxInit_real_T(&st, &r16, 3, &sg_emlrtRTEI, true);
    i17 = idx->size[1];
    if (!(3 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i17, &ue_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[2];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &p_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &ve_emlrtBCI, &st);
    }

    i17 = r16->size[0] * r16->size[1] * r16->size[2];
    r16->size[0] = loop_ub;
    r16->size[1] = 1;
    r16->size[2] = n;
    emxEnsureCapacity_real_T1(&st, r16, i17, &yf_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        r16->data[i18 + r16->size[0] * r16->size[1] * i17] = this->
          BoardCoords->data[(i18 + this->BoardCoords->size[0] * (b_idx - 1)) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    for (i17 = 0; i17 < 3; i17++) {
      iv4[i17] = r15->size[i17];
    }

    for (i17 = 0; i17 < 3; i17++) {
      b_b[i17] = r16->size[i17];
    }

    emxInit_real_T(&st, &b, 3, &ag_emlrtRTEI, true);
    emlrtSizeEqCheckNDR2012b(iv4, b_b, &bb_emlrtECI, &st);
    i17 = idx->size[1];
    if (!(2 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i17, &we_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[1];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &q_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &xe_emlrtBCI, &st);
    }

    i17 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = loop_ub;
    b->size[1] = 1;
    b->size[2] = n;
    emxEnsureCapacity_real_T1(&st, b, i17, &ag_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        b->data[i18 + b->size[0] * b->size[1] * i17] = this->BoardCoords->data
          [(i18 + this->BoardCoords->size[0] * (b_idx - 1)) + this->
          BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    i17 = b->size[0] * b->size[1] * b->size[2];
    b->size[1] = 1;
    emxEnsureCapacity_real_T1(&st, b, i17, &bg_emlrtRTEI);
    numRows = b->size[0];
    n = b->size[1];
    b_idx = b->size[2];
    loop_ub = numRows * n * b_idx;
    for (i17 = 0; i17 < loop_ub; i17++) {
      b->data[i17] *= 2.0;
    }

    for (i17 = 0; i17 < 3; i17++) {
      iv4[i17] = r15->size[i17];
    }

    for (i17 = 0; i17 < 3; i17++) {
      b_b[i17] = b->size[i17];
    }

    emlrtSizeEqCheckNDR2012b(iv4, b_b, &bb_emlrtECI, &st);
    i17 = b_this->size[0] * b_this->size[1] * b_this->size[2];
    b_this->size[0] = r15->size[0];
    b_this->size[1] = 1;
    b_this->size[2] = r15->size[2];
    emxEnsureCapacity_real_T1(&st, b_this, i17, &xf_emlrtRTEI);
    loop_ub = r15->size[0] * r15->size[1] * r15->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_this->data[i17] = (r15->data[i17] + r16->data[i17]) - b->data[i17];
    }

    emxFree_real_T(&b);
    b_st.site = &ci_emlrtRSI;
    b_squeeze(&b_st, b_this, predictedPoints);
    i17 = idx->size[1];
    if (!(1 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i17, &ye_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[0];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &r_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &af_emlrtBCI, &st);
    }

    i17 = r15->size[0] * r15->size[1] * r15->size[2];
    r15->size[0] = loop_ub;
    r15->size[1] = 1;
    r15->size[2] = n;
    emxEnsureCapacity_real_T1(&st, r15, i17, &cg_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        r15->data[i18 + r15->size[0] * r15->size[1] * i17] = this->
          BoardCoords->data[(i18 + this->BoardCoords->size[0] * (b_idx - 1)) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    i17 = idx->size[1];
    if (!(3 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(3, 1, i17, &bf_emlrtBCI, &st);
    }

    loop_ub = this->BoardCoords->size[0];
    n = this->BoardCoords->size[2];
    d2 = idx->data[2];
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &s_emlrtDCI, &st);
    }

    i17 = this->BoardCoords->size[1];
    b_idx = (int32_T)d2;
    if (!((b_idx >= 1) && (b_idx <= i17))) {
      emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &cf_emlrtBCI, &st);
    }

    i17 = r16->size[0] * r16->size[1] * r16->size[2];
    r16->size[0] = loop_ub;
    r16->size[1] = 1;
    r16->size[2] = n;
    emxEnsureCapacity_real_T1(&st, r16, i17, &dg_emlrtRTEI);
    for (i17 = 0; i17 < n; i17++) {
      for (i18 = 0; i18 < loop_ub; i18++) {
        r16->data[i18 + r16->size[0] * r16->size[1] * i17] = this->
          BoardCoords->data[(i18 + this->BoardCoords->size[0] * (b_idx - 1)) +
          this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17];
      }
    }

    for (i17 = 0; i17 < 3; i17++) {
      iv4[i17] = r15->size[i17];
    }

    for (i17 = 0; i17 < 3; i17++) {
      b_b[i17] = r16->size[i17];
    }

    emlrtSizeEqCheckNDR2012b(iv4, b_b, &cb_emlrtECI, &st);
    i17 = b_this->size[0] * b_this->size[1] * b_this->size[2];
    b_this->size[0] = r15->size[0];
    b_this->size[1] = 1;
    b_this->size[2] = r15->size[2];
    emxEnsureCapacity_real_T1(&st, b_this, i17, &cg_emlrtRTEI);
    loop_ub = r15->size[0] * r15->size[1] * r15->size[2];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_this->data[i17] = r15->data[i17] - r16->data[i17];
    }

    emxFree_real_T(&r16);
    emxFree_real_T(&r15);
    emxInit_real_T2(&st, &c_predictedPoints, 1, &eg_emlrtRTEI, true);
    b_st.site = &di_emlrtRSI;
    b_squeeze(&b_st, b_this, p2);
    i17 = predictedPoints->size[1];
    if (!(1 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i17, &df_emlrtBCI, &st);
    }

    i17 = predictedPoints->size[1];
    if (!(2 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i17, &ef_emlrtBCI, &st);
    }

    i17 = p2->size[1];
    if (!(1 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i17, &ff_emlrtBCI, &st);
    }

    i17 = p2->size[1];
    if (!(2 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i17, &gf_emlrtBCI, &st);
    }

    loop_ub = predictedPoints->size[0];
    i17 = c_predictedPoints->size[0];
    c_predictedPoints->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(&st, c_predictedPoints, i17, &eg_emlrtRTEI);
    emxFree_real_T(&b_this);
    for (i17 = 0; i17 < loop_ub; i17++) {
      c_predictedPoints->data[i17] = predictedPoints->data[i17];
    }

    emxInit_real_T2(&st, &d_predictedPoints, 1, &fg_emlrtRTEI, true);
    loop_ub = predictedPoints->size[0];
    i17 = d_predictedPoints->size[0];
    d_predictedPoints->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(&st, d_predictedPoints, i17, &fg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      d_predictedPoints->data[i17] = predictedPoints->data[i17 +
        predictedPoints->size[0]];
    }

    emxInit_real_T2(&st, &r17, 1, &xg_emlrtRTEI, true);
    b_st.site = &ei_emlrtRSI;
    c_hypot(&b_st, c_predictedPoints, d_predictedPoints, r17);
    loop_ub = p2->size[0];
    i17 = c_predictedPoints->size[0];
    c_predictedPoints->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(&st, c_predictedPoints, i17, &gg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      c_predictedPoints->data[i17] = p2->data[i17];
    }

    loop_ub = p2->size[0];
    i17 = d_predictedPoints->size[0];
    d_predictedPoints->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(&st, d_predictedPoints, i17, &hg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      d_predictedPoints->data[i17] = p2->data[i17 + p2->size[0]];
    }

    emxFree_real_T(&p2);
    emxInit_real_T2(&st, &r18, 1, &yg_emlrtRTEI, true);
    b_st.site = &ei_emlrtRSI;
    c_hypot(&b_st, c_predictedPoints, d_predictedPoints, r18);
    b_st.site = &ei_emlrtRSI;
    rdivide(&b_st, r17, r18, c_predictedPoints);
    b_st.site = &ei_emlrtRSI;
    c_st.site = &nc_emlrtRSI;
    d_st.site = &oc_emlrtRSI;
    emxFree_real_T(&d_predictedPoints);
    emxFree_real_T(&r18);
    emxFree_real_T(&r17);
    if ((c_predictedPoints->size[0] == 1) || (c_predictedPoints->size[0] != 1))
    {
      overflow = true;
    } else {
      overflow = false;
    }

    if (!overflow) {
      emlrtErrorWithMessageIdR2012b(&d_st, &um_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (!(c_predictedPoints->size[0] > 0)) {
      emlrtErrorWithMessageIdR2012b(&d_st, &tm_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &pc_emlrtRSI;
    numRows = 1;
    n = c_predictedPoints->size[0];
    mtmp = c_predictedPoints->data[0];
    if (c_predictedPoints->size[0] > 1) {
      if (muDoubleScalarIsNaN(c_predictedPoints->data[0])) {
        f_st.site = &rc_emlrtRSI;
        overflow = (c_predictedPoints->size[0] > 2147483646);
        if (overflow) {
          g_st.site = &pb_emlrtRSI;
          h_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        b_idx = 2;
        exitg1 = false;
        while ((!exitg1) && (b_idx <= n)) {
          numRows = b_idx;
          if (!muDoubleScalarIsNaN(c_predictedPoints->data[b_idx - 1])) {
            mtmp = c_predictedPoints->data[b_idx - 1];
            exitg1 = true;
          } else {
            b_idx++;
          }
        }
      }

      if (numRows < c_predictedPoints->size[0]) {
        f_st.site = &qc_emlrtRSI;
        overflow = ((!(numRows + 1 > c_predictedPoints->size[0])) &&
                    (c_predictedPoints->size[0] > 2147483646));
        if (overflow) {
          g_st.site = &pb_emlrtRSI;
          h_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        while (numRows + 1 <= n) {
          if (c_predictedPoints->data[numRows] > mtmp) {
            mtmp = c_predictedPoints->data[numRows];
          }

          numRows++;
        }
      }
    }

    emxFree_real_T(&c_predictedPoints);
    if ((oldEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
    } else {
      oldEnergy = (real32_T)mtmp;
    }

    d2 = (real_T)this->BoardCoords->size[0] - 2.0;
    i = 0;
    emxInit_real_T(&st, &num, 3, &vg_emlrtRTEI, true);
    emxInit_real_T(&st, &denom, 3, &wg_emlrtRTEI, true);
    emxInit_real_T(&st, &r19, 3, &sg_emlrtRTEI, true);
    while (i <= (int32_T)d2 - 1) {
      i17 = idx->size[1];
      if (!(1 <= i17)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i17, &if_emlrtBCI, &st);
      }

      loop_ub = this->BoardCoords->size[2];
      mtmp = idx->data[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &t_emlrtDCI, &st);
      }

      i17 = this->BoardCoords->size[1];
      b_idx = (int32_T)mtmp;
      if (!((b_idx >= 1) && (b_idx <= i17))) {
        emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &jf_emlrtBCI, &st);
      }

      i17 = this->BoardCoords->size[0];
      if (!((i + 1 >= 1) && (i + 1 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, i17, &hf_emlrtBCI, &st);
      }

      numRows = i + 1;
      i17 = num->size[0] * num->size[1] * num->size[2];
      num->size[0] = 1;
      num->size[1] = 1;
      num->size[2] = loop_ub;
      emxEnsureCapacity_real_T1(&st, num, i17, &ig_emlrtRTEI);
      for (i17 = 0; i17 < loop_ub; i17++) {
        num->data[num->size[0] * num->size[1] * i17] = this->BoardCoords->data
          [((numRows + this->BoardCoords->size[0] * (b_idx - 1)) +
            this->BoardCoords->size[0] * this->BoardCoords->size[1] * i17) - 1];
      }

      i17 = idx->size[1];
      if (!(1 <= i17)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i17, &lf_emlrtBCI, &st);
      }

      loop_ub = this->BoardCoords->size[2];
      mtmp = idx->data[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &u_emlrtDCI, &st);
      }

      i17 = this->BoardCoords->size[1];
      b_idx = (int32_T)mtmp;
      if (!((b_idx >= 1) && (b_idx <= i17))) {
        emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &mf_emlrtBCI, &st);
      }

      i17 = this->BoardCoords->size[0];
      i18 = (int32_T)((1.0 + (real_T)i) + 2.0);
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &kf_emlrtBCI, &st);
      }

      i17 = r19->size[0] * r19->size[1] * r19->size[2];
      r19->size[0] = 1;
      r19->size[1] = 1;
      r19->size[2] = loop_ub;
      emxEnsureCapacity_real_T1(&st, r19, i17, &jg_emlrtRTEI);
      for (i17 = 0; i17 < loop_ub; i17++) {
        r19->data[r19->size[0] * r19->size[1] * i17] = this->BoardCoords->data
          [((i18 + this->BoardCoords->size[0] * (b_idx - 1)) + this->
            BoardCoords->size[0] * this->BoardCoords->size[1] * i17) - 1];
      }

      for (i17 = 0; i17 < 3; i17++) {
        b_b[i17] = num->size[i17];
      }

      for (i17 = 0; i17 < 3; i17++) {
        iv4[i17] = r19->size[i17];
      }

      emlrtSizeEqCheckNDR2012b(b_b, iv4, &db_emlrtECI, &st);
      i17 = idx->size[1];
      if (!(1 <= i17)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i17, &of_emlrtBCI, &st);
      }

      loop_ub = this->BoardCoords->size[2];
      mtmp = idx->data[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &v_emlrtDCI, &st);
      }

      i17 = this->BoardCoords->size[1];
      b_idx = (int32_T)mtmp;
      if (!((b_idx >= 1) && (b_idx <= i17))) {
        emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &pf_emlrtBCI, &st);
      }

      i17 = this->BoardCoords->size[0];
      i18 = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &nf_emlrtBCI, &st);
      }

      i17 = denom->size[0] * denom->size[1] * denom->size[2];
      denom->size[0] = 1;
      denom->size[1] = 1;
      denom->size[2] = loop_ub;
      emxEnsureCapacity_real_T1(&st, denom, i17, &kg_emlrtRTEI);
      for (i17 = 0; i17 < loop_ub; i17++) {
        denom->data[denom->size[0] * denom->size[1] * i17] = this->
          BoardCoords->data[((i18 + this->BoardCoords->size[0] * (b_idx - 1)) +
                             this->BoardCoords->size[0] * this->
                             BoardCoords->size[1] * i17) - 1];
      }

      i17 = denom->size[0] * denom->size[1] * denom->size[2];
      denom->size[0] = 1;
      denom->size[1] = 1;
      emxEnsureCapacity_real_T1(&st, denom, i17, &lg_emlrtRTEI);
      numRows = denom->size[0];
      b_idx = denom->size[1];
      n = denom->size[2];
      loop_ub = numRows * b_idx * n;
      for (i17 = 0; i17 < loop_ub; i17++) {
        denom->data[i17] *= 2.0;
      }

      for (i17 = 0; i17 < 3; i17++) {
        b_b[i17] = num->size[i17];
      }

      for (i17 = 0; i17 < 3; i17++) {
        b_denom[i17] = denom->size[i17];
      }

      emlrtSizeEqCheckNDR2012b(b_b, b_denom, &db_emlrtECI, &st);
      i17 = num->size[0] * num->size[1] * num->size[2];
      num->size[0] = 1;
      num->size[1] = 1;
      emxEnsureCapacity_real_T1(&st, num, i17, &mg_emlrtRTEI);
      numRows = num->size[0];
      b_idx = num->size[1];
      n = num->size[2];
      loop_ub = numRows * b_idx * n;
      for (i17 = 0; i17 < loop_ub; i17++) {
        num->data[i17] = (num->data[i17] + r19->data[i17]) - denom->data[i17];
      }

      i17 = idx->size[1];
      if (!(1 <= i17)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i17, &rf_emlrtBCI, &st);
      }

      loop_ub = this->BoardCoords->size[2];
      mtmp = idx->data[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &w_emlrtDCI, &st);
      }

      i17 = this->BoardCoords->size[1];
      b_idx = (int32_T)mtmp;
      if (!((b_idx >= 1) && (b_idx <= i17))) {
        emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &sf_emlrtBCI, &st);
      }

      i17 = this->BoardCoords->size[0];
      if (!((i + 1 >= 1) && (i + 1 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, i17, &qf_emlrtBCI, &st);
      }

      numRows = i + 1;
      i17 = denom->size[0] * denom->size[1] * denom->size[2];
      denom->size[0] = 1;
      denom->size[1] = 1;
      denom->size[2] = loop_ub;
      emxEnsureCapacity_real_T1(&st, denom, i17, &ng_emlrtRTEI);
      for (i17 = 0; i17 < loop_ub; i17++) {
        denom->data[denom->size[0] * denom->size[1] * i17] = this->
          BoardCoords->data[((numRows + this->BoardCoords->size[0] * (b_idx - 1))
                             + this->BoardCoords->size[0] * this->
                             BoardCoords->size[1] * i17) - 1];
      }

      i17 = idx->size[1];
      if (!(1 <= i17)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i17, &uf_emlrtBCI, &st);
      }

      loop_ub = this->BoardCoords->size[2];
      mtmp = idx->data[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &x_emlrtDCI, &st);
      }

      i17 = this->BoardCoords->size[1];
      b_idx = (int32_T)mtmp;
      if (!((b_idx >= 1) && (b_idx <= i17))) {
        emlrtDynamicBoundsCheckR2012b(b_idx, 1, i17, &vf_emlrtBCI, &st);
      }

      i17 = this->BoardCoords->size[0];
      i18 = (int32_T)((1.0 + (real_T)i) + 2.0);
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &tf_emlrtBCI, &st);
      }

      i17 = r19->size[0] * r19->size[1] * r19->size[2];
      r19->size[0] = 1;
      r19->size[1] = 1;
      r19->size[2] = loop_ub;
      emxEnsureCapacity_real_T1(&st, r19, i17, &og_emlrtRTEI);
      for (i17 = 0; i17 < loop_ub; i17++) {
        r19->data[r19->size[0] * r19->size[1] * i17] = this->BoardCoords->data
          [((i18 + this->BoardCoords->size[0] * (b_idx - 1)) + this->
            BoardCoords->size[0] * this->BoardCoords->size[1] * i17) - 1];
      }

      for (i17 = 0; i17 < 3; i17++) {
        b_denom[i17] = denom->size[i17];
      }

      for (i17 = 0; i17 < 3; i17++) {
        iv4[i17] = r19->size[i17];
      }

      emlrtSizeEqCheckNDR2012b(b_denom, iv4, &eb_emlrtECI, &st);
      i17 = denom->size[0] * denom->size[1] * denom->size[2];
      denom->size[0] = 1;
      denom->size[1] = 1;
      emxEnsureCapacity_real_T1(&st, denom, i17, &pg_emlrtRTEI);
      numRows = denom->size[0];
      b_idx = denom->size[1];
      n = denom->size[2];
      loop_ub = numRows * b_idx * n;
      for (i17 = 0; i17 < loop_ub; i17++) {
        denom->data[i17] -= r19->data[i17];
      }

      b_num[0] = num->size[2];
      c_num = *num;
      c_num.size = (int32_T *)&b_num;
      c_num.numDimensions = 1;
      b_st.site = &fi_emlrtRSI;
      mtmp = norm(&c_num);
      c_denom[0] = denom->size[2];
      c_num = *denom;
      c_num.size = (int32_T *)&c_denom;
      c_num.numDimensions = 1;
      b_st.site = &fi_emlrtRSI;
      y = norm(&c_num);
      mtmp /= y;
      if ((oldEnergy > mtmp) || muDoubleScalarIsNaN(mtmp)) {
      } else {
        oldEnergy = (real32_T)mtmp;
      }

      i++;
    }

    emxFree_real_T(&r19);
    emxFree_real_T(&denom);
    emxFree_real_T(&num);
    numRows = this->BoardIdx->size[0] * this->BoardIdx->size[1];
    oldEnergy = oldEnergy * (real32_T)numRows - (real32_T)(this->BoardIdx->size
      [0] * this->BoardIdx->size[1]);
    break;

   default:
    oldEnergy = ((real32_T)rtInf);
    break;
  }

  emxFree_real_T(&idx);
  emxFree_real_T(&r10);
  emxFree_real_T(&newIndices);
  emxFree_real_T(&predictedPoints);
  this->Energy = oldEnergy;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Checkerboard.c) */
