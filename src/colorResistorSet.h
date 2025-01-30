#ifndef COLOR_RESISTOR_SET_H
#define COLOR_RESISTOR_SET_H

	#include <stdio.h>
	#include "colorResistor.h"

	typedef struct {
		ColorResistor redResistors[3];
		ColorResistor greenResistors[3];
		ColorResistor blueResistors[2];
	} ColorResistorSet;

	extern const ColorResistorSet defaultSet;

	size_t getRedResistorSize(ColorResistorSet* rsp);
	size_t getGreenResistorSize(ColorResistorSet* rsp);
	size_t getBlueResistorSize(ColorResistorSet* rsp);

	unsigned short totalRedResistors(ColorResistorSet* rsp);
	unsigned short totalGreenResistors(ColorResistorSet* rsp);
	unsigned short totalBlueResistors(ColorResistorSet* rsp);

#endif
