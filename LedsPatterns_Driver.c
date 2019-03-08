/*
 * LedsPatterns_Driver.c
 *
 *  Created on: Mar 3, 2019
 *      Author: Abraham
 */
#include "LedsPatterns_Driver.h"
#include "OnOff_Driver.h"
#include "GPIO_Driver.h"

void vfnAscendantPattern(void)
{
	vfnFirtLedOn();
	delay(200);
	vfnSecondLedOn();
	delay(200);
	vfnThirdLedOn();
	delay(200);
	vfnFourthLedOn();
	delay(200);
	vfnFirtLedOff();
}

void vfnDescendantPattern(void)
{
	vfnFourthLedOn();
	delay(200);
	vfnThirdLedOn();
	delay(200);
	vfnSecondLedOn();
	delay(200);
	vfnFirtLedOn();
	delay(200);
	vfnFourthLedOff();
}

