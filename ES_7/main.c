#include <stdio.h>


int stampa_base(x) {
	if (x > 40 || x < 0) {
		printf("Il parametro e' sbagliato ");
	} else
		

	do {
		for (int i = 1; i <= x; i++) {
			printf("*");
		}
		--x;
		printf(" ");
	} while (x >= 0);
	printf("\n \n");
}

int disegna_figura(x) {
	if (x > 40 || x < 0) {
		printf("Il parametro e' sbagliato ");
	} else 
		
		do {
		for (int i = 1; i <= x; i++) {
			printf("*");
		}
		--x;
		printf("\n");
	} while (x >= 0);
}


int main(void) {
	 unsigned int n;

	 n = 40;

	stampa_base(n);
	disegna_figura(n);

	return 0;

}
