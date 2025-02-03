#ifndef COLOR_MATH_H
#define COLOR_MATH_H

	#include "colorResistor.h"
	#include "colorResistorSet.h"

	float percentageOfRedResistor(ColorResistor crp, ColorResistorSet* rsp);
	float percentageOfGreenResistor(ColorResistor crp, ColorResistorSet* rsp);
	float percentageOfBlueResistor(ColorResistor crp, ColorResistorSet* rsp);

	float floorNumber(float number);
	float ceilNumber(float number);
	float roundNumber(float number);
#endif
