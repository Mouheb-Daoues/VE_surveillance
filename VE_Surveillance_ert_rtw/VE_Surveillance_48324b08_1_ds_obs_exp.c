/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_obs_exp.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_obs_exp(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t12, NeDsMethodOutput *t13)
{
  PmRealVector out;
  real_T t0[221];
  real_T nonscalar0[12];
  size_t t5;
  int32_T b;
  (void)t12;
  (void)LC;
  out = t13->mOBS_EXP;
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 0.0;
  nonscalar0[2] = 0.0;
  nonscalar0[3] = 0.0;
  nonscalar0[4] = 0.0;
  nonscalar0[5] = 0.0;
  nonscalar0[6] = 0.0;
  nonscalar0[7] = 0.0;
  nonscalar0[8] = 0.0;
  nonscalar0[9] = 0.0;
  nonscalar0[10] = 0.0;
  nonscalar0[11] = 0.0;
  t0[0ULL] = 0.0;
  t0[1ULL] = 0.0;
  t0[2ULL] = 0.0;
  t0[3ULL] = 0.0;
  t0[4ULL] = 0.0;
  t0[5ULL] = 0.0;
  t0[6ULL] = 1.0;
  t0[7ULL] = 0.0;
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
  t0[19ULL] = 1.0;
  t0[20ULL] = 1.0;
  t0[21ULL] = 1.0;
  for (t5 = 0ULL; t5 < 12ULL; t5++) {
    t0[t5 + 22ULL] = nonscalar0[t5];
  }

  t0[34ULL] = 0.0;
  t0[35ULL] = 0.0;
  t0[36ULL] = 0.0;
  for (t5 = 0ULL; t5 < 12ULL; t5++) {
    t0[t5 + 37ULL] = nonscalar0[t5];
  }

  t0[49ULL] = 0.0;
  t0[50ULL] = 0.0;
  t0[51ULL] = 0.0;
  t0[52ULL] = 0.0;
  t0[53ULL] = 0.0;
  t0[54ULL] = 0.0;
  t0[55ULL] = 0.0;
  t0[56ULL] = 0.0;
  t0[57ULL] = 0.0;
  t0[58ULL] = 0.0;
  t0[59ULL] = 0.0;
  t0[60ULL] = 0.0;
  t0[61ULL] = 0.0;
  t0[62ULL] = 0.0;
  t0[63ULL] = 0.0;
  t0[64ULL] = 0.0;
  t0[65ULL] = 0.0;
  t0[66ULL] = 0.0;
  t0[67ULL] = 0.0;
  t0[68ULL] = 0.0;
  t0[69ULL] = 0.0;
  t0[70ULL] = 0.0;
  t0[71ULL] = 0.0;
  t0[72ULL] = 0.0;
  t0[73ULL] = 0.0;
  t0[74ULL] = 0.0;
  t0[75ULL] = 0.0;
  t0[76ULL] = 0.0;
  t0[77ULL] = 0.0;
  t0[78ULL] = 0.0;
  t0[79ULL] = 0.0;
  t0[80ULL] = 0.0;
  t0[81ULL] = 0.0;
  t0[82ULL] = 0.0;
  t0[83ULL] = 0.0;
  t0[84ULL] = 0.0;
  t0[85ULL] = 0.0;
  t0[86ULL] = 0.0;
  t0[87ULL] = 0.0;
  t0[88ULL] = 0.0;
  t0[89ULL] = 0.0;
  t0[90ULL] = 0.0;
  t0[91ULL] = 0.0;
  t0[92ULL] = 0.0;
  t0[93ULL] = 0.0;
  t0[94ULL] = 0.0;
  t0[95ULL] = 0.0;
  t0[96ULL] = 0.0;
  t0[97ULL] = 0.0;
  t0[98ULL] = 0.0;
  t0[99ULL] = 0.0;
  t0[100ULL] = 0.0;
  t0[101ULL] = 0.0;
  t0[102ULL] = 0.0;
  t0[103ULL] = 0.0;
  t0[104ULL] = 0.0;
  t0[105ULL] = 0.0;
  for (t5 = 0ULL; t5 < 12ULL; t5++) {
    t0[t5 + 106ULL] = nonscalar0[t5];
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
  for (t5 = 0ULL; t5 < 12ULL; t5++) {
    t0[t5 + 130ULL] = nonscalar0[t5];
  }

  t0[142ULL] = 0.0;
  t0[143ULL] = 0.0;
  t0[144ULL] = 0.0;
  t0[145ULL] = 0.0;
  t0[146ULL] = 0.0;
  t0[147ULL] = 0.0;
  t0[148ULL] = 0.0;
  t0[149ULL] = 0.0;
  t0[150ULL] = 0.0;
  t0[151ULL] = 0.0;
  t0[152ULL] = 0.0;
  t0[153ULL] = 0.0;
  t0[154ULL] = 0.0;
  t0[155ULL] = 0.0;
  t0[156ULL] = 0.0;
  t0[157ULL] = 0.0;
  t0[158ULL] = 0.0;
  t0[159ULL] = 0.0;
  t0[160ULL] = 0.0;
  t0[161ULL] = 0.0;
  t0[162ULL] = 0.0;
  t0[163ULL] = 0.0;
  t0[164ULL] = 0.0;
  t0[165ULL] = 0.0;
  t0[166ULL] = 0.0;
  t0[167ULL] = 0.0;
  t0[168ULL] = 0.0;
  t0[169ULL] = 0.0;
  t0[170ULL] = 0.0;
  t0[171ULL] = 0.0;
  t0[172ULL] = 0.0;
  t0[173ULL] = 0.0;
  t0[174ULL] = 0.0;
  t0[175ULL] = 0.0;
  t0[176ULL] = 0.0;
  t0[177ULL] = 0.0;
  t0[178ULL] = 0.0;
  t0[179ULL] = 0.0;
  t0[180ULL] = 0.0;
  t0[181ULL] = 0.0;
  t0[182ULL] = 0.0;
  t0[183ULL] = 0.0;
  t0[184ULL] = 0.0;
  t0[185ULL] = 0.0;
  t0[186ULL] = 0.0;
  t0[187ULL] = 0.0;
  t0[188ULL] = 0.0;
  t0[189ULL] = 0.0;
  t0[190ULL] = 0.0;
  t0[191ULL] = 0.0;
  t0[192ULL] = 0.0;
  t0[193ULL] = 0.0;
  t0[194ULL] = 0.0;
  t0[195ULL] = 0.0;
  t0[196ULL] = 0.0;
  t0[197ULL] = 0.0;
  t0[198ULL] = 0.0;
  t0[199ULL] = 0.0;
  t0[200ULL] = 0.0;
  t0[201ULL] = 0.0;
  t0[202ULL] = 0.0;
  t0[203ULL] = 0.0;
  t0[204ULL] = 0.0;
  t0[205ULL] = 0.0;
  t0[206ULL] = 0.0;
  t0[207ULL] = 0.0;
  t0[208ULL] = 0.0;
  t0[209ULL] = 0.0;
  t0[210ULL] = 0.0;
  t0[211ULL] = 0.0;
  t0[212ULL] = 0.0;
  t0[213ULL] = 0.0;
  t0[214ULL] = 0.0;
  t0[215ULL] = 0.0;
  t0[216ULL] = 0.0;
  t0[217ULL] = 0.0;
  t0[218ULL] = 0.0;
  t0[219ULL] = 0.0;
  t0[220ULL] = 0.0;
  for (b = 0; b < 221; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t13;
  return 0;
}
