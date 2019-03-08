/*
 * OnOff_Driver.c
 *
 *  Created on: Mar 1, 2019
 *      Author: Abraham
 */
#include "derivative.h"
void vfnFirtLedOn(void)
{
	GPIOA_PDDR |= (1<<1);
	GPIOA_PTOR |= (1<<1);
}

void vfnFirtLedOff(void)
{
	GPIOA_PTOR &= ~(1<<1);
}


void vfnSecondLedOn(void)
{
	GPIOA_PDDR |= (1<<2);
	GPIOA_PTOR |= (1<<2);
	
}

void vfnThirdLedOn(void)
{
	GPIOD_PDDR |= (1<<4);
	GPIOD_PTOR |= (1<<4);
}

void vfnFourthLedOn(void)
{
	GPIOA_PDDR |= (1<<12);
	GPIOA_PTOR |= (1<<12);
}

void vfnFourthLedOff(void)
{
	GPIOA_PTOR &= ~(1<<12);
}








