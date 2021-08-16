/*
 * _coder_chessboardsFromCorners_mex_api.c
 *
 * Code generation for function '_coder_chessboardsFromCorners_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "_coder_chessboardsFromCorners_mex_api.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo eb_emlrtRTEI = { 1, 1,
  "_coder_chessboardsFromCorners_mex_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200]);
static const mxArray *c_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[100]);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const struct1_T
  u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *chessboards,
  const char_T *identifier, cell_2 *y);
static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *corners, const
  char_T *identifier, struct0_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const cell_wrap_0
  u[5]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_2 *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[42]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[35]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16]);
static uint8_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *img,
  const char_T *identifier))[921600];
static uint8_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[921600];
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tau, const
  char_T *identifier);
static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[100]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[42]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[35]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16]);
static uint8_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[921600];
static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "p", "v1", "v2", "score" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "p";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "p")), &thisId,
                     y->p);
  thisId.fIdentifier = "v1";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "v1")),
                     &thisId, y->v1);
  thisId.fIdentifier = "v2";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "v2")),
                     &thisId, y->v2);
  thisId.fIdentifier = "score";
  d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "score")),
                     &thisId, y->score);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv11[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv11, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv12[2] = { 0, 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u_data);
  emlrtSetDimensions((mxArray *)m2, u_size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[100])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const struct1_T
  u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T i22;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m3;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(y, e_emlrt_marshallOut(u.p), "p", 0);
  emlrtAddField(y, e_emlrt_marshallOut(u.v1), "v1", 0);
  emlrtAddField(y, e_emlrt_marshallOut(u.v2), "v2", 0);
  i22 = b_u->size[0];
  b_u->size[0] = u.score->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_u, i22, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u.score->size[0];
  for (i22 = 0; i22 < loop_ub; i22++) {
    b_u->data[i22] = u.score->data[i22];
  }

  b_y = NULL;
  m3 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i22 = 0;
  for (loop_ub = 0; loop_ub < b_u->size[0]; loop_ub++) {
    pData[i22] = b_u->data[loop_ub];
    i22++;
  }

  emlrtAssign(&b_y, m3);
  emlrtAddField(y, b_y, "score", 0);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *chessboards,
  const char_T *identifier, cell_2 *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(chessboards), &thisId, y);
  emlrtDestroyArray(&chessboards);
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  real_T *pData;
  int32_T i23;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m4 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m4);
  i23 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i23] = u->data[b_i + u->size[0] * i];
      i23++;
    }
  }

  emlrtAssign(&y, m4);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *corners, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(corners), &thisId, y);
  emlrtDestroyArray(&corners);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const cell_wrap_0
  u[5])
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T iv9[2];
  int32_T i20;
  emxArray_real_T *r9;
  const cell_wrap_0 *r10;
  int32_T i21;
  int32_T loop_ub;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m0;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  for (i20 = 0; i20 < 2; i20++) {
    iv9[i20] = 1 + (i20 << 2);
  }

  emlrtAssign(&y, emlrtCreateCellArrayR2014a(2, iv9));
  emxInit_real_T1(sp, &r9, 1, (emlrtRTEInfo *)NULL, true);
  for (i20 = 0; i20 < 5; i20++) {
    r10 = &u[i20];
    i21 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = r10->f1->size[0];
    b_u->size[1] = r10->f1->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i21, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    i21 = r10->f1->size[0];
    loop_ub = r10->f1->size[1];
    i = r9->size[0];
    r9->size[0] = i21 * loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r9, i, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub *= i21;
    for (i21 = 0; i21 < loop_ub; i21++) {
      r9->data[i21] = r10->f1->data[i21];
    }

    loop_ub = r9->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_u->data[i21] = r9->data[i21];
    }

    b_y = NULL;
    m0 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m0);
    i21 = 0;
    for (loop_ub = 0; loop_ub < b_u->size[1]; loop_ub++) {
      for (i = 0; i < b_u->size[0]; i++) {
        pData[i21] = b_u->data[i + b_u->size[0] * loop_ub];
        i21++;
      }
    }

    emlrtAssign(&b_y, m0);
    emlrtSetCell(y, i20, b_y);
  }

  emxFree_real_T(&r9);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_2 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv10[2];
  boolean_T bv0[2];
  int32_T i;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  for (i = 0; i < 2; i++) {
    iv10[i] = 1 + (i << 2);
    bv0[i] = false;
  }

  emlrtCheckCell(sp, parentId, u, 2U, iv10, bv0);
  thisId.fIdentifier = "1";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 0)), &thisId,
                     y->f1);
  thisId.fIdentifier = "2";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 1)), &thisId,
                     y->f2);
  thisId.fIdentifier = "3";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 2)), &thisId,
                     y->f3);
  thisId.fIdentifier = "4";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 3)), &thisId,
                     y->f4);
  thisId.fIdentifier = "5";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 4)), &thisId,
                     y->f5);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[42])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[35])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static uint8_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *img,
  const char_T *identifier))[921600]
{
  uint8_T (*y)[921600];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = k_emlrt_marshallIn(sp, emlrtAlias(img), &thisId);
  emlrtDestroyArray(&img);
  return y;
}
  static uint8_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[921600]
{
  uint8_T (*y)[921600];
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tau, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(tau), &thisId);
  emlrtDestroyArray(&tau);
  return y;
}

static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200])
{
  static const int32_T dims[2] = { 100, 2 };

  int32_T i24;
  int32_T i25;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i24 = 0; i24 < 2; i24++) {
    for (i25 = 0; i25 < 100; i25++) {
      ret[i25 + 100 * i24] = (*(real_T (*)[200])mxGetData(src))[i25 + 100 * i24];
    }
  }

  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[100])
{
  static const int32_T dims[1] = { 100 };

  int32_T i26;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i26 = 0; i26 < 100; i26++) {
    ret[i26] = (*(real_T (*)[100])mxGetData(src))[i26];
  }

  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[42])
{
  static const int32_T dims[2] = { 6, 7 };

  int32_T i27;
  int32_T i28;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i27 = 0; i27 < 7; i27++) {
    for (i28 = 0; i28 < 6; i28++) {
      ret[i28 + 6 * i27] = (*(real_T (*)[42])mxGetData(src))[i28 + 6 * i27];
    }
  }

  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[35])
{
  static const int32_T dims[2] = { 5, 7 };

  int32_T i29;
  int32_T i30;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i29 = 0; i29 < 7; i29++) {
    for (i30 = 0; i30 < 5; i30++) {
      ret[i30 + 5 * i29] = (*(real_T (*)[35])mxGetData(src))[i30 + 5 * i29];
    }
  }

  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims[2] = { 4, 4 };

  int32_T i31;
  int32_T i32;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i31 = 0; i31 < 4; i31++) {
    for (i32 = 0; i32 < 4; i32++) {
      ret[i32 + (i31 << 2)] = (*(real_T (*)[16])mxGetData(src))[i32 + (i31 << 2)];
    }
  }

  emlrtDestroyArray(&src);
}

static uint8_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[921600]
{
  uint8_T (*ret)[921600];
  static const int32_T dims[2] = { 720, 1280 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint8", false, 2U, dims);
  ret = (uint8_T (*)[921600])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void chessboardsFromCorners_api(const mxArray * const prhs[1], const mxArray
  *plhs[1])
{
  cell_wrap_0 chessboards[5];
  struct0_T corners;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitMatrix_cell_wrap_01(&st, chessboards, &eb_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "corners", &corners);

  /* Invoke the target function */
  chessboardsFromCorners(&st, &corners, chessboards);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, chessboards);
  emxFreeMatrix_cell_wrap_01(chessboards);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void extractuv_api(const mxArray * const prhs[2], const mxArray *plhs[2])
{
  real_T (*tam_chess_data)[10];
  emxArray_real_T *corners_uv;
  cell_2 chessboards;
  struct0_T corners;
  int32_T tam_chess_size[2];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  tam_chess_data = (real_T (*)[10])mxMalloc(sizeof(real_T [10]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &corners_uv, 2, &eb_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "chessboards", &chessboards);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "corners", &corners);

  /* Invoke the target function */
  extractuv(&st, &chessboards, &corners, corners_uv, *tam_chess_data,
            tam_chess_size);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(corners_uv);
  plhs[1] = c_emlrt_marshallOut(*tam_chess_data, tam_chess_size);
  corners_uv->canFreeData = false;
  emxFree_real_T(&corners_uv);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void findCorners_api(c_chessboardsFromCorners_mexSta *SD, const mxArray * const
                     prhs[3], const mxArray *plhs[1])
{
  struct1_T corners3;
  uint8_T (*img)[921600];
  real_T tau;
  real_T refine_corners;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct1_T(&st, &corners3, &eb_emlrtRTEI, true);

  /* Marshall function inputs */
  img = j_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img");
  tau = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "tau");
  refine_corners = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "refine_corners");

  /* Invoke the target function */
  findCorners(SD, &st, *img, tau, refine_corners, &corners3);

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(&st, corners3);
  emxFreeStruct_struct1_T(&corners3);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_chessboardsFromCorners_mex_api.c) */
