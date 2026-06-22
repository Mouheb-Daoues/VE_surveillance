/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_assert.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_assert(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmIntVector out;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_12;
  int32_T M_idx_1;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  (void)LC;
  M_idx_1 = t2->mM.mX[1];
  M_idx_2 = t2->mM.mX[2];
  M_idx_3 = t2->mM.mX[3];
  M_idx_4 = t2->mM.mX[4];
  M_idx_5 = t2->mM.mX[5];
  X_idx_1 = t2->mX.mX[1];
  X_idx_11 = t2->mX.mX[11];
  X_idx_12 = t2->mX.mX[12];
  out = t3->mASSERT;
  out.mX[0] = (int32_T)(M_idx_1 != 0);
  out.mX[1] = (int32_T)(M_idx_2 != 0);
  out.mX[2] = (int32_T)(M_idx_3 != 0);
  out.mX[3] = (int32_T)(M_idx_4 != 0);
  out.mX[4] = (int32_T)(M_idx_5 != 0);
  out.mX[5] = 1;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = 1;
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = (int32_T)(X_idx_12 != 0.0);
  out.mX[14] = (int32_T)(X_idx_12 != 0.0);
  out.mX[15] = (int32_T)((X_idx_1 + 1.0E-6) / 100.0 >= 0.0);
  out.mX[16] = (int32_T)((X_idx_1 + 1.0E-6) / 100.0 >= 0.0);
  out.mX[17] = (int32_T)(X_idx_11 != 0.0);
  out.mX[18] = (int32_T)((X_idx_1 + 1.0E-6) / 100.0 >= 0.0);
  out.mX[19] = 1;
  (void)LC;
  (void)t3;
  return 0;
}
