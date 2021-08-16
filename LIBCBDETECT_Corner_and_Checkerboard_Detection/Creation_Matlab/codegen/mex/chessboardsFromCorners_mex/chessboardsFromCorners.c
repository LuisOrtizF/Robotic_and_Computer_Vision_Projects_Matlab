/*
 * chessboardsFromCorners.c
 *
 * Code generation for function 'chessboardsFromCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "chessboardEnergy.h"
#include "growChessboard.h"
#include "any.h"
#include "indexShapeCheck.h"
#include "initChessboard.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 23, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo b_emlrtRSI = { 27, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo c_emlrtRSI = { 35, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo d_emlrtRSI = { 39, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo e_emlrtRSI = { 40, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo f_emlrtRSI = { 57, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo g_emlrtRSI = { 70, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo h_emlrtRSI = { 72, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo i_emlrtRSI = { 83, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo j_emlrtRSI = { 84, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo k_emlrtRSI = { 85, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo qd_emlrtRSI = { 44, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo rd_emlrtRSI = { 253, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo emlrtRTEI = { 2, 24, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 23, 7, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 6, 23, "checkCellRefIndexIsScalar",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\checkCellRefIndexIsScalar.m"
};

static emlrtBCInfo emlrtBCI = { 0, 4, 86, 13, "chessboards",
  "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { 0, 4, 81, 11, "chessboards",
  "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 70, 20, "chessboards{j}",
  "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
  0 };

/* Function Definitions */
void chessboardsFromCorners(const emlrtStack *sp, const struct0_T *corners,
  cell_wrap_0 chessboards[5])
{
  int32_T i0;
  emxArray_cell_wrap_0_1x4 proposal;
  cell_wrap_0 r0;
  cell_wrap_0 r1;
  cell_wrap_0 r2;
  cell_wrap_0 r3;
  cell_wrap_0 rv0[4];
  real_T a;
  int32_T i;
  emxArray_real_T *chessboard;
  emxArray_boolean_T *b_chessboards;
  real_T tmp_data[9];
  int32_T tmp_size[2];
  int32_T loop_ub;
  int32_T exitg4;
  real_T energy;
  real_T p_energy[4];
  int32_T j;
  int32_T ixstart;
  real_T mtmp;
  int32_T itmp;
  int32_T ix;
  boolean_T exitg5;
  real_T overlap[10];
  boolean_T y;
  boolean_T exitg2;
  int32_T exitg3;
  boolean_T b0;
  boolean_T x[5];
  int8_T ii_data[5];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv0[2];
  int8_T idx_data[5];
  boolean_T overlap_data[5];
  int32_T overlap_size[1];
  emxArray_boolean_T b_overlap_data;
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
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);

  /*  intialize chessboards */
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
  i0 = chessboards[0].f1->size[0] * chessboards[0].f1->size[1];
  chessboards[0].f1->size[0] = 6;
  chessboards[0].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[0].f1, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 42; i0++) {
    chessboards[0].f1->data[i0] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
  i0 = chessboards[1].f1->size[0] * chessboards[1].f1->size[1];
  chessboards[1].f1->size[0] = 6;
  chessboards[1].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[1].f1, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 42; i0++) {
    chessboards[1].f1->data[i0] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
  i0 = chessboards[2].f1->size[0] * chessboards[2].f1->size[1];
  chessboards[2].f1->size[0] = 6;
  chessboards[2].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[2].f1, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 42; i0++) {
    chessboards[2].f1->data[i0] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
  i0 = chessboards[3].f1->size[0] * chessboards[3].f1->size[1];
  chessboards[3].f1->size[0] = 6;
  chessboards[3].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[3].f1, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 42; i0++) {
    chessboards[3].f1->data[i0] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
  i0 = chessboards[4].f1->size[0] * chessboards[4].f1->size[1];
  chessboards[4].f1->size[0] = 6;
  chessboards[4].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[4].f1, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 42; i0++) {
    chessboards[4].f1->data[i0] = 0.0;
  }

  emxInit_cell_wrap_0_1x4(&proposal);
  emxInitStruct_cell_wrap_0(sp, &r0, &emlrtRTEI, true);
  emxInitStruct_cell_wrap_0(sp, &r1, &emlrtRTEI, true);
  emxInitStruct_cell_wrap_0(sp, &r2, &emlrtRTEI, true);
  emxInitStruct_cell_wrap_0(sp, &r3, &emlrtRTEI, true);
  emxInitMatrix_cell_wrap_0(sp, rv0, &emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);
  i0 = r0.f1->size[0] * r0.f1->size[1];
  r0.f1->size[0] = 1;
  r0.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r0.f1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  r0.f1->data[0] = 0.0;
  i0 = r1.f1->size[0] * r1.f1->size[1];
  r1.f1->size[0] = 1;
  r1.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r1.f1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  r1.f1->data[0] = 0.0;
  i0 = r2.f1->size[0] * r2.f1->size[1];
  r2.f1->size[0] = 1;
  r2.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r2.f1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  r2.f1->data[0] = 0.0;
  i0 = r3.f1->size[0] * r3.f1->size[1];
  r3.f1->size[0] = 1;
  r3.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r3.f1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  r3.f1->data[0] = 0.0;
  emxCopyStruct_cell_wrap_0(sp, &rv0[0], &r0, &emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &rv0[1], &r1, &emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &rv0[2], &r2, &emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &rv0[3], &r3, &emlrtRTEI);
  i0 = proposal.size[0] * proposal.size[1];
  proposal.size[0] = 1;
  proposal.size[1] = 4;
  emxEnsureCapacity_cell_wrap_0(sp, proposal.data, proposal.size, i0, &emlrtRTEI);
  emxFreeStruct_cell_wrap_0(&r3);
  emxFreeStruct_cell_wrap_0(&r2);
  emxFreeStruct_cell_wrap_0(&r1);
  emxFreeStruct_cell_wrap_0(&r0);
  for (i0 = 0; i0 < 4; i0++) {
    emxCopyStruct_cell_wrap_0(sp, &proposal.data[proposal.size[0] * i0], &rv0[i0],
      &emlrtRTEI);
  }

  emxFreeMatrix_cell_wrap_0(rv0);
  a = 0.0;

  /*  for all seed corners do */
  i = 0;
  emxInit_real_T(sp, &chessboard, 2, &b_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_chessboards, 1, &emlrtRTEI, true);
  while (i < 100) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);

    /*  init 3x3 chessboard from seed i */
    st.site = &emlrtRSI;
    initChessboard(&st, corners->p, corners->v1, corners->v2, 1.0 + (real_T)i,
                   tmp_data, tmp_size);
    i0 = chessboard->size[0] * chessboard->size[1];
    chessboard->size[0] = tmp_size[0];
    chessboard->size[1] = tmp_size[1];
    emxEnsureCapacity(sp, (emxArray__common *)chessboard, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = tmp_size[0] * tmp_size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      chessboard->data[i0] = tmp_data[i0];
    }

    /*  check if this is a useful initial guess */
    st.site = &b_emlrtRSI;
    if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 0, (chessboard->size[0] ==
          0) || (chessboard->size[1] == 0)) || covrtLogCond
        (&emlrtCoverageInstance, 0U, 0U, 1, chessboardEnergy(&st, chessboard,
          corners->p) > 0.0)) {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, false);

      /*  try growing chessboard */
      do {
        exitg4 = 0;
        covrtLogWhile(&emlrtCoverageInstance, 0U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5);

        /*  compute current energy */
        st.site = &c_emlrtRSI;
        energy = chessboardEnergy(&st, chessboard, corners->p);

        /*  compute proposals and energies */
        j = 0;
        while (j < 4) {
          covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 1);
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);
          i0 = proposal.data[proposal.size[0] * j].f1->size[0] *
            proposal.data[proposal.size[0] * j].f1->size[1];
          proposal.data[proposal.size[0] * j].f1->size[0] = chessboard->size[0];
          proposal.data[proposal.size[0] * j].f1->size[1] = chessboard->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)proposal.data[proposal.size
                            [0] * j].f1, i0, (int32_T)sizeof(real_T), &emlrtRTEI);
          loop_ub = chessboard->size[0] * chessboard->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            proposal.data[proposal.size[0] * j].f1->data[i0] = chessboard->
              data[i0];
          }

          st.site = &d_emlrtRSI;
          growChessboard(&st, proposal.data[proposal.size[0] * j].f1, corners->p,
                         1.0 + (real_T)j);
          st.site = &e_emlrtRSI;
          p_energy[j] = chessboardEnergy(&st, proposal.data[proposal.size[0] * j]
            .f1, corners->p);
          j++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 0);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

        /*  find best proposal */
        ixstart = 1;
        mtmp = p_energy[0];
        itmp = 0;
        if (muDoubleScalarIsNaN(p_energy[0])) {
          ix = 1;
          exitg5 = false;
          while ((!exitg5) && (ix + 1 < 5)) {
            ixstart = ix + 1;
            if (!muDoubleScalarIsNaN(p_energy[ix])) {
              mtmp = p_energy[ix];
              itmp = ix;
              exitg5 = true;
            } else {
              ix++;
            }
          }
        }

        if (ixstart < 4) {
          while (ixstart + 1 < 5) {
            if (p_energy[ixstart] < mtmp) {
              mtmp = p_energy[ixstart];
              itmp = ixstart;
            }

            ixstart++;
          }
        }

        /*  accept best proposal, if energy is reduced */
        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, p_energy[itmp] <
                       energy)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8);
          i0 = chessboard->size[0] * chessboard->size[1];
          chessboard->size[0] = proposal.data[proposal.size[0] * itmp].f1->size
            [0];
          chessboard->size[1] = proposal.data[proposal.size[0] * itmp].f1->size
            [1];
          emxEnsureCapacity(sp, (emxArray__common *)chessboard, i0, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          loop_ub = proposal.data[proposal.size[0] * itmp].f1->size[0] *
            proposal.data[proposal.size[0] * itmp].f1->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            chessboard->data[i0] = proposal.data[proposal.size[0] * itmp]
              .f1->data[i0];
          }

          /*  otherwise exit loop */
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);

      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9);

      /*  if chessboard has low energy (corresponding to high quality) */
      st.site = &f_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 2, chessboardEnergy(&st,
            chessboard, corners->p) < -10.0)) {
        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, a == 0.0)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 10);
          for (i0 = 0; i0 < 2; i0++) {
            tmp_size[i0] = chessboard->size[i0];
          }

          i0 = chessboards[0].f1->size[0] * chessboards[0].f1->size[1];
          chessboards[0].f1->size[0] = tmp_size[0];
          chessboards[0].f1->size[1] = tmp_size[1];
          emxEnsureCapacity(sp, (emxArray__common *)chessboards[0].f1, i0,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          loop_ub = tmp_size[0] * tmp_size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            chessboards[0].f1->data[i0] = 0.0;
          }
        }

        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11);

        /*  check if new chessboard proposal overlaps with existing chessboards */
        memset(&overlap[0], 0, 10U * sizeof(real_T));

        /* [rr,cc]=size(chessboards); */
        j = 0;
        while (j < 5) {
          covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 3, 1);

          /* rr*cc      */
          ix = 0;
          do {
            exitg3 = 0;
            ixstart = chessboards[j].f1->size[0] * chessboards[j].f1->size[1];
            if (ix <= ixstart - 1) {
              covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 4, 1);
              i0 = chessboards[j].f1->size[0] * chessboards[j].f1->size[1];
              if (!((ix + 1 >= 1) && (ix + 1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(ix + 1, 1, i0, &c_emlrtBCI, sp);
              }

              mtmp = chessboards[j].f1->data[ix];
              i0 = b_chessboards->size[0];
              b_chessboards->size[0] = chessboard->size[0] * chessboard->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)b_chessboards, i0,
                                (int32_T)sizeof(boolean_T), &emlrtRTEI);
              loop_ub = chessboard->size[0] * chessboard->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_chessboards->data[i0] = (mtmp == chessboard->data[i0]);
              }

              st.site = &g_emlrtRSI;
              if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, any(&st,
                    b_chessboards))) {
                covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 12);
                overlap[j] = 1.0;
                st.site = &h_emlrtRSI;
                overlap[5 + j] = chessboardEnergy(&st, chessboards[j].f1,
                  corners->p);
                exitg3 = 1;
              } else {
                ix++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }
            } else {
              covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 4, 0);
              exitg3 = 1;
            }
          } while (exitg3 == 0);

          j++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 3, 0);

        /*  add chessboard (and replace overlapping if neccessary) */
        y = false;
        ix = 0;
        exitg2 = false;
        while ((!exitg2) && (ix < 5)) {
          if ((overlap[ix] == 0.0) || muDoubleScalarIsNaN(overlap[ix])) {
            b0 = true;
          } else {
            b0 = false;
          }

          if (!b0) {
            y = true;
            exitg2 = true;
          } else {
            ix++;
          }
        }

        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, covrtLogMcdc
                       (&emlrtCoverageInstance, 0U, 0U, 1, !covrtLogCond
                        (&emlrtCoverageInstance, 0U, 0U, 2, y)))) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 13);
          a++;
          i0 = (int32_T)a - 1;
          if (!((i0 >= 0) && (i0 <= 4))) {
            emlrtDynamicBoundsCheckR2012b(i0, 0, 4, &b_emlrtBCI, sp);
          }

          i0 = chessboards[(int32_T)a - 1].f1->size[0] * chessboards[(int32_T)a
            - 1].f1->size[1];
          chessboards[(int32_T)a - 1].f1->size[0] = chessboard->size[0];
          ixstart = (int32_T)a - 1;
          if (!((ixstart >= 0) && (ixstart <= 4))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &b_emlrtBCI, sp);
          }

          chessboards[(int32_T)a - 1].f1->size[1] = chessboard->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)chessboards[(int32_T)a - 1].
                            f1, i0, (int32_T)sizeof(real_T), &emlrtRTEI);
          i0 = (int32_T)a - 1;
          if (!((i0 >= 0) && (i0 <= 4))) {
            emlrtDynamicBoundsCheckR2012b(i0, 0, 4, &b_emlrtBCI, sp);
          }

          i0 = (int32_T)a - 1;
          if (!((i0 >= 0) && (i0 <= 4))) {
            emlrtDynamicBoundsCheckR2012b(i0, 0, 4, &b_emlrtBCI, sp);
          }

          loop_ub = chessboard->size[0] * chessboard->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            ixstart = (int32_T)a - 1;
            if (!((ixstart >= 0) && (ixstart <= 4))) {
              emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &b_emlrtBCI, sp);
            }

            chessboards[ixstart].f1->data[i0] = chessboard->data[i0];
          }
        } else {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 14);
          st.site = &i_emlrtRSI;
          for (i0 = 0; i0 < 5; i0++) {
            x[i0] = (overlap[i0] == 1.0);
          }

          b_st.site = &qd_emlrtRSI;
          ixstart = 0;
          ix = 1;
          exitg1 = false;
          while ((!exitg1) && (ix < 6)) {
            guard1 = false;
            if (x[ix - 1]) {
              ixstart++;
              ii_data[ixstart - 1] = (int8_T)ix;
              if (ixstart >= 5) {
                exitg1 = true;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              ix++;
            }
          }

          if (1 > ixstart) {
            loop_ub = 0;
          } else {
            loop_ub = ixstart;
          }

          iv0[0] = 1;
          iv0[1] = loop_ub;
          c_st.site = &rd_emlrtRSI;
          b_indexShapeCheck(&c_st, 5, iv0);
          for (i0 = 0; i0 < loop_ub; i0++) {
            idx_data[i0] = ii_data[i0];
          }

          st.site = &j_emlrtRSI;
          mtmp = chessboardEnergy(&st, chessboard, corners->p);
          overlap_size[0] = loop_ub;
          for (i0 = 0; i0 < loop_ub; i0++) {
            ixstart = idx_data[i0];
            overlap_data[i0] = (overlap[ixstart + 4] <= mtmp);
          }

          b_overlap_data.data = (boolean_T *)&overlap_data;
          b_overlap_data.size = (int32_T *)&overlap_size;
          b_overlap_data.allocatedSize = 5;
          b_overlap_data.numDimensions = 1;
          b_overlap_data.canFreeData = false;
          st.site = &j_emlrtRSI;
          if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, covrtLogMcdc
                         (&emlrtCoverageInstance, 0U, 0U, 2, !covrtLogCond
                          (&emlrtCoverageInstance, 0U, 0U, 3, any(&st,
                  &b_overlap_data))))) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 15);
            st.site = &k_emlrtRSI;
            if (loop_ub == 1) {
            } else {
              emlrtErrorWithMessageIdR2012b(&st, &mb_emlrtRTEI,
                "Coder:builtins:NonScalarCellRefIndex", 0);
            }

            i0 = chessboards[idx_data[0] - 1].f1->size[0] *
              chessboards[idx_data[0] - 1].f1->size[1];
            chessboards[idx_data[0] - 1].f1->size[0] = 0;
            chessboards[idx_data[0] - 1].f1->size[1] = 0;
            emxEnsureCapacity(sp, (emxArray__common *)chessboards[idx_data[0] -
                              1].f1, i0, (int32_T)sizeof(real_T), &emlrtRTEI);
            i0 = (int32_T)a - 1;
            if (!((i0 >= 0) && (i0 <= 4))) {
              emlrtDynamicBoundsCheckR2012b(i0, 0, 4, &emlrtBCI, sp);
            }

            i0 = chessboards[(int32_T)a - 1].f1->size[0] * chessboards[(int32_T)
              a - 1].f1->size[1];
            chessboards[(int32_T)a - 1].f1->size[0] = chessboard->size[0];
            ixstart = (int32_T)a - 1;
            if (!((ixstart >= 0) && (ixstart <= 4))) {
              emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &emlrtBCI, sp);
            }

            chessboards[(int32_T)a - 1].f1->size[1] = chessboard->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)chessboards[(int32_T)a - 1]
                              .f1, i0, (int32_T)sizeof(real_T), &emlrtRTEI);
            i0 = (int32_T)a - 1;
            if (!((i0 >= 0) && (i0 <= 4))) {
              emlrtDynamicBoundsCheckR2012b(i0, 0, 4, &emlrtBCI, sp);
            }

            i0 = (int32_T)a - 1;
            if (!((i0 >= 0) && (i0 <= 4))) {
              emlrtDynamicBoundsCheckR2012b(i0, 0, 4, &emlrtBCI, sp);
            }

            loop_ub = chessboard->size[0] * chessboard->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              ixstart = (int32_T)a - 1;
              if (!((ixstart >= 0) && (ixstart <= 4))) {
                emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &emlrtBCI, sp);
              }

              chessboards[ixstart].f1->data[i0] = chessboard->data[i0];
            }
          }
        }
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_boolean_T(&b_chessboards);
  emxFree_real_T(&chessboard);
  emxFree_cell_wrap_0_1x4(&proposal);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);

  /* chessboards = cellfun(@(x) x(any(x,2),:),chessboards,'UniformOutput',false); */
  /* chessboards(:, any(cellfun(@isempty, chessboards), 1)) = []; */
  /* disp('Find Chessboards OK');   */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (chessboardsFromCorners.c) */
