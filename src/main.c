// This file is used for testing purposes. It'll be deleted after this library is finished.

#include <stdio.h>
#include "colorResistor.h"
#include "colorResistorSet.h"
#include "colorMath.h"
#include "rgbTypeEnum.h"

int main() {
	float numbers[5] = {0.0f, 0.1f, 0.5f, 0.75f, 1.0f};
	for (int i = 0; i < 5; i++) {
		printf("The rounded number of %f is: %f\n", numbers[i], roundNumber(numbers[i]));
	}
	return 0;
}
