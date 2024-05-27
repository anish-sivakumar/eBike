/* This is an autogenerated file from a template. Do not edit this file as it will be overwritten.*/
/**
 *
 * startup_params.h
 * 
 * Startup parameters
 *
 * Component: state machine
 */ /*
 *
 * Motor Control Application Framework
 * R7/RC37 (commit 116330, build on 2023 Feb 09)
 *
 * (c) 2017 - 2023 Microchip Technology Inc. and its subsidiaries. You may use
 * this software and any derivatives exclusively with Microchip products.
 *
 * This software and any accompanying information is for suggestion only.
 * It does not modify Microchip's standard warranty for its products.
 * You agree that you are solely responsible for testing the software and
 * determining its suitability.  Microchip has no obligation to modify,
 * test, certify, or support the software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS INTERACTION WITH
 * MICROCHIP PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY
 * APPLICATION.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL,
 * PUNITIVE, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF
 * ANY KIND WHATSOEVER RELATED TO THE USE OF THIS SOFTWARE, THE
 * motorBench(R) DEVELOPMENT SUITE TOOL, PARAMETERS AND GENERATED CODE,
 * HOWEVER CAUSED, BY END USERS, WHETHER MICROCHIP'S CUSTOMERS OR
 * CUSTOMER'S CUSTOMERS, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES OR THE DAMAGES ARE FORESEEABLE. TO THE
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
 * CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
 * OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
 * SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF
 * THESE TERMS.
 *
 *
 ******************************************************************************/
#ifndef __STARTUP_PARAMS_H
#define __STARTUP_PARAMS_H

#ifdef  __cplusplus
extern "C" {
#endif

//************** Start-Up Parameters **************

/*
 * Startup operating parameters:
 *
 * Istartup:                       3.397  A
 * Kspring:                      946.549 mNm/rad
 * omega_crit:                   457.627  rad/s
 *                                 4.370 kRPM
 * omega0:                        91.525  rad/s
 *                               874.004  RPM
 * omega_min:                     95.400  rad/s
 *                               911.000  RPM
 * omega1:                       104.711  rad/s
 *                               999.914  RPM
 * accel_limit_0:                304.152  rad/s^2
 *                                 2.904 kRPM/s
 * accel_limit_1:                  1.521 krad/s^2
 *                                14.522 kRPM/s
 * accel0:                       304.152  rad/s^2
 *                                 2.904 kRPM/s
 * accel1:                       433.568  rad/s^2
 *                                 4.140 kRPM/s
 * t1:                           300.920 ms
 * t2:                            30.411 ms
 * B_desired:                      4.137 mNm/(rad/s)
 * B_added:                        4.105 mNm/(rad/s)
 * damping_gain_ideal:            73.664 mA/(rad/s)
 * damping_gain_max:             288.389 mA/(rad/s)
 * damping_gain:                  73.664 mA/(rad/s)
 * damping_threshold:             41.884  rad/s
 *                               399.965  RPM
 * damping_Imax:                 453.000 mA
 * t_rampup:                      24.151 ms
 * dIdt_rampup:                  140.678  A/s
 * t_align:                        0.000  s
 * t_hold:                         0.000  s
 * t_rampdown_decay:              87.407 ms
 * Irampdown_end:                169.875 mA
 * rampup_angle:                 -523.599 mrad
 * align_angle_delta:            523.599 mrad
 * theta_error_converge_rate:     17.453  rad/s
 *                               166.667  RPM
 */

/* first startup threshold velocity */
#define STARTUP_ACCEL0_VELOCITY_THRESHOLD       5240      // Q15(  0.15991) = +874.07959 RPM         = +874.00385 RPM         + 0.0087%
/* second startup threshold velocity */
#define STARTUP_ACCEL1_VELOCITY_THRESHOLD       5994      // Q15(  0.18292) = +999.85364 RPM         = +999.91360 RPM         - 0.0060%
/* threshold velocity for damping */
#define STARTUP_DAMPING_THRESHOLD            2398      // Q15(  0.07318) = +400.00818 RPM         = +399.96544 RPM         + 0.0107%
#define Q15_THETADELTA (Q15(THETADELTA/180.0))

/* open loop startup current ramp from initial startup current to startup current */
/* motor current from end of current rampup phase to end of startup */
#define MCAF_STARTUP_CURRENT                 2550      // Q15(  0.07782) =   +3.39761 A           =   +3.39750 A           + 0.0033%
/* motor current at beginning of startup */
#define MCAF_STARTUP_CURRENT_INITIAL            0      // Q15(  0.00000) =   +0.00000 A           =   +0.00000 A           + 0.0000%
/* maximum current amplitude used for active damping */
#define STARTUP_DAMPING_IQMAX                 340      // Q15(  0.01038) = +453.01514 mA          = +453.00000 mA          + 0.0033%
/* binary point for active damping gain */
#define STARTUP_DAMPING_SHIFT                   8
/* active damping gain */
#define STARTUP_DAMPING_GAIN                  247      // Q8(  0.96484)  =  +73.59401 mA/(rad/s)  =  +73.66350 mA/(rad/s)  - 0.0943%

//value of theta_error at transition
#define THETADELTA 10           


#define STARTUP_DELTA_T_FACTOR               2985
#define STARTUP_DELTA_T_FACTOR_ACCELERATION          3
/* first startup acceleration rate */
#define STARTUP_ACCELERATION0               19018      // Q15(  0.58038) = +304.14766 rad/s^2     = +304.15206 rad/s^2     - 0.0014%
/* second startup acceleration rate */
#define STARTUP_ACCELERATION1               27111      // Q15(  0.82736) = +433.57593 rad/s^2     = +433.56815 rad/s^2     + 0.0018%

/* increase in current per control cycle, during current rampup */
#define STARTUP_TORQUE_RAMPUP_RATE              5      // Q15(  0.00015) =   +6.66199 mA          =   +7.03389 mA          - 5.2873%

/* Current rampdown time constant = 0.087407 s */
/* current rampdown decay rate (=1/time constant) */
#define MCAF_RAMPDOWN_DECAY_RATE             9597      // Q24(  0.00057) =  +11.44052 1/s         =  +11.44068 1/s         - 0.0015%
#define MCAF_RAMPDOWN_DECAY_RATE_Q             24
#define MCAF_RAMPDOWN_DECAY_SHIFT (MCAF_RAMPDOWN_DECAY_RATE_Q - 16)

/* current rampdown end threshold */
#define MCAF_RAMPDOWN_END_CURRENT             127      // Q15(  0.00388) = +169.21448 mA          = +169.87500 mA          - 0.3888%

/* align angle shift after current rampup */
#define STARTUP_RAMPUP_ANGLE                -5461      // Q15( -0.16666) = -523.56682 mrad        = -523.59878 mrad        - 0.0061%
/* align angle shift after current rampup */
#define STARTUP_ALIGN_ANGLE_DELTA            5461      // Q15(  0.16666) = +523.56682 mrad        = +523.59878 mrad        - 0.0061%
/* hold time between current rampup and acceleration */
#define STARTUP_ALIGN_TIME                      0      // Q0(  0.00000)  =   +0.00000 s           =   +0.00000 s           + 0.0000%
/* hold time between velocity rampup and current rampdown */
#define STARTUP_HOLD_TIME                       0      // Q0(  0.00000)  =   +0.00000 s           =   +0.00000 s           + 0.0000%
// PWM loops necessary for transitioning from open loop to closed loop
#define TRANSITION_STEPS   IRP_PERCALC/4

/* convergence rate (electrical frequency) for forcing angle error towards zero, during transition to closed-loop */
#define STARTUP_THETA_ERROR_CONVERGE_RATE       2330      // Q24(  0.00014) =  +17.45203 rad/s       =  +17.45329 rad/s       - 0.0072%
#define STARTUP_THETA_ERROR_CONVERGE_RATE_Q         24


#ifdef  __cplusplus
}
#endif

#endif // __STARTUP_PARAMS_H
