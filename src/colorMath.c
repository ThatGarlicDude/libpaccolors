#include "colorResistor.h"
#include "colorResistorSet.h"
#include <stdio.h>

/*
There going to have to be some optimizations for this code.
*/

// Gets the percentage of a red resistor's strength.
float percentageOfRedResistor(ColorResistor crp, ColorResistorSet* rsp) {
	unsigned short redResistorsTotal = totalRedResistors(rsp);
	float percentage = (float) crp / redResistorsTotal;
	return percentage;
}

// Gets the percentage of a green resistor's strength.
float percentageOfGreenResistor(ColorResistor crp, ColorResistorSet* rsp) {
	unsigned short greenResistorsTotal = totalGreenResistors(rsp);
	float percentage = (float) crp / greenResistorsTotal;
	return percentage;
}

// Gets the percentage of a blue resistor's strength.
float percentageOfBlueResistor(ColorResistor crp, ColorResistorSet* rsp) {
	unsigned short blueResistorsTotal = totalBlueResistors(rsp);
	float percentage = (float) crp / blueResistorsTotal;
	return percentage;
}
