/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_dxf.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_dxf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t150, NeDsMethodOutput *t151)
{
  ETTS0 b_efOut;
  ETTS0 efOut;
  PmRealVector out;
  real_T t17[66];
  real_T nonscalar4[6];
  real_T t33[6];
  real_T t23[5];
  real_T t25[5];
  real_T t26[5];
  real_T t27[4];
  real_T t34[4];
  real_T t35[4];
  real_T t36[4];
  real_T t37[4];
  real_T t38[4];
  real_T nonscalar5[3];
  real_T c_efOut[2];
  real_T d_efOut[2];
  real_T t16[1];
  real_T X_idx_0;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_2;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T t110;
  real_T t112;
  real_T t113;
  real_T t115;
  real_T t116;
  real_T t123;
  real_T t125;
  real_T t129;
  real_T t135;
  real_T t138;
  real_T t139;
  real_T t14;
  real_T t68;
  real_T t74;
  real_T t76;
  real_T t77;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t81;
  real_T t85;
  real_T t86;
  real_T t88;
  real_T t89;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t97;
  real_T t98;
  real_T t99;
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t g__in1ivar;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  M_idx_0 = t150->mM.mX[0];
  M_idx_1 = t150->mM.mX[1];
  M_idx_2 = t150->mM.mX[2];
  M_idx_3 = t150->mM.mX[3];
  M_idx_4 = t150->mM.mX[4];
  M_idx_5 = t150->mM.mX[5];
  X_idx_0 = t150->mX.mX[0];
  X_idx_2 = t150->mX.mX[2];
  X_idx_4 = t150->mX.mX[4];
  X_idx_5 = t150->mX.mX[5];
  X_idx_6 = t150->mX.mX[6];
  X_idx_7 = t150->mX.mX[7];
  X_idx_8 = t150->mX.mX[8];
  X_idx_11 = t150->mX.mX[11];
  X_idx_12 = t150->mX.mX[12];
  X_idx_13 = t150->mX.mX[13];
  X_idx_21 = t150->mX.mX[21];
  X_idx_22 = t150->mX.mX[22];
  X_idx_23 = t150->mX.mX[23];
  out = t151->mDXF;
  nonscalar4[0] = 0.0;
  nonscalar4[1] = 0.2;
  nonscalar4[2] = 0.4;
  nonscalar4[3] = 0.6;
  nonscalar4[4] = 0.8;
  nonscalar4[5] = 1.0;
  nonscalar5[0] = 273.15;
  nonscalar5[1] = 298.15;
  nonscalar5[2] = 318.15;
  t68 = X_idx_4 * 6.0;
  X_idx_4 = t68;
  t74 = t68 + -2.0943951023931953;
  t135 = t68 + 2.0943951023931953;
  t68 = X_idx_6 * 0.00019 + 0.03;
  t129 = X_idx_7 * 0.00025;
  t76 = cos(X_idx_4) * 0.66666666666666663;
  t77 = cos(t74) * 0.66666666666666663;
  t78 = cos(t135) * 0.66666666666666663;
  t79 = -sin(X_idx_4) * 0.66666666666666663;
  t80 = -sin(t74) * 0.66666666666666663;
  t81 = -sin(t135) * 0.66666666666666663;
  t139 = cos(X_idx_4);
  t138 = -sin(X_idx_4);
  t85 = cos(t74);
  t86 = -sin(t74);
  t88 = cos(t135);
  t89 = -sin(t135);
  t94 = -sin(X_idx_4) * 6.0 * 0.66666666666666663;
  t95 = -sin(t74) * 6.0 * 0.66666666666666663;
  t96 = -sin(t135) * 6.0 * 0.66666666666666663;
  t97 = -(cos(X_idx_4) * 6.0) * 0.66666666666666663;
  t98 = -(cos(t74) * 6.0) * 0.66666666666666663;
  t99 = -(cos(t135) * 6.0) * 0.66666666666666663;
  t125 = -sin(X_idx_4) * 6.0;
  t110 = -(cos(X_idx_4) * 6.0);
  t112 = -sin(t74) * 6.0;
  t113 = -(cos(t74) * 6.0);
  t115 = -sin(t135) * 6.0;
  t116 = -(cos(t135) * 6.0);
  t123 = (t94 * X_idx_21 + t95 * X_idx_22) + t96 * X_idx_23;
  X_idx_4 = (t97 * X_idx_21 + t98 * X_idx_22) + t99 * X_idx_23;
  t16[0ULL] = X_idx_12;
  _in1ivar = 6ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar4, (void *)t16, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  t16[0] = 298.15;
  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&b_efOut.mField0, (void *)
    &b_efOut.mField1, (void *)&b_efOut.mField2, (void *)nonscalar5, (void *)t16,
    (void *)&_in1ivar, (void *)&b__in1ivar);
  if (M_idx_0 != 0) {
    t74 = 0.001;
  } else {
    t74 = 1.0E+6;
  }

  if (M_idx_1 != 0) {
    t135 = 0.001;
  } else {
    t135 = 1.0E+6;
  }

  if (M_idx_1 != 0) {
    t94 = 1.0000000000000011;
  } else {
    t94 = 1.000001;
  }

  if (M_idx_0 != 0) {
    X_idx_12 = 0.001;
  } else {
    X_idx_12 = 1.0E+6;
  }

  if (M_idx_1 != 0) {
    t95 = 0.001;
  } else {
    t95 = 1.0E+6;
  }

  if (M_idx_3 != 0) {
    t96 = -0.001;
  } else {
    t96 = -1.0E+6;
  }

  if (M_idx_0 != 0) {
    t97 = 0.001;
  } else {
    t97 = 1.0E+6;
  }

  if (M_idx_1 != 0) {
    t98 = 0.001;
  } else {
    t98 = 1.0E+6;
  }

  if (M_idx_5 != 0) {
    t99 = -0.001;
  } else {
    t99 = -1.0E+6;
  }

  if (M_idx_1 != 0) {
    X_idx_21 = 0.001;
  } else {
    X_idx_21 = 1.0E+6;
  }

  if (M_idx_3 != 0) {
    X_idx_22 = -0.001;
  } else {
    X_idx_22 = -1.0E+6;
  }

  if (M_idx_1 != 0) {
    X_idx_23 = 0.001;
  } else {
    X_idx_23 = 1.0E+6;
  }

  if (M_idx_5 != 0) {
    t14 = -0.001;
  } else {
    t14 = -1.0E+6;
  }

  t23[0ULL] = -(t123 * 1.5);
  t23[1ULL] = -(X_idx_4 * 1.7320508075688774);
  t23[2ULL] = -((t125 * X_idx_6 + t110 * X_idx_7) + 0.0 * X_idx_5);
  t23[3ULL] = -((t112 * X_idx_6 + t113 * X_idx_7) + 0.0 * X_idx_5);
  t23[4ULL] = -((t115 * X_idx_6 + t116 * X_idx_7) + 0.0 * X_idx_5);
  t25[0ULL] = -(-(X_idx_2 * 0.00019 * 6.0) * 1.7320508075688774);
  t25[1ULL] = -t139;
  t25[2ULL] = -t85;
  t25[3ULL] = -t88;
  t25[4ULL] = -((X_idx_7 * 0.00019 - t129) * 9.0);
  t26[0ULL] = -(X_idx_2 * 0.00025 * 9.0);
  t26[1ULL] = -t138;
  t26[2ULL] = -t86;
  t26[3ULL] = -t89;
  t26[4ULL] = -((t68 - X_idx_6 * 0.00025) * 9.0);
  t27[0ULL] = -(1.0 / (X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13) * (real_T)(X_idx_8 <
    0.0));
  t27[1ULL] = -X_idx_11;
  t27[2ULL] = t74 * 1.0E-6;
  t27[3ULL] = t135 * 1.0E-6;
  X_idx_4 = 1.0E-6;
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  g__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_derivatives((void *)&c_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable1, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&g__in1ivar);
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  g__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_derivatives((void *)&d_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable2, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&g__in1ivar);
  t138 = X_idx_13 * X_idx_13;
  t33[0ULL] = -1.0E-6;
  t33[1ULL] = t94 * 1.0E-6;
  t33[2ULL] = -1.0E-6;
  t33[3ULL] = 1.0E-6;
  t33[4ULL] = -1.0E-6;
  t33[5ULL] = 1.0E-6;
  t34[0ULL] = -(t76 * 1.5);
  t34[1ULL] = -(t79 * 1.7320508075688774);
  t34[2ULL] = -1.0E-6;
  t34[3ULL] = 1.0E-6;
  t35[0ULL] = -(t77 * 1.5);
  t35[1ULL] = -(t80 * 1.7320508075688774);
  t35[2ULL] = -1.0E-6;
  t35[3ULL] = 1.0E-6;
  t36[0ULL] = -(t78 * 1.5);
  t36[1ULL] = -(t81 * 1.7320508075688774);
  t36[2ULL] = -1.0E-6;
  t36[3ULL] = 1.0E-6;
  t37[0ULL] = X_idx_12 * 1.0E-6;
  t37[1ULL] = t95 * 1.0E-6;
  t37[2ULL] = (M_idx_2 != 0 ? -0.001 : -1.0E+6) * 1.0E-6;
  t37[3ULL] = t96 * 1.0E-6;
  t38[0ULL] = t97 * 1.0E-6;
  t38[1ULL] = t98 * 1.0E-6;
  t38[2ULL] = (M_idx_4 != 0 ? -0.001 : -1.0E+6) * 1.0E-6;
  t38[3ULL] = t99 * 1.0E-6;
  t17[0ULL] = -(1.0 / (X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13));
  t17[1ULL] = 0.0;
  t17[2ULL] = 0.0;
  t17[3ULL] = 0.0;
  t17[4ULL] = -(t129 * 9.0);
  t17[5ULL] = -(-(t68 * 6.0) * 1.7320508075688774);
  for (_in1ivar = 0ULL; _in1ivar < 5ULL; _in1ivar++) {
    t17[_in1ivar + 6ULL] = t23[_in1ivar];
  }

  t17[11ULL] = -1.0;
  t17[12ULL] = -1.0;
  t17[13ULL] = -1.0;
  for (_in1ivar = 0ULL; _in1ivar < 5ULL; _in1ivar++) {
    t17[_in1ivar + 14ULL] = t25[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 5ULL; _in1ivar++) {
    t17[_in1ivar + 19ULL] = t26[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t17[_in1ivar + 24ULL] = t27[_in1ivar];
  }

  t17[28ULL] = X_idx_4;
  t17[29ULL] = X_idx_4;
  t17[30ULL] = X_idx_4;
  t17[31ULL] = -X_idx_8;
  t17[32ULL] = -c_efOut[0] * 0.025;
  t17[33ULL] = -d_efOut[0];
  t17[34ULL] = -(-X_idx_8 * (real_T)(X_idx_8 < 0.0)) / (t138 == 0.0 ? 1.0E-16 :
    t138);
  t17[35ULL] = -(-X_idx_0 / (t138 == 0.0 ? 1.0E-16 : t138));
  for (_in1ivar = 0ULL; _in1ivar < 6ULL; _in1ivar++) {
    t17[_in1ivar + 36ULL] = t33[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t17[_in1ivar + 42ULL] = t34[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t17[_in1ivar + 46ULL] = t35[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t17[_in1ivar + 50ULL] = t36[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t17[_in1ivar + 54ULL] = t37[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t17[_in1ivar + 58ULL] = t38[_in1ivar];
  }

  out.mX[0] = t17[0];
  out.mX[1] = t17[1];
  out.mX[2] = t17[2];
  out.mX[3] = t17[3];
  out.mX[4] = t17[4];
  out.mX[5] = t17[5];
  out.mX[6] = t17[6];
  out.mX[7] = t17[7];
  out.mX[8] = t17[8];
  out.mX[9] = t17[9];
  out.mX[10] = t17[10];
  out.mX[11] = t17[11];
  out.mX[12] = t17[12];
  out.mX[13] = t17[13];
  out.mX[14] = t17[14];
  out.mX[15] = t17[15];
  out.mX[16] = t17[16];
  out.mX[17] = t17[17];
  out.mX[18] = t17[18];
  out.mX[19] = t17[19];
  out.mX[20] = t17[20];
  out.mX[21] = t17[21];
  out.mX[22] = t17[22];
  out.mX[23] = t17[23];
  out.mX[24] = t17[24];
  out.mX[25] = t17[25];
  out.mX[26] = t17[26];
  out.mX[27] = t17[27];
  out.mX[28] = t17[28];
  out.mX[29] = t17[29];
  out.mX[30] = t17[30];
  out.mX[31] = t17[31];
  out.mX[32] = t17[32];
  out.mX[33] = t17[33];
  out.mX[34] = t17[34];
  out.mX[35] = t17[35];
  out.mX[36] = t17[36];
  out.mX[37] = t17[37];
  out.mX[38] = t17[38];
  out.mX[39] = t17[39];
  out.mX[40] = t17[40];
  out.mX[41] = t17[41];
  out.mX[42] = t17[42];
  out.mX[43] = t17[43];
  out.mX[44] = t17[44];
  out.mX[45] = t17[45];
  out.mX[46] = t17[46];
  out.mX[47] = t17[47];
  out.mX[48] = t17[48];
  out.mX[49] = t17[49];
  out.mX[50] = t17[50];
  out.mX[51] = t17[51];
  out.mX[52] = t17[52];
  out.mX[53] = t17[53];
  out.mX[54] = t17[54];
  out.mX[55] = t17[55];
  out.mX[56] = t17[56];
  out.mX[57] = t17[57];
  out.mX[58] = t17[58];
  out.mX[59] = t17[59];
  out.mX[60] = t17[60];
  out.mX[61] = t17[61];
  out.mX[62] = X_idx_21 * 1.0E-6;
  out.mX[63] = X_idx_22 * 1.0E-6;
  out.mX[64] = X_idx_23 * 1.0E-6;
  out.mX[65] = t14 * 1.0E-6;
  (void)LC;
  (void)t151;
  return 0;
}
