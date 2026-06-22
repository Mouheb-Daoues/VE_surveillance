/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_e34e9e3c_1_ds_obs_all.h"
#include "VE_Surveillance_e34e9e3c_1_ds_sys_struct.h"
#include "VE_Surveillance_e34e9e3c_1_ds_externals.h"
#include "VE_Surveillance_e34e9e3c_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_e34e9e3c_1_ds_obs_all(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmRealVector out;
  real_T Capteurs_Physiques_Current_Sensor_I;
  real_T U_idx_0;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t1;
  real_T t4;
  real_T t5;
  (void)LC;
  U_idx_0 = t7->mU.mX[0];
  X_idx_0 = t7->mX.mX[0];
  X_idx_1 = t7->mX.mX[1];
  X_idx_2 = t7->mX.mX[2];
  X_idx_3 = t7->mX.mX[3];
  X_idx_4 = t7->mX.mX[4];
  X_idx_5 = t7->mX.mX[5];
  X_idx_6 = t7->mX.mX[6];
  X_idx_7 = t7->mX.mX[7];
  X_idx_8 = t7->mX.mX[8];
  X_idx_9 = t7->mX.mX[9];
  X_idx_10 = t7->mX.mX[10];
  X_idx_11 = t7->mX.mX[11];
  X_idx_12 = t7->mX.mX[12];
  X_idx_13 = t7->mX.mX[13];
  X_idx_14 = t7->mX.mX[14];
  X_idx_15 = t7->mX.mX[15];
  out = t8->mOBS_ALL;
  t1 = X_idx_13 * 0.0025;
  Capteurs_Physiques_Current_Sensor_I = (X_idx_2 * 0.99999999995 + X_idx_3 *
    -4.7746482925181279E-10) + X_idx_14 * 9.9999999995E-10;
  t4 = X_idx_4 * 0.001;
  t5 = -X_idx_14 / -1.0;
  out.mX[0] = X_idx_0 * 0.00027777777777777778;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = X_idx_1;
  out.mX[4] = X_idx_7;
  out.mX[5] = -(X_idx_7 * X_idx_7 * X_idx_8 * 0.001) / -1.0 * 1000.0;
  out.mX[6] = X_idx_10;
  out.mX[7] = X_idx_7;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = X_idx_8;
  out.mX[19] = X_idx_9;
  out.mX[20] = X_idx_7;
  out.mX[21] = X_idx_12 * 0.00027777777777777778;
  out.mX[22] = X_idx_11;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = X_idx_7;
  out.mX[27] = X_idx_13;
  out.mX[28] = t1;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = X_idx_13;
  out.mX[32] = t1 * 400.0;
  out.mX[33] = Capteurs_Physiques_Current_Sensor_I;
  out.mX[34] = Capteurs_Physiques_Current_Sensor_I;
  out.mX[35] = X_idx_14;
  out.mX[36] = X_idx_14;
  out.mX[37] = Capteurs_Physiques_Current_Sensor_I;
  out.mX[38] = 0.0;
  out.mX[39] = X_idx_4;
  out.mX[40] = 1.0;
  out.mX[41] = 1.0;
  out.mX[42] = 0.0;
  out.mX[43] = 0.0;
  out.mX[44] = 0.0;
  out.mX[45] = Capteurs_Physiques_Current_Sensor_I;
  out.mX[46] = X_idx_2;
  out.mX[47] = 0.0;
  out.mX[48] = X_idx_14;
  out.mX[49] = -(Capteurs_Physiques_Current_Sensor_I *
                 Capteurs_Physiques_Current_Sensor_I * 5.0E-5) / -1.0 * 1000.0;
  out.mX[50] = (X_idx_4 * -0.001 + -X_idx_15) + -U_idx_0;
  out.mX[51] = X_idx_14;
  out.mX[52] = 0.0;
  out.mX[53] = X_idx_3 * 9.5492965855137211;
  out.mX[54] = 0.0;
  out.mX[55] = 0.0;
  out.mX[56] = X_idx_13;
  out.mX[57] = 0.0;
  out.mX[58] = 0.0;
  out.mX[59] = -Capteurs_Physiques_Current_Sensor_I;
  out.mX[60] = 0.0;
  out.mX[61] = 0.0;
  out.mX[62] = 0.0;
  out.mX[63] = 0.0;
  out.mX[64] = 0.0;
  out.mX[65] = 0.0;
  out.mX[66] = X_idx_14;
  out.mX[67] = -(Capteurs_Physiques_Current_Sensor_I *
                 Capteurs_Physiques_Current_Sensor_I * 0.0001) / -1.0 * 1000.0;
  out.mX[68] = X_idx_14;
  out.mX[69] = X_idx_5;
  out.mX[70] = X_idx_6;
  out.mX[71] = 0.0;
  out.mX[72] = X_idx_4;
  out.mX[73] = X_idx_4;
  out.mX[74] = X_idx_6;
  out.mX[75] = X_idx_4;
  out.mX[76] = X_idx_4;
  out.mX[77] = 0.0;
  out.mX[78] = U_idx_0;
  out.mX[79] = -U_idx_0;
  out.mX[80] = -X_idx_4 / -1.0;
  out.mX[81] = X_idx_4;
  out.mX[82] = X_idx_4;
  out.mX[83] = X_idx_15;
  out.mX[84] = X_idx_4;
  out.mX[85] = 0.0;
  out.mX[86] = 0.0;
  out.mX[87] = X_idx_4;
  out.mX[88] = t4;
  out.mX[89] = t4 * 1000.0;
  out.mX[90] = U_idx_0;
  out.mX[91] = -X_idx_7 / -1.0;
  out.mX[92] = 0.0;
  out.mX[93] = X_idx_7;
  out.mX[94] = t5;
  out.mX[95] = 0.0;
  out.mX[96] = X_idx_14;
  out.mX[97] = t5;
  (void)LC;
  (void)t8;
  return 0;
}
