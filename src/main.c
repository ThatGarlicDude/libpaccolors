// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"

int main() {
	ColorResistorSet* rsp = &defaultSet;
	unsigned short redResistorsTotal = totalRedResistors(rsp);
	unsigned short greenResistorsTotal = totalGreenResistors(rsp);
	unsigned short blueResistorsTotal = totalBlueResistors(rsp);
	printf("Total red resistors is: %u\n", redResistorsTotal);
	printf("Total green resistors is: %u\n", greenResistorsTotal);
	printf("Total blue resistors is: %u\n", blueResistorsTotal);
	return 0;
}
