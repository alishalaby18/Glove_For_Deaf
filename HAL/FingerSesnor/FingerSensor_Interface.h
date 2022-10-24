/*
 * FingerSensor_Interface.h
 *
 *  Created on: Oct 20, 2022
 *      Author: ali_l
 */

#ifndef HAL_FINGERSENSOR_FINGERSENSOR_INTERFACE_H_
#define HAL_FINGERSENSOR_FINGERSENSOR_INTERFACE_H_

//*******************************************_INCLUDE_*************************************************
#include "ADC_Interface.h"
#include "DIO_Interface.h"
#include "FingerSensor_Config.h"
//********************************************_MACROS_*************************************************
#define Finger_Sensor_1_Bent 65
#define Finger_Sensor_2_Bent 380
#define Finger_Sensor_3_Bent 390
#define Finger_Sensor_4_Bent 300
#define Finger_Sensor_5_Bent 150
//*******************************************_PROTOTYPES_**********************************************
void H_FingerSensor_Void_FingerSensorInit(void);
u16 H_FingerSensor_U16_FingerSensorRead(u8);

#endif /* HAL_FINGERSENSOR_FINGERSENSOR_INTERFACE_H_ */
