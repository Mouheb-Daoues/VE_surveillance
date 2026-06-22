/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_a_p.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_a_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mA_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mJc[5] = 3;
  out.mJc[6] = 4;
  out.mJc[7] = 5;
  out.mJc[8] = 6;
  out.mJc[9] = 7;
  out.mJc[10] = 8;
  out.mJc[11] = 11;
  out.mJc[12] = 12;
  out.mJc[13] = 13;
  out.mJc[14] = 14;
  out.mJc[15] = 14;
  out.mJc[16] = 14;
  out.mJc[17] = 14;
  out.mJc[18] = 14;
  out.mJc[19] = 14;
  out.mJc[20] = 14;
  out.mJc[21] = 15;
  out.mJc[22] = 16;
  out.mJc[23] = 17;
  out.mJc[24] = 18;
  out.mJc[25] = 18;
  out.mJc[26] = 18;
  out.mJc[27] = 20;
  out.mJc[28] = 22;
  out.mJc[29] = 24;
  out.mIr[0] = 2;
  out.mIr[1] = 3;
  out.mIr[2] = 7;
  out.mIr[3] = 6;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 0;
  out.mIr[7] = 8;
  out.mIr[8] = 0;
  out.mIr[9] = 8;
  out.mIr[10] = 11;
  out.mIr[11] = 12;
  out.mIr[12] = 9;
  out.mIr[13] = 10;
  out.mIr[14] = 25;
  out.mIr[15] = 6;
  out.mIr[16] = 6;
  out.mIr[17] = 6;
  out.mIr[18] = 25;
  out.mIr[19] = 26;
  out.mIr[20] = 25;
  out.mIr[21] = 27;
  out.mIr[22] = 7;
  out.mIr[23] = 28;
  (void)LC;
  (void)t2;
  return 0;
}
