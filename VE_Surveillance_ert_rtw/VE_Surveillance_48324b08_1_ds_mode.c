/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_mode.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_19;
  (void)LC;
  X_idx_10 = t1->mX.mX[10];
  X_idx_11 = t1->mX.mX[11];
  X_idx_12 = t1->mX.mX[12];
  X_idx_13 = t1->mX.mX[13];
  X_idx_14 = t1->mX.mX[14];
  X_idx_15 = t1->mX.mX[15];
  X_idx_16 = t1->mX.mX[16];
  X_idx_17 = t1->mX.mX[17];
  X_idx_18 = t1->mX.mX[18];
  X_idx_19 = t1->mX.mX[19];
  out = t2->mMODE;
  out.mX[0] = (int32_T)(X_idx_14 > 6.0);
  out.mX[1] = (int32_T)(X_idx_15 > 6.0);
  out.mX[2] = (int32_T)(X_idx_16 > 6.0);
  out.mX[3] = (int32_T)(X_idx_17 > 6.0);
  out.mX[4] = (int32_T)(X_idx_18 > 6.0);
  out.mX[5] = (int32_T)(X_idx_19 > 6.0);
  out.mX[6] = (int32_T)(X_idx_13 > 0.0);
  out.mX[7] = (int32_T)(X_idx_10 >= 0.0);
  out.mX[8] = (int32_T)(X_idx_11 > 0.0);
  out.mX[9] = (int32_T)(X_idx_12 >= 0.0);
  (void)LC;
  (void)t2;
  return 0;
}
