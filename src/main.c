// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"
#include "rgbTypeEnum.h"

int main() {
	ColorResistorSet defaultSet = getDefaultColorResistorSet();
	printf("Value of first red resistor is: %d\n", defaultSet.redResistors[0]);
	return 0;
}
