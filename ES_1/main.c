#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int massimo(float x, float y, float z) {

	int max;

	if (x > y && x > z) {
		max = 1;
	} else {
		if (y > x && y > z) {
			max = 2;
		}
		else if (z > x && z > y) {
			max = 3;
		}
	}
	return  max;

}




	

int main(void) {

	float a,b, c;
	int ris;

	printf("Definisci il valore di a in double: ");
	scanf("%f", &a);
	printf("Definisci il valore di b in double: ");
	scanf("%f", &b);
	printf("Definisci il valore di c in double: ");
	scanf("%f", &c);


	ris = massimo(a, b, c);

	printf("Il main torna %d", ris);



	return 0;
}
