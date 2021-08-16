/*
 * chessboardsFromCorners.c
 *
 * Code generation for function 'chessboardsFromCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "chessboardsFromCorners.h"
#include "fce_emxutil.h"
#include "chessboardEnergy.h"
#include "growChessboard.h"
#include "any.h"
#include "indexShapeCheck.h"
#include "initChessboard.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo wd_emlrtRSI = { 23, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo xd_emlrtRSI = { 27, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo yd_emlrtRSI = { 35, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo ae_emlrtRSI = { 39, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo be_emlrtRSI = { 40, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo ce_emlrtRSI = { 57, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo de_emlrtRSI = { 70, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo ee_emlrtRSI = { 72, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo fe_emlrtRSI = { 83, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo ge_emlrtRSI = { 84, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo he_emlrtRSI = { 85, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRSInfo hh_emlrtRSI = { 44, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo ih_emlrtRSI = { 253, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 2, 24, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 23, 7, "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m"
};

static emlrtRTEInfo nc_emlrtRTEI = { 6, 23, "checkCellRefIndexIsScalar",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\checkCellRefIndexIsScalar.m"
};

static emlrtBCInfo u_emlrtBCI = { 0, 4, 86, 13, "chessboards",
  "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { 0, 4, 81, 11, "chessboards",
  "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 70, 20, "chessboards{j}",
  "chessboardsFromCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
  0 };

/* Function Definitions */
void chessboardsFromCorners(const emlrtStack *sp, const emxArray_real_T
  *corners_p, const emxArray_real_T *corners_v1, const emxArray_real_T
  *corners_v2, cell_wrap_0 chessboards[5])
{
  int32_T i10;
  emxArray_cell_wrap_0_1x4 proposal;
  cell_wrap_0 r3;
  cell_wrap_0 r4;
  cell_wrap_0 r5;
  cell_wrap_0 r6;
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
  boolean_T b4;
  boolean_T x[5];
  int8_T ii_data[5];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv2[2];
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
  covrtLogFcn(&emlrtCoverageInstance, 8U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 0);

  /*  intialize chessboards */
  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 1);
  i10 = chessboards[0].f1->size[0] * chessboards[0].f1->size[1];
  chessboards[0].f1->size[0] = 6;
  chessboards[0].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[0].f1, i10, (int32_T)
                    sizeof(real_T), &r_emlrtRTEI);
  for (i10 = 0; i10 < 42; i10++) {
    chessboards[0].f1->data[i10] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 1);
  i10 = chessboards[1].f1->size[0] * chessboards[1].f1->size[1];
  chessboards[1].f1->size[0] = 6;
  chessboards[1].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[1].f1, i10, (int32_T)
                    sizeof(real_T), &r_emlrtRTEI);
  for (i10 = 0; i10 < 42; i10++) {
    chessboards[1].f1->data[i10] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 1);
  i10 = chessboards[2].f1->size[0] * chessboards[2].f1->size[1];
  chessboards[2].f1->size[0] = 6;
  chessboards[2].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[2].f1, i10, (int32_T)
                    sizeof(real_T), &r_emlrtRTEI);
  for (i10 = 0; i10 < 42; i10++) {
    chessboards[2].f1->data[i10] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 1);
  i10 = chessboards[3].f1->size[0] * chessboards[3].f1->size[1];
  chessboards[3].f1->size[0] = 6;
  chessboards[3].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[3].f1, i10, (int32_T)
                    sizeof(real_T), &r_emlrtRTEI);
  for (i10 = 0; i10 < 42; i10++) {
    chessboards[3].f1->data[i10] = 0.0;
  }

  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 1);
  i10 = chessboards[4].f1->size[0] * chessboards[4].f1->size[1];
  chessboards[4].f1->size[0] = 6;
  chessboards[4].f1->size[1] = 7;
  emxEnsureCapacity(sp, (emxArray__common *)chessboards[4].f1, i10, (int32_T)
                    sizeof(real_T), &r_emlrtRTEI);
  for (i10 = 0; i10 < 42; i10++) {
    chessboards[4].f1->data[i10] = 0.0;
  }

  emxInit_cell_wrap_0_1x4(&proposal);
  emxInitStruct_cell_wrap_0(sp, &r3, &r_emlrtRTEI, true);
  emxInitStruct_cell_wrap_0(sp, &r4, &r_emlrtRTEI, true);
  emxInitStruct_cell_wrap_0(sp, &r5, &r_emlrtRTEI, true);
  emxInitStruct_cell_wrap_0(sp, &r6, &r_emlrtRTEI, true);
  emxInitMatrix_cell_wrap_01(sp, rv0, &r_emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 2);
  i10 = r3.f1->size[0] * r3.f1->size[1];
  r3.f1->size[0] = 1;
  r3.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r3.f1, i10, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  r3.f1->data[0] = 0.0;
  i10 = r4.f1->size[0] * r4.f1->size[1];
  r4.f1->size[0] = 1;
  r4.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r4.f1, i10, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  r4.f1->data[0] = 0.0;
  i10 = r5.f1->size[0] * r5.f1->size[1];
  r5.f1->size[0] = 1;
  r5.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r5.f1, i10, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  r5.f1->data[0] = 0.0;
  i10 = r6.f1->size[0] * r6.f1->size[1];
  r6.f1->size[0] = 1;
  r6.f1->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r6.f1, i10, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  r6.f1->data[0] = 0.0;
  emxCopyStruct_cell_wrap_0(sp, &rv0[0], &r3, &r_emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &rv0[1], &r4, &r_emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &rv0[2], &r5, &r_emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &rv0[3], &r6, &r_emlrtRTEI);
  i10 = proposal.size[0] * proposal.size[1];
  proposal.size[0] = 1;
  proposal.size[1] = 4;
  emxEnsureCapacity_cell_wrap_0(sp, proposal.data, proposal.size, i10,
    &r_emlrtRTEI);
  emxFreeStruct_cell_wrap_0(&r6);
  emxFreeStruct_cell_wrap_0(&r5);
  emxFreeStruct_cell_wrap_0(&r4);
  emxFreeStruct_cell_wrap_0(&r3);
  for (i10 = 0; i10 < 4; i10++) {
    emxCopyStruct_cell_wrap_0(sp, &proposal.data[proposal.size[0] * i10],
      &rv0[i10], &r_emlrtRTEI);
  }

  emxFreeMatrix_cell_wrap_01(rv0);
  a = 0.0;

  /*  for all seed corners do */
  i = 0;
  emxInit_real_T(sp, &chessboard, 2, &s_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_chessboards, 1, &r_emlrtRTEI, true);
  while (i <= corners_p->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 3);

    /*  init 3x3 chessboard from seed i */
    st.site = &wd_emlrtRSI;
    initChessboard(&st, corners_p, corners_v1, corners_v2, 1.0 + (real_T)i,
                   tmp_data, tmp_size);
    i10 = chessboard->size[0] * chessboard->size[1];
    chessboard->size[0] = tmp_size[0];
    chessboard->size[1] = tmp_size[1];
    emxEnsureCapacity(sp, (emxArray__common *)chessboard, i10, (int32_T)sizeof
                      (real_T), &r_emlrtRTEI);
    loop_ub = tmp_size[0] * tmp_size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      chessboard->data[i10] = tmp_data[i10];
    }

    /*  check if this is a useful initial guess */
    st.site = &xd_emlrtRSI;
    if (covrtLogCond(&emlrtCoverageInstance, 8U, 0U, 0, (chessboard->size[0] ==
          0) || (chessboard->size[1] == 0)) || covrtLogCond
        (&emlrtCoverageInstance, 8U, 0U, 1, chessboardEnergy(&st, chessboard,
          corners_p) > 0.0)) {
      covrtLogMcdc(&emlrtCoverageInstance, 8U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 0, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 4);
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 8U, 0U, 0, false);
      covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 0, false);

      /*  try growing chessboard */
      do {
        exitg4 = 0;
        covrtLogWhile(&emlrtCoverageInstance, 8U, 0U, 0, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 5);

        /*  compute current energy */
        st.site = &yd_emlrtRSI;
        energy = chessboardEnergy(&st, chessboard, corners_p);

        /*  compute proposals and energies */
        j = 0;
        while (j < 4) {
          covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 2, 1);
          covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 6);
          i10 = proposal.data[proposal.size[0] * j].f1->size[0] *
            proposal.data[proposal.size[0] * j].f1->size[1];
          proposal.data[proposal.size[0] * j].f1->size[0] = chessboard->size[0];
          proposal.data[proposal.size[0] * j].f1->size[1] = chessboard->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)proposal.data[proposal.size
                            [0] * j].f1, i10, (int32_T)sizeof(real_T),
                            &r_emlrtRTEI);
          loop_ub = chessboard->size[0] * chessboard->size[1];
          for (i10 = 0; i10 < loop_ub; i10++) {
            proposal.data[proposal.size[0] * j].f1->data[i10] = chessboard->
              data[i10];
          }

          st.site = &ae_emlrtRSI;
          growChessboard(&st, proposal.data[proposal.size[0] * j].f1, corners_p,
                         1.0 + (real_T)j);
          st.site = &be_emlrtRSI;
          p_energy[j] = chessboardEnergy(&st, proposal.data[proposal.size[0] * j]
            .f1, corners_p);
          j++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 2, 0);
        covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 7);

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
        if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 1, p_energy[itmp] <
                       energy)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 8);
          i10 = chessboard->size[0] * chessboard->size[1];
          chessboard->size[0] = proposal.data[proposal.size[0] * itmp].f1->size
            [0];
          chessboard->size[1] = proposal.data[proposal.size[0] * itmp].f1->size
            [1];
          emxEnsureCapacity(sp, (emxArray__common *)chessboard, i10, (int32_T)
                            sizeof(real_T), &r_emlrtRTEI);
          loop_ub = proposal.data[proposal.size[0] * itmp].f1->size[0] *
            proposal.data[proposal.size[0] * itmp].f1->size[1];
          for (i10 = 0; i10 < loop_ub; i10++) {
            chessboard->data[i10] = proposal.data[proposal.size[0] * itmp]
              .f1->data[i10];
          }

          /*  otherwise exit loop */
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);

      covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 9);

      /*  if chessboard has low energy (corresponding to high quality) */
      st.site = &ce_emlrtRSI;
      if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 2, chessboardEnergy(&st,
            chessboard, corners_p) < -10.0)) {
        if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 3, a == 0.0)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 10);
          for (i10 = 0; i10 < 2; i10++) {
            tmp_size[i10] = chessboard->size[i10];
          }

          i10 = chessboards[0].f1->size[0] * chessboards[0].f1->size[1];
          chessboards[0].f1->size[0] = tmp_size[0];
          chessboards[0].f1->size[1] = tmp_size[1];
          emxEnsureCapacity(sp, (emxArray__common *)chessboards[0].f1, i10,
                            (int32_T)sizeof(real_T), &r_emlrtRTEI);
          loop_ub = tmp_size[0] * tmp_size[1];
          for (i10 = 0; i10 < loop_ub; i10++) {
            chessboards[0].f1->data[i10] = 0.0;
          }
        }

        covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 11);

        /*  check if new chessboard proposal overlaps with existing chessboards */
        memset(&overlap[0], 0, 10U * sizeof(real_T));

        /* [rr,cc]=size(chessboards); */
        j = 0;
        while (j < 5) {
          covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 3, 1);

          /* rr*cc      */
          ix = 0;
          do {
            exitg3 = 0;
            ixstart = chessboards[j].f1->size[0] * chessboards[j].f1->size[1];
            if (ix <= ixstart - 1) {
              covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 4, 1);
              i10 = chessboards[j].f1->size[0] * chessboards[j].f1->size[1];
              if (!((ix + 1 >= 1) && (ix + 1 <= i10))) {
                emlrtDynamicBoundsCheckR2012b(ix + 1, 1, i10, &w_emlrtBCI, sp);
              }

              mtmp = chessboards[j].f1->data[ix];
              i10 = b_chessboards->size[0];
              b_chessboards->size[0] = chessboard->size[0] * chessboard->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)b_chessboards, i10,
                                (int32_T)sizeof(boolean_T), &r_emlrtRTEI);
              loop_ub = chessboard->size[0] * chessboard->size[1];
              for (i10 = 0; i10 < loop_ub; i10++) {
                b_chessboards->data[i10] = (mtmp == chessboard->data[i10]);
              }

              st.site = &de_emlrtRSI;
              if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 4, any(&st,
                    b_chessboards))) {
                covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 12);
                overlap[j] = 1.0;
                st.site = &ee_emlrtRSI;
                overlap[5 + j] = chessboardEnergy(&st, chessboards[j].f1,
                  corners_p);
                exitg3 = 1;
              } else {
                ix++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }
            } else {
              covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 4, 0);
              exitg3 = 1;
            }
          } while (exitg3 == 0);

          j++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 3, 0);

        /*  add chessboard (and replace overlapping if neccessary) */
        y = false;
        ix = 0;
        exitg2 = false;
        while ((!exitg2) && (ix < 5)) {
          if ((overlap[ix] == 0.0) || muDoubleScalarIsNaN(overlap[ix])) {
            b4 = true;
          } else {
            b4 = false;
          }

          if (!b4) {
            y = true;
            exitg2 = true;
          } else {
            ix++;
          }
        }

        if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 5, covrtLogMcdc
                       (&emlrtCoverageInstance, 8U, 0U, 1, !covrtLogCond
                        (&emlrtCoverageInstance, 8U, 0U, 2, y)))) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 13);
          a++;
          i10 = (int32_T)a - 1;
          if (!((i10 >= 0) && (i10 <= 4))) {
            emlrtDynamicBoundsCheckR2012b(i10, 0, 4, &v_emlrtBCI, sp);
          }

          i10 = chessboards[(int32_T)a - 1].f1->size[0] * chessboards[(int32_T)a
            - 1].f1->size[1];
          chessboards[(int32_T)a - 1].f1->size[0] = chessboard->size[0];
          ixstart = (int32_T)a - 1;
          if (!((ixstart >= 0) && (ixstart <= 4))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &v_emlrtBCI, sp);
          }

          chessboards[(int32_T)a - 1].f1->size[1] = chessboard->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)chessboards[(int32_T)a - 1].
                            f1, i10, (int32_T)sizeof(real_T), &r_emlrtRTEI);
          i10 = (int32_T)a - 1;
          if (!((i10 >= 0) && (i10 <= 4))) {
            emlrtDynamicBoundsCheckR2012b(i10, 0, 4, &v_emlrtBCI, sp);
          }

          i10 = (int32_T)a - 1;
          if (!((i10 >= 0) && (i10 <= 4))) {
            emlrtDynamicBoundsCheckR2012b(i10, 0, 4, &v_emlrtBCI, sp);
          }

          loop_ub = chessboard->size[0] * chessboard->size[1];
          for (i10 = 0; i10 < loop_ub; i10++) {
            ixstart = (int32_T)a - 1;
            if (!((ixstart >= 0) && (ixstart <= 4))) {
              emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &v_emlrtBCI, sp);
            }

            chessboards[ixstart].f1->data[i10] = chessboard->data[i10];
          }
        } else {
          covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 14);
          st.site = &fe_emlrtRSI;
          for (i10 = 0; i10 < 5; i10++) {
            x[i10] = (overlap[i10] == 1.0);
          }

          b_st.site = &hh_emlrtRSI;
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

          iv2[0] = 1;
          iv2[1] = loop_ub;
          c_st.site = &ih_emlrtRSI;
          b_indexShapeCheck(&c_st, 5, iv2);
          for (i10 = 0; i10 < loop_ub; i10++) {
            idx_data[i10] = ii_data[i10];
          }

          st.site = &ge_emlrtRSI;
          mtmp = chessboardEnergy(&st, chessboard, corners_p);
          overlap_size[0] = loop_ub;
          for (i10 = 0; i10 < loop_ub; i10++) {
            ixstart = idx_data[i10];
            overlap_data[i10] = (overlap[ixstart + 4] <= mtmp);
          }

          b_overlap_data.data = (boolean_T *)&overlap_data;
          b_overlap_data.size = (int32_T *)&overlap_size;
          b_overlap_data.allocatedSize = 5;
          b_overlap_data.numDimensions = 1;
          b_overlap_data.canFreeData = false;
          st.site = &ge_emlrtRSI;
          if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 6, covrtLogMcdc
                         (&emlrtCoverageInstance, 8U, 0U, 2, !covrtLogCond
                          (&emlrtCoverageInstance, 8U, 0U, 3, any(&st,
                  &b_overlap_data))))) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 15);
            st.site = &he_emlrtRSI;
            if (loop_ub == 1) {
            } else {
              emlrtErrorWithMessageIdR2012b(&st, &nc_emlrtRTEI,
                "Coder:builtins:NonScalarCellRefIndex", 0);
            }

            i10 = chessboards[idx_data[0] - 1].f1->size[0] *
              chessboards[idx_data[0] - 1].f1->size[1];
            chessboards[idx_data[0] - 1].f1->size[0] = 0;
            chessboards[idx_data[0] - 1].f1->size[1] = 0;
            emxEnsureCapacity(sp, (emxArray__common *)chessboards[idx_data[0] -
                              1].f1, i10, (int32_T)sizeof(real_T), &r_emlrtRTEI);
            i10 = (int32_T)a - 1;
            if (!((i10 >= 0) && (i10 <= 4))) {
              emlrtDynamicBoundsCheckR2012b(i10, 0, 4, &u_emlrtBCI, sp);
            }

            i10 = chessboards[(int32_T)a - 1].f1->size[0] * chessboards[(int32_T)
              a - 1].f1->size[1];
            chessboards[(int32_T)a - 1].f1->size[0] = chessboard->size[0];
            ixstart = (int32_T)a - 1;
            if (!((ixstart >= 0) && (ixstart <= 4))) {
              emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &u_emlrtBCI, sp);
            }

            chessboards[(int32_T)a - 1].f1->size[1] = chessboard->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)chessboards[(int32_T)a - 1]
                              .f1, i10, (int32_T)sizeof(real_T), &r_emlrtRTEI);
            i10 = (int32_T)a - 1;
            if (!((i10 >= 0) && (i10 <= 4))) {
              emlrtDynamicBoundsCheckR2012b(i10, 0, 4, &u_emlrtBCI, sp);
            }

            i10 = (int32_T)a - 1;
            if (!((i10 >= 0) && (i10 <= 4))) {
              emlrtDynamicBoundsCheckR2012b(i10, 0, 4, &u_emlrtBCI, sp);
            }

            loop_ub = chessboard->size[0] * chessboard->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              ixstart = (int32_T)a - 1;
              if (!((ixstart >= 0) && (ixstart <= 4))) {
                emlrtDynamicBoundsCheckR2012b(ixstart, 0, 4, &u_emlrtBCI, sp);
              }

              chessboards[ixstart].f1->data[i10] = chessboard->data[i10];
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
  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 1, 0);

  /* chessboards = cellfun(@(x) x(any(x,2),:),chessboards,'UniformOutput',false); */
  /* chessboards(:, any(cellfun(@isempty, chessboards), 1)) = []; */
  /* disp('Find Chessboards OK');   */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (chessboardsFromCorners.c) */
