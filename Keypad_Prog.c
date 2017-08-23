#include "types.h"
#include "utl.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"

#include "Keypad_Config.h"
#include "Keypad_Interface.h"


extern u8 Keypad_Read(u8 *keypad_value)
{
	u8 PtrValue=0,keypad_value2=0;
	
	for (u8 i=Row_A; i<=Row_D; i++)
	{
		DIO_WritePin(Row_A, LOW);
		DIO_WritePin(Row_B, LOW);
		DIO_WritePin(Row_C, LOW);
		DIO_WritePin(Row_D, LOW);
		
		DIO_WritePin(i, HIGH);
		
		for (u8 j=Col_1; j<=Col_4; j++)
		{
			PtrValue=0;
			DIO_ReadPin(j, &PtrValue);
			if (PtrValue==1) 
			{
				Keypad_Char(i, j, &keypad_value2);
			
				*keypad_value=keypad_value2;
				return OK;
			}
		}
		
	}
	return Not_Available;
}


extern u8 Keypad_Char(u8 i, u8 j, u8 *keypad_value2)
{
	switch (i)
	{
		case Row_A: 
				switch (j)
				{
					case Col_1:
					*keypad_value2=Num_7;
					break;
					
					case Col_2:
					*keypad_value2=Num_8;
					break;
					
					case Col_3:
					*keypad_value2=Num_9;
					break;
					
					case Col_4:
					*keypad_value2=Div;
					break;
				}
			break;
			
		case Row_B:
			switch (j)
			{
				case Col_1:
				*keypad_value2=Num_4;
				break;
				
				case Col_2:
				*keypad_value2=Num_5;
				break;
				
				case Col_3:
				*keypad_value2=Num_6;
				break;
				
				case Col_4:
				*keypad_value2=Mult;
				break;
			}
			break;
			
		case Row_C:
			switch (j)
			{
				case Col_1:
				*keypad_value2=Num_1;
				break;
				
				case Col_2:
				*keypad_value2=Num_2;
				break;
				
				case Col_3:
				*keypad_value2=Num_3;
				break;
				
				case Col_4:
				*keypad_value2=Min;
				break;
			}
			break;
			
		case Row_D:
			switch (j)
			{
				case Col_1:
				*keypad_value2=ON_C;
				break;
				
				case Col_2:
				*keypad_value2=Num_0;
				break;
				
				case Col_3:
				*keypad_value2=Equal;
				break;
				
				case Col_4:
				*keypad_value2=Plus;
				break;
			}
			break;
			
		
		default:
		return ERROR;
			break;

	}
	
	return OK;
}
