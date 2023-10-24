#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int triangolo_check(x, y, z) {

	if (x < (y + z) && x >(y - z) && y < (x + z) && y >(x - z) && z < (x + y) && z >(x - y)) {
		triangolo(x, y, z);
	}
	else {
		printf("I valori inseriti non formano un triangolo. \n");
		return -1;
	}
}

int triangolo(x, y, z) {

	if (x == y && y == z && x == z) {
		printf("Il triangolo e' equilatero");
		return 0;
	} else if (x == y || y == z || z == x) {
		printf("Il triangolo e' un triangolo isoscele. \n");
		return 2;
	}
	else if (x != y && y != z && x != z) {
		printf("Il triangolo e' un triangolo scaleno. \n");
		return 1;
	}
}

int main(void) {

	int a, b, c, ris;


	printf("Inserisci i valori di a b c: ");
	scanf("%d %d %d", &a, &b, &c);

	ris =triangolo_check(a, b, c);

	printf("Il main torna %d \n", ris);

	return 0;


}