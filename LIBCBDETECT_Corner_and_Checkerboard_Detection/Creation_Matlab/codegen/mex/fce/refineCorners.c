/*
 * refineCorners.c
 *
 * Code generation for function 'refineCorners'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fce.h"
#include "refineCorners.h"
#include "fce_emxutil.h"
#include "sort1.h"
#include "findModesMeanShift.h"
#include "fce_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = { 19, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRSInfo tb_emlrtRSI = { 145, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 2, 20, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 129, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 152, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 12, 22, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 12, 24, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 13, 22, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 13, 24, "corners.p", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { 1, 720, 16, 34, "img_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { 1, 720, 17, 35, "img_weight", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 21, 18, "corners.v1", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtECInfo ib_emlrtECI = { -1, 21, 7, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 22, 18, "corners.v2", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtECInfo jb_emlrtECI = { -1, 22, 7, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 140, 27, "vec_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 141, 41, "vec_weight",
  "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 152, 34, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 154, 26, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 155, 26, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 158, 29, "modesxx", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtECInfo kb_emlrtECI = { -1, 154, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtECInfo lb_emlrtECI = { -1, 155, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtECInfo mb_emlrtECI = { -1, 158, 5, "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m"
};

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 134, 31, "vec_angle", "refineCorners",
  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 134, 5, "vec_angle", "refineCorners",
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
                   real_T img_weight[921600], b_struct_T *corners)
{
  boolean_T b6;
  boolean_T b7;
  int32_T i;
  emxArray_real_T *vec_angle;
  emxArray_real_T *modes;
  emxArray_real_T *modesxx;
  emxArray_int32_T *r13;
  emxArray_real_T *r14;
  emxArray_int32_T *r15;
  emxArray_real_T *b_img_angle;
  emxArray_real_T *b_vec_angle;
  emxArray_real_T *b_modesxx;
  emxArray_real_T *c_modesxx;
  int32_T i27;
  int32_T i28;
  real_T maxval;
  real_T d0;
  int32_T unnamed_idx_0;
  int32_T end;
  int32_T i29;
  int32_T i30;
  int32_T i31;
  int32_T i32;
  real_T v1[2];
  real_T v2[2];
  int32_T b_i;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i33;
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
  b6 = false;
  b7 = false;
  covrtLogFcn(&emlrtCoverageInstance, 4U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 0);

  /*  image dimensions */
  /*  for all corners do */
  i = 0;
  emxInit_real_T1(sp, &vec_angle, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &modes, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &modesxx, 2, &i_emlrtRTEI, true);
  emxInit_int32_T(sp, &r13, 1, &i_emlrtRTEI, true);
  emxInit_real_T1(sp, &r14, 1, &i_emlrtRTEI, true);
  emxInit_int32_T(sp, &r15, 1, &i_emlrtRTEI, true);
  emxInit_real_T(sp, &b_img_angle, 2, &i_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_vec_angle, 1, &i_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_modesxx, 1, &i_emlrtRTEI, true);
  emxInit_real_T1(sp, &c_modesxx, 1, &i_emlrtRTEI, true);
  while (i <= corners->p->size[0] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1);

    /*  extract current corner location */
    i27 = corners->p->size[1];
    if (!(1 <= i27)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i27, &dc_emlrtBCI, sp);
    }

    i27 = corners->p->size[0];
    i28 = i + 1;
    if (!((i28 >= 1) && (i28 <= i27))) {
      emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &cc_emlrtBCI, sp);
    }

    i27 = corners->p->size[1];
    if (!(2 <= i27)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i27, &fc_emlrtBCI, sp);
    }

    i27 = corners->p->size[0];
    i28 = i + 1;
    if (!((i28 >= 1) && (i28 <= i27))) {
      emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &ec_emlrtBCI, sp);
    }

    /*  estimate edge orientations */
    maxval = muDoubleScalarMax(corners->p->data[i + corners->p->size[0]] - 10.0,
      1.0);
    d0 = muDoubleScalarMin(corners->p->data[i + corners->p->size[0]] + 10.0,
      720.0);
    if (maxval > d0) {
      i27 = 1;
      i28 = 1;
    } else {
      i27 = (int32_T)maxval;
      if (!((i27 >= 1) && (i27 <= 720))) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, 720, &gc_emlrtBCI, sp);
      }

      i28 = (int32_T)d0 + 1;
    }

    maxval = muDoubleScalarMax(corners->p->data[i] - 10.0, 1.0);
    d0 = muDoubleScalarMin(corners->p->data[i] + 10.0, 720.0);
    if (maxval > d0) {
      unnamed_idx_0 = 1;
      end = 1;
    } else {
      unnamed_idx_0 = (int32_T)maxval;
      end = (int32_T)d0 + 1;
    }

    maxval = muDoubleScalarMax(corners->p->data[i + corners->p->size[0]] - 10.0,
      1.0);
    d0 = muDoubleScalarMin(corners->p->data[i + corners->p->size[0]] + 10.0,
      720.0);
    if (maxval > d0) {
      i29 = 1;
      i30 = 1;
    } else {
      i29 = (int32_T)maxval;
      if (!((i29 >= 1) && (i29 <= 720))) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, 720, &hc_emlrtBCI, sp);
      }

      i30 = (int32_T)d0 + 1;
    }

    maxval = muDoubleScalarMax(corners->p->data[i] - 10.0, 1.0);
    d0 = muDoubleScalarMin(corners->p->data[i] + 10.0, 720.0);
    if (maxval > d0) {
      i31 = 1;
      i32 = 1;
    } else {
      i31 = (int32_T)maxval;
      i32 = (int32_T)d0 + 1;
    }

    st.site = &sb_emlrtRSI;
    covrtLogFcn(&emlrtCoverageInstance, 4U, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3);

    /*  init v1 and v2 */
    for (b_i = 0; b_i < 2; b_i++) {
      v1[b_i] = 0.0;
      v2[b_i] = 0.0;
    }

    /*  number of bins (histogram parameter) */
    /*  convert images to vectors */
    /*  convert angles from normals to directions */
    b_i = b_img_angle->size[0] * b_img_angle->size[1];
    b_img_angle->size[0] = i28 - i27;
    b_img_angle->size[1] = end - unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)b_img_angle, b_i, (int32_T)sizeof
                      (real_T), &i_emlrtRTEI);
    loop_ub = end - unnamed_idx_0;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      b_loop_ub = i28 - i27;
      for (i33 = 0; i33 < b_loop_ub; i33++) {
        b_img_angle->data[i33 + b_img_angle->size[0] * b_i] = img_angle[((i27 +
          i33) + 720 * ((unnamed_idx_0 + b_i) - 1)) - 1];
      }
    }

    unnamed_idx_0 = (i28 - i27) * (end - unnamed_idx_0);
    i27 = vec_angle->size[0];
    vec_angle->size[0] = unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)vec_angle, i27, (int32_T)sizeof
                      (real_T), &i_emlrtRTEI);
    for (i27 = 0; i27 < unnamed_idx_0; i27++) {
      vec_angle->data[i27] = b_img_angle->data[i27] + 1.5707963267948966;
    }

    end = vec_angle->size[0];
    for (b_i = 0; b_i < end; b_i++) {
      if (vec_angle->data[b_i] > 3.1415926535897931) {
        i27 = vec_angle->size[0];
        if (!((b_i + 1 >= 1) && (b_i + 1 <= i27))) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i27, &qc_emlrtBCI, &st);
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

    i27 = r15->size[0];
    r15->size[0] = unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i27, (int32_T)sizeof(int32_T),
                      &i_emlrtRTEI);
    unnamed_idx_0 = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (vec_angle->data[b_i] > 3.1415926535897931) {
        r15->data[unnamed_idx_0] = b_i + 1;
        unnamed_idx_0++;
      }
    }

    unnamed_idx_0 = vec_angle->size[0];
    i27 = b_vec_angle->size[0];
    b_vec_angle->size[0] = r15->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_vec_angle, i27, (int32_T)sizeof
                      (real_T), &i_emlrtRTEI);
    loop_ub = r15->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      b_vec_angle->data[i27] = vec_angle->data[r15->data[i27] - 1] -
        3.1415926535897931;
    }

    loop_ub = b_vec_angle->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      i28 = r15->data[i27];
      if (!((i28 >= 1) && (i28 <= unnamed_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, unnamed_idx_0, &rc_emlrtBCI, &st);
      }

      vec_angle->data[i28 - 1] = b_vec_angle->data[i27];
    }

    /*  create histogram */
    memset(&angle_hist[0], 0, sizeof(real_T) << 5);
    b_i = 0;
    while (b_i <= vec_angle->size[0] - 1) {
      covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 4);
      i27 = vec_angle->size[0];
      i28 = b_i + 1;
      if (!((i28 >= 1) && (i28 <= i27))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &kc_emlrtBCI, &st);
      }

      maxval = muDoubleScalarMax(muDoubleScalarMin(muDoubleScalarFloor
        (vec_angle->data[b_i] / 0.098174770424681035), 31.0), 0.0);
      i27 = (i30 - i29) * (i32 - i31);
      i28 = 1 + b_i;
      if (!((i28 >= 1) && (i28 <= i27))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &lc_emlrtBCI, &st);
      }

      if (maxval + 1.0 != (int32_T)(maxval + 1.0)) {
        emlrtIntegerCheckR2012b(maxval + 1.0, &h_emlrtDCI, &st);
      }

      if (maxval + 1.0 != (int32_T)(maxval + 1.0)) {
        emlrtIntegerCheckR2012b(maxval + 1.0, &i_emlrtDCI, &st);
      }

      angle_hist[(int32_T)(maxval + 1.0) - 1] += img_weight[((i29 + b_i % (i30 -
        i29)) + 720 * ((i31 + b_i / (i30 - i29)) - 1)) - 1];
      b_i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 5);

    /*  find modes of smoothed histogram */
    b_st.site = &tb_emlrtRSI;
    findModesMeanShift(&b_st, angle_hist, modesxx, unusedU0);

    /*  if only one or no mode => return invalid corner */
    if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 1, modesxx->size[0] <= 1)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 6);
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 7);
      i27 = modesxx->size[1];
      if (!(1 <= i27)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i27, &mc_emlrtBCI, &st);
      }

      unnamed_idx_0 = modesxx->size[0];
      i27 = modes->size[0] * modes->size[1];
      modes->size[0] = unnamed_idx_0;
      modes->size[1] = 3;
      emxEnsureCapacity(&st, (emxArray__common *)modes, i27, (int32_T)sizeof
                        (real_T), &i_emlrtRTEI);
      loop_ub = unnamed_idx_0 * 3;
      for (i27 = 0; i27 < loop_ub; i27++) {
        modes->data[i27] = 0.0;
      }

      loop_ub = modesxx->size[0];
      i27 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i27, (int32_T)sizeof
                        (int32_T), &i_emlrtRTEI);
      for (i27 = 0; i27 < loop_ub; i27++) {
        r13->data[i27] = i27;
      }

      i27 = modesxx->size[1];
      if (!(1 <= i27)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i27, &nc_emlrtBCI, &st);
      }

      iv17[0] = r13->size[0];
      loop_ub = modesxx->size[0];
      i27 = b_modesxx->size[0];
      b_modesxx->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)b_modesxx, i27, (int32_T)sizeof
                        (real_T), &i_emlrtRTEI);
      for (i27 = 0; i27 < loop_ub; i27++) {
        b_modesxx->data[i27] = modesxx->data[i27];
      }

      d_modesxx[0] = b_modesxx->size[0];
      emlrtSubAssignSizeCheckR2012b(iv17, 1, d_modesxx, 1, &kb_emlrtECI, &st);
      loop_ub = modesxx->size[0] - 1;
      for (i27 = 0; i27 <= loop_ub; i27++) {
        modes->data[r13->data[i27]] = modesxx->data[i27];
      }

      loop_ub = modes->size[0];
      i27 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i27, (int32_T)sizeof
                        (int32_T), &i_emlrtRTEI);
      for (i27 = 0; i27 < loop_ub; i27++) {
        r13->data[i27] = i27;
      }

      i27 = modesxx->size[1];
      if (!(2 <= i27)) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i27, &oc_emlrtBCI, &st);
      }

      iv18[0] = r13->size[0];
      loop_ub = modesxx->size[0];
      i27 = c_modesxx->size[0];
      c_modesxx->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)c_modesxx, i27, (int32_T)sizeof
                        (real_T), &i_emlrtRTEI);
      for (i27 = 0; i27 < loop_ub; i27++) {
        c_modesxx->data[i27] = modesxx->data[i27 + modesxx->size[0]];
      }

      e_modesxx[0] = c_modesxx->size[0];
      emlrtSubAssignSizeCheckR2012b(iv18, 1, e_modesxx, 1, &lb_emlrtECI, &st);
      loop_ub = modesxx->size[0] - 1;
      for (i27 = 0; i27 <= loop_ub; i27++) {
        modes->data[r13->data[i27] + modes->size[0]] = modesxx->data[i27 +
          modesxx->size[0]];
      }

      /*  compute orientation at modes */
      loop_ub = modes->size[0];
      i27 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i27, (int32_T)sizeof
                        (int32_T), &i_emlrtRTEI);
      for (i27 = 0; i27 < loop_ub; i27++) {
        r13->data[i27] = i27;
      }

      i27 = modesxx->size[1];
      if (!(1 <= i27)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i27, &pc_emlrtBCI, &st);
      }

      loop_ub = modesxx->size[0];
      i27 = r14->size[0];
      r14->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)r14, i27, (int32_T)sizeof
                        (real_T), &i_emlrtRTEI);
      for (i27 = 0; i27 < loop_ub; i27++) {
        r14->data[i27] = (modesxx->data[i27] - 1.0) * 3.1415926535897931 / 32.0;
      }

      iv19[0] = r13->size[0];
      emlrtSubAssignSizeCheckR2012b(iv19, 1, *(int32_T (*)[1])r14->size, 1,
        &mb_emlrtECI, &st);
      loop_ub = r14->size[0];
      for (i27 = 0; i27 < loop_ub; i27++) {
        modes->data[r13->data[i27] + (modes->size[0] << 1)] = r14->data[i27];
      }

      /*  extract 2 strongest modes and sort by angle */
      for (i27 = 0; i27 < 2; i27++) {
        unusedU1[i27] = modes->data[i27 + (modes->size[0] << 1)];
      }

      b_sort(unusedU1, iidx);

      /*  compute angle between modes */
      /*  if angle too small => return invalid corner */
      if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 2, muDoubleScalarMin
                     (modes->data[(iidx[1] + (modes->size[0] << 1)) - 1] -
                      modes->data[(iidx[0] + (modes->size[0] << 1)) - 1],
                      (modes->data[(iidx[0] + (modes->size[0] << 1)) - 1] +
                       3.1415926535897931) - modes->data[(iidx[1] + (modes->
              size[0] << 1)) - 1]) <= 0.3)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 8);
      } else {
        covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 9);

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

    i27 = corners->v1->size[0];
    i28 = i + 1;
    if (!((i28 >= 1) && (i28 <= i27))) {
      emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &ic_emlrtBCI, sp);
    }

    if (!b6) {
      for (i27 = 0; i27 < 2; i27++) {
        iv13[i27] = 1 + i27;
        iv14[i27] = 1 + i27;
      }

      b6 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv13, 2, iv14, 2, &ib_emlrtECI, sp);
    for (i27 = 0; i27 < 2; i27++) {
      corners->v1->data[i + corners->v1->size[0] * i27] = v1[i27];
    }

    i27 = corners->v2->size[0];
    i28 = i + 1;
    if (!((i28 >= 1) && (i28 <= i27))) {
      emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &jc_emlrtBCI, sp);
    }

    if (!b7) {
      for (i27 = 0; i27 < 2; i27++) {
        iv15[i27] = 1 + i27;
        iv16[i27] = 1 + i27;
      }

      b7 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv15, 2, iv16, 2, &jb_emlrtECI, sp);
    for (i27 = 0; i27 < 2; i27++) {
      corners->v2->data[i + corners->v2->size[0] * i27] = v2[i27];
    }

    /*  continue, if invalid edge orientations */
    if ((covrtLogCond(&emlrtCoverageInstance, 4U, 0U, 0, v1[0] == 0.0) &&
         covrtLogCond(&emlrtCoverageInstance, 4U, 0U, 1, v1[1] == 0.0)) ||
        (covrtLogCond(&emlrtCoverageInstance, 4U, 0U, 2, v2[0] == 0.0) &&
         covrtLogCond(&emlrtCoverageInstance, 4U, 0U, 3, v2[1] == 0.0))) {
      covrtLogMcdc(&emlrtCoverageInstance, 4U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 2);
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 4U, 0U, 0, false);
      covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, false);

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
      /*   */
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
  emxFree_int32_T(&r15);
  emxFree_real_T(&r14);
  emxFree_int32_T(&r13);
  emxFree_real_T(&modesxx);
  emxFree_real_T(&modes);
  emxFree_real_T(&vec_angle);
  covrtLogFor(&emlrtCoverageInstance, 4U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (refineCorners.c) */
