/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_log.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t38, NeDsMethodOutput *t39)
{
  PmRealVector out;
  real_T t0[224];
  real_T Capteurs_Physiques_Converter_Three_Phase_G_V[12];
  real_T t1[12];
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_i;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_v;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q2_i;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q3_v;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q4_i;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v;
  real_T Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i;
  real_T X_idx_0;
  real_T X_idx_1;
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
  real_T X_idx_2;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t36;
  size_t t14;
  int32_T b;
  (void)LC;
  X_idx_0 = t38->mX.mX[0];
  X_idx_1 = t38->mX.mX[1];
  X_idx_2 = t38->mX.mX[2];
  X_idx_3 = t38->mX.mX[3];
  X_idx_4 = t38->mX.mX[4];
  X_idx_5 = t38->mX.mX[5];
  X_idx_6 = t38->mX.mX[6];
  X_idx_7 = t38->mX.mX[7];
  X_idx_8 = t38->mX.mX[8];
  X_idx_9 = t38->mX.mX[9];
  X_idx_10 = t38->mX.mX[10];
  X_idx_11 = t38->mX.mX[11];
  X_idx_12 = t38->mX.mX[12];
  X_idx_13 = t38->mX.mX[13];
  X_idx_14 = t38->mX.mX[14];
  X_idx_15 = t38->mX.mX[15];
  X_idx_16 = t38->mX.mX[16];
  X_idx_17 = t38->mX.mX[17];
  X_idx_18 = t38->mX.mX[18];
  X_idx_19 = t38->mX.mX[19];
  X_idx_20 = t38->mX.mX[20];
  X_idx_21 = t38->mX.mX[21];
  X_idx_22 = t38->mX.mX[22];
  X_idx_23 = t38->mX.mX[23];
  X_idx_24 = t38->mX.mX[24];
  X_idx_25 = t38->mX.mX[25];
  X_idx_26 = t38->mX.mX[26];
  X_idx_27 = t38->mX.mX[27];
  X_idx_28 = t38->mX.mX[28];
  out = t39->mLOG;
  t1[0ULL] = X_idx_14;
  t1[1ULL] = 0.0;
  t1[2ULL] = X_idx_15;
  t1[3ULL] = 0.0;
  t1[4ULL] = X_idx_16;
  t1[5ULL] = 0.0;
  t1[6ULL] = X_idx_17;
  t1[7ULL] = 0.0;
  t1[8ULL] = X_idx_18;
  t1[9ULL] = 0.0;
  t1[10ULL] = X_idx_19;
  t1[11ULL] = 0.0;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    Capteurs_Physiques_Converter_Three_Phase_G_V[t14] = t1[t14];
  }

  t23 = X_idx_20 + X_idx_21;
  t24 = X_idx_20 + X_idx_22;
  t25 = X_idx_20 + X_idx_23;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_i = (-X_idx_8 +
    -X_idx_24) + -X_idx_25;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_v = (-X_idx_20 +
    -X_idx_21) + X_idx_9;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q2_i = ((((-X_idx_8 +
    -X_idx_24) + -X_idx_25) + X_idx_20 * -1.0E-12) + -X_idx_26) + -X_idx_27;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q3_v = (-X_idx_20 +
    -X_idx_22) + X_idx_9;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q4_i = X_idx_24 +
    X_idx_26;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v = (-X_idx_20 +
    -X_idx_23) + X_idx_9;
  Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i = X_idx_25 +
    X_idx_27;
  t26 = (X_idx_20 * -1.0E-12 + -X_idx_26) + -X_idx_27;
  t36 = -X_idx_9 / -1.0;
  t0[0ULL] = X_idx_0 * 0.00027777777777777778;
  t0[1ULL] = X_idx_8;
  t0[2ULL] = 0.0;
  t0[3ULL] = X_idx_1;
  t0[4ULL] = X_idx_9;
  t0[5ULL] = -(X_idx_8 * X_idx_8 * X_idx_11 * 0.001) / -1.0 * 1000.0;
  t0[6ULL] = X_idx_12;
  t0[7ULL] = X_idx_9;
  t0[8ULL] = 0.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = 0.0;
  t0[12ULL] = 0.0;
  t0[13ULL] = 0.0;
  t0[14ULL] = 0.0;
  t0[15ULL] = 0.0;
  t0[16ULL] = 0.0;
  t0[17ULL] = 0.0;
  t0[18ULL] = 0.0;
  t0[19ULL] = X_idx_11;
  t0[20ULL] = X_idx_10;
  t0[21ULL] = X_idx_13 * 0.00027777777777777778;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 22ULL] = Capteurs_Physiques_Converter_Three_Phase_G_V[t14];
  }

  t0[34ULL] = t23;
  t0[35ULL] = t24;
  t0[36ULL] = t25;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 37ULL] = Capteurs_Physiques_Converter_Three_Phase_G_V[t14];
  }

  t0[49ULL] = X_idx_9;
  t0[50ULL] = X_idx_14;
  t0[51ULL] = t23;
  t0[52ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_i;
  t0[53ULL] = -(Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_i *
                Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_v *
                0.001) / -1.0 * 1000.0;
  t0[54ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q1_v;
  t0[55ULL] = t23;
  t0[56ULL] = X_idx_15;
  t0[57ULL] = 0.0;
  t0[58ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q2_i;
  t0[59ULL] = -(t23 *
                Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q2_i *
                0.001) / -1.0 * 1000.0;
  t0[60ULL] = t23;
  t0[61ULL] = X_idx_9;
  t0[62ULL] = X_idx_16;
  t0[63ULL] = t24;
  t0[64ULL] = X_idx_24;
  t0[65ULL] = -(X_idx_24 *
                Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q3_v *
                0.001) / -1.0 * 1000.0;
  t0[66ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q3_v;
  t0[67ULL] = t24;
  t0[68ULL] = X_idx_17;
  t0[69ULL] = 0.0;
  t0[70ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q4_i;
  t0[71ULL] = -(t24 *
                Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q4_i *
                0.001) / -1.0 * 1000.0;
  t0[72ULL] = t24;
  t0[73ULL] = X_idx_9;
  t0[74ULL] = X_idx_18;
  t0[75ULL] = t25;
  t0[76ULL] = X_idx_25;
  t0[77ULL] = -(X_idx_25 *
                Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v *
                0.001) / -1.0 * 1000.0;
  t0[78ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q5_v;
  t0[79ULL] = t25;
  t0[80ULL] = X_idx_19;
  t0[81ULL] = 0.0;
  t0[82ULL] = Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i;
  t0[83ULL] = -(t25 *
                Capteurs_Physiques_Converter_Three_Phase_converter_Xabc_Q6_i *
                0.001) / -1.0 * 1000.0;
  t0[84ULL] = t25;
  t0[85ULL] = t23;
  t0[86ULL] = t24;
  t0[87ULL] = t25;
  t0[88ULL] = X_idx_14;
  t0[89ULL] = 0.0;
  t0[90ULL] = X_idx_14;
  t0[91ULL] = X_idx_15;
  t0[92ULL] = 0.0;
  t0[93ULL] = X_idx_15;
  t0[94ULL] = X_idx_16;
  t0[95ULL] = 0.0;
  t0[96ULL] = X_idx_16;
  t0[97ULL] = X_idx_17;
  t0[98ULL] = 0.0;
  t0[99ULL] = X_idx_17;
  t0[100ULL] = X_idx_18;
  t0[101ULL] = 0.0;
  t0[102ULL] = X_idx_18;
  t0[103ULL] = X_idx_19;
  t0[104ULL] = 0.0;
  t0[105ULL] = X_idx_19;
  for (t14 = 106ULL; t14 - 106ULL < 12ULL; t14++) {
    t0[t14] = 0.0;
  }

  t0[118ULL] = 0.0;
  t0[119ULL] = 0.0;
  t0[120ULL] = 0.0;
  t0[121ULL] = 0.0;
  t0[122ULL] = 0.0;
  t0[123ULL] = 0.0;
  t0[124ULL] = 0.0;
  t0[125ULL] = 0.0;
  t0[126ULL] = 0.0;
  t0[127ULL] = 0.0;
  t0[128ULL] = 0.0;
  t0[129ULL] = 0.0;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 130ULL] = Capteurs_Physiques_Converter_Three_Phase_G_V[t14];
  }

  t0[142ULL] = 0.0;
  t0[143ULL] = X_idx_9;
  t0[144ULL] = 0.0;
  t0[145ULL] = X_idx_9;
  t0[146ULL] = t26;
  t0[147ULL] = X_idx_26;
  t0[148ULL] = X_idx_27;
  t0[149ULL] = t23;
  t0[150ULL] = t24;
  t0[151ULL] = t25;
  t0[152ULL] = t23;
  t0[153ULL] = t24;
  t0[154ULL] = t25;
  t0[155ULL] = (X_idx_20 * 1.0E-12 + X_idx_26) + X_idx_27;
  t0[156ULL] = -X_idx_26;
  t0[157ULL] = -X_idx_27;
  t0[158ULL] = -X_idx_8;
  t0[159ULL] = -X_idx_8;
  t0[160ULL] = X_idx_9;
  t0[161ULL] = X_idx_9;
  t0[162ULL] = -X_idx_8;
  t0[163ULL] = 0.0;
  t0[164ULL] = X_idx_3;
  t0[165ULL] = 0.0;
  t0[166ULL] = X_idx_2;
  t0[167ULL] = X_idx_2;
  t0[168ULL] = X_idx_3;
  t0[169ULL] = X_idx_2;
  t0[170ULL] = 0.0;
  t0[171ULL] = 0.0;
  t0[172ULL] = 0.0;
  t0[173ULL] = t23;
  t0[174ULL] = t24;
  t0[175ULL] = t25;
  t0[176ULL] = X_idx_2;
  t0[177ULL] = X_idx_4 * 57.295779513082323;
  t0[178ULL] = X_idx_2 * 9.5492965855137211;
  t0[179ULL] = X_idx_6;
  t0[180ULL] = X_idx_7;
  t0[181ULL] = X_idx_20;
  t0[182ULL] = -t26;
  t0[183ULL] = -X_idx_26;
  t0[184ULL] = -X_idx_27;
  t0[185ULL] = t23;
  t0[186ULL] = t24;
  t0[187ULL] = t25;
  t0[188ULL] = t23;
  t0[189ULL] = t24;
  t0[190ULL] = t25;
  t0[191ULL] = t26;
  t0[192ULL] = X_idx_26;
  t0[193ULL] = X_idx_27;
  t0[194ULL] = 0.0;
  t0[195ULL] = X_idx_2;
  t0[196ULL] = t23;
  t0[197ULL] = X_idx_4 * 57.295779513082323;
  t0[198ULL] = X_idx_4;
  t0[199ULL] = X_idx_2 * 9.5492965855137211;
  t0[200ULL] = t24;
  t0[201ULL] = t25;
  t0[202ULL] = X_idx_28;
  t0[203ULL] = X_idx_5;
  t0[204ULL] = -t26;
  t0[205ULL] = -X_idx_26;
  t0[206ULL] = -X_idx_27;
  t0[207ULL] = X_idx_6;
  t0[208ULL] = 0.0;
  t0[209ULL] = X_idx_7;
  t0[210ULL] = X_idx_20;
  t0[211ULL] = -(((t26 * t26 + X_idx_26 * X_idx_26) + X_idx_27 * X_idx_27) *
                 1.3E-5) / -1.0 * 1000.0;
  t0[212ULL] = 0.0;
  t0[213ULL] = X_idx_21;
  t0[214ULL] = X_idx_22;
  t0[215ULL] = X_idx_23;
  t0[216ULL] = 0.00019;
  t0[217ULL] = 0.00025;
  t0[218ULL] = 0.03;
  t0[219ULL] = 0.0;
  t0[220ULL] = t36;
  t0[221ULL] = 0.0;
  t0[222ULL] = X_idx_9;
  t0[223ULL] = t36;
  for (b = 0; b < 224; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t39;
  return 0;
}
