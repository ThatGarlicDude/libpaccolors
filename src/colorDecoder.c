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
		
	}
	return rgbColor;
}
