/*
 * chessboardsFromCorners_mex_initialize.c
 *
 * Code generation for function 'chessboardsFromCorners_mex_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "chessboardsFromCorners.h"
#include "extractuv.h"
#include "findCorners.h"
#include "chessboardsFromCorners_mex_initialize.h"
#include "_coder_chessboardsFromCorners_mex_mex.h"
#include "chessboardsFromCorners_mex_data.h"
#include "blas.h"

/* Function Declarations */
static void chessboardsFromCorners_mex_once(void);

/* Function Definitions */
static void chessboardsFromCorners_mex_once(void)
{
  int32_T cond_starts_0_0[2] = { 547, 570 };

  int32_T cond_ends_0_0[2] = { 566, 608 };

  int32_T postfix_exprs_0_0[3] = { 0, 1, -2 };

  int32_T cond_starts_0_1[1] = { 2034 };

  int32_T cond_ends_0_1[1] = { 2051 };

  int32_T postfix_exprs_0_1[2] = { 0, -1 };

  int32_T cond_starts_0_2[1] = { 2174 };

  int32_T cond_ends_0_2[1] = { 2231 };

  int32_T postfix_exprs_0_2[2] = { 0, -1 };

  int32_T cond_starts_1_0[4] = { 1326, 1347, 1379, 1409 };

  int32_T cond_ends_1_0[4] = { 1343, 1364, 1405, 1435 };

  int32_T postfix_exprs_1_0[7] = { 0, 1, -2, 2, -2, 3, -2 };

  int32_T caseStarts_3_0[5] = { -1, 536, 787, 1038, 1279 };

  int32_T caseExprEnds_3_0[5] = { 8, 542, 793, 1044, 1285 };

  int32_T cond_starts_6_0[2] = { 785, 797 };

  int32_T cond_ends_6_0[2] = { 793, 805 };

  int32_T postfix_exprs_6_0[3] = { 0, 1, -3 };

  int32_T cond_starts_6_1[2] = { 876, 887 };

  int32_T cond_ends_6_1[2] = { 883, 894 };

  int32_T postfix_exprs_6_1[3] = { 0, 1, -3 };

  int32_T cond_starts_6_2[2] = { 965, 977 };

  int32_T cond_ends_6_2[2] = { 973, 984 };

  int32_T postfix_exprs_6_2[3] = { 0, 1, -3 };

  int32_T cond_starts_6_3[2] = { 1055, 1066 };

  int32_T cond_ends_6_3[2] = { 1062, 1074 };

  int32_T postfix_exprs_6_3[3] = { 0, 1, -3 };

  int32_T cond_starts_7_0[5] = { 791, 810, 818, 828, 836 };

  int32_T cond_ends_7_0[5] = { 805, 814, 824, 832, 842 };

  int32_T postfix_exprs_7_0[9] = { 0, 1, 2, -2, 3, -2, 4, -2, -3 };

  int32_T cond_starts_7_1[2] = { 997, 1013 };

  int32_T cond_ends_7_1[2] = { 1008, 1019 };

  int32_T postfix_exprs_7_1[4] = { 0, 1, -1, -3 };

  int32_T cond_starts_8_0[4] = { 720, 732, 744, 756 };

  int32_T cond_ends_8_0[4] = { 728, 740, 752, 764 };

  int32_T postfix_exprs_8_0[7] = { 0, 1, -3, 2, 3, -3, -2 };

  int32_T cond_starts_9_0[2] = { 902, 912 };

  int32_T cond_ends_9_0[2] = { 908, 918 };

  int32_T postfix_exprs_9_0[3] = { 0, 1, -3 };

  int32_T cond_starts_9_1[2] = { 950, 959 };

  int32_T cond_ends_9_1[2] = { 955, 964 };

  int32_T postfix_exprs_9_1[3] = { 0, 1, -3 };

  int32_T cond_starts_9_2[2] = { 1042, 1063 };

  int32_T cond_ends_9_2[2] = { 1059, 1082 };

  int32_T postfix_exprs_9_2[4] = { 0, 1, -1, -2 };

  int32_T cond_starts_10_0[4] = { 415, 430, 452, 467 };

  int32_T cond_ends_10_0[4] = { 426, 448, 463, 486 };

  int32_T postfix_exprs_10_0[7] = { 0, 1, -3, 2, -3, 3, -3 };

  int32_T cond_starts_11_0[2] = { 391, 411 };

  int32_T cond_ends_11_0[2] = { 407, 427 };

  int32_T postfix_exprs_11_0[3] = { 0, 1, -2 };

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardsFromCorners.m",
                  0, 1, 16, 7, 0, 0, 0, 5, 1, 4, 3);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "chessboardsFromCorners", 1, -1,
               2545);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 15, 2244, -1, 2306);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 14, 2131, -1, 2158);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 13, 2062, -1, 2106);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 12, 1804, -1, 1912);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 11, 1547, -1, 1585);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 10, 1406, -1, 1446);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 8, 1136, -1, 1166);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 9, 1222, -1, 1227);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 1007, -1, 1009);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 842, -1, 955);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 725, -1, 770);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 617, -1, 625);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 413, -1, 486);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 211, -1, 297);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 164, -1, 191);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 89, -1, 137);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 544, 608, 675, 1250);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 1098, 1125, 1207, 1240);
  covrtIfInit(&emlrtCoverageInstance, 0, 2, 1333, 1376, -1, 2343);
  covrtIfInit(&emlrtCoverageInstance, 0, 3, 1386, 1393, -1, 1459);
  covrtIfInit(&emlrtCoverageInstance, 0, 4, 1749, 1789, -1, -2);
  covrtIfInit(&emlrtCoverageInstance, 0, 5, 2030, 2051, 2116, 2333);
  covrtIfInit(&emlrtCoverageInstance, 0, 6, 2170, 2231, -1, 2321);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 0, 0, 547, 608, 2, 0, cond_starts_0_0,
                cond_ends_0_0, 3, postfix_exprs_0_0);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 1, 2033, 2051, 1, 2, cond_starts_0_1,
                cond_ends_0_1, 2, postfix_exprs_0_1);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 2, 2173, 2231, 1, 3, cond_starts_0_2,
                cond_ends_0_2, 2, postfix_exprs_0_2);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 144, 156, 200);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 338, 364, 2352);
  covrtForInit(&emlrtCoverageInstance, 0, 2, 822, 832, 968);
  covrtForInit(&emlrtCoverageInstance, 0, 3, 1649, 1677, 1955);
  covrtForInit(&emlrtCoverageInstance, 0, 4, 1703, 1737, 1943);

  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 0, 0, 675, 683, 1250);

  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\initChessboard.m",
                  1, 2, 4, 2, 0, 0, 0, 0, 0, 4, 1);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 1, 0, "initChessboard", 1, -1, 1484);
  covrtFcnInit(&emlrtCoverageInstance, 1, 1, "directionalNeighbor", 1487, -1,
               2220);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 0, 120, -1, 149);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 2, 1442, -1, 1471);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 1, 197, -1, 1262);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 3, 1640, -1, 2215);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 1, 0, 91, 113, 1323, 1480);
  covrtIfInit(&emlrtCoverageInstance, 1, 1, 1323, 1435, -1, -2);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 1, 0, 1326, 1435, 4, 0, cond_starts_1_0,
                cond_ends_1_0, 7, postfix_exprs_1_0);

  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 1U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\chessboardEnergy.m",
                  2, 1, 4, 0, 0, 0, 0, 4, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 2, 0, "chessboardEnergy", 1, -1, 793);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 2, 3, 721, -1, 788);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2, 2, 542, -1, 677);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2, 1, 285, -1, 420);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2, 0, 88, -1, 184);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 2, 0, 215, 242, 439);
  covrtForInit(&emlrtCoverageInstance, 2, 1, 248, 277, 431);
  covrtForInit(&emlrtCoverageInstance, 2, 2, 472, 499, 696);
  covrtForInit(&emlrtCoverageInstance, 2, 3, 505, 534, 688);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 2U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\growChessboard.m",
                  3, 3, 16, 6, 0, 0, 1, 2, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 3, 0, "growChessboard", 1, -1, 1524);
  covrtFcnInit(&emlrtCoverageInstance, 3, 1, "predictCorners", 1526, -1, 2028);
  covrtFcnInit(&emlrtCoverageInstance, 3, 2, "assignClosestCorners", 2030, -1,
               2745);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 9, 1461, -1, 1499);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 8, 1294, -1, 1426);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 7, 1220, -1, 1258);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 6, 1053, -1, 1185);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 5, 979, -1, 1017);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 4, 802, -1, 944);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 3, 728, -1, 766);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 2, 551, -1, 693);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 1, 221, -1, 473);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 0, 168, -1, 174);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 10, 1594, -1, 2023);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 15, 2576, -1, 2726);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 14, 2443, -1, 2496);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 13, 2330, -1, 2424);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 12, 2256, -1, 2292);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3, 11, 2179, -1, 2201);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 3, 0, 139, 161, 510, 1520);
  covrtIfInit(&emlrtCoverageInstance, 3, 1, 703, 717, -1, 779);
  covrtIfInit(&emlrtCoverageInstance, 3, 2, 954, 968, -1, 1030);
  covrtIfInit(&emlrtCoverageInstance, 3, 3, 1195, 1209, -1, 1271);
  covrtIfInit(&emlrtCoverageInstance, 3, 4, 1436, 1450, -1, 1512);
  covrtIfInit(&emlrtCoverageInstance, 3, 5, 2144, 2172, -1, -2);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 3, 0, 2303, 2324, 2433);
  covrtForInit(&emlrtCoverageInstance, 3, 1, 2549, 2570, 2741);

  /* Initialize While Information */
  /* Initialize Switch Information */
  covrtSwitchInit(&emlrtCoverageInstance, 3, 0, 510, 529, 1520, 5U,
                  caseStarts_3_0, caseExprEnds_3_0);

  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 3U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\extractuv.m",
                  4, 1, 6, 2, 0, 0, 0, 2, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 4, 0, "extractuv", 1, -1, 834);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 4, 5, 737, -1, 743);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4, 4, 566, -1, 631);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4, 3, 419, -1, 501);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4, 2, 300, -1, 370);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4, 1, 245, -1, 264);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4, 0, 72, -1, 198);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 4, 0, 274, 287, -1, 545);
  covrtIfInit(&emlrtCoverageInstance, 4, 1, 642, 664, -1, -2);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 4, 0, 209, 237, 561);
  covrtForInit(&emlrtCoverageInstance, 4, 1, 384, 403, 533);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 4U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findCorners.m",
                  5, 1, 5, 1, 0, 0, 0, 1, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 5, 0, "findCorners", 1, -1, 4376);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 5, 4, 2960, -1, 4330);
  covrtBasicBlockInit(&emlrtCoverageInstance, 5, 3, 2831, -1, 2903);
  covrtBasicBlockInit(&emlrtCoverageInstance, 5, 2, 2427, -1, 2770);
  covrtBasicBlockInit(&emlrtCoverageInstance, 5, 1, 1176, -1, 2352);
  covrtBasicBlockInit(&emlrtCoverageInstance, 5, 0, 64, -1, 1082);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 5, 0, 2807, 2824, -1, 2912);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 5, 0, 1089, 1133, 2361);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 5U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\createCorrelationPatch.m",
                  6, 1, 7, 4, 0, 0, 0, 2, 0, 8, 4);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 6, 0, "createCorrelationPatch", 1, -1,
               1384);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 6, 1181, -1, 1379);
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 5, 1085, -1, 1128);
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 4, 995, -1, 1038);
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 3, 905, -1, 948);
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 2, 816, -1, 859);
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 1, 630, -1, 771);
  covrtBasicBlockInit(&emlrtCoverageInstance, 6, 0, 96, -1, 526);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 6, 0, 782, 805, 869, 894);
  covrtIfInit(&emlrtCoverageInstance, 6, 1, 869, 894, 958, 1141);
  covrtIfInit(&emlrtCoverageInstance, 6, 2, 958, 984, 1048, 1141);
  covrtIfInit(&emlrtCoverageInstance, 6, 3, 1048, 1074, -1, 1074);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 6, 0, 785, 805, 2, 0, cond_starts_6_0,
                cond_ends_6_0, 3, postfix_exprs_6_0);
  covrtMcdcInit(&emlrtCoverageInstance, 6, 1, 876, 894, 2, 2, cond_starts_6_1,
                cond_ends_6_1, 3, postfix_exprs_6_1);
  covrtMcdcInit(&emlrtCoverageInstance, 6, 2, 965, 984, 2, 4, cond_starts_6_2,
                cond_ends_6_2, 3, postfix_exprs_6_2);
  covrtMcdcInit(&emlrtCoverageInstance, 6, 3, 1055, 1074, 2, 6, cond_starts_6_3,
                cond_ends_6_3, 3, postfix_exprs_6_3);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 6, 0, 569, 583, 1159);
  covrtForInit(&emlrtCoverageInstance, 6, 1, 589, 604, 1151);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 6U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\nonMaximumSuppression.m",
                  7, 1, 9, 4, 0, 0, 0, 6, 0, 7, 2);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 7, 0, "nonMaximumSuppression", 1, -1,
               1093);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 8, 1030, -1, 1058);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 7, 953, -1, 958);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 6, 858, -1, 889);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 5, 754, -1, 774);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 4, 633, -1, 643);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 3, 510, -1, 580);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 2, 444, -1, 464);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 1, 328, -1, 385);
  covrtBasicBlockInit(&emlrtCoverageInstance, 7, 0, 89, -1, 203);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 7, 0, 478, 495, -1, 597);
  covrtIfInit(&emlrtCoverageInstance, 7, 1, 788, 843, -1, -2);
  covrtIfInit(&emlrtCoverageInstance, 7, 2, 931, 940, -1, -2);
  covrtIfInit(&emlrtCoverageInstance, 7, 3, 994, 1019, -1, 1071);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 7, 0, 791, 843, 5, 0, cond_starts_7_0,
                cond_ends_7_0, 9, postfix_exprs_7_0);
  covrtMcdcInit(&emlrtCoverageInstance, 7, 1, 997, 1019, 2, 5, cond_starts_7_1,
                cond_ends_7_1, 4, postfix_exprs_7_1);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 7, 0, 240, 276, 1089);
  covrtForInit(&emlrtCoverageInstance, 7, 1, 282, 319, 1081);
  covrtForInit(&emlrtCoverageInstance, 7, 2, 396, 409, 623);
  covrtForInit(&emlrtCoverageInstance, 7, 3, 419, 432, 611);
  covrtForInit(&emlrtCoverageInstance, 7, 4, 653, 692, 985);
  covrtForInit(&emlrtCoverageInstance, 7, 5, 702, 742, 920);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 7U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\refineCorners.m",
                  8, 2, 10, 3, 0, 0, 0, 2, 0, 4, 1);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 8, 0, "refineCorners", 1, -1, 3514);
  covrtFcnInit(&emlrtCoverageInstance, 8, 1, "edgeOrientations", 3517, -1, 5021);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 2, 773, -1, 781);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 1, 266, -1, 661);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 0, 108, -1, 160);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 6, 4332, -1, 4338);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 8, 4873, -1, 4879);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 9, 4929, -1, 5011);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 7, 4353, -1, 4790);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 5, 4197, -1, 4207);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 4, 4026, -1, 4143);
  covrtBasicBlockInit(&emlrtCoverageInstance, 8, 3, 3601, -1, 3983);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 8, 0, 717, 764, -1, -2);
  covrtIfInit(&emlrtCoverageInstance, 8, 1, 4304, 4325, 4847, 4888);
  covrtIfInit(&emlrtCoverageInstance, 8, 2, 4847, 4866, -1, -2);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 8, 0, 720, 764, 4, 0, cond_starts_8_0,
                cond_ends_8_0, 7, postfix_exprs_8_0);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 8, 0, 193, 219, 3505);
  covrtForInit(&emlrtCoverageInstance, 8, 1, 3994, 4020, 4152);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 8U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\findModesMeanShift.m",
                  9, 1, 10, 4, 0, 0, 0, 2, 1, 6, 3);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 9, 0, "findModesMeanShift", 1, -1, 1237);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 9, 1164, -1, 1232);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 8, 1091, -1, 1128);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 5, 929, -1, 933);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 6, 975, -1, 979);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 7, 1004, -1, 1009);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 4, 724, -1, 889);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 3, 697, -1, 700);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 2, 621, -1, 627);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 1, 293, -1, 456);
  covrtBasicBlockInit(&emlrtCoverageInstance, 9, 0, 76, -1, 255);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 9, 0, 566, 614, -1, -2);
  covrtIfInit(&emlrtCoverageInstance, 9, 1, 899, 918, 943, 1022);
  covrtIfInit(&emlrtCoverageInstance, 9, 2, 943, 964, 989, 1022);
  covrtIfInit(&emlrtCoverageInstance, 9, 3, 1039, 1082, -1, 1139);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 9, 0, 902, 918, 2, 0, cond_starts_9_0,
                cond_ends_9_0, 3, postfix_exprs_9_0);
  covrtMcdcInit(&emlrtCoverageInstance, 9, 1, 950, 964, 2, 2, cond_starts_9_1,
                cond_ends_9_1, 3, postfix_exprs_9_1);
  covrtMcdcInit(&emlrtCoverageInstance, 9, 2, 1042, 1082, 2, 4, cond_starts_9_2,
                cond_ends_9_2, 4, postfix_exprs_9_2);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 9, 0, 266, 287, 465);
  covrtForInit(&emlrtCoverageInstance, 9, 1, 661, 691, 1147);

  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 9, 0, 708, 716, 1032);

  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 9U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\scoreCorners.m",
                  10, 1, 5, 1, 0, 0, 0, 2, 0, 4, 1);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 10, 0, "scoreCorners", 0, -1, 863);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 10, 4, 819, -1, 850);
  covrtBasicBlockInit(&emlrtCoverageInstance, 10, 3, 497, -1, 761);
  covrtBasicBlockInit(&emlrtCoverageInstance, 10, 2, 390, -1, 402);
  covrtBasicBlockInit(&emlrtCoverageInstance, 10, 1, 247, -1, 305);
  covrtBasicBlockInit(&emlrtCoverageInstance, 10, 0, 70, -1, 152);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 10, 0, 412, 486, -1, 774);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 10, 0, 415, 486, 4, 0, cond_starts_10_0,
                cond_ends_10_0, 7, postfix_exprs_10_0);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 10, 0, 190, 216, 859);
  covrtForInit(&emlrtCoverageInstance, 10, 1, 359, 382, 784);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 10U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Luisito\\Documents\\MAESTRIA ING_MECATRONICA\\Tesis\\Codigos\\DeteccionCornersLargasDistancias\\v7\\cornerCorrelationScore.m",
                  11, 1, 4, 1, 0, 0, 0, 2, 0, 2, 1);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 11, 0, "cornerCorrelationScore", 1, -1,
               1646);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 11, 3, 522, -1, 1641);
  covrtBasicBlockInit(&emlrtCoverageInstance, 11, 2, 438, -1, 458);
  covrtBasicBlockInit(&emlrtCoverageInstance, 11, 1, 314, -1, 378);
  covrtBasicBlockInit(&emlrtCoverageInstance, 11, 0, 81, -1, 240);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 11, 0, 388, 427, -1, 471);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 11, 0, 391, 427, 2, 0, cond_starts_11_0,
                cond_ends_11_0, 3, postfix_exprs_11_0);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 11, 0, 246, 273, 489);
  covrtForInit(&emlrtCoverageInstance, 11, 1, 279, 306, 481);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 11U);
}

void chessboardsFromCorners_mex_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Statistics_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    chessboardsFromCorners_mex_once();
  }
}

/* End of code generation (chessboardsFromCorners_mex_initialize.c) */
