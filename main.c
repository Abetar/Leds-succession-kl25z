/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "derivative.h" /* include peripheral declarations */
#include "GPIO_Driver.h"
#include "OnOff_Driver.h"
#include "LedsPatterns_Driver.h"


int main(void)
{
	vfnGpio_init();
	
	for(;;)
	{
		vfnAscendantPattern();
		//vfnDescendantPattern();
		//vfnDescendantPattern();
	}
	
	
	
	
	return 0;
}
