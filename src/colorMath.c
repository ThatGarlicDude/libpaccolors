#include "colorResistor.h"
#include "colorResistorSet.h"
#include <stdio.h>
#include <math.h>

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

/*
Okay, so for whatever reason, I don't have the floor and ceil functions in
math.h. I don't know why, but for the sake of it, I will just make my own
floor function. It's very stupid.
*/
float floorNumber(float number) {
	return (int) number;
}

// Ditto.
float ceilNumber(float number) {
	float floored = (int) number;
	if (number == floored) {
		return floored;
	} else {
		return floored + 1.0f;
	}
}

// You know how this works.
float roundNumber(float number) {
	if (number >= floorNumber(number) + 0.5f) {
		return ceilNumber(number);
	} else {
		return floorNumber(number);
	}
}
