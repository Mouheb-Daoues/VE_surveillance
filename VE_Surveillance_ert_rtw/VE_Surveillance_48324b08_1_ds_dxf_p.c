/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_dxf_p.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_dxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXF_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 4;
  out.mJc[3] = 6;
  out.mJc[4] = 6;
  out.mJc[5] = 11;
  out.mJc[6] = 14;
  out.mJc[7] = 19;
  out.mJc[8] = 24;
  out.mJc[9] = 28;
  out.mJc[10] = 31;
  out.mJc[11] = 31;
  out.mJc[12] = 32;
  out.mJc[13] = 34;
  out.mJc[14] = 36;
  out.mJc[15] = 36;
  out.mJc[16] = 36;
  out.mJc[17] = 36;
  out.mJc[18] = 36;
  out.mJc[19] = 36;
  out.mJc[20] = 36;
  out.mJc[21] = 42;
  out.mJc[22] = 46;
  out.mJc[23] = 50;
  out.mJc[24] = 54;
  out.mJc[25] = 58;
  out.mJc[26] = 62;
  out.mJc[27] = 64;
  out.mJc[28] = 66;
  out.mJc[29] = 66;
  out.mIr[0] = 9;
  out.mIr[1] = 10;
  out.mIr[2] = 11;
  out.mIr[3] = 12;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 4;
  out.mIr[7] = 5;
  out.mIr[8] = 25;
  out.mIr[9] = 26;
  out.mIr[10] = 27;
  out.mIr[11] = 25;
  out.mIr[12] = 26;
  out.mIr[13] = 27;
  out.mIr[14] = 5;
  out.mIr[15] = 25;
  out.mIr[16] = 26;
  out.mIr[17] = 27;
  out.mIr[18] = 28;
  out.mIr[19] = 4;
  out.mIr[20] = 25;
  out.mIr[21] = 26;
  out.mIr[22] = 27;
  out.mIr[23] = 28;
  out.mIr[24] = 1;
  out.mIr[25] = 8;
  out.mIr[26] = 13;
  out.mIr[27] = 14;
  out.mIr[28] = 13;
  out.mIr[29] = 15;
  out.mIr[30] = 17;
  out.mIr[31] = 8;
  out.mIr[32] = 11;
  out.mIr[33] = 12;
  out.mIr[34] = 1;
  out.mIr[35] = 9;
  out.mIr[36] = 13;
  out.mIr[37] = 14;
  out.mIr[38] = 15;
  out.mIr[39] = 16;
  out.mIr[40] = 17;
  out.mIr[41] = 18;
  out.mIr[42] = 4;
  out.mIr[43] = 5;
  out.mIr[44] = 13;
  out.mIr[45] = 14;
  out.mIr[46] = 4;
  out.mIr[47] = 5;
  out.mIr[48] = 15;
  out.mIr[49] = 16;
  out.mIr[50] = 4;
  out.mIr[51] = 5;
  out.mIr[52] = 17;
  out.mIr[53] = 18;
  out.mIr[54] = 13;
  out.mIr[55] = 14;
  out.mIr[56] = 15;
  out.mIr[57] = 16;
  out.mIr[58] = 13;
  out.mIr[59] = 14;
  out.mIr[60] = 17;
  out.mIr[61] = 18;
  out.mIr[62] = 14;
  out.mIr[63] = 16;
  out.mIr[64] = 14;
  out.mIr[65] = 18;
  (void)LC;
  (void)t2;
  return 0;
}
