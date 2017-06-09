//ARMduino blinky example

#include "armduino.h"							//include ARMduino defs

#define LEDR		PF1						//LED attached to PF1R/2B/3G
#define LEDB		PF2
#define LEDG		PF3
#define LED_DLY		100						//waste some time, in ms

//user setup
void setup(void) {
	pinMode(LEDB, OUTPUT);						//set LED as output
}

//user loop
void loop(void) {
	digitalWrite(LEDB, !digitalRead(LEDB));	//4903us
	delay(LED_DLY);
}
