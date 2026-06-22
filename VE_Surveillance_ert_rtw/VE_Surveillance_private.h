/*
 * File: VE_Surveillance_private.h
 *
 * Code generated for Simulink model 'VE_Surveillance'.
 *
 * Model version                  : 1.46
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jun 22 22:26:02 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VE_Surveillance_private_h_
#define RTW_HEADER_VE_Surveillance_private_h_
#include "rtwtypes.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* private model entry point functions */
extern void VE_Surveillance_derivatives(void);

#endif                               /* RTW_HEADER_VE_Surveillance_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
