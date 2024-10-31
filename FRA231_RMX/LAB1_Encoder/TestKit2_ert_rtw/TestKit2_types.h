/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TestKit2_types.h
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

#ifndef TestKit2_types_h_
#define TestKit2_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"

/* Custom Type definition for MATLABSystem: '<Root>/Encoder2' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_qYaJQJIsmU5kxDdgK7jtpE
#define struct_tag_qYaJQJIsmU5kxDdgK7jtpE

struct tag_qYaJQJIsmU5kxDdgK7jtpE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_qYaJQJIsmU5kxDdgK7jtpE */

#ifndef typedef_stm32cube_blocks_EncoderBlock_T
#define typedef_stm32cube_blocks_EncoderBlock_T

typedef struct tag_qYaJQJIsmU5kxDdgK7jtpE stm32cube_blocks_EncoderBlock_T;

#endif                             /* typedef_stm32cube_blocks_EncoderBlock_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_TestKit2_T RT_MODEL_TestKit2_T;

#endif                                 /* TestKit2_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
