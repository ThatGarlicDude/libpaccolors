#include <stdint.h>
#include <math.h>
#include "colorMath.h"
#include "colorResistorSet.h"
#include "rgbColor.h"

// Decodes a byte from the color ROM to an 8-bit RGB value.
RGB decodeByte(uint_fast8_t byte, ColorResistorSet* rsp) {
	RGB rgbColor;
	uint_fast8_t currentBit = 0;
	// Red
	for (int i = 0; i < getRedResistorSize(rsp); i++) {
		uint_fast8_t bit = (byte >> i) & 1;
		float percentage = percentageOfRedResistor((*rsp).redResistors[i], rsp);
		float strength = percentage * bit;
		rgbColor.red += roundNumber(255 * strength);
	}
	// Green
	for (int i = 0; i < getGreenResistorSize(rsp); i++) {
		uint_fast8_t bit = (byte >> (i + 3)) & 1;
		float percentage = percentageOfGreenResistor((*rsp).greenResistors[i], rsp);
		float strength = percentage * bit;
		rgbColor.green += roundNumber(255 * strength);
	}
	// Blue
	for (int i = 0; i < getBlueResistorSize(rsp); i++) {
		uint_fast8_t bit = (byte >> (i + 6)) & 1;
		float percentage = percentageOfBlueResistor((*rsp).blueResistors[i], rsp);
		float strength = percentage * bit;
		rgbColor.blue += roundNumber(255 * strength);
	}
	// ^There needs to be a lot of cleaning to do.

	return rgbColor;
}
