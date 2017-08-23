#ifndef _Keypad_INTERFACE_H_
#define _Keypad_INTERFACE_H_

#include "Keypad_Private.h"


extern u8 Keypad_Read(u8 *PtrValue);
extern u8 Keypad_Char(u8 i, u8 j, u8 *keypad_value2);


#endif // _Keypad_INTERFACE_H_
