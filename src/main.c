// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"
#include "rgbTypeEnum.h"

int main() {
	ColorResistorSet defaultSet = getDefaultColorResistorSet();
	float redPercentage = percentageOfRedResistor(defaultSet.redResistors[0], &defaultSet);
	float greenPercentage = percentageOfGreenResistor(defaultSet.greenResistors[2], &defaultSet);
	float bluePercentage = percentageOfBlueResistor(defaultSet.blueResistors[1], &defaultSet);
	printf("Percentage of first red resistor is: %f\n", redPercentage);
	printf("Percentage of third green resistor is: %f\n", greenPercentage);
	printf("Percentage of second blue resistor is: %f\n", bluePercentage);
	return 0;
}
