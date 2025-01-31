#include <stdio.h>
#include "colorResistor.h"

/*
A ColorResistorSet is, as the name implies, a set of resistors used to
display color in a TV monitor. Because Pac-Man and Ms. Pac-Man are 8-bit
games, and the ROM that outputs the game's colors has 8 data buses, there are
8 resistors in a set, each with their varying strengths. Those resistors are
categorized by color. You know, red, green, blue.
*/
typedef struct {
	ColorResistor redResistors[3];
	ColorResistor greenResistors[3];
	ColorResistor blueResistors[2];
} ColorResistorSet;

// The resistors used in the PCB.
const ColorResistorSet defaultSet = {
	1000, 470, 220,		// Red Resistors
	1000, 470, 220,		// Green Resistors
	470, 220		// Blue Resistors
};

// Gets the resistors used in the PCB.
ColorResistorSet getDefaultColorResistorSet() {
	return defaultSet;
}

// Gets the amount of red resistors in the ColorResistorSet.
size_t getRedResistorSize(ColorResistorSet* rsp) {
	return sizeof((*rsp).redResistors) / sizeof(ColorResistor);
}

// Gets the amount of green resistors in the ColorResistorSet.
size_t getGreenResistorSize(ColorResistorSet* rsp) {
	return sizeof((*rsp).greenResistors) / sizeof(ColorResistor);
}

// Gets the amount of blue resistors in the ColorResistorSet.
size_t getBlueResistorSize(ColorResistorSet* rsp) {
	return sizeof((*rsp).blueResistors) / sizeof(ColorResistor);
}

// Gets the total amount of red resistors in a ColorResistorSet.
unsigned short totalRedResistors(ColorResistorSet* rsp) {
	size_t redResistorSize = getRedResistorSize(rsp);
	unsigned short totalResistors = 0;
	for (int i = 0; i < redResistorSize; i++) {
		totalResistors += (*rsp).redResistors[i];
	}
	return totalResistors;
}

// Gets the total amount of green resistors in a ColorResistorSet.
unsigned short totalGreenResistors(ColorResistorSet* rsp) {
	size_t greenResistorSize = getGreenResistorSize(rsp);
        unsigned short totalResistors = 0;
        for (int i = 0; i < greenResistorSize; i++) {
                totalResistors += (*rsp).greenResistors[i];
        }
        return totalResistors;
}

// Gets the total amount of blue resistros in a ColorResistor Set.
unsigned short totalBlueResistors(ColorResistorSet* rsp) {
	size_t blueResistorSize = getBlueResistorSize(rsp);
        unsigned short totalResistors = 0;
        for (int i = 0; i < blueResistorSize; i++) {
                totalResistors += (*rsp).blueResistors[i];
        }
        return totalResistors;
}
