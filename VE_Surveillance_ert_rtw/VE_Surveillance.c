/*
 * File: VE_Surveillance.c
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

#include "VE_Surveillance.h"
#include "VE_Surveillance_private.h"

/* Named constants for Chart: '<Root>/BMS_VCU_Controller' */
#define VE_Surveillance_IN_Alert_Mode  ((uint8_T)1U)
#define VE_Surveillance_IN_Eco_Mode    ((uint8_T)2U)
#define VE_Surveillance_IN_Fault_Mode  ((uint8_T)3U)
#define VE_Surveillance_IN_Normal_Mode ((uint8_T)4U)

/* Block signals (default storage) */
B_VE_Surveillance_T VE_Surveillance_B;

/* Continuous states */
X_VE_Surveillance_T VE_Surveillance_X;

/* Block states (default storage) */
DW_VE_Surveillance_T VE_Surveillance_DW;

/* Real-time model */
static RT_MODEL_VE_Surveillance_T VE_Surveillance_M_;
RT_MODEL_VE_Surveillance_T *const VE_Surveillance_M = &VE_Surveillance_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 1;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  VE_Surveillance_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  VE_Surveillance_step();
  VE_Surveillance_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  VE_Surveillance_step();
  VE_Surveillance_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void VE_Surveillance_step(void)
{
  if (rtmIsMajorTimeStep(VE_Surveillance_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&VE_Surveillance_M->solverInfo,
                          ((VE_Surveillance_M->Timing.clockTick0+1)*
      VE_Surveillance_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(VE_Surveillance_M)) {
    VE_Surveillance_M->Timing.t[0] = rtsiGetT(&VE_Surveillance_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    real_T tmp_3[26];
    real_T tmp_0[4];
    real_T SOC;
    real_T time;
    real_T time_0;
    int32_T tmp_2;
    int_T tmp_4[3];
    int_T tmp_1[2];
    boolean_T tmp;

    /* SimscapeInputBlock: '<S14>/INPUT_1_1_1' incorporates:
     *  Constant: '<S3>/injection torque'
     */
    if (rtmIsMajorTimeStep(VE_Surveillance_M)) {
      VE_Surveillance_B.INPUT_1_1_1[0] = 32.529438405797087;
      VE_Surveillance_B.INPUT_1_1_1[1] = 0.0;
      VE_Surveillance_B.INPUT_1_1_1[2] = 0.0;
      VE_Surveillance_DW.INPUT_1_1_1_Discrete[0] =
        !(VE_Surveillance_B.INPUT_1_1_1[0] ==
          VE_Surveillance_DW.INPUT_1_1_1_Discrete[1]);
      VE_Surveillance_DW.INPUT_1_1_1_Discrete[1] =
        VE_Surveillance_B.INPUT_1_1_1[0];
      VE_Surveillance_B.INPUT_1_1_1[0] =
        VE_Surveillance_DW.INPUT_1_1_1_Discrete[1];
      VE_Surveillance_B.INPUT_1_1_1[3] =
        VE_Surveillance_DW.INPUT_1_1_1_Discrete[0];

      /* SimscapeExecutionBlock: '<S14>/STATE_1' incorporates:
       *  Constant: '<S3>/injection torque'
       *  SimscapeExecutionBlock: '<S14>/OUTPUT_1_0'
       */
      simulationData = (NeslSimulationData *)VE_Surveillance_DW.STATE_1_SimData;
      SOC = VE_Surveillance_M->Timing.t[0];
      time = SOC;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 16;
      simulationData->mData->mDiscStates.mX =
        &VE_Surveillance_DW.STATE_1_Discrete[0];
      simulationData->mData->mModeVector.mN = 6;
      simulationData->mData->mModeVector.mX = &VE_Surveillance_DW.STATE_1_Modes
        [0];
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulationData->mData->mIsOkayToUpdateMode = true;
      tmp_1[0] = 0;
      tmp_0[0] = VE_Surveillance_B.INPUT_1_1_1[0];
      tmp_0[1] = VE_Surveillance_B.INPUT_1_1_1[1];
      tmp_0[2] = VE_Surveillance_B.INPUT_1_1_1[2];
      tmp_0[3] = VE_Surveillance_B.INPUT_1_1_1[3];
      tmp_1[1] = 4;
      simulationData->mData->mInputValues.mN = 4;
      simulationData->mData->mInputValues.mX = &tmp_0[0];
      simulationData->mData->mInputOffsets.mN = 2;
      simulationData->mData->mInputOffsets.mX = &tmp_1[0];
      simulationData->mData->mOutputs.mN = 22;
      simulationData->mData->mOutputs.mX = &VE_Surveillance_B.STATE_1[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(VE_Surveillance_M);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)
        VE_Surveillance_DW.STATE_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        VE_Surveillance_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
        diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(VE_Surveillance_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(VE_Surveillance_M, msg);
        }
      }

      /* End of SimscapeExecutionBlock: '<S14>/STATE_1' */

      /* SimscapeExecutionBlock: '<S14>/OUTPUT_1_0' */
      simulationData = (NeslSimulationData *)
        VE_Surveillance_DW.OUTPUT_1_0_SimData;
      time_0 = SOC;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time_0;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX =
        &VE_Surveillance_DW.OUTPUT_1_0_Discrete;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX =
        &VE_Surveillance_DW.OUTPUT_1_0_Modes;
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulationData->mData->mIsOkayToUpdateMode = true;
      tmp_4[0] = 0;
      tmp_3[0] = VE_Surveillance_B.INPUT_1_1_1[0];
      tmp_3[1] = VE_Surveillance_B.INPUT_1_1_1[1];
      tmp_3[2] = VE_Surveillance_B.INPUT_1_1_1[2];
      tmp_3[3] = VE_Surveillance_B.INPUT_1_1_1[3];
      tmp_4[1] = 4;
      memcpy(&tmp_3[4], &VE_Surveillance_B.STATE_1[0], 22U * sizeof(real_T));
      tmp_4[2] = 26;
      simulationData->mData->mInputValues.mN = 26;
      simulationData->mData->mInputValues.mX = &tmp_3[0];
      simulationData->mData->mInputOffsets.mN = 3;
      simulationData->mData->mInputOffsets.mX = &tmp_4[0];
      simulationData->mData->mOutputs.mN = 3;
      simulationData->mData->mOutputs.mX = &VE_Surveillance_B.OUTPUT_1_0[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(VE_Surveillance_M);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)
        VE_Surveillance_DW.OUTPUT_1_0_DiagMgr;
      diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree
        (diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        VE_Surveillance_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(VE_Surveillance_M));
        if (tmp) {
          msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
          rtmSetErrorStatus(VE_Surveillance_M, msg_0);
        }
      }
    }

    /* End of SimscapeInputBlock: '<S14>/INPUT_1_1_1' */

    /* Sum: '<Root>/Add' incorporates:
     *  Constant: '<Root>/SOC_init'
     *  Gain: '<Root>/Gain1'
     *  Integrator: '<Root>/Integrator'
     */
    SOC = 0.95 - 4.6296296296296296E-6 * VE_Surveillance_X.Integrator_CSTATE;

    /* Saturate: '<Root>/SOC' */
    if (SOC > 1.0) {
      /* Saturate: '<Root>/SOC' */
      SOC = 1.0;
    } else if (SOC < 0.0) {
      /* Saturate: '<Root>/SOC' */
      SOC = 0.0;
    }

    /* End of Saturate: '<Root>/SOC' */
    if (rtmIsMajorTimeStep(VE_Surveillance_M)) {
      /* Chart: '<Root>/BMS_VCU_Controller' */
      if (VE_Surveillance_DW.is_active_c3_VE_Surveillance == 0U) {
        VE_Surveillance_DW.is_active_c3_VE_Surveillance = 1U;
        VE_Surveillance_DW.is_c3_VE_Surveillance =
          VE_Surveillance_IN_Normal_Mode;
      } else {
        switch (VE_Surveillance_DW.is_c3_VE_Surveillance) {
         case VE_Surveillance_IN_Alert_Mode:
          if (SOC > 0.2) {
            VE_Surveillance_DW.is_c3_VE_Surveillance =
              VE_Surveillance_IN_Normal_Mode;
          }
          break;

         case VE_Surveillance_IN_Eco_Mode:
          if (SOC > 0.25) {
            VE_Surveillance_DW.is_c3_VE_Surveillance =
              VE_Surveillance_IN_Normal_Mode;
          }
          break;

         case VE_Surveillance_IN_Fault_Mode:
          break;

         default:
          /* case IN_Normal_Mode: */
          if (SOC <= 0.2) {
            VE_Surveillance_DW.is_c3_VE_Surveillance =
              VE_Surveillance_IN_Eco_Mode;
          }
          break;
        }
      }

      /* End of Chart: '<Root>/BMS_VCU_Controller' */
    }
  }

  if (rtmIsMajorTimeStep(VE_Surveillance_M)) {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0[4];
    real_T time;
    int32_T tmp_2;
    int_T tmp_1[2];
    boolean_T tmp;
    if (rtmIsMajorTimeStep(VE_Surveillance_M)) {
      /* Update for SimscapeExecutionBlock: '<S14>/STATE_1' */
      simulationData = (NeslSimulationData *)VE_Surveillance_DW.STATE_1_SimData;
      time = VE_Surveillance_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 16;
      simulationData->mData->mDiscStates.mX =
        &VE_Surveillance_DW.STATE_1_Discrete[0];
      simulationData->mData->mModeVector.mN = 6;
      simulationData->mData->mModeVector.mX = &VE_Surveillance_DW.STATE_1_Modes
        [0];
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulationData->mData->mIsOkayToUpdateMode = true;
      tmp_1[0] = 0;
      tmp_0[0] = VE_Surveillance_B.INPUT_1_1_1[0];
      tmp_0[1] = VE_Surveillance_B.INPUT_1_1_1[1];
      tmp_0[2] = VE_Surveillance_B.INPUT_1_1_1[2];
      tmp_0[3] = VE_Surveillance_B.INPUT_1_1_1[3];
      tmp_1[1] = 4;
      simulationData->mData->mInputValues.mN = 4;
      simulationData->mData->mInputValues.mX = &tmp_0[0];
      simulationData->mData->mInputOffsets.mN = 2;
      simulationData->mData->mInputOffsets.mX = &tmp_1[0];
      diagnosticManager = (NeuDiagnosticManager *)
        VE_Surveillance_DW.STATE_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        VE_Surveillance_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
        diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(VE_Surveillance_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(VE_Surveillance_M, msg);
        }
      }

      /* End of Update for SimscapeExecutionBlock: '<S14>/STATE_1' */
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(VE_Surveillance_M)) {
    rt_ertODEUpdateContinuousStates(&VE_Surveillance_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++VE_Surveillance_M->Timing.clockTick0;
    VE_Surveillance_M->Timing.t[0] = rtsiGetSolverStopTime
      (&VE_Surveillance_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.001s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.001, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      VE_Surveillance_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void VE_Surveillance_derivatives(void)
{
  XDot_VE_Surveillance_T *_rtXdot;
  _rtXdot = ((XDot_VE_Surveillance_T *) VE_Surveillance_M->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator' */
  _rtXdot->Integrator_CSTATE = VE_Surveillance_B.OUTPUT_1_0[0];
}

/* Model initialize function */
void VE_Surveillance_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&VE_Surveillance_M->solverInfo,
                          &VE_Surveillance_M->Timing.simTimeStep);
    rtsiSetTPtr(&VE_Surveillance_M->solverInfo, &rtmGetTPtr(VE_Surveillance_M));
    rtsiSetStepSizePtr(&VE_Surveillance_M->solverInfo,
                       &VE_Surveillance_M->Timing.stepSize0);
    rtsiSetdXPtr(&VE_Surveillance_M->solverInfo, &VE_Surveillance_M->derivs);
    rtsiSetContStatesPtr(&VE_Surveillance_M->solverInfo, (real_T **)
                         &VE_Surveillance_M->contStates);
    rtsiSetNumContStatesPtr(&VE_Surveillance_M->solverInfo,
      &VE_Surveillance_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&VE_Surveillance_M->solverInfo,
      &VE_Surveillance_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&VE_Surveillance_M->solverInfo,
      &VE_Surveillance_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&VE_Surveillance_M->solverInfo,
      &VE_Surveillance_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&VE_Surveillance_M->solverInfo, (&rtmGetErrorStatus
      (VE_Surveillance_M)));
    rtsiSetRTModelPtr(&VE_Surveillance_M->solverInfo, VE_Surveillance_M);
  }

  rtsiSetSimTimeStep(&VE_Surveillance_M->solverInfo, MAJOR_TIME_STEP);
  VE_Surveillance_M->intgData.y = VE_Surveillance_M->odeY;
  VE_Surveillance_M->intgData.f[0] = VE_Surveillance_M->odeF[0];
  VE_Surveillance_M->intgData.f[1] = VE_Surveillance_M->odeF[1];
  VE_Surveillance_M->intgData.f[2] = VE_Surveillance_M->odeF[2];
  VE_Surveillance_M->contStates = ((X_VE_Surveillance_T *) &VE_Surveillance_X);
  rtsiSetSolverData(&VE_Surveillance_M->solverInfo, (void *)
                    &VE_Surveillance_M->intgData);
  rtsiSetSolverName(&VE_Surveillance_M->solverInfo,"ode3");
  rtmSetTPtr(VE_Surveillance_M, &VE_Surveillance_M->Timing.tArray[0]);
  VE_Surveillance_M->Timing.stepSize0 = 0.001;

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    real_T tmp_2;
    int32_T tmp_3;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S14>/STATE_1' */
    tmp = nesl_lease_simulator(
      "VE_Surveillance/Capteurs_Physiques/Solver Configuration_1", 0, 0);
    VE_Surveillance_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(VE_Surveillance_DW.STATE_1_Simulator);
    if (tmp_0) {
      VE_Surveillance_e34e9e3c_1_gateway();
      tmp = nesl_lease_simulator(
        "VE_Surveillance/Capteurs_Physiques/Solver Configuration_1", 0, 0);
      VE_Surveillance_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    VE_Surveillance_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    VE_Surveillance_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 7.04067934E+8;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      VE_Surveillance_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      VE_Surveillance_DW.STATE_1_Simulator, &modelParameters, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(VE_Surveillance_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(VE_Surveillance_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S14>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S14>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator(
      "VE_Surveillance/Capteurs_Physiques/Solver Configuration_1", 1, 0);
    VE_Surveillance_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(VE_Surveillance_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      VE_Surveillance_e34e9e3c_1_gateway();
      tmp = nesl_lease_simulator(
        "VE_Surveillance/Capteurs_Physiques/Solver Configuration_1", 1, 0);
      VE_Surveillance_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    VE_Surveillance_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    VE_Surveillance_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 7.04067934E+8;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      VE_Surveillance_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      VE_Surveillance_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(VE_Surveillance_M));
      if (tmp_0) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(VE_Surveillance_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S14>/OUTPUT_1_0' */

    /* InitializeConditions for Integrator: '<Root>/Integrator' */
    VE_Surveillance_X.Integrator_CSTATE = 0.0;
  }
}

/* Model terminate function */
void VE_Surveillance_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S14>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    VE_Surveillance_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    VE_Surveillance_DW.STATE_1_SimData);
  nesl_erase_simulator("VE_Surveillance/Capteurs_Physiques/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S14>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    VE_Surveillance_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    VE_Surveillance_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("VE_Surveillance/Capteurs_Physiques/Solver Configuration_1");
  nesl_destroy_registry();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
