// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"

int main() {
	size_t redResistorSetSize = sizeof(defaultSet.redResistors) / sizeof(ColorResistor);
	size_t greenResistorSetSize = sizeof(defaultSet.greenResistors) / sizeof(ColorResistor);
	size_t blueResistorSetSize = sizeof(defaultSet.blueResistors) / sizeof(ColorResistor);
	printf("Size of the red resistors is: %zu\n", redResistorSetSize);
	printf("Size of the green resistors is: %zu\n", greenResistorSetSize);
	printf("Size of the blue resistors is: %zu\n", blueResistorSetSize);
	return 0;
}
