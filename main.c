/*
 * UART.c
 *
 * Created: 7/31/2020 12:40:03 PM
 * Author : 20112
 */ 
#include "UART.h"
#include "LCD.h"

extern volatile uint8 RX_arr[12];

int main(void)
{
	uint8 temp[12];
	uint8* string_val=0;
	LCD_Init();
  UART_Init();
  UART_Start();
  //UART_call_back_func(LCD_WriteChar);
 while(1)
 {
	 string_val=RX_Byte();
	 for(uint8 i=0;i<=12;i++)
	 {
		 LCD_WriteChar(string_val[i]); 
	 }
	
 }


  
}

