/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_m_p.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_m_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 8;
  out.mJc[9] = 8;
  out.mJc[10] = 8;
  out.mJc[11] = 8;
  out.mJc[12] = 8;
  out.mJc[13] = 8;
  out.mJc[14] = 8;
  out.mJc[15] = 8;
  out.mJc[16] = 8;
  out.mJc[17] = 8;
  out.mJc[18] = 8;
  out.mJc[19] = 8;
  out.mJc[20] = 8;
  out.mJc[21] = 8;
  out.mJc[22] = 8;
  out.mJc[23] = 8;
  out.mJc[24] = 8;
  out.mJc[25] = 8;
  out.mJc[26] = 8;
  out.mJc[27] = 8;
  out.mJc[28] = 8;
  out.mJc[29] = 8;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 7;
  out.mIr[3] = 2;
  out.mIr[4] = 3;
  out.mIr[5] = 6;
  out.mIr[6] = 4;
  out.mIr[7] = 5;
  (void)LC;
  (void)t2;
  return 0;
}
