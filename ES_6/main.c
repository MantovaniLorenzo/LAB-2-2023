#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// scritto veramente male da migliorare


float ordina(float x, float y, float z, float t) {

	float max1, max2, max3;

	if (x > y) {
		max1 = x;
		max2 = y;
	}
	else {
		max1 = y;
		max2 = x;
	}

	if (max1 > z) {
		if (max2 > z) {
			max3 = z;
		}
		else {
			max3 = max2;
			max2 = z;
		}
	}
	else {
		max3 = max2;
		max2 = max1;
		max1 = z;

	}

		if (max1 > t) {
			if (max2 > t) {
				if (max3 > t) {
					printf("Il numero maggiore e' %f\n", max1);
					printf("Il secondo numero maggiore e' %f\n", max2);
					printf("Il terzo numero maggiore e' %f\n", max3);
				
				} else {
					max3 = t;
				}
			}
			else {
				max3 = max2;
				max2 = t;
			}
		} else {
			max3 = max2;
			max2 = max1;
			max1 = t;
		}

	printf("Il numero maggiore e' %f\n", max1);
	printf("Il secondo numero maggiore e' %f\n", max2);
	printf("Il terzo numero maggiore e' %f\n", max3);
}  

int main(void) {

	float a = 5.0, b = -2.0, c = 3.4, d= 3.0;

	ordina(a, b, c, d);
	return 0;

}