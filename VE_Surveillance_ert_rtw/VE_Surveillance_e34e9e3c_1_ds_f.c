/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_f.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t32, NeDsMethodOutput *t33)
{
  ETTS0 b_efOut;
  ETTS0 efOut;
  PmRealVector out;
  real_T nonscalar2[6];
  real_T nonscalar3[3];
  real_T nonscalar4[3];
  real_T nonscalar7[3];
  real_T c_efOut[1];
  real_T d_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T t6[1];
  real_T X_idx_0;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T intrm_sf_mf_1;
  real_T intrm_sf_mf_6;
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t i__in1ivar;
  int32_T M_idx_0;
  M_idx_0 = t32->mM.mX[0];
  X_idx_0 = t32->mX.mX[0];
  X_idx_2 = t32->mX.mX[2];
  X_idx_3 = t32->mX.mX[3];
  X_idx_7 = t32->mX.mX[7];
  X_idx_8 = t32->mX.mX[8];
  X_idx_10 = t32->mX.mX[10];
  X_idx_11 = t32->mX.mX[11];
  X_idx_12 = t32->mX.mX[12];
  X_idx_13 = t32->mX.mX[13];
  X_idx_14 = t32->mX.mX[14];
  out = t33->mF;
  nonscalar2[0] = 0.0;
  nonscalar2[1] = 0.2;
  nonscalar2[2] = 0.4;
  nonscalar2[3] = 0.6;
  nonscalar2[4] = 0.8;
  nonscalar2[5] = 1.0;
  nonscalar3[0] = 273.15;
  nonscalar3[1] = 298.15;
  nonscalar3[2] = 318.15;
  nonscalar4[0] = 198000.0;
  nonscalar4[1] = 216000.0;
  nonscalar4[2] = 223200.0;
  nonscalar7[0] = 8000.0;
  nonscalar7[1] = 7000.0;
  nonscalar7[2] = 6000.0;
  X_idx_3 = (X_idx_2 * 0.99999999995 + X_idx_3 * -4.7746482925181279E-10) +
    X_idx_14 * 9.9999999995E-10;
  if (X_idx_7 <= 0.0) {
    intrm_sf_mf_1 = 0.0;
  } else if (X_idx_7 >= 300.0) {
    intrm_sf_mf_1 = 1.0;
  } else {
    intrm_sf_mf_1 = X_idx_7 / 300.0;
  }

  if (X_idx_13 <= 5.0) {
    intrm_sf_mf_6 = X_idx_13 * 12.0 / 5.0;
  } else {
    intrm_sf_mf_6 = 12.0;
  }

  if (M_idx_0 != 0) {
    X_idx_2 = X_idx_13 * 12.0 / 5.0;
  } else {
    X_idx_2 = 12.0;
  }

  t6[0] = 298.15;
  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar3, (void *)t6, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  t6[0ULL] = X_idx_10;
  _in1ivar = 6ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&b_efOut.mField0, (void *)
    &b_efOut.mField1, (void *)&b_efOut.mField2, (void *)nonscalar2, (void *)t6,
    (void *)&_in1ivar, (void *)&b__in1ivar);
  if (intrm_sf_mf_6 - X_idx_14 > 0.0) {
    X_idx_2 = (X_idx_2 - X_idx_14) - X_idx_3 * 0.1;
  } else {
    X_idx_2 = (X_idx_2 - X_idx_14) - X_idx_3 / 1.0E-6;
  }

  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_1d_linear_nearest_value((void *)&c_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)nonscalar4, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  i__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_value((void *)&d_efOut, (void *)b_efOut.mField0, (void *)
    b_efOut.mField1, (void *)b_efOut.mField2, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable0, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&i__in1ivar);
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  i__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_value((void *)&e_efOut, (void *)b_efOut.mField0, (void *)
    b_efOut.mField1, (void *)b_efOut.mField2, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable1, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&i__in1ivar);
  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_1d_linear_nearest_value((void *)&f_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)nonscalar7, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  out.mX[0] = -(X_idx_7 * X_idx_8);
  out.mX[1] = 0.0 / (X_idx_12 == 0.0 ? 1.0E-16 : X_idx_12);
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -(X_idx_0 / (X_idx_12 == 0.0 ? 1.0E-16 : X_idx_12));
  out.mX[8] = -c_efOut[0];
  out.mX[9] = -d_efOut[0] / 40.0;
  out.mX[10] = -e_efOut[0];
  out.mX[11] = -(1.0 / (X_idx_11 == 0.0 ? 1.0E-16 : X_idx_11));
  out.mX[12] = -f_efOut[0];
  out.mX[13] = -intrm_sf_mf_1;
  out.mX[14] = 0.0;
  out.mX[15] = X_idx_2 / 1.0E+6;
  (void)LC;
  (void)t33;
  return 0;
}
