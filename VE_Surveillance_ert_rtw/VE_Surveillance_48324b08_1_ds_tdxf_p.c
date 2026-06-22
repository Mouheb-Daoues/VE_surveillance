/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_tdxf_p.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_tdxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDXF_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 4;
  out.mJc[3] = 9;
  out.mJc[4] = 9;
  out.mJc[5] = 14;
  out.mJc[6] = 18;
  out.mJc[7] = 24;
  out.mJc[8] = 30;
  out.mJc[9] = 35;
  out.mJc[10] = 39;
  out.mJc[11] = 42;
  out.mJc[12] = 44;
  out.mJc[13] = 47;
  out.mJc[14] = 50;
  out.mJc[15] = 51;
  out.mJc[16] = 52;
  out.mJc[17] = 53;
  out.mJc[18] = 54;
  out.mJc[19] = 55;
  out.mJc[20] = 56;
  out.mJc[21] = 63;
  out.mJc[22] = 68;
  out.mJc[23] = 73;
  out.mJc[24] = 78;
  out.mJc[25] = 82;
  out.mJc[26] = 86;
  out.mJc[27] = 90;
  out.mJc[28] = 94;
  out.mJc[29] = 96;
  out.mIr[0] = 9;
  out.mIr[1] = 10;
  out.mIr[2] = 11;
  out.mIr[3] = 12;
  out.mIr[4] = 2;
  out.mIr[5] = 3;
  out.mIr[6] = 4;
  out.mIr[7] = 5;
  out.mIr[8] = 7;
  out.mIr[9] = 4;
  out.mIr[10] = 5;
  out.mIr[11] = 25;
  out.mIr[12] = 26;
  out.mIr[13] = 27;
  out.mIr[14] = 6;
  out.mIr[15] = 25;
  out.mIr[16] = 26;
  out.mIr[17] = 27;
  out.mIr[18] = 4;
  out.mIr[19] = 5;
  out.mIr[20] = 25;
  out.mIr[21] = 26;
  out.mIr[22] = 27;
  out.mIr[23] = 28;
  out.mIr[24] = 4;
  out.mIr[25] = 5;
  out.mIr[26] = 25;
  out.mIr[27] = 26;
  out.mIr[28] = 27;
  out.mIr[29] = 28;
  out.mIr[30] = 0;
  out.mIr[31] = 1;
  out.mIr[32] = 8;
  out.mIr[33] = 13;
  out.mIr[34] = 14;
  out.mIr[35] = 8;
  out.mIr[36] = 13;
  out.mIr[37] = 15;
  out.mIr[38] = 17;
  out.mIr[39] = 0;
  out.mIr[40] = 8;
  out.mIr[41] = 11;
  out.mIr[42] = 8;
  out.mIr[43] = 12;
  out.mIr[44] = 9;
  out.mIr[45] = 11;
  out.mIr[46] = 12;
  out.mIr[47] = 1;
  out.mIr[48] = 9;
  out.mIr[49] = 10;
  out.mIr[50] = 13;
  out.mIr[51] = 14;
  out.mIr[52] = 15;
  out.mIr[53] = 16;
  out.mIr[54] = 17;
  out.mIr[55] = 18;
  out.mIr[56] = 13;
  out.mIr[57] = 14;
  out.mIr[58] = 15;
  out.mIr[59] = 16;
  out.mIr[60] = 17;
  out.mIr[61] = 18;
  out.mIr[62] = 25;
  out.mIr[63] = 4;
  out.mIr[64] = 5;
  out.mIr[65] = 6;
  out.mIr[66] = 13;
  out.mIr[67] = 14;
  out.mIr[68] = 4;
  out.mIr[69] = 5;
  out.mIr[70] = 6;
  out.mIr[71] = 15;
  out.mIr[72] = 16;
  out.mIr[73] = 4;
  out.mIr[74] = 5;
  out.mIr[75] = 6;
  out.mIr[76] = 17;
  out.mIr[77] = 18;
  out.mIr[78] = 13;
  out.mIr[79] = 14;
  out.mIr[80] = 15;
  out.mIr[81] = 16;
  out.mIr[82] = 13;
  out.mIr[83] = 14;
  out.mIr[84] = 17;
  out.mIr[85] = 18;
  out.mIr[86] = 14;
  out.mIr[87] = 16;
  out.mIr[88] = 25;
  out.mIr[89] = 26;
  out.mIr[90] = 14;
  out.mIr[91] = 18;
  out.mIr[92] = 25;
  out.mIr[93] = 27;
  out.mIr[94] = 7;
  out.mIr[95] = 28;
  (void)LC;
  (void)t2;
  return 0;
}
