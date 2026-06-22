/*
 * File: VE_Surveillance.h
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

#ifndef RTW_HEADER_VE_Surveillance_h_
#define RTW_HEADER_VE_Surveillance_h_
#include <string.h>
#ifndef VE_Surveillance_COMMON_INCLUDES_
#define VE_Surveillance_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "VE_Surveillance_e34e9e3c_1_gateway.h"
#endif                                 /* VE_Surveillance_COMMON_INCLUDES_ */

#include "VE_Surveillance_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T INPUT_1_1_1[4];               /* '<S14>/INPUT_1_1_1' */
  real_T STATE_1[22];                  /* '<S14>/STATE_1' */
  real_T OUTPUT_1_0[3];                /* '<S14>/OUTPUT_1_0' */
} B_VE_Surveillance_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_1_1_1_Discrete[2];      /* '<S14>/INPUT_1_1_1' */
  real_T STATE_1_Discrete[16];         /* '<S14>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S14>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S14>/STATE_1' */
  void* STATE_1_SimData;               /* '<S14>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S14>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S14>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S14>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S14>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S14>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S14>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S14>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S14>/OUTPUT_1_0' */
  int_T STATE_1_Modes[6];              /* '<S14>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S14>/OUTPUT_1_0' */
  uint8_T is_active_c3_VE_Surveillance;/* '<Root>/BMS_VCU_Controller' */
  uint8_T is_c3_VE_Surveillance;       /* '<Root>/BMS_VCU_Controller' */
  boolean_T STATE_1_FirstOutput;       /* '<S14>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S14>/OUTPUT_1_0' */
} DW_VE_Surveillance_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} X_VE_Surveillance_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} XDot_VE_Surveillance_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
} XDis_VE_Surveillance_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Real-time Model Data Structure */
struct tag_RTM_VE_Surveillance_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_VE_Surveillance_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[1];
  real_T odeF[3][1];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
extern B_VE_Surveillance_T VE_Surveillance_B;

/* Continuous states (default storage) */
extern X_VE_Surveillance_T VE_Surveillance_X;

/* Block states (default storage) */
extern DW_VE_Surveillance_T VE_Surveillance_DW;

/* Model entry point functions */
extern void VE_Surveillance_initialize(void);
extern void VE_Surveillance_step(void);
extern void VE_Surveillance_terminate(void);

/* Real-time Model object */
extern RT_MODEL_VE_Surveillance_T *const VE_Surveillance_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Saturation1' : Unused code path elimination
 * Block '<Root>/To Workspace' : Unused code path elimination
 * Block '<Root>/To Workspace1' : Unused code path elimination
 * Block '<Root>/To Workspace3' : Unused code path elimination
 * Block '<Root>/To Workspace4' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'VE_Surveillance'
 * '<S1>'   : 'VE_Surveillance/BMS_VCU_Controller'
 * '<S2>'   : 'VE_Surveillance/Calcul_SOH'
 * '<S3>'   : 'VE_Surveillance/Capteurs_Physiques'
 * '<S4>'   : 'VE_Surveillance/MATLAB Function1'
 * '<S5>'   : 'VE_Surveillance/Capteurs_Physiques/PS-Simulink Converter'
 * '<S6>'   : 'VE_Surveillance/Capteurs_Physiques/PS-Simulink Converter2'
 * '<S7>'   : 'VE_Surveillance/Capteurs_Physiques/PS-Simulink Converter3'
 * '<S8>'   : 'VE_Surveillance/Capteurs_Physiques/Simulink-PS Converter'
 * '<S9>'   : 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'
 * '<S10>'  : 'VE_Surveillance/Capteurs_Physiques/PS-Simulink Converter/EVAL_KEY'
 * '<S11>'  : 'VE_Surveillance/Capteurs_Physiques/PS-Simulink Converter2/EVAL_KEY'
 * '<S12>'  : 'VE_Surveillance/Capteurs_Physiques/PS-Simulink Converter3/EVAL_KEY'
 * '<S13>'  : 'VE_Surveillance/Capteurs_Physiques/Simulink-PS Converter/EVAL_KEY'
 * '<S14>'  : 'VE_Surveillance/Capteurs_Physiques/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_VE_Surveillance_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
