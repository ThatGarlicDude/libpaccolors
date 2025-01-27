// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"

int main() {
	ColorResistorSet* rsp = &defaultSet;
	size_t redResistorSetSize = getRedResistorSize(rsp);
	size_t greenResistorSetSize = getGreenResistorSize(rsp);
	size_t blueResistorSetSize = getBlueResistorSize(rsp);
	printf("Size of the red resistors is: %zu\n", redResistorSetSize);
	printf("Size of the green resistors is: %zu\n", greenResistorSetSize);
	printf("Size of the blue resistors is: %zu\n", blueResistorSetSize);
	return 0;
}
