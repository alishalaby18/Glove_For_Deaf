/*
 * FingerSensor_Prog.c
 *
 *  Created on: Oct 20, 2022
 *      Author: ali_l
 */

#include "FingerSensor_Private.h"
#include "FingerSensor_Interface.h"

void H_FingerSensor_Void_FingerSensorInit(void)
{
	M_ADC_Void_ADCInit();
}
u16 H_FingerSensor_U16_FingerSensorRead(u8 Copy_U8_FingerSensor)
{
	u16 FingerSensor_Reading;
	switch(Copy_U8_FingerSensor)
	{
	case FINGER_SENSOR_1_CHANNEL:FingerSensor_Reading = M_ADC_U16_ADCRead(FINGER_SENSOR_1_CHANNEL);
	break;
	case FINGER_SENSOR_2_CHANNEL:FingerSensor_Reading = M_ADC_U16_ADCRead(FINGER_SENSOR_2_CHANNEL);
    break;
	case FINGER_SENSOR_3_CHANNEL:FingerSensor_Reading = M_ADC_U16_ADCRead(FINGER_SENSOR_3_CHANNEL);
	break;
	case FINGER_SENSOR_4_CHANNEL:FingerSensor_Reading = M_ADC_U16_ADCRead(FINGER_SENSOR_4_CHANNEL);
	break;
	case FINGER_SENSOR_5_CHANNEL:FingerSensor_Reading = M_ADC_U16_ADCRead(FINGER_SENSOR_5_CHANNEL);
	break;
	default:   break;

	}
return(FingerSensor_Reading);
}
