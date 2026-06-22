/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "VE_Surveillance_48324b08_1.h"
#include "VE_Surveillance_48324b08_1_gateway.h"

void VE_Surveillance_48324b08_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 1, 0.001, 0, 0, 0.001, 0, 0,
    0, 0, (SscLoggingSetting) 0, 702165547, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 1e-06, 1e-09, 0, 0,
    100, 0, 1, 0, 1e-05, 1, (NeLocalSolverChoice) 1, 0.001, 1, 3, 2, 0, 2,
    (NeLinearAlgebraChoice) 0, (NeEquationFormulationChoice) 0, 1024, 1, 0.001,
    (NePartitionStorageMethod) 0, 1024, (NePartitionMethod) 0, };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;
  int* rtpDaes = NULL;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0, }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  VE_Surveillance_48324b08_1_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group(
    "VE_Surveillance/Capteurs_Physiques/Solver Configuration_1",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    0,
    rtpDaes);
}
