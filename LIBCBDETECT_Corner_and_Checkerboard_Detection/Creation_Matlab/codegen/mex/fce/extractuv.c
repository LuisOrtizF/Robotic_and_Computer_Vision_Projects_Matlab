/*
 * extractuv.c
 *
 * Code generation for function 'extractuv'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "extractuv.h"
#include "fce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "nullAssignment.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo jh_emlrtRSI = { 13, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo kh_emlrtRSI = { 19, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo lh_emlrtRSI = { 23, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo mh_emlrtRSI = { 25, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRSInfo nh_emlrtRSI = { 270, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo oh_emlrtRSI = { 271, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo ph_emlrtRSI = { 15, "any",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRSInfo qh_emlrtRSI = { 120, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 2, 36, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 18, 17, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtECInfo hb_emlrtECI = { -1, 15, 13, "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m"
};

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 18, 33, "cb", "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 18, 30, "corners.p", "extractuv",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m",
  0 };

/* Function Definitions */
void extractuv(const emlrtStack *sp, const cell_wrap_0 chessboards[5], const
               emxArray_real_T *corners_p, emxArray_real_T *corners_uv, real_T
               tam_chess_data[], int32_T tam_chess_size[2])
{
  boolean_T b5;
  int32_T i25;
  int32_T i;
  emxArray_real_T *p;
  emxArray_real_T *b_corners_uv;
  int32_T b_chessboards[1];
  boolean_T empty_non_axis_sizes;
  emxArray_real_T c_chessboards;
  int32_T nrowx;
  boolean_T guard1 = false;
  int32_T loop_ub;
  int32_T j;
  boolean_T overflow;
  emxArray_real_T *b_p;
  int32_T ix;
  int32_T exitg2;
  int32_T i26;
  int32_T iv9[2];
  int32_T iv10[2];
  uint32_T d_chessboards[2];
  boolean_T y_data[5];
  int32_T i1;
  int32_T i2;
  emxArray_real_T *r12;
  boolean_T exitg1;
  boolean_T b_y_data[5];
  int32_T y_size[1];
  emxArray_boolean_T c_y_data;
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
  b5 = false;
  covrtLogFcn(&emlrtCoverageInstance, 12U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 12U, 0);
  i25 = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = 1;
  corners_uv->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners_uv, i25, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  for (i25 = 0; i25 < 2; i25++) {
    corners_uv->data[i25] = 0.0;
  }

  tam_chess_size[0] = 5;
  tam_chess_size[1] = 2;
  for (i25 = 0; i25 < 10; i25++) {
    tam_chess_data[i25] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &p, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_corners_uv, 2, &lb_emlrtRTEI, true);
  while (i < 5) {
    covrtLogFor(&emlrtCoverageInstance, 12U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 12U, 1);
    st.site = &jh_emlrtRSI;
    b_st.site = &gh_emlrtRSI;
    b_chessboards[0] = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
    c_chessboards = *chessboards[i].f1;
    c_chessboards.size = (int32_T *)&b_chessboards;
    c_chessboards.numDimensions = 1;
    empty_non_axis_sizes = !isequal(&c_chessboards);
    if (empty_non_axis_sizes) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &gc_emlrtRTEI,
        "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
    }

    nrowx = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
    guard1 = false;
    if (nrowx == 1) {
      guard1 = true;
    } else {
      nrowx = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
      if (nrowx != 1) {
        guard1 = true;
      } else {
        empty_non_axis_sizes = false;
      }
    }

    if (guard1) {
      empty_non_axis_sizes = true;
    }

    if (empty_non_axis_sizes) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &hc_emlrtRTEI,
        "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
    }

    empty_non_axis_sizes = true;
    c_st.site = &yb_emlrtRSI;
    nrowx = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
    if (1 > nrowx) {
      overflow = false;
    } else {
      nrowx = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
      overflow = (nrowx > 2147483646);
    }

    if (overflow) {
      d_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    ix = 1;
    do {
      exitg2 = 0;
      nrowx = chessboards[i].f1->size[0] * chessboards[i].f1->size[1];
      if (ix <= nrowx) {
        if (chessboards[i].f1->data[ix - 1] == 0.0) {
          empty_non_axis_sizes = false;
          exitg2 = 1;
        } else {
          ix++;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (covrtLogIf(&emlrtCoverageInstance, 12U, 0U, 0, empty_non_axis_sizes)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 12U, 2);
      if (!b5) {
        for (i25 = 0; i25 < 2; i25++) {
          iv9[i25] = 1 + i25;
          iv10[i25] = 1 + i25;
        }

        b5 = true;
      }

      emlrtSubAssignSizeCheckR2012b(iv9, 2, iv10, 2, &hb_emlrtECI, sp);
      d_chessboards[0] = (uint32_T)chessboards[i].f1->size[0];
      d_chessboards[1] = (uint32_T)chessboards[i].f1->size[1];
      for (i25 = 0; i25 < 2; i25++) {
        tam_chess_data[i + tam_chess_size[0] * i25] = d_chessboards[i25];
      }

      j = 0;
      while (j <= chessboards[i].f1->size[0] - 1) {
        covrtLogFor(&emlrtCoverageInstance, 12U, 0U, 1, 1);
        covrtLogBasicBlock(&emlrtCoverageInstance, 12U, 3);
        loop_ub = chessboards[i].f1->size[1];
        i25 = chessboards[i].f1->size[0];
        if (!((j + 1 >= 1) && (j + 1 <= i25))) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, i25, &ac_emlrtBCI, sp);
        }

        i1 = j + 1;
        i2 = corners_p->size[0];
        nrowx = corners_p->size[1];
        i25 = p->size[0] * p->size[1];
        p->size[0] = loop_ub;
        p->size[1] = nrowx;
        emxEnsureCapacity(sp, (emxArray__common *)p, i25, (int32_T)sizeof(real_T),
                          &lb_emlrtRTEI);
        for (i25 = 0; i25 < nrowx; i25++) {
          for (i26 = 0; i26 < loop_ub; i26++) {
            ix = (int32_T)chessboards[i].f1->data[(i1 + chessboards[i].f1->size
              [0] * i26) - 1];
            if (!((ix >= 1) && (ix <= i2))) {
              emlrtDynamicBoundsCheckR2012b(ix, 1, i2, &bc_emlrtBCI, sp);
            }

            p->data[i26 + p->size[0] * i25] = corners_p->data[(ix +
              corners_p->size[0] * i25) - 1] + 1.0;
          }
        }

        st.site = &kh_emlrtRSI;
        b_st.site = &qb_emlrtRSI;
        if (!((corners_uv->size[0] == 0) || (corners_uv->size[1] == 0))) {
          nrowx = corners_uv->size[1];
        } else if (!((p->size[0] == 0) || (p->size[1] == 0))) {
          nrowx = p->size[1];
        } else {
          nrowx = muIntScalarMax_sint32(corners_uv->size[1], 0);
          if (p->size[1] > nrowx) {
            nrowx = p->size[1];
          }
        }

        c_st.site = &rb_emlrtRSI;
        if ((nrowx == corners_uv->size[1]) || ((corners_uv->size[0] == 0) ||
             (corners_uv->size[1] == 0))) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((nrowx == p->size[1]) || ((p->size[0] == 0) || (p->size[1] == 0))) {
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
        } else {
          emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (nrowx == 0);
        if (empty_non_axis_sizes || (!((corners_uv->size[0] == 0) ||
              (corners_uv->size[1] == 0)))) {
          i1 = corners_uv->size[0];
        } else {
          i1 = 0;
        }

        if (empty_non_axis_sizes || (!((p->size[0] == 0) || (p->size[1] == 0))))
        {
          i2 = p->size[0];
        } else {
          i2 = 0;
        }

        i25 = b_corners_uv->size[0] * b_corners_uv->size[1];
        b_corners_uv->size[0] = i1 + i2;
        b_corners_uv->size[1] = nrowx;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_corners_uv, i25, (int32_T)
                          sizeof(real_T), &lb_emlrtRTEI);
        for (i25 = 0; i25 < nrowx; i25++) {
          for (i26 = 0; i26 < i1; i26++) {
            b_corners_uv->data[i26 + b_corners_uv->size[0] * i25] =
              corners_uv->data[i26 + i1 * i25];
          }
        }

        for (i25 = 0; i25 < nrowx; i25++) {
          for (i26 = 0; i26 < i2; i26++) {
            b_corners_uv->data[(i26 + i1) + b_corners_uv->size[0] * i25] =
              p->data[i26 + i2 * i25];
          }
        }

        i25 = corners_uv->size[0] * corners_uv->size[1];
        corners_uv->size[0] = b_corners_uv->size[0];
        corners_uv->size[1] = b_corners_uv->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)corners_uv, i25, (int32_T)
                          sizeof(real_T), &lb_emlrtRTEI);
        loop_ub = b_corners_uv->size[1];
        for (i25 = 0; i25 < loop_ub; i25++) {
          nrowx = b_corners_uv->size[0];
          for (i26 = 0; i26 < nrowx; i26++) {
            corners_uv->data[i26 + corners_uv->size[0] * i25] =
              b_corners_uv->data[i26 + b_corners_uv->size[0] * i25];
          }
        }

        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      covrtLogFor(&emlrtCoverageInstance, 12U, 0U, 1, 0);
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_corners_uv);
  covrtLogFor(&emlrtCoverageInstance, 12U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 12U, 4);
  st.site = &lh_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  empty_non_axis_sizes = true;
  if (1 > corners_uv->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &wc_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  b_st.site = &yc_emlrtRSI;
  i25 = p->size[0] * p->size[1];
  p->size[0] = corners_uv->size[0];
  p->size[1] = corners_uv->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)p, i25, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  loop_ub = corners_uv->size[0] * corners_uv->size[1];
  for (i25 = 0; i25 < loop_ub; i25++) {
    p->data[i25] = corners_uv->data[i25];
  }

  nrowx = corners_uv->size[0];
  c_st.site = &nh_emlrtRSI;
  for (j = 0; j + 1 <= corners_uv->size[1]; j++) {
    c_st.site = &oh_emlrtRSI;
    for (i = 1; i < nrowx; i++) {
      p->data[(i + p->size[0] * j) - 1] = p->data[i + p->size[0] * j];
    }
  }

  if (corners_uv->size[0] - 1 <= corners_uv->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &vc_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > corners_uv->size[0] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = corners_uv->size[0] - 1;
  }

  emxInit_real_T(&b_st, &b_p, 2, &lb_emlrtRTEI, true);
  nrowx = p->size[1];
  i25 = b_p->size[0] * b_p->size[1];
  b_p->size[0] = loop_ub;
  b_p->size[1] = nrowx;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_p, i25, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  for (i25 = 0; i25 < nrowx; i25++) {
    for (i26 = 0; i26 < loop_ub; i26++) {
      b_p->data[i26 + b_p->size[0] * i25] = p->data[i26 + p->size[0] * i25];
    }
  }

  i25 = p->size[0] * p->size[1];
  p->size[0] = b_p->size[0];
  p->size[1] = b_p->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)p, i25, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  loop_ub = b_p->size[1];
  for (i25 = 0; i25 < loop_ub; i25++) {
    nrowx = b_p->size[0];
    for (i26 = 0; i26 < nrowx; i26++) {
      p->data[i26 + p->size[0] * i25] = b_p->data[i26 + b_p->size[0] * i25];
    }
  }

  emxFree_real_T(&b_p);
  i25 = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = p->size[0];
  corners_uv->size[1] = p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners_uv, i25, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i25 = 0; i25 < loop_ub; i25++) {
    corners_uv->data[i25] = p->data[i25];
  }

  st.site = &mh_emlrtRSI;
  b_st.site = &ph_emlrtRSI;
  for (i25 = 0; i25 < 5; i25++) {
    y_data[i25] = false;
  }

  nrowx = -1;
  i1 = 0;
  i2 = 5;
  c_st.site = &qh_emlrtRSI;
  for (j = 0; j < 5; j++) {
    i1++;
    i2++;
    nrowx++;
    c_st.site = &yb_emlrtRSI;
    if ((!(i1 > i2)) && (i2 > 2147483642)) {
      d_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    ix = i1;
    exitg1 = false;
    while ((!exitg1) && (ix <= i2)) {
      b5 = ((int32_T)tam_chess_data[ix - 1] == 0);
      if (!b5) {
        y_data[nrowx] = true;
        exitg1 = true;
      } else {
        ix += 5;
      }
    }
  }

  emxInit_real_T(&b_st, &r12, 2, &lb_emlrtRTEI, true);
  i25 = r12->size[0] * r12->size[1];
  r12->size[0] = tam_chess_size[0];
  r12->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r12, i25, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  loop_ub = tam_chess_size[0] * tam_chess_size[1];
  for (i25 = 0; i25 < loop_ub; i25++) {
    r12->data[i25] = tam_chess_data[i25];
  }

  y_size[0] = 5;
  for (i25 = 0; i25 < 5; i25++) {
    b_y_data[i25] = !y_data[i25];
  }

  c_y_data.data = (boolean_T *)&b_y_data;
  c_y_data.size = (int32_T *)&y_size;
  c_y_data.allocatedSize = 5;
  c_y_data.numDimensions = 1;
  c_y_data.canFreeData = false;
  st.site = &mh_emlrtRSI;
  nullAssignment(&st, r12, &c_y_data);
  tam_chess_size[0] = r12->size[0];
  tam_chess_size[1] = r12->size[1];
  loop_ub = r12->size[0] * r12->size[1];
  for (i25 = 0; i25 < loop_ub; i25++) {
    tam_chess_data[i25] = r12->data[i25];
  }

  emxFree_real_T(&r12);
  if (covrtLogIf(&emlrtCoverageInstance, 12U, 0U, 1, (p->size[0] == 0) ||
                 (p->size[1] == 0))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 12U, 5);
  }

  emxFree_real_T(&p);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (extractuv.c) */
