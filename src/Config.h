/*
 * Config.h
 *
 *  Created on: 16 maj 2014
 *      Author: MattLech
 */

#ifndef CONFIG_H_
#define CONFIG_H_

const int LOGGING = 0;

//const unsigned long STEPS_FOR_ACC_DEC = 20;
//const unsigned int MAX_ACCELERATION_STEPS_PER_SECOND = 2;

//const unsigned int MOVEMENT_STEPS_ACC_DEC        = 100;
//const unsigned int MOVEMENT_MAX_STEPS_PER_SECOND = 1000;
//const unsigned int MOVEMENT_HOME_SPEED_S_P_S     = 200;
//const unsigned int MOVEMENT_TIMEOUT              = 30;
//const unsigned int INVERT_ENDSTOPS = 1;
//const bool AXIS_HOME_UP_X = false;
//const bool AXIS_HOME_UP_Y = false;
//const bool AXIS_HOME_UP_Z = true;

const int MOVEMENT_INTERRUPT_SPEED = 100; // Interrupt cycle in micro seconds

const unsigned int MOVEMENT_SPEED_BASE_TIME      = 2000;
const unsigned int MOVEMENT_DELAY                = 500;

const long PARAM_VERSION_DEFAULT                = 0;
const long PARAM_TEST_DEFAULT                   = 0;

const long MOVEMENT_TIMEOUT_X_DEFAULT           = 120;
const long MOVEMENT_TIMEOUT_Y_DEFAULT           = 120;
const long MOVEMENT_TIMEOUT_Z_DEFAULT           = 120;

const long MOVEMENT_INVERT_ENDPOINTS_X_DEFAULT  = 0;
const long MOVEMENT_INVERT_ENDPOINTS_Y_DEFAULT  = 0;
const long MOVEMENT_INVERT_ENDPOINTS_Z_DEFAULT  = 0;

const long MOVEMENT_INVERT_MOTOR_X_DEFAULT      = 0;
const long MOVEMENT_INVERT_MOTOR_Y_DEFAULT	= 0;
const long MOVEMENT_INVERT_MOTOR_Z_DEFAULT      = 0;

const long MOVEMENT_HOME_UP_X_DEFAULT           = 0;
const long MOVEMENT_HOME_UP_Y_DEFAULT           = 0;
const long MOVEMENT_HOME_UP_Z_DEFAULT           = 1;

// numver of steps used for acceleration or deceleration
const long MOVEMENT_STEPS_ACC_DEC_X_DEFAULT     = 200;
const long MOVEMENT_STEPS_ACC_DEC_Y_DEFAULT     = 200;
const long MOVEMENT_STEPS_ACC_DEC_Z_DEFAULT     = 200;

// Minimum speed in steps per second
const long MOVEMENT_MIN_SPD_X_DEFAULT           = 200;
const long MOVEMENT_MIN_SPD_Y_DEFAULT           = 200;
const long MOVEMENT_MIN_SPD_Z_DEFAULT           = 200;

// Maxumum speed in steps per second
const long MOVEMENT_MAX_SPD_X_DEFAULT           = 4000;
const long MOVEMENT_MAX_SPD_Y_DEFAULT           = 4000;
const long MOVEMENT_MAX_SPD_Z_DEFAULT           = 4000;

// Use encoder (0 or 1)
const long ENCODER_ENABLED_X_DEFAULT		= 0;
const long ENCODER_ENABLED_Y_DEFAULT		= 0;
const long ENCODER_ENABLED_Z_DEFAULT		= 0;

// Number of stes missed before motor is seen as not moving
const long ENCODER_MISSED_STEPS_MAX_X_DEFAULT	= 10;
const long ENCODER_MISSED_STEPS_MAX_Y_DEFAULT	= 10;
const long ENCODER_MISSED_STEPS_MAX_Z_DEFAULT	= 10;

// How much a good step is substracted from the missed step total (1-99)
const long ENCODER_MISSED_STEPS_DECAY_X_DEFAULT = 10;
const long ENCODER_MISSED_STEPS_DECAY_Y_DEFAULT = 10;
const long ENCODER_MISSED_STEPS_DECAY_Z_DEFAULT = 10;


const long STATUS_GENERAL_DEFAULT               = 0;


const String SOFTWARE_VERSION = "GENESIS V.01.05";

#endif /* CONFIG_H_ */
