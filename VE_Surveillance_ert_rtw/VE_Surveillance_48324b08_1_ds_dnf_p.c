/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_dnf_p.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_dnf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDNF_P;
  out.mNumCol = 34ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 1;
  out.mJc[13] = 2;
  out.mJc[14] = 3;
  out.mJc[15] = 3;
  out.mJc[16] = 3;
  out.mJc[17] = 3;
  out.mJc[18] = 3;
  out.mJc[19] = 3;
  out.mJc[20] = 3;
  out.mJc[21] = 3;
  out.mJc[22] = 4;
  out.mJc[23] = 5;
  out.mJc[24] = 6;
  out.mJc[25] = 6;
  out.mJc[26] = 6;
  out.mJc[27] = 6;
  out.mJc[28] = 6;
  out.mJc[29] = 6;
  out.mJc[30] = 6;
  out.mJc[31] = 6;
  out.mJc[32] = 7;
  out.mJc[33] = 8;
  out.mJc[34] = 9;
  out.mIr[0] = 26;
  out.mIr[1] = 26;
  out.mIr[2] = 26;
  out.mIr[3] = 27;
  out.mIr[4] = 27;
  out.mIr[5] = 27;
  out.mIr[6] = 25;
  out.mIr[7] = 25;
  out.mIr[8] = 25;
  (void)LC;
  (void)t2;
  return 0;
}
