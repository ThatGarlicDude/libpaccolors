// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"

int main() {
	ColorResistorSet* rsp = &defaultSet;
	ColorResistor crp = defaultSet.redResistors[2];
	float calc = percentageOfRedResistor(crp, rsp);
	printf("Percentage of red resistor is: %f\n", calc);
	return 0;
}
