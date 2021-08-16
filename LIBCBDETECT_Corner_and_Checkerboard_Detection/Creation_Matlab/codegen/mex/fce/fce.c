/*
 * fce.c
 *
 * Code generation for function 'fce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "fce_emxutil.h"
#include "findCorners.h"
#include "extractuv.h"
#include "chessboardsFromCorners.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 3, "fce",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\fce.m"
};

static emlrtRSInfo b_emlrtRSI = { 4, "fce",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\fce.m"
};

static emlrtRSInfo c_emlrtRSI = { 10, "fce",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\fce.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 36, "fce",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\fce.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 4, 1, "fce",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\fce.m"
};

/* Function Definitions */
void fce(fceStackData *SD, const emlrtStack *sp, const uint8_T image[921600],
         emxArray_real_T *corners_uv, real_T tam_chess_data[], int32_T
         tam_chess_size[2])
{
  emxArray_real_T *corners_p;
  struct_T expl_temp;
  int32_T i0;
  int32_T loop_ub;
  emxArray_real_T *corners_v1;
  emxArray_real_T *corners_v2;
  cell_wrap_0 chessboards[5];
  emxArray_real_T *b_corners_uv;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &corners_p, 2, &emlrtRTEI, true);
  emxInitStruct_struct_T(sp, &expl_temp, &emlrtRTEI, true);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  st.site = &emlrtRSI;
  findCorners(SD, &st, image, &expl_temp);
  i0 = corners_p->size[0] * corners_p->size[1];
  corners_p->size[0] = expl_temp.p->size[0];
  corners_p->size[1] = expl_temp.p->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners_p, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = expl_temp.p->size[0] * expl_temp.p->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    corners_p->data[i0] = expl_temp.p->data[i0];
  }

  emxInit_real_T(sp, &corners_v1, 2, &emlrtRTEI, true);
  i0 = corners_v1->size[0] * corners_v1->size[1];
  corners_v1->size[0] = expl_temp.v1->size[0];
  corners_v1->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners_v1, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = expl_temp.v1->size[0] * expl_temp.v1->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    corners_v1->data[i0] = expl_temp.v1->data[i0];
  }

  emxInit_real_T(sp, &corners_v2, 2, &emlrtRTEI, true);
  i0 = corners_v2->size[0] * corners_v2->size[1];
  corners_v2->size[0] = expl_temp.v2->size[0];
  corners_v2->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)corners_v2, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = expl_temp.v2->size[0] * expl_temp.v2->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    corners_v2->data[i0] = expl_temp.v2->data[i0];
  }

  emxFreeStruct_struct_T(&expl_temp);
  emxInitMatrix_cell_wrap_0(sp, chessboards, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &b_corners_uv, 2, &emlrtRTEI, true);
  st.site = &b_emlrtRSI;
  chessboardsFromCorners(&st, corners_p, corners_v1, corners_v2, chessboards);

  /* figure; imshow(uint8(image)); hold on; */
  /* plotChessboards(chessboards,corners); */
  st.site = &c_emlrtRSI;
  extractuv(&st, chessboards, corners_p, b_corners_uv, tam_chess_data,
            tam_chess_size);
  i0 = corners_uv->size[0] * corners_uv->size[1];
  corners_uv->size[0] = b_corners_uv->size[0];
  corners_uv->size[1] = b_corners_uv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)corners_uv, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = b_corners_uv->size[0] * b_corners_uv->size[1];
  emxFreeMatrix_cell_wrap_0(chessboards);
  emxFree_real_T(&corners_v2);
  emxFree_real_T(&corners_v1);
  emxFree_real_T(&corners_p);
  for (i0 = 0; i0 < loop_ub; i0++) {
    corners_uv->data[i0] = b_corners_uv->data[i0];
  }

  emxFree_real_T(&b_corners_uv);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (fce.c) */
