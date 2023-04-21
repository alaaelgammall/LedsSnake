/*
 * main.c
 *
 *  Created on: Dec 3, 2021
 *      Author: WIN 10
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO.h"
#include "DIO_Config.h"
#include "LED.h"
#include <util/delay.h>

int main(void) {
	DIO_Int();
	  Led_Off (DIO_PortA, PIN0);
	      	Led_Off (DIO_PortA, PIN1) ;
	       	Led_Off (DIO_PortA, PIN2) ;
	        Led_Off (DIO_PortA, PIN3) ;
	        Led_Off (DIO_PortA, PIN4) ;
	       	Led_Off (DIO_PortA, PIN5) ;
	        Led_Off (DIO_PortA, PIN6) ;
	      	Led_Off (DIO_PortA, PIN7) ;

    while (1)
    {
    	Led_Toggle (DIO_PortA, PIN0) ;
    //_delay_ms(60,000);
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN1) ;
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN2) ;
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN3) ;
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN4) ;
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN5) ;
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN6) ;
    	_delay_ms(100);
    	Led_Toggle (DIO_PortA, PIN7) ;
    	_delay_ms(100);
        }
}
