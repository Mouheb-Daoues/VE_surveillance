/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_tdxf_p.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_tdxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDXF_P;
  out.mNumCol = 16ULL;
  out.mNumRow = 16ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 5;
  out.mJc[3] = 8;
  out.mJc[4] = 12;
  out.mJc[5] = 15;
  out.mJc[6] = 16;
  out.mJc[7] = 16;
  out.mJc[8] = 19;
  out.mJc[9] = 21;
  out.mJc[10] = 22;
  out.mJc[11] = 25;
  out.mJc[12] = 27;
  out.mJc[13] = 30;
  out.mJc[14] = 32;
  out.mJc[15] = 35;
  out.mJc[16] = 37;
  out.mIr[0] = 7;
  out.mIr[1] = 8;
  out.mIr[2] = 9;
  out.mIr[3] = 10;
  out.mIr[4] = 12;
  out.mIr[5] = 2;
  out.mIr[6] = 3;
  out.mIr[7] = 15;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 14;
  out.mIr[11] = 15;
  out.mIr[12] = 3;
  out.mIr[13] = 5;
  out.mIr[14] = 14;
  out.mIr[15] = 4;
  out.mIr[16] = 0;
  out.mIr[17] = 9;
  out.mIr[18] = 13;
  out.mIr[19] = 0;
  out.mIr[20] = 11;
  out.mIr[21] = 10;
  out.mIr[22] = 7;
  out.mIr[23] = 9;
  out.mIr[24] = 10;
  out.mIr[25] = 11;
  out.mIr[26] = 12;
  out.mIr[27] = 1;
  out.mIr[28] = 7;
  out.mIr[29] = 8;
  out.mIr[30] = 13;
  out.mIr[31] = 15;
  out.mIr[32] = 2;
  out.mIr[33] = 3;
  out.mIr[34] = 15;
  out.mIr[35] = 3;
  out.mIr[36] = 6;
  (void)LC;
  (void)t2;
  return 0;
}
