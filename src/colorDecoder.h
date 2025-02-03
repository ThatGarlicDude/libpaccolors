#ifndef COLOR_DECODER_H
#define COLOR_DECODER_H

	#include <stdint.h>
	#include "rgbColor.h"
	#include "ColorResistorSet.h"

	RGB decodeByte(uint_fast8_t byte, ColorResistorSet* rsp);

#endif
