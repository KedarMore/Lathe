/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Thu Jan 25 13:51:33 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled.h"

/* Block signals and states (auto storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [5.0s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void untitled_step(void)
{
  real_T rtb_PulseGenerator;
  uint8_T rtb_PulseGenerator_0;

  /* S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input' */
  MW_digitalRead(rtP.DigitalInput_p1);
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
    rtb_PulseGenerator = (rtDW.clockTickCounter < rtP.PulseGenerator_Duty) &&
      (rtDW.clockTickCounter >= 0L) ? rtP.PulseGenerator_Amp : 0.0;
    if (rtDW.clockTickCounter >= rtP.PulseGenerator_Period - 1.0) {
      rtDW.clockTickCounter = 0L;
    } else {
      rtDW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

    /* DataTypeConversion: '<S1>/Data Type Conversion' */
    if (rtb_PulseGenerator < 256.0) {
      if (rtb_PulseGenerator >= 0.0) {
        rtb_PulseGenerator_0 = (uint8_T)rtb_PulseGenerator;
      } else {
        rtb_PulseGenerator_0 = 0U;
      }
    } else {
      rtb_PulseGenerator_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

    /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
    MW_digitalWrite(rtP.DigitalOutput_pinNumber, rtb_PulseGenerator_0);
  }

  rate_scheduler();
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Start for S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input' */
  MW_pinModeInput(rtP.DigitalInput_p1);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(rtP.DigitalOutput_pinNumber);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
