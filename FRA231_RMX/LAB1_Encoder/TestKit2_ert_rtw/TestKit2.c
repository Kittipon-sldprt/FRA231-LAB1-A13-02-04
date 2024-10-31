/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestKit2.c
 *
 * Code generated for Simulink model 'TestKit2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat Oct 26 15:07:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TestKit2.h"
#include "TestKit2_types.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include "TestKit2_private.h"

/* Block signals (default storage) */
B_TestKit2_T TestKit2_B;

/* Block states (default storage) */
DW_TestKit2_T TestKit2_DW;

/* Real-time model */
static RT_MODEL_TestKit2_T TestKit2_M_;
RT_MODEL_TestKit2_T *const TestKit2_M = &TestKit2_M_;

/* Forward declaration for local functions */
static void TestKit2_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void TestKit2_SystemCore_setup_l(stm32cube_blocks_EncoderBlock_T *obj);
static void TestKit2_SystemCore_setup_ly(stm32cube_blocks_EncoderBlock_T *obj);
static void TestKit2_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void TestKit2_SystemCore_setup_l(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder1' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void TestKit2_SystemCore_setup_ly(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM4;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder2' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void TestKit2_step(void)
{
  /* MATLABSystem: '<Root>/Encoder' */
  TestKit2_B.Encoder = getTimerCounterValueForG4(TestKit2_DW.obj_p.TimerHandle,
    false, NULL);

  /* MATLABSystem: '<Root>/Encoder1' */
  TestKit2_B.Encoder1 = getTimerCounterValueForG4(TestKit2_DW.obj_j.TimerHandle,
    false, NULL);

  /* MATLABSystem: '<Root>/Encoder2' */
  TestKit2_B.Encoder2 = getTimerCounterValueForG4(TestKit2_DW.obj.TimerHandle,
    false, NULL);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  TestKit2_M->Timing.taskTime0 =
    ((time_T)(++TestKit2_M->Timing.clockTick0)) * TestKit2_M->Timing.stepSize0;
}

/* Model initialize function */
void TestKit2_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(TestKit2_M, -1);
  TestKit2_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  TestKit2_M->Sizes.checksums[0] = (3637534199U);
  TestKit2_M->Sizes.checksums[1] = (4251139661U);
  TestKit2_M->Sizes.checksums[2] = (1063979783U);
  TestKit2_M->Sizes.checksums[3] = (2554447239U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    TestKit2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(TestKit2_M->extModeInfo,
      &TestKit2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(TestKit2_M->extModeInfo, TestKit2_M->Sizes.checksums);
    rteiSetTPtr(TestKit2_M->extModeInfo, rtmGetTPtr(TestKit2_M));
  }

  /* Start for MATLABSystem: '<Root>/Encoder' */
  TestKit2_DW.obj_p.isInitialized = 0;
  TestKit2_DW.obj_p.matlabCodegenIsDeleted = false;
  TestKit2_SystemCore_setup(&TestKit2_DW.obj_p);

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  TestKit2_DW.obj_j.isInitialized = 0;
  TestKit2_DW.obj_j.matlabCodegenIsDeleted = false;
  TestKit2_SystemCore_setup_l(&TestKit2_DW.obj_j);

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  TestKit2_DW.obj.isInitialized = 0;
  TestKit2_DW.obj.matlabCodegenIsDeleted = false;
  TestKit2_SystemCore_setup_ly(&TestKit2_DW.obj);
}

/* Model terminate function */
void TestKit2_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder' */
  if (!TestKit2_DW.obj_p.matlabCodegenIsDeleted) {
    TestKit2_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((TestKit2_DW.obj_p.isInitialized == 1) &&
        TestKit2_DW.obj_p.isSetupComplete) {
      disableCounter(TestKit2_DW.obj_p.TimerHandle);
      disableTimerInterrupts(TestKit2_DW.obj_p.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(TestKit2_DW.obj_p.TimerHandle, ChannelInfo);
      disableTimerChannel2(TestKit2_DW.obj_p.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder' */
  /* Terminate for MATLABSystem: '<Root>/Encoder1' */
  if (!TestKit2_DW.obj_j.matlabCodegenIsDeleted) {
    TestKit2_DW.obj_j.matlabCodegenIsDeleted = true;
    if ((TestKit2_DW.obj_j.isInitialized == 1) &&
        TestKit2_DW.obj_j.isSetupComplete) {
      disableCounter(TestKit2_DW.obj_j.TimerHandle);
      disableTimerInterrupts(TestKit2_DW.obj_j.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(TestKit2_DW.obj_j.TimerHandle, ChannelInfo);
      disableTimerChannel2(TestKit2_DW.obj_j.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder1' */
  /* Terminate for MATLABSystem: '<Root>/Encoder2' */
  if (!TestKit2_DW.obj.matlabCodegenIsDeleted) {
    TestKit2_DW.obj.matlabCodegenIsDeleted = true;
    if ((TestKit2_DW.obj.isInitialized == 1) && TestKit2_DW.obj.isSetupComplete)
    {
      disableCounter(TestKit2_DW.obj.TimerHandle);
      disableTimerInterrupts(TestKit2_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(TestKit2_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(TestKit2_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
