/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_a_p.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_a_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mA_P;
  out.mNumCol = 16ULL;
  out.mNumRow = 16ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 3;
  out.mJc[4] = 7;
  out.mJc[5] = 10;
  out.mJc[6] = 11;
  out.mJc[7] = 11;
  out.mJc[8] = 12;
  out.mJc[9] = 13;
  out.mJc[10] = 14;
  out.mJc[11] = 15;
  out.mJc[12] = 16;
  out.mJc[13] = 17;
  out.mJc[14] = 18;
  out.mJc[15] = 21;
  out.mJc[16] = 23;
  out.mIr[0] = 2;
  out.mIr[1] = 3;
  out.mIr[2] = 15;
  out.mIr[3] = 2;
  out.mIr[4] = 3;
  out.mIr[5] = 14;
  out.mIr[6] = 15;
  out.mIr[7] = 3;
  out.mIr[8] = 5;
  out.mIr[9] = 14;
  out.mIr[10] = 4;
  out.mIr[11] = 9;
  out.mIr[12] = 11;
  out.mIr[13] = 10;
  out.mIr[14] = 7;
  out.mIr[15] = 12;
  out.mIr[16] = 8;
  out.mIr[17] = 13;
  out.mIr[18] = 2;
  out.mIr[19] = 3;
  out.mIr[20] = 15;
  out.mIr[21] = 3;
  out.mIr[22] = 6;
  (void)LC;
  (void)t2;
  return 0;
}
