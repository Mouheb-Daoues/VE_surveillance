/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_f.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t69, NeDsMethodOutput *t70)
{
  ETTS0 b_efOut;
  ETTS0 efOut;
  PmRealVector out;
  real_T t10[29];
  real_T t14[12];
  real_T t15[12];
  real_T t16[12];
  real_T nonscalar4[6];
  real_T nonscalar5[3];
  real_T nonscalar6[3];
  real_T c_efOut[1];
  real_T d_efOut[1];
  real_T e_efOut[1];
  real_T t11[1];
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_K_v;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i;
  real_T X_idx_0;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_2;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T intrm_sf_mf_10;
  real_T t26;
  real_T t3;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t4;
  real_T t40;
  real_T t41;
  real_T t43;
  real_T t49;
  real_T t5;
  real_T t51;
  real_T t6;
  real_T t7;
  size_t t17[6];
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t i__in1ivar;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  M_idx_0 = t69->mM.mX[0];
  M_idx_1 = t69->mM.mX[1];
  M_idx_2 = t69->mM.mX[2];
  M_idx_3 = t69->mM.mX[3];
  M_idx_4 = t69->mM.mX[4];
  M_idx_5 = t69->mM.mX[5];
  X_idx_0 = t69->mX.mX[0];
  X_idx_2 = t69->mX.mX[2];
  X_idx_4 = t69->mX.mX[4];
  X_idx_5 = t69->mX.mX[5];
  X_idx_6 = t69->mX.mX[6];
  X_idx_7 = t69->mX.mX[7];
  X_idx_8 = t69->mX.mX[8];
  X_idx_9 = t69->mX.mX[9];
  X_idx_11 = t69->mX.mX[11];
  X_idx_12 = t69->mX.mX[12];
  X_idx_13 = t69->mX.mX[13];
  X_idx_20 = t69->mX.mX[20];
  X_idx_21 = t69->mX.mX[21];
  X_idx_22 = t69->mX.mX[22];
  X_idx_23 = t69->mX.mX[23];
  X_idx_24 = t69->mX.mX[24];
  X_idx_25 = t69->mX.mX[25];
  X_idx_26 = t69->mX.mX[26];
  X_idx_27 = t69->mX.mX[27];
  out = t70->mF;
  nonscalar4[0] = 0.0;
  nonscalar4[1] = 0.2;
  nonscalar4[2] = 0.4;
  nonscalar4[3] = 0.6;
  nonscalar4[4] = 0.8;
  nonscalar4[5] = 1.0;
  nonscalar5[0] = 273.15;
  nonscalar5[1] = 298.15;
  nonscalar5[2] = 318.15;
  nonscalar6[0] = 198000.0;
  nonscalar6[1] = 216000.0;
  nonscalar6[2] = 223200.0;
  t4 = X_idx_20 + X_idx_21;
  t3 = (-X_idx_8 + -X_idx_24) + -X_idx_25;
  t5 = (-X_idx_20 + -X_idx_21) + X_idx_9;
  t6 = ((((-X_idx_8 + -X_idx_24) + -X_idx_25) + X_idx_20 * -1.0E-12) + -X_idx_26)
    + -X_idx_27;
  t7 = X_idx_20 + X_idx_22;
  t51 = (-X_idx_20 + -X_idx_22) + X_idx_9;
  t49 = X_idx_24 + X_idx_26;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_K_v = X_idx_20 +
    X_idx_23;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v = (-X_idx_20 +
    -X_idx_23) + X_idx_9;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i = X_idx_25 +
    X_idx_27;
  intrm_sf_mf_10 = X_idx_4 * 6.0;
  X_idx_26 = intrm_sf_mf_10;
  X_idx_20 = intrm_sf_mf_10 + -2.0943951023931953;
  X_idx_9 = intrm_sf_mf_10 + 2.0943951023931953;
  intrm_sf_mf_10 = X_idx_6 * 0.00019 + 0.03;
  t26 = X_idx_7 * 0.00025;
  X_idx_27 = cos(X_idx_26) * 0.66666666666666663;
  X_idx_4 = cos(X_idx_20) * 0.66666666666666663;
  t33 = cos(X_idx_9) * 0.66666666666666663;
  t34 = -sin(X_idx_26) * 0.66666666666666663;
  t35 = -sin(X_idx_20) * 0.66666666666666663;
  t36 = -sin(X_idx_9) * 0.66666666666666663;
  t37 = cos(X_idx_26);
  t38 = -sin(X_idx_26);
  t40 = cos(X_idx_20);
  t41 = -sin(X_idx_20);
  t43 = cos(X_idx_9);
  X_idx_9 = -sin(X_idx_9);
  t11[0] = 298.15;
  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar5, (void *)t11, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  t11[0ULL] = X_idx_12;
  _in1ivar = 6ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&b_efOut.mField0, (void *)
    &b_efOut.mField1, (void *)&b_efOut.mField2, (void *)nonscalar4, (void *)t11,
    (void *)&_in1ivar, (void *)&b__in1ivar);
  if (M_idx_0 != 0) {
    X_idx_20 = t5 - t3 * 0.001;
  } else {
    X_idx_20 = t5 - t3 / 1.0E-6;
  }

  if (M_idx_1 != 0) {
    t3 = t4 - t6 * 0.001;
  } else {
    t3 = t4 - t6 / 1.0E-6;
  }

  if (M_idx_2 != 0) {
    t4 = t51 - X_idx_24 * 0.001;
  } else {
    t4 = t51 - X_idx_24 / 1.0E-6;
  }

  if (M_idx_3 != 0) {
    t5 = t7 - t49 * 0.001;
  } else {
    t5 = t7 - t49 / 1.0E-6;
  }

  if (M_idx_4 != 0) {
    t6 = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v - X_idx_25
      * 0.001;
  } else {
    t6 = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v - X_idx_25
      / 1.0E-6;
  }

  if (M_idx_5 != 0) {
    t7 = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_K_v -
      Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i * 0.001;
  } else {
    t7 = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_K_v -
      Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i / 1.0E-6;
  }

  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_1d_linear_nearest_value((void *)&c_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)nonscalar6, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  i__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_value((void *)&d_efOut, (void *)b_efOut.mField0, (void *)
    b_efOut.mField1, (void *)b_efOut.mField2, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable1, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&i__in1ivar);
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  i__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_value((void *)&e_efOut, (void *)b_efOut.mField0, (void *)
    b_efOut.mField1, (void *)b_efOut.mField2, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable2, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&i__in1ivar);
  t14[0ULL] = 0.0;
  t14[1ULL] = 0.0;
  t14[2ULL] = 0.0;
  t14[3ULL] = 0.0;
  t14[4ULL] = 0.0;
  t14[5ULL] = 0.0;
  t14[6ULL] = 0.0;
  t14[7ULL] = 0.0;
  t14[8ULL] = 0.0;
  t14[9ULL] = 0.0;
  t14[10ULL] = 0.0;
  t14[11ULL] = 0.0;
  t15[0] = 0.0;
  t15[1] = 0.0;
  t15[2] = 0.0;
  t15[3] = 0.0;
  t15[4] = 0.0;
  t15[5] = 0.0;
  t15[6] = 0.0;
  t15[7] = 0.0;
  t15[8] = 0.0;
  t15[9] = 0.0;
  t15[10] = 0.0;
  t15[11] = 0.0;
  t16[0] = 1.0;
  t16[1] = 1.0;
  t16[2] = 1.0;
  t16[3] = 1.0;
  t16[4] = 1.0;
  t16[5] = 1.0;
  t16[6] = 1.0;
  t16[7] = 1.0;
  t16[8] = 1.0;
  t16[9] = 1.0;
  t16[10] = 1.0;
  t16[11] = 1.0;
  t17[0] = 0ULL;
  t17[1] = 2ULL;
  t17[2] = 4ULL;
  t17[3] = 6ULL;
  t17[4] = 8ULL;
  t17[5] = 10ULL;
  t10[0ULL] = -0.0;
  t10[1ULL] = -X_idx_8 * (real_T)(X_idx_8 < 0.0) / (X_idx_13 == 0.0 ? 1.0E-16 :
    X_idx_13);
  t10[2ULL] = -0.0;
  t10[3ULL] = -0.0;
  t10[4ULL] = -((((X_idx_27 * X_idx_21 + X_idx_4 * X_idx_22) + t33 * X_idx_23) -
                 (-(X_idx_2 * t26 * 6.0))) / 0.66666666666666663);
  t10[5ULL] = -((((t34 * X_idx_21 + t35 * X_idx_22) + t36 * X_idx_23) - X_idx_2 *
                 intrm_sf_mf_10 * 6.0) / 0.57735026918962573);
  t10[6ULL] = -0.0;
  t10[7ULL] = 0.0;
  t10[8ULL] = -(X_idx_8 * X_idx_11);
  t10[9ULL] = -(X_idx_0 / (X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13));
  t10[10ULL] = -c_efOut[0];
  t10[11ULL] = -d_efOut[0] / 40.0;
  t10[12ULL] = -e_efOut[0];
  t10[13ULL] = X_idx_20 / 1.0E+6;
  t10[14ULL] = t3 / 1.0E+6;
  t10[15ULL] = t4 / 1.0E+6;
  t10[16ULL] = t5 / 1.0E+6;
  t10[17ULL] = t6 / 1.0E+6;
  t10[18ULL] = t7 / 1.0E+6;
  for (_in1ivar = 0ULL; _in1ivar < 6ULL; _in1ivar++) {
    X_idx_26 = t16[t17[_in1ivar] > 11ULL ? 11ULL : t17[_in1ivar]];
    t10[_in1ivar + 19ULL] = (t14[t17[_in1ivar] > 11ULL ? 11ULL : t17[_in1ivar]]
      - t15[t17[_in1ivar] > 11ULL ? 11ULL : t17[_in1ivar]]) / (X_idx_26 == 0.0 ?
      1.0E-16 : X_idx_26);
  }

  out.mX[0] = t10[0];
  out.mX[1] = t10[1];
  out.mX[2] = t10[2];
  out.mX[3] = t10[3];
  out.mX[4] = t10[4];
  out.mX[5] = t10[5];
  out.mX[6] = t10[6];
  out.mX[7] = t10[7];
  out.mX[8] = t10[8];
  out.mX[9] = t10[9];
  out.mX[10] = t10[10];
  out.mX[11] = t10[11];
  out.mX[12] = t10[12];
  out.mX[13] = t10[13];
  out.mX[14] = t10[14];
  out.mX[15] = t10[15];
  out.mX[16] = t10[16];
  out.mX[17] = t10[17];
  out.mX[18] = t10[18];
  out.mX[19] = t10[19];
  out.mX[20] = t10[20];
  out.mX[21] = t10[21];
  out.mX[22] = t10[22];
  out.mX[23] = t10[23];
  out.mX[24] = t10[24];
  out.mX[25] = -((t37 * X_idx_6 + t38 * X_idx_7) + X_idx_5);
  out.mX[26] = -((t40 * X_idx_6 + t41 * X_idx_7) + X_idx_5);
  out.mX[27] = -((t43 * X_idx_6 + X_idx_9 * X_idx_7) + X_idx_5);
  out.mX[28] = -((X_idx_7 * intrm_sf_mf_10 - X_idx_6 * t26) * 9.0);
  (void)LC;
  (void)t70;
  return 0;
}
