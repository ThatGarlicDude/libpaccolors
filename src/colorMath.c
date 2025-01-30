#include "colorResistor.h"
#include "colorResistorSet.h"
#include <stdio.h>

float percentageOfRedResistor(ColorResistor crp, ColorResistorSet* rsp) {
	unsigned short redResistorsTotal = totalRedResistors(rsp);
	float percentage = (float) crp / redResistorsTotal;
	return percentage;
}
