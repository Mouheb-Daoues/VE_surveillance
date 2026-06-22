/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_obs_il.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T VE_Surveillance_48324b08_1_ds_obs_il(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static boolean_T _cg_const_1[221] = { true, true, true, true, true, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, false, true, true, true,
    true, true, false, true, true, true, true, true, false, true, true, true,
    true, true, false, true, true, true, true, true, false, true, true, true,
    true, true, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, true, true };

  PmBoolVector out;
  int32_T b;
  boolean_T t0[221];
  (void)t1;
  (void)LC;
  out = t2->mOBS_IL;
  for (b = 0; b < 221; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 221; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
