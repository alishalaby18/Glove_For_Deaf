/*
 * main.c
 *
 *  Created on: Aug 23, 2022
 *      Author: ali_l
 */

#include "Project.h"

int main()
{
	H_LCD_Void_LCDInit();
	H_FingerSensor_Void_FingerSensorInit();
	u16 Finger_Sensor_1 = 0 , Finger_Sensor_2 = 0 , Finger_Sensor_3 = 0 , Finger_Sensor_4 = 0 , Finger_Sensor_5 = 0;
	/*
	 * Finger_Sensor_1 for Little Finger
	 * Finger_Sensor_2 for Thumb
	 * Finger_Sensor_3 for Index Finger
	 * Finger_Sensor_4 for Middle Finger
	 * Finger_Sensor_5 for Ring Finger
	 */
	while(1)
	{
		H_LCD_Void_LCDClear();
		Finger_Sensor_1 = H_FingerSensor_U16_FingerSensorRead(FINGER_SENSOR_1_CHANNEL);
		Finger_Sensor_2 = H_FingerSensor_U16_FingerSensorRead(FINGER_SENSOR_2_CHANNEL);
		Finger_Sensor_3 = H_FingerSensor_U16_FingerSensorRead(FINGER_SENSOR_3_CHANNEL);
		Finger_Sensor_4 = H_FingerSensor_U16_FingerSensorRead(FINGER_SENSOR_4_CHANNEL);
		Finger_Sensor_5 = H_FingerSensor_U16_FingerSensorRead(FINGER_SENSOR_5_CHANNEL);
		//No fingers used
		if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3<Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("No to Racism");
			_delay_ms(500);
		}
		//One finger used
		// print Hi if first finger only flexed
		else if(Finger_Sensor_1 >Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Hi");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3<Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Promise");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2>Finger_Sensor_2_Bent && Finger_Sensor_3<Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("OK");
			_delay_ms(500);
		}
		//2 Fingers used
		//print Victory at victory sign
		else if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4<Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Victory");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2>Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5<Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("No");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Yes");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2>Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Big");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3<Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Call me");
			_delay_ms(500);
		}
		//3 Fingers used
		//print I love you if 2 fingers at middle not flexed
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2>Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4>Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("I love you");
			_delay_ms(500);
		}
		//print May I help you if 3 middle fingers flexed
		else if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4<Finger_Sensor_4_Bent && Finger_Sensor_5<Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("May I help you?");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3<Finger_Sensor_3_Bent && Finger_Sensor_4<Finger_Sensor_4_Bent && Finger_Sensor_5<Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Perfect");
			_delay_ms(500);
		}
		else if(Finger_Sensor_1>Finger_Sensor_1_Bent && Finger_Sensor_2>Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4<Finger_Sensor_4_Bent && Finger_Sensor_5>Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Bang Bang");
			_delay_ms(500);
		}
		//4 Fingers used
		//print Nice to meet you if only thumb not flexed
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2<Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4<Finger_Sensor_4_Bent && Finger_Sensor_5<Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("Nice to meet you");
			_delay_ms(500);
		}
		//5 Fingers used
		//print See you later when all fingers are flexed
		else if(Finger_Sensor_1<Finger_Sensor_1_Bent && Finger_Sensor_2>Finger_Sensor_2_Bent && Finger_Sensor_3>Finger_Sensor_3_Bent && Finger_Sensor_4<Finger_Sensor_4_Bent && Finger_Sensor_5<Finger_Sensor_5_Bent)
		{
			H_LCD_Void_LCDWriteString("See you later");
			_delay_ms(500);
		}
	}
}
