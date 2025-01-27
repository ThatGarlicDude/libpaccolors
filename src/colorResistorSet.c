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
	220, 470, 1000,		// Red Resistors
	220, 470, 1000,		// Green Resistors
	220, 470		// Blue Resistors
};
