#include "sam.h"
#include "board_init.h"

#include "event.h"		// unsure
#include "bsp.h"
#include "bsp_gpio.h"
#include "bsp_sercom.h"
#include "bsp_nvmctrl.h"

int main(void)
{
	/* Initialize the SAM system */
	SystemInit();
	board_init();

	/*
	 * I need things for a really minimal set up:
	 * 	- a way to control gpio
	 * 	- a way to set up gpio
	 * 	- a map of the seesaw pins to gpio
	 * 	- a delay mechanism
	 * this will give me a blinking led
	 */
}
