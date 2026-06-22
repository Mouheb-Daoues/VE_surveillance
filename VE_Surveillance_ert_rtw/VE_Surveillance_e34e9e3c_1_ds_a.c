/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_a.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_a(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t25, NeDsMethodOutput *t26)
{
  PmRealVector out;
  real_T t3[23];
  real_T t5[4];
  real_T t21;
  real_T t23;
  real_T t24;
  size_t t10;
  (void)t25;
  (void)LC;
  out = t26->mA;
  t21 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t5[0ULL] = 0.47746482925181283;
  t5[1ULL] = -2.279726631838614E-10;
  t5[2ULL] = 1.0;
  t5[3ULL] = t23 * 1.0E-6;
  t3[0ULL] = 0.0499999999975;
  t3[1ULL] = 0.47746482925181283;
  t3[2ULL] = t21 * 1.0E-6;
  for (t10 = 0ULL; t10 < 4ULL; t10++) {
    t3[t10 + 3ULL] = t5[t10];
  }

  out.mX[0] = t3[0];
  out.mX[1] = t3[1];
  out.mX[2] = t3[2];
  out.mX[3] = t3[3];
  out.mX[4] = t3[4];
  out.mX[5] = t3[5];
  out.mX[6] = t3[6];
  out.mX[7] = -0.001;
  out.mX[8] = 1.0;
  out.mX[9] = -1.0;
  out.mX[10] = -0.0;
  out.mX[11] = 0.025;
  out.mX[12] = 1.0;
  out.mX[13] = 1.0;
  out.mX[14] = 1.0;
  out.mX[15] = 1.0;
  out.mX[16] = 1.0;
  out.mX[17] = 0.0025;
  out.mX[18] = -0.99999999995;
  out.mX[19] = 4.7746482925181289E-10;
  out.mX[20] = t24 * 1.0E-6;
  out.mX[21] = -1.0;
  out.mX[22] = -0.5;
  (void)LC;
  (void)t26;
  return 0;
}
