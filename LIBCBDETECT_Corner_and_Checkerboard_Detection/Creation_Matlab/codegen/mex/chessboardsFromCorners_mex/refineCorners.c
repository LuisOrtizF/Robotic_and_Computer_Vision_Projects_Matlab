/*
 * refineCorners.c
 *
 * Code generation for function 'refineCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "refineCorners.h"
#include "chessboardsFromCorners_mex_emxutil.h"
#include "sort1.h"
#include "findModesMeanShift.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo pf_emlrtRSI = { 19, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRSInfo qf_emlrtRSI = { 145, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 2, 20, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 129, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 152, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 12, 22, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 12, 24, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 13, 22, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 13, 24, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { 1, 720, 16, 34, "img_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { 1, 720, 17, 35, "img_weight", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 21, 18, "corners.v1", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtECInfo gb_emlrtECI = { -1, 21, 7, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 22, 18, "corners.v2", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtECInfo hb_emlrtECI = { -1, 22, 7, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 140, 27, "vec_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 141, 41, "vec_weight",
  "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 152, 34, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 154, 26, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 155, 26, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 158, 29, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtECInfo ib_emlrtECI = { -1, 154, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtECInfo jb_emlrtECI = { -1, 155, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtECInfo kb_emlrtECI = { -1, 158, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 134, 31, "vec_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 134, 5, "vec_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 141, 25, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  1 };

static emlrtDCInfo i_emlrtDCI = { 141, 7, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  1 };

/* Function Definitions */
void refineCorners(const emlrtStack *sp, const real_T img_angle[921600], const
                   real_T img_weight[921600], struct_T *corners)
{
  boolean_T b8;
  boolean_T b9;
  int32_T i;
  emxArray_real_T *vec_angle;
  emxArray_real_T *modes;
  emxArray_real_T *modesxx;
  emxArray_int32_T *r12;
  emxArray_real_T *r13;
  emxArray_int32_T *r14;
  emxArray_real_T *b_img_angle;
  emxArray_real_T *b_vec_angle;
  emxArray_real_T *b_modesxx;
  emxArray_real_T *c_modesxx;
  int32_T i35;
  int32_T i36;
  real_T maxval;
  real_T d1;
  int32_T unnamed_idx_0;
  int32_T end;
  int32_T i37;
  int32_T i38;
  int32_T i39;
  int32_T i40;
  real_T v1[2];
  real_T v2[2];
  int32_T b_i;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i41;
  real_T angle_hist[32];
  real_T unusedU0[32];
  int32_T iv13[2];
  int32_T iv14[2];
  int32_T iv15[2];
  int32_T iv16[2];
  int32_T iv17[1];
  int32_T d_modesxx[1];
  int32_T iv18[1];
  int32_T e_modesxx[1];
  int32_T iv19[1];
  real_T unusedU1[2];
  int32_T iidx[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b8 = false;
  b9 = false;
  covrtLogFcn(&emlrtCoverageInstance, 8U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 0);

  /*  image dimensions */
  /*  for all corners do */
  i = 0;
  emxInit_real_T1(sp, &vec_angle, 1, &gb_emlrtRTEI, true);
  emxInit_real_T(sp, &modes, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &modesxx, 2, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &r12, 1, &v_emlrtRTEI, true);
  emxInit_real_T1(sp, &r13, 1, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &r14, 1, &v_emlrtRTEI, true);
  emxInit_real_T(sp, &b_img_angle, 2, &v_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_vec_angle, 1, &v_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_modesxx, 1, &v_emlrtRTEI, true);
  emxInit_real_T1(sp, &c_modesxx, 1, &v_emlrtRTEI, true);
  while (i <= corners->p->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 1);

    /*  extract current corner location */
    i35 = corners->p->size[1];
    if (!(1 <= i35)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i35, &dd_emlrtBCI, sp);
    }

    i35 = corners->p->size[0];
    i36 = i + 1;
    if (!((i36 >= 1) && (i36 <= i35))) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &cd_emlrtBCI, sp);
    }

    i35 = corners->p->size[1];
    if (!(2 <= i35)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i35, &fd_emlrtBCI, sp);
    }

    i35 = corners->p->size[0];
    i36 = i + 1;
    if (!((i36 >= 1) && (i36 <= i35))) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &ed_emlrtBCI, sp);
    }

    /*  estimate edge orientations */
    maxval = muDoubleScalarMax(corners->p->data[i + corners->p->size[0]] - 10.0,
      1.0);
    d1 = muDoubleScalarMin(corners->p->data[i + corners->p->size[0]] + 10.0,
      720.0);
    if (maxval > d1) {
      i35 = 1;
      i36 = 1;
    } else {
      i35 = (int32_T)maxval;
      if (!((i35 >= 1) && (i35 <= 720))) {
        emlrtDynamicBoundsCheckR2012b(i35, 1, 720, &gd_emlrtBCI, sp);
      }

      i36 = (int32_T)d1 + 1;
    }

    maxval = muDoubleScalarMax(corners->p->data[i] - 10.0, 1.0);
    d1 = muDoubleScalarMin(corners->p->data[i] + 10.0, 720.0);
    if (maxval > d1) {
      unnamed_idx_0 = 1;
      end = 1;
    } else {
      unnamed_idx_0 = (int32_T)maxval;
      end = (int32_T)d1 + 1;
    }

    maxval = muDoubleScalarMax(corners->p->data[i + corners->p->size[0]] - 10.0,
      1.0);
    d1 = muDoubleScalarMin(corners->p->data[i + corners->p->size[0]] + 10.0,
      720.0);
    if (maxval > d1) {
      i37 = 1;
      i38 = 1;
    } else {
      i37 = (int32_T)maxval;
      if (!((i37 >= 1) && (i37 <= 720))) {
        emlrtDynamicBoundsCheckR2012b(i37, 1, 720, &hd_emlrtBCI, sp);
      }

      i38 = (int32_T)d1 + 1;
    }

    maxval = muDoubleScalarMax(corners->p->data[i] - 10.0, 1.0);
    d1 = muDoubleScalarMin(corners->p->data[i] + 10.0, 720.0);
    if (maxval > d1) {
      i39 = 1;
      i40 = 1;
    } else {
      i39 = (int32_T)maxval;
      i40 = (int32_T)d1 + 1;
    }

    st.site = &pf_emlrtRSI;
    covrtLogFcn(&emlrtCoverageInstance, 8U, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 3);

    /*  init v1 and v2 */
    for (b_i = 0; b_i < 2; b_i++) {
      v1[b_i] = 0.0;
      v2[b_i] = 0.0;
    }

    /*  number of bins (histogram parameter) */
    /*  convert images to vectors */
    /*  convert angles from normals to directions */
    b_i = b_img_angle->size[0] * b_img_angle->size[1];
    b_img_angle->size[0] = i36 - i35;
    b_img_angle->size[1] = end - unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)b_img_angle, b_i, (int32_T)sizeof
                      (real_T), &v_emlrtRTEI);
    loop_ub = end - unnamed_idx_0;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      b_loop_ub = i36 - i35;
      for (i41 = 0; i41 < b_loop_ub; i41++) {
        b_img_angle->data[i41 + b_img_angle->size[0] * b_i] = img_angle[((i35 +
          i41) + 720 * ((unnamed_idx_0 + b_i) - 1)) - 1];
      }
    }

    unnamed_idx_0 = (i36 - i35) * (end - unnamed_idx_0);
    i35 = vec_angle->size[0];
    vec_angle->size[0] = unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)vec_angle, i35, (int32_T)sizeof
                      (real_T), &v_emlrtRTEI);
    for (i35 = 0; i35 < unnamed_idx_0; i35++) {
      vec_angle->data[i35] = b_img_angle->data[i35] + 1.5707963267948966;
    }

    end = vec_angle->size[0];
    for (b_i = 0; b_i < end; b_i++) {
      if (vec_angle->data[b_i] > 3.1415926535897931) {
        i35 = vec_angle->size[0];
        if (!((b_i + 1 >= 1) && (b_i + 1 <= i35))) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i35, &qd_emlrtBCI, &st);
        }
      }
    }

    end = vec_angle->size[0] - 1;
    unnamed_idx_0 = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (vec_angle->data[b_i] > 3.1415926535897931) {
        unnamed_idx_0++;
      }
    }

    i35 = r14->size[0];
    r14->size[0] = unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r14, i35, (int32_T)sizeof(int32_T),
                      &v_emlrtRTEI);
    unnamed_idx_0 = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (vec_angle->data[b_i] > 3.1415926535897931) {
        r14->data[unnamed_idx_0] = b_i + 1;
        unnamed_idx_0++;
      }
    }

    unnamed_idx_0 = vec_angle->size[0];
    i35 = b_vec_angle->size[0];
    b_vec_angle->size[0] = r14->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_vec_angle, i35, (int32_T)sizeof
                      (real_T), &v_emlrtRTEI);
    loop_ub = r14->size[0];
    for (i35 = 0; i35 < loop_ub; i35++) {
      b_vec_angle->data[i35] = vec_angle->data[r14->data[i35] - 1] -
        3.1415926535897931;
    }

    loop_ub = b_vec_angle->size[0];
    for (i35 = 0; i35 < loop_ub; i35++) {
      i36 = r14->data[i35];
      if (!((i36 >= 1) && (i36 <= unnamed_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, unnamed_idx_0, &rd_emlrtBCI, &st);
      }

      vec_angle->data[i36 - 1] = b_vec_angle->data[i35];
    }

    /*  create histogram */
    memset(&angle_hist[0], 0, sizeof(real_T) << 5);
    b_i = 0;
    while (b_i <= vec_angle->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 4);
      i35 = vec_angle->size[0];
      i36 = b_i + 1;
      if (!((i36 >= 1) && (i36 <= i35))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &kd_emlrtBCI, &st);
      }

      maxval = muDoubleScalarMax(muDoubleScalarMin(muDoubleScalarFloor
        (vec_angle->data[b_i] / 0.098174770424681035), 31.0), 0.0);
      i35 = (i38 - i37) * (i40 - i39);
      i36 = 1 + b_i;
      if (!((i36 >= 1) && (i36 <= i35))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &ld_emlrtBCI, &st);
      }

      if (maxval + 1.0 != (int32_T)(maxval + 1.0)) {
        emlrtIntegerCheckR2012b(maxval + 1.0, &h_emlrtDCI, &st);
      }

      if (maxval + 1.0 != (int32_T)(maxval + 1.0)) {
        emlrtIntegerCheckR2012b(maxval + 1.0, &i_emlrtDCI, &st);
      }

      angle_hist[(int32_T)(maxval + 1.0) - 1] += img_weight[((i37 + b_i % (i38 -
        i37)) + 720 * ((i39 + b_i / (i38 - i37)) - 1)) - 1];
      b_i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 5);

    /*  find modes of smoothed histogram */
    b_st.site = &qf_emlrtRSI;
    findModesMeanShift(&b_st, angle_hist, modesxx, unusedU0);

    /*  if only one or no mode => return invalid corner */
    if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 1, modesxx->size[0] <= 1)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 6);
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 7);
      i35 = modesxx->size[1];
      if (!(1 <= i35)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i35, &md_emlrtBCI, &st);
      }

      unnamed_idx_0 = modesxx->size[0];
      i35 = modes->size[0] * modes->size[1];
      modes->size[0] = unnamed_idx_0;
      modes->size[1] = 3;
      emxEnsureCapacity(&st, (emxArray__common *)modes, i35, (int32_T)sizeof
                        (real_T), &v_emlrtRTEI);
      loop_ub = unnamed_idx_0 * 3;
      for (i35 = 0; i35 < loop_ub; i35++) {
        modes->data[i35] = 0.0;
      }

      loop_ub = modesxx->size[0];
      i35 = r12->size[0];
      r12->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r12, i35, (int32_T)sizeof
                        (int32_T), &v_emlrtRTEI);
      for (i35 = 0; i35 < loop_ub; i35++) {
        r12->data[i35] = i35;
      }

      i35 = modesxx->size[1];
      if (!(1 <= i35)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i35, &nd_emlrtBCI, &st);
      }

      iv17[0] = r12->size[0];
      loop_ub = modesxx->size[0];
      i35 = b_modesxx->size[0];
      b_modesxx->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)b_modesxx, i35, (int32_T)sizeof
                        (real_T), &v_emlrtRTEI);
      for (i35 = 0; i35 < loop_ub; i35++) {
        b_modesxx->data[i35] = modesxx->data[i35];
      }

      d_modesxx[0] = b_modesxx->size[0];
      emlrtSubAssignSizeCheckR2012b(iv17, 1, d_modesxx, 1, &ib_emlrtECI, &st);
      loop_ub = modesxx->size[0] - 1;
      for (i35 = 0; i35 <= loop_ub; i35++) {
        modes->data[r12->data[i35]] = modesxx->data[i35];
      }

      loop_ub = modes->size[0];
      i35 = r12->size[0];
      r12->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r12, i35, (int32_T)sizeof
                        (int32_T), &v_emlrtRTEI);
      for (i35 = 0; i35 < loop_ub; i35++) {
        r12->data[i35] = i35;
      }

      i35 = modesxx->size[1];
      if (!(2 <= i35)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i35, &od_emlrtBCI, &st);
      }

      iv18[0] = r12->size[0];
      loop_ub = modesxx->size[0];
      i35 = c_modesxx->size[0];
      c_modesxx->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)c_modesxx, i35, (int32_T)sizeof
                        (real_T), &v_emlrtRTEI);
      for (i35 = 0; i35 < loop_ub; i35++) {
        c_modesxx->data[i35] = modesxx->data[i35 + modesxx->size[0]];
      }

      e_modesxx[0] = c_modesxx->size[0];
      emlrtSubAssignSizeCheckR2012b(iv18, 1, e_modesxx, 1, &jb_emlrtECI, &st);
      loop_ub = modesxx->size[0] - 1;
      for (i35 = 0; i35 <= loop_ub; i35++) {
        modes->data[r12->data[i35] + modes->size[0]] = modesxx->data[i35 +
          modesxx->size[0]];
      }

      /*  compute orientation at modes */
      loop_ub = modes->size[0];
      i35 = r12->size[0];
      r12->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r12, i35, (int32_T)sizeof
                        (int32_T), &v_emlrtRTEI);
      for (i35 = 0; i35 < loop_ub; i35++) {
        r12->data[i35] = i35;
      }

      i35 = modesxx->size[1];
      if (!(1 <= i35)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i35, &pd_emlrtBCI, &st);
      }

      loop_ub = modesxx->size[0];
      i35 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i35, (int32_T)sizeof
                        (real_T), &v_emlrtRTEI);
      for (i35 = 0; i35 < loop_ub; i35++) {
        r13->data[i35] = (modesxx->data[i35] - 1.0) * 3.1415926535897931 / 32.0;
      }

      iv19[0] = r12->size[0];
      emlrtSubAssignSizeCheckR2012b(iv19, 1, *(int32_T (*)[1])r13->size, 1,
        &kb_emlrtECI, &st);
      loop_ub = r13->size[0];
      for (i35 = 0; i35 < loop_ub; i35++) {
        modes->data[r12->data[i35] + (modes->size[0] << 1)] = r13->data[i35];
      }

      /*  extract 2 strongest modes and sort by angle */
      for (i35 = 0; i35 < 2; i35++) {
        unusedU1[i35] = modes->data[i35 + (modes->size[0] << 1)];
      }

      b_sort(unusedU1, iidx);

      /*  compute angle between modes */
      /*  if angle too small => return invalid corner */
      if (covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 2, muDoubleScalarMin
                     (modes->data[(iidx[1] + (modes->size[0] << 1)) - 1] -
                      modes->data[(iidx[0] + (modes->size[0] << 1)) - 1],
                      (modes->data[(iidx[0] + (modes->size[0] << 1)) - 1] +
                       3.1415926535897931) - modes->data[(iidx[1] + (modes->
              size[0] << 1)) - 1]) <= 0.3)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 8);
      } else {
        covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 9);

        /*  set statistics: orientations */
        v1[0] = muDoubleScalarCos(modes->data[(iidx[0] + (modes->size[0] << 1))
          - 1]);
        v1[1] = muDoubleScalarSin(modes->data[(iidx[0] + (modes->size[0] << 1))
          - 1]);
        v2[0] = muDoubleScalarCos(modes->data[(iidx[1] + (modes->size[0] << 1))
          - 1]);
        v2[1] = muDoubleScalarSin(modes->data[(iidx[1] + (modes->size[0] << 1))
          - 1]);
      }
    }

    i35 = corners->v1->size[0];
    i36 = i + 1;
    if (!((i36 >= 1) && (i36 <= i35))) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &id_emlrtBCI, sp);
    }

    if (!b8) {
      for (i35 = 0; i35 < 2; i35++) {
        iv13[i35] = 1 + i35;
        iv14[i35] = 1 + i35;
      }

      b8 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv13, 2, iv14, 2, &gb_emlrtECI, sp);
    for (i35 = 0; i35 < 2; i35++) {
      corners->v1->data[i + corners->v1->size[0] * i35] = v1[i35];
    }

    i35 = corners->v2->size[0];
    i36 = i + 1;
    if (!((i36 >= 1) && (i36 <= i35))) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &jd_emlrtBCI, sp);
    }

    if (!b9) {
      for (i35 = 0; i35 < 2; i35++) {
        iv15[i35] = 1 + i35;
        iv16[i35] = 1 + i35;
      }

      b9 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv15, 2, iv16, 2, &hb_emlrtECI, sp);
    for (i35 = 0; i35 < 2; i35++) {
      corners->v2->data[i + corners->v2->size[0] * i35] = v2[i35];
    }

    /*  continue, if invalid edge orientations */
    if ((covrtLogCond(&emlrtCoverageInstance, 8U, 0U, 0, v1[0] == 0.0) &&
         covrtLogCond(&emlrtCoverageInstance, 8U, 0U, 1, v1[1] == 0.0)) ||
        (covrtLogCond(&emlrtCoverageInstance, 8U, 0U, 2, v2[0] == 0.0) &&
         covrtLogCond(&emlrtCoverageInstance, 8U, 0U, 3, v2[1] == 0.0))) {
      covrtLogMcdc(&emlrtCoverageInstance, 8U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 0, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 8U, 2);
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 8U, 0U, 0, false);
      covrtLogIf(&emlrtCoverageInstance, 8U, 0U, 0, false);

      /*        % corner orientation refinement % */
      /*         */
      /*        A1 = zeros(2,2); */
      /*        A2 = zeros(2,2); */
      /*   */
      /*        for u=max(cu-r,1):min(cu+r,width) */
      /*          for v=max(cv-r,1):min(cv+r,height) */
      /*   */
      /*            % pixel orientation vector */
      /*            o = [img_du(v,u) img_dv(v,u)]; */
      /*            if norm(o)<0.1 */
      /*              continue; */
      /*            end */
      /*            o = o/norm(o); */
      /*   */
      /*            % robust refinement of orientation 1 */
      /*            if abs(o*(v1)')<0.25 % inlier? */
      /*              A1(1,:) = A1(1,:) + img_du(v,u) * [img_du(v,u) img_dv(v,u)]; */
      /*              A1(2,:) = A1(2,:) + img_dv(v,u) * [img_du(v,u) img_dv(v,u)]; */
      /*            end */
      /*   */
      /*            % robust refinement of orientation 2 */
      /*            if abs(o*(v2)')<0.25 % inlier? */
      /*              A2(1,:) = A2(1,:) + img_du(v,u) * [img_du(v,u) img_dv(v,u)]; */
      /*              A2(2,:) = A2(2,:) + img_dv(v,u) * [img_du(v,u) img_dv(v,u)]; */
      /*            end */
      /*          end */
      /*        end */
      /*         */
      /*        % set new corner orientation */
      /*        [v1,~] = schur(A1); v1 = v1(:,1)'; corners.v1(i,:) = v1; */
      /*        [v2,~] = schur(A2); v2 = v2(:,1)'; corners.v2(i,:) = v2; */
      /*        %  corner location refinement  % */
      /*   */
      /*        G = zeros(2,2); */
      /*        b = zeros(2,1); */
      /*   */
      /*        for u=max(cu-r,1):min(cu+r,width) */
      /*          for v=max(cv-r,1):min(cv+r,height) */
      /*   */
      /*            % pixel orientation vector */
      /*            o = [img_du(v,u) img_dv(v,u)]; */
      /*            if norm(o)<0.1 */
      /*              continue; */
      /*            end */
      /*            o = o/norm(o); */
      /*   */
      /*            % robust subpixel corner estimation */
      /*            if u~=cu || v~=cv % do not consider center pixel */
      /*   */
      /*              % compute rel. position of pixel and distance to vectors */
      /*              w  = [u v]-[cu cv];           */
      /*              d1 = norm(w-w*(v1)'*v1); */
      /*              d2 = norm(w-w*(v2)'*v2); */
      /*   */
      /*              % if pixel corresponds with either of the vectors / directions */
      /*              if d1<3 && abs(o*(v1)')<0.25 || d2<3 && abs(o*(v2)')<0.25 */
      /*                du = img_du(v,u); */
      /*                dv = img_dv(v,u); */
      /*                H = [du dv]'*[du dv]; */
      /*                G = G + H; */
      /*                b = b + H*[u v]';          */
      /*              end */
      /*            end */
      /*          end */
      /*        end */
      /*   */
      /*        % set new corner location if G has full rank */
      /*        if rank(G)==2 */
      /*          corner_pos_old = corners.p(i,:); */
      /*          corner_pos_new = (G\b)'; */
      /*          corners.p(i,:) = corner_pos_new; */
      /*   */
      /*          % set corner to invalid, if position update is very large */
      /*          if norm(corner_pos_new-corner_pos_old)>=4 */
      /*            corners.v1(i,:) = [0 0]; */
      /*            corners.v2(i,:) = [0 0]; */
      /*          end */
      /*   */
      /*        % otherwise: set corner to invalid */
      /*        else */
      /*          corners.v1(i,:) = [0 0]; */
      /*          corners.v2(i,:) = [0 0]; */
      /*        end */
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&c_modesxx);
  emxFree_real_T(&b_modesxx);
  emxFree_real_T(&b_vec_angle);
  emxFree_real_T(&b_img_angle);
  emxFree_int32_T(&r14);
  emxFree_real_T(&r13);
  emxFree_int32_T(&r12);
  emxFree_real_T(&modesxx);
  emxFree_real_T(&modes);
  emxFree_real_T(&vec_angle);
  covrtLogFor(&emlrtCoverageInstance, 8U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (refineCorners.c) */
