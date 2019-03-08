/*
 * GPIO_Driver.c
 *
 *  Created on: Mar 1, 2019
 *      Author: Abraham
 */
#include "GPIO_Driver.h"
#include "derivative.h"

void vfnGpio_init(void)
{
	//Clock
	SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK;
	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK;
	SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK;
	
	//Inicializacion de los puertos
	PORTA_PCR1 |= PORT_PCR_MUX(1);
	PORTA_PCR2 |= PORT_PCR_MUX(1);
	PORTD_PCR4 |= PORT_PCR_MUX(1);
	PORTA_PCR12 |= PORT_PCR_MUX(1);
	/*PORTB_PCR18 |= PORT_PCR_MUX(1);
	PORTB_PCR19 |= PORT_PCR_MUX(1);
	PORTD_PCR1 |= PORT_PCR_MUX(1);*/
	
}

void delay(int itime)
{
   int icompTime = 0;

   for(icompTime=itime*1000;icompTime!=0;icompTime--){

   }
}

