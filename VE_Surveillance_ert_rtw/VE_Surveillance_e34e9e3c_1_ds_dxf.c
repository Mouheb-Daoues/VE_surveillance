/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_dxf.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_dxf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t41, NeDsMethodOutput *t42)
{
  ETTS0 b_efOut;
  ETTS0 efOut;
  PmRealVector out;
  real_T t8[17];
  real_T nonscalar2[6];
  real_T t9[4];
  real_T nonscalar3[3];
  real_T c_efOut[2];
  real_T d_efOut[2];
  real_T t7[1];
  real_T X_idx_0;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T t2;
  real_T t24;
  real_T t26;
  real_T t3;
  real_T t5;
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t g__in1ivar;
  int32_T M_idx_0;
  M_idx_0 = t41->mM.mX[0];
  X_idx_0 = t41->mX.mX[0];
  X_idx_7 = t41->mX.mX[7];
  X_idx_8 = t41->mX.mX[8];
  X_idx_10 = t41->mX.mX[10];
  X_idx_11 = t41->mX.mX[11];
  X_idx_12 = t41->mX.mX[12];
  X_idx_13 = t41->mX.mX[13];
  X_idx_14 = t41->mX.mX[14];
  out = t42->mDXF;
  nonscalar2[0] = 0.0;
  nonscalar2[1] = 0.2;
  nonscalar2[2] = 0.4;
  nonscalar2[3] = 0.6;
  nonscalar2[4] = 0.8;
  nonscalar2[5] = 1.0;
  nonscalar3[0] = 273.15;
  nonscalar3[1] = 298.15;
  nonscalar3[2] = 318.15;
  if (X_idx_13 <= 5.0) {
    X_idx_13 = X_idx_13 * 12.0 / 5.0;
  } else {
    X_idx_13 = 12.0;
  }

  if (X_idx_7 <= 0.0) {
    t24 = 0.0;
  } else if (X_idx_7 >= 300.0) {
    t24 = 0.0;
  } else {
    t24 = 0.0033333333333333335;
  }

  if (M_idx_0 != 0) {
    t5 = 2.4000000000000004;
  } else {
    t5 = 0.0;
  }

  t7[0ULL] = X_idx_10;
  _in1ivar = 6ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar2, (void *)t7, (void *)&_in1ivar,
    (void *)&b__in1ivar);
  t7[0] = 298.15;
  _in1ivar = 3ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_nearest_prelookup((void *)&b_efOut.mField0, (void *)
    &b_efOut.mField1, (void *)&b_efOut.mField2, (void *)nonscalar3, (void *)t7,
    (void *)&_in1ivar, (void *)&b__in1ivar);
  if (X_idx_13 - X_idx_14 > 0.0) {
    t2 = -0.099999999995;
  } else {
    t2 = -999999.99995;
  }

  if (X_idx_13 - X_idx_14 > 0.0) {
    t3 = 4.7746482925181283E-11;
  } else {
    t3 = 0.00047746482925181281;
  }

  t26 = t5;
  if (X_idx_13 - X_idx_14 > 0.0) {
    t5 = -1.0000000001;
  } else {
    t5 = -1.00099999999995;
  }

  t9[0] = 0.0;
  t9[1] = 0.0;
  t9[2] = 0.0;
  t9[3] = 0.0;
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  g__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_derivatives((void *)&c_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable0, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&g__in1ivar);
  _in1ivar = 6ULL;
  b__in1ivar = 3ULL;
  g__in1ivar = 1ULL;
  tlu2_2d_linear_nearest_derivatives((void *)&d_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable1, (void *)&_in1ivar, (void *)&b__in1ivar, (void *)&g__in1ivar);
  X_idx_10 = X_idx_12 * X_idx_12;
  t8[0ULL] = -(1.0 / (X_idx_12 == 0.0 ? 1.0E-16 : X_idx_12));
  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t8[_in1ivar + 1ULL] = t9[_in1ivar];
  }

  X_idx_13 = X_idx_11 * X_idx_11;
  out.mX[0] = t8[0];
  out.mX[1] = t8[1];
  out.mX[2] = t8[2];
  out.mX[3] = t8[3];
  out.mX[4] = t8[4];
  out.mX[5] = t2 * 1.0E-6;
  out.mX[6] = t3 * 1.0E-6;
  out.mX[7] = -X_idx_8;
  out.mX[8] = -t24;
  out.mX[9] = -X_idx_7;
  out.mX[10] = -c_efOut[0] * 0.025;
  out.mX[11] = -d_efOut[0];
  out.mX[12] = -(-1.0 / (X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13));
  out.mX[13] = -0.0 / (X_idx_10 == 0.0 ? 1.0E-16 : X_idx_10);
  out.mX[14] = -(-X_idx_0 / (X_idx_10 == 0.0 ? 1.0E-16 : X_idx_10));
  out.mX[15] = t26 * 1.0E-6;
  out.mX[16] = t5 * 1.0E-6;
  (void)LC;
  (void)t42;
  return 0;
}
