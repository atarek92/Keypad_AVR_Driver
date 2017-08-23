#ifndef _Keypad_PRIVATE_H_
#define _Keypad_PRIVATE_H_

#define ON							 1
#define OFF							 0

#define Not_Available				-1

#define A							51
#define B							52
#define C							53
#define D							54


#if Keypad_PORT==51

#define Row_A						DIO_PIN0
#define Row_B						DIO_PIN1
#define Row_C 						DIO_PIN2
#define Row_D 						DIO_PIN3
#define Col_1						DIO_PIN4
#define Col_2						DIO_PIN5
#define Col_3						DIO_PIN6
#define Col_4   					DIO_PIN7

#elif Keypad_PORT==52

#define Row_A						DIO_PIN8
#define Row_B						DIO_PIN9
#define Row_C 						DIO_PIN10
#define Row_D 						DIO_PIN11
#define Col_1						DIO_PIN12
#define Col_2						DIO_PIN13
#define Col_3						DIO_PIN14
#define Col_4   					DIO_PIN15

#elif Keypad_PORT==53

#define Row_A						DIO_PIN16
#define Row_B						DIO_PIN17
#define Row_C 						DIO_PIN18
#define Row_D 						DIO_PIN19
#define Col_1						DIO_PIN20
#define Col_2						DIO_PIN21
#define Col_3						DIO_PIN22
#define Col_4   					DIO_PIN23

#elif Keypad_PORT==54

#define Row_A						DIO_PIN24
#define Row_B						DIO_PIN25
#define Row_C 						DIO_PIN26
#define Row_D 						DIO_PIN27
#define Col_1						DIO_PIN28
#define Col_2						DIO_PIN29
#define Col_3						DIO_PIN30
#define Col_4   					DIO_PIN31

#endif

#endif // Keypad_PRIVATE_H_
