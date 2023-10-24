#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int equazione(x, y, z) {

	double ris = (y * y) - (4 * x * z);

	if (ris > 0) {
		printf("L'equazione ha due soluzioni REALI distinte");
			return 0;
	}
	else if (ris == 0) {
		printf("L'equazione ha due soluzioni REALI coincidenti");
		return 1;
	}
	else if (ris < 0) {
		printf("L' equazione non ha soluzioni REALI");
		return -1;
	}

}


int main(void) {

	int a, b, c;

	printf("Inserisci i valori di a,b,c :");
	scanf("%d %d %d", &a, &b, &c);

	equazione(a, b, c);

	return 0;
}