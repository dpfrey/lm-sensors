/*
    chips.h - Part of libsensors, a Linux library for reading sensor data.
    Copyright (c) 1998, 1999  Frodo Looijaard <frodol@dds.nl>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/* This files contains, for each type of chip, the kind of values you can
   read and write. The actual value of each define is completely arbitrary,
   as long as, for one specific chip, each defined value is unique. I tried
   to give similar features similar values, but you can't trust that.
   Some entries are very alike (for example the LM78, LM78-J and LM79
   defines). Where documented, you can mix the defines. If chip prefixes
   are different, they get their own entry. */

/* If you add a chip here, do not forget to add the entry in chips.c too.
   Other than that (and a recompile, and a bump up of the library number
   for shared libs) nothing should need to be done to support new chips. */


/* LM78 chips */

#ifndef LIB_SENSORS_CHIPS_H
#define LIB_SENSORS_CHIP_H

#define SENSORS_LM78_PREFIX "lm78"

#define SENSORS_LM78_IN0 1 /* R */
#define SENSORS_LM78_IN1 2 /* R */
#define SENSORS_LM78_IN2 3 /* R */
#define SENSORS_LM78_IN3 4 /* R */
#define SENSORS_LM78_IN4 5 /* R */
#define SENSORS_LM78_IN5 6 /* R */
#define SENSORS_LM78_IN6 7 /* R */
#define SENSORS_LM78_IN0_MIN 11 /* RW */
#define SENSORS_LM78_IN1_MIN 12 /* RW */
#define SENSORS_LM78_IN2_MIN 13 /* RW */
#define SENSORS_LM78_IN3_MIN 14 /* RW */
#define SENSORS_LM78_IN4_MIN 15 /* RW */
#define SENSORS_LM78_IN5_MIN 16 /* RW */
#define SENSORS_LM78_IN6_MIN 17 /* RW */
#define SENSORS_LM78_IN0_MAX 21 /* RW */
#define SENSORS_LM78_IN1_MAX 22 /* RW */
#define SENSORS_LM78_IN2_MAX 23 /* RW */
#define SENSORS_LM78_IN3_MAX 24 /* RW */
#define SENSORS_LM78_IN4_MAX 25 /* RW */
#define SENSORS_LM78_IN5_MAX 26 /* RW */
#define SENSORS_LM78_IN6_MAX 27 /* RW */
#define SENSORS_LM78_FAN1 31 /* R */
#define SENSORS_LM78_FAN2 32 /* R */
#define SENSORS_LM78_FAN3 33 /* R */
#define SENSORS_LM78_FAN1_MIN 41 /* RW */
#define SENSORS_LM78_FAN2_MIN 42 /* RW */
#define SENSORS_LM78_FAN3_MIN 43 /* RW */
#define SENSORS_LM78_TEMP 51 /* R */
#define SENSORS_LM78_TEMP_HYST 52 /* RW */
#define SENSORS_LM78_TEMP_OVER 53 /* RW */
#define SENSORS_LM78_VID 61 /* R */
#define SENSORS_LM78_FAN1_DIV 71 /* RW */
#define SENSORS_LM78_FAN2_DIV 72 /* RW */
#define SENSORS_LM78_FAN3_DIV 73 /* R (yes, really! */
#define SENSORS_LM78_ALARMS 81 /* R */


/* LM78-J chips. It is actually safe to use the LM78 defines instead, but it
   is better practice to use these. */

#define SENSORS_LM78J_PREFIX "lm78-j"

#define SENSORS_LM78J_IN0 1 /* R */
#define SENSORS_LM78J_IN1 2 /* R */
#define SENSORS_LM78J_IN2 3 /* R */
#define SENSORS_LM78J_IN3 4 /* R */
#define SENSORS_LM78J_IN4 5 /* R */
#define SENSORS_LM78J_IN5 6 /* R */
#define SENSORS_LM78J_IN6 7 /* R */
#define SENSORS_LM78J_IN0_MIN 11 /* RW */
#define SENSORS_LM78J_IN1_MIN 12 /* RW */
#define SENSORS_LM78J_IN2_MIN 13 /* RW */
#define SENSORS_LM78J_IN3_MIN 14 /* RW */
#define SENSORS_LM78J_IN4_MIN 15 /* RW */
#define SENSORS_LM78J_IN5_MIN 16 /* RW */
#define SENSORS_LM78J_IN6_MIN 17 /* RW */
#define SENSORS_LM78J_IN0_MAX 21 /* RW */
#define SENSORS_LM78J_IN1_MAX 22 /* RW */
#define SENSORS_LM78J_IN2_MAX 23 /* RW */
#define SENSORS_LM78J_IN3_MAX 24 /* RW */
#define SENSORS_LM78J_IN4_MAX 25 /* RW */
#define SENSORS_LM78J_IN5_MAX 26 /* RW */
#define SENSORS_LM78J_IN6_MAX 27 /* RW */
#define SENSORS_LM78J_FAN1 31 /* R */
#define SENSORS_LM78J_FAN2 32 /* R */
#define SENSORS_LM78J_FAN3 33  /* R */
#define SENSORS_LM78J_FAN1_MIN 41 /* RW */
#define SENSORS_LM78J_FAN2_MIN 42 /* RW */
#define SENSORS_LM78J_FAN3_MIN 43 /* RW */
#define SENSORS_LM78J_TEMP 51 /* R */
#define SENSORS_LM78J_TEMP_HYST 52 /* RW */
#define SENSORS_LM78J_TEMP_OVER 53 /* RW */
#define SENSORS_LM78J_VID 61 /* R */
#define SENSORS_LM78J_FAN1_DIV 71 /* RW */
#define SENSORS_LM78J_FAN2_DIV 72 /* RW */
#define SENSORS_LM78J_FAN3_DIV 73 /* R (yes, really!) */
#define SENSORS_LM78J_ALARMS 81 /* R */


/* LM79 chips. It is actually safe to use the LM78 defines instead, but it
   is better practice to use these. */

#define SENSORS_LM79_PREFIX "lm79"

#define SENSORS_LM79_IN0 1 /* R */
#define SENSORS_LM79_IN1 2 /* R */
#define SENSORS_LM79_IN2 3 /* R */
#define SENSORS_LM79_IN3 4 /* R */
#define SENSORS_LM79_IN4 5 /* R */
#define SENSORS_LM79_IN5 6 /* R */
#define SENSORS_LM79_IN6 7 /* R */
#define SENSORS_LM79_IN0_MIN 11 /* RW */
#define SENSORS_LM79_IN1_MIN 12 /* RW */
#define SENSORS_LM79_IN2_MIN 13 /* RW */
#define SENSORS_LM79_IN3_MIN 14 /* RW */
#define SENSORS_LM79_IN4_MIN 15 /* RW */
#define SENSORS_LM79_IN5_MIN 16 /* RW */
#define SENSORS_LM79_IN6_MIN 17 /* RW */
#define SENSORS_LM79_IN0_MAX 21 /* RW */
#define SENSORS_LM79_IN1_MAX 22 /* RW */
#define SENSORS_LM79_IN2_MAX 23 /* RW */
#define SENSORS_LM79_IN3_MAX 24 /* RW */
#define SENSORS_LM79_IN4_MAX 25 /* R */
#define SENSORS_LM79_IN5_MAX 26 /* R */
#define SENSORS_LM79_IN6_MAX 27 /* R */
#define SENSORS_LM79_FAN1 31 /* R */
#define SENSORS_LM79_FAN2 32 /* R */
#define SENSORS_LM79_FAN3 33 /* R */
#define SENSORS_LM79_FAN1_MIN 41 /* RW */
#define SENSORS_LM79_FAN2_MIN 42 /* RW */
#define SENSORS_LM79_FAN3_MIN 43 /* RW */
#define SENSORS_LM79_TEMP 51 /* R */
#define SENSORS_LM79_TEMP_HYST 52 /* RW */
#define SENSORS_LM79_TEMP_OVER 53 /* RW */
#define SENSORS_LM79_VID 61 /* R */
#define SENSORS_LM79_FAN1_DIV 71 /* RW */
#define SENSORS_LM79_FAN2_DIV 72 /* RW */
#define SENSORS_LM79_FAN3_DIV 73 /* R (yes, really! */
#define SENSORS_LM79_ALARMS 81 /* R */


/* LM75 chips. */

#define SENSORS_LM75_PREFIX "lm75"

#define SENSORS_LM75_TEMP 51 /* R */
#define SENSORS_LM75_TEMP_HYST 52 /* RW */
#define SENSORS_LM75_TEMP_OVER 53 /* RW */

/* ADM1021 chips. */

#define SENSORS_ADM1021_PREFIX "adm1021"

#define SENSORS_ADM1021_TEMP 51 /* R */
#define SENSORS_ADM1021_TEMP_HYST 52 /* RW */
#define SENSORS_ADM1021_TEMP_OVER 53 /* RW */
#define SENSORS_ADM1021_REMOTE_TEMP 54 /* R */
#define SENSORS_ADM1021_REMOTE_TEMP_HYST 55 /* RW */
#define SENSORS_ADM1021_REMOTE_TEMP_OVER 56 /* RW */
#define SENSORS_ADM1021_STATUS 81 /* R */

/* GL518SM revision 0x00 chips. You may also use the revision 0x80 defines,
   but note that some features are unaccessible in revision 0x00. */

#define SENSORS_GL518R00_PREFIX "gl518sm-r00"

/* Note that other voltages can not be read! */
#define SENSORS_GL518R00_VDD 1 /* No access! */
#define SENSORS_GL518R00_VIN1 2 /* No access! */
#define SENSORS_GL518R00_VIN2 3 /* No access! */
#define SENSORS_GL518R00_VIN3 4 /* R */
#define SENSORS_GL518R00_VDD_MIN 11 /* RW */
#define SENSORS_GL518R00_VIN1_MIN 12 /* RW */
#define SENSORS_GL518R00_VIN2_MIN 13 /* RW */
#define SENSORS_GL518R00_VIN3_MIN 14 /* RW */
#define SENSORS_GL518R00_VDD_MAX 21 /* RW */
#define SENSORS_GL518R00_VIN1_MAX 22 /* RW */
#define SENSORS_GL518R00_VIN2_MAX 23 /* RW */
#define SENSORS_GL518R00_VIN3_MAX 24 /* RW */
#define SENSORS_GL518R00_FAN1 31 /* R */
#define SENSORS_GL518R00_FAN2 32 /* R */
#define SENSORS_GL518R00_FAN1_MIN 41 /* RW */
#define SENSORS_GL518R00_FAN2_MIN 42 /* RW */
#define SENSORS_GL518R00_TEMP 51 /* R */
#define SENSORS_GL518R00_TEMP_HYST 52 /* RW */
#define SENSORS_GL518R00_TEMP_OVER 53 /* RW */
#define SENSORS_GL518R00_VID 61 /* R */
#define SENSORS_GL518R00_FAN1_DIV 71 /* RW */
#define SENSORS_GL518R00_FAN2_DIV 72 /* RW */
#define SENSORS_GL518R00_ALARMS 81 /* R */
#define SENSORS_GL518R00_BEEP_ENABLE 82 /* RW */
#define SENSORS_GL518R00_BEEPS 83 /* RW */


/* GL518SM revision 0x80 chips. */

#define SENSORS_GL518R80_PREFIX "gl518sm-r80"

#define SENSORS_GL518R80_VDD 1 /* R */
#define SENSORS_GL518R80_VIN1 2 /* R */
#define SENSORS_GL518R80_VIN2 3 /* R */
#define SENSORS_GL518R80_VIN3 4 /* R */
#define SENSORS_GL518R80_VDD_MIN 11 /* RW */
#define SENSORS_GL518R80_VIN1_MIN 12 /* RW */
#define SENSORS_GL518R80_VIN2_MIN 13 /* RW */
#define SENSORS_GL518R80_VIN3_MIN 14 /* RW */
#define SENSORS_GL518R80_VDD_MAX 21 /* RW */
#define SENSORS_GL518R80_VIN1_MAX 22 /* RW */
#define SENSORS_GL518R80_VIN2_MAX 23 /* RW */
#define SENSORS_GL518R80_VIN3_MAX 24 /* RW */
#define SENSORS_GL518R80_FAN1 31 /* R */
#define SENSORS_GL518R80_FAN2 32 /* R */
#define SENSORS_GL518R80_FAN1_MIN 41 /* RW */
#define SENSORS_GL518R80_FAN2_MIN 42 /* RW */
#define SENSORS_GL518R80_TEMP 51 /* R */
#define SENSORS_GL518R80_TEMP_HYST 52 /* RW */
#define SENSORS_GL518R80_TEMP_OVER 53 /* RW */
#define SENSORS_GL518R80_VID 61 /* R */
#define SENSORS_GL518R80_FAN1_DIV 71 /* RW */
#define SENSORS_GL518R80_FAN2_DIV 72 /* RW */
#define SENSORS_GL518R80_ALARMS 81 /* R */
#define SENSORS_GL518R80_BEEP_ENABLE 82 /* RW */
#define SENSORS_GL518R80_BEEPS 83 /* RW */


/* LM80 chips */

#define SENSORS_LM80_PREFIX "lm80"

#define SENSORS_LM80_IN0 1 /* R */
#define SENSORS_LM80_IN1 2 /* R */
#define SENSORS_LM80_IN2 3 /* R */
#define SENSORS_LM80_IN3 4 /* R */
#define SENSORS_LM80_IN4 5 /* R */
#define SENSORS_LM80_IN5 6 /* R */
#define SENSORS_LM80_IN6 7 /* R */
#define SENSORS_LM80_IN0_MIN 11 /* RW */
#define SENSORS_LM80_IN1_MIN 12 /* RW */
#define SENSORS_LM80_IN2_MIN 13 /* RW */
#define SENSORS_LM80_IN3_MIN 14 /* RW */
#define SENSORS_LM80_IN4_MIN 15 /* RW */
#define SENSORS_LM80_IN5_MIN 16 /* RW */
#define SENSORS_LM80_IN6_MIN 17 /* RW */
#define SENSORS_LM80_IN0_MAX 21 /* RW */
#define SENSORS_LM80_IN1_MAX 22 /* RW */
#define SENSORS_LM80_IN2_MAX 23 /* RW */
#define SENSORS_LM80_IN3_MAX 24 /* RW */
#define SENSORS_LM80_IN4_MAX 25 /* R */
#define SENSORS_LM80_IN5_MAX 26 /* R */
#define SENSORS_LM80_IN6_MAX 27 /* R */
#define SENSORS_LM80_FAN1 31 /* R */
#define SENSORS_LM80_FAN2 32 /* R */
#define SENSORS_LM80_FAN1_MIN 41 /* RW */
#define SENSORS_LM80_FAN2_MIN 42 /* RW */
#define SENSORS_LM80_TEMP 51 /* R */
#define SENSORS_LM80_TEMP_HOT_HYST 52 /* RW */
#define SENSORS_LM80_TEMP_HOT_MAX 53 /* RW */
#define SENSORS_LM80_TEMP_OS_HYST 54 /* RW */
#define SENSORS_LM80_TEMP_OS_MAX 55 /* RW */
#define SENSORS_LM80_FAN1_DIV 71 /* RW */
#define SENSORS_LM80_FAN2_DIV 72 /* RW */
#define SENSORS_LM80_ALARMS 81 /* R */


/* Winbond W83781D chips */

#define SENSORS_W83781D_PREFIX "w83781d"

#define SENSORS_W83781D_IN0 1 /* R */
#define SENSORS_W83781D_IN1 2 /* R */
#define SENSORS_W83781D_IN2 3 /* R */
#define SENSORS_W83781D_IN3 4 /* R */
#define SENSORS_W83781D_IN4 5 /* R */
#define SENSORS_W83781D_IN5 6 /* R */
#define SENSORS_W83781D_IN6 7 /* R */
#define SENSORS_W83781D_IN0_MIN 11 /* RW */
#define SENSORS_W83781D_IN1_MIN 12 /* RW */
#define SENSORS_W83781D_IN2_MIN 13 /* RW */
#define SENSORS_W83781D_IN3_MIN 14 /* RW */
#define SENSORS_W83781D_IN4_MIN 15 /* RW */
#define SENSORS_W83781D_IN5_MIN 16 /* RW */
#define SENSORS_W83781D_IN6_MIN 17 /* RW */
#define SENSORS_W83781D_IN0_MAX 21 /* RW */
#define SENSORS_W83781D_IN1_MAX 22 /* RW */
#define SENSORS_W83781D_IN2_MAX 23 /* RW */
#define SENSORS_W83781D_IN3_MAX 24 /* RW */
#define SENSORS_W83781D_IN4_MAX 25 /* RW */
#define SENSORS_W83781D_IN5_MAX 26 /* RW */
#define SENSORS_W83781D_IN6_MAX 27 /* RW */
#define SENSORS_W83781D_FAN1 31 /* R */
#define SENSORS_W83781D_FAN2 32 /* R */
#define SENSORS_W83781D_FAN3 33 /* R */
#define SENSORS_W83781D_FAN1_MIN 41 /* RW */
#define SENSORS_W83781D_FAN2_MIN 42 /* RW */
#define SENSORS_W83781D_FAN3_MIN 43 /* RW */
#define SENSORS_W83781D_TEMP1 51 /* R */
#define SENSORS_W83781D_TEMP1_HYST 52 /* RW */
#define SENSORS_W83781D_TEMP1_OVER 53 /* RW */
#define SENSORS_W83781D_TEMP2 54 /* R */
#define SENSORS_W83781D_TEMP2_HYST 55 /* RW */
#define SENSORS_W83781D_TEMP2_OVER 56 /* RW */
#define SENSORS_W83781D_TEMP3 57 /* R */
#define SENSORS_W83781D_TEMP3_HYST 58 /* RW */
#define SENSORS_W83781D_TEMP3_OVER 59 /* RW */
#define SENSORS_W83781D_VID 61 /* R */
#define SENSORS_W83781D_FAN1_DIV 71 /* RW */
#define SENSORS_W83781D_FAN2_DIV 72 /* RW */
#define SENSORS_W83781D_FAN3_DIV 73 /* R (yes, really! */
#define SENSORS_W83781D_ALARMS 81 /* R */
#define SENSORS_W83781D_BEEP_ENABLE 82 /* RW */
#define SENSORS_W83781D_BEEPS 83 /* RW */


/* Analog Devices ADM9240 chips */

#define SENSORS_ADM9240_PREFIX "adm9240"

#define SENSORS_ADM9240_IN0 1 /* R */
#define SENSORS_ADM9240_IN1 2 /* R */
#define SENSORS_ADM9240_IN2 3 /* R */
#define SENSORS_ADM9240_IN3 4 /* R */
#define SENSORS_ADM9240_IN4 5 /* R */
#define SENSORS_ADM9240_IN5 6 /* R */
#define SENSORS_ADM9240_IN0_MIN 11 /* RW */
#define SENSORS_ADM9240_IN1_MIN 12 /* RW */
#define SENSORS_ADM9240_IN2_MIN 13 /* RW */
#define SENSORS_ADM9240_IN3_MIN 14 /* RW */
#define SENSORS_ADM9240_IN4_MIN 15 /* RW */
#define SENSORS_ADM9240_IN5_MIN 16 /* RW */
#define SENSORS_ADM9240_IN0_MAX 21 /* RW */
#define SENSORS_ADM9240_IN1_MAX 22 /* RW */
#define SENSORS_ADM9240_IN2_MAX 23 /* RW */
#define SENSORS_ADM9240_IN3_MAX 24 /* RW */
#define SENSORS_ADM9240_IN4_MAX 25 /* RW */
#define SENSORS_ADM9240_IN5_MAX 26 /* RW */
#define SENSORS_ADM9240_FAN1 31 /* R */
#define SENSORS_ADM9240_FAN2 32 /* R */
#define SENSORS_ADM9240_FAN1_MIN 41 /* RW */
#define SENSORS_ADM9240_FAN2_MIN 42 /* RW */
#define SENSORS_ADM9240_TEMP 51 /* R */
#define SENSORS_ADM9240_TEMP_HYST 52 /* RW */
#define SENSORS_ADM9240_TEMP_OVER 53 /* RW */
#define SENSORS_ADM9240_VID 61 /* R */
#define SENSORS_ADM9240_FAN1_DIV 71 /* RW */
#define SENSORS_ADM9240_FAN2_DIV 72 /* RW */
#define SENSORS_ADM9240_ALARMS 81 /* R */
#define SENSORS_ADM9240_ANALOG_OUT 82 /* RW */


#endif /* def LIB_SENSORS_CHIPS_H */
