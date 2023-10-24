#include <stdio.h>

int verifica_anno(a, b, c) {
	double anno_bisestile=0; 
	anno_bisestile = c % 4;

	if (b <= 0 || b > 12 || c < 0 || a > 31 || a == 0 ) {
		printf("La data inserita non e' valida");

	} else if (b == 2 && a > 29 || b == 4 && a > 30 || b == 6 && a > 30 || b == 9 && a > 30 || b == 11 && a > 30) {
		printf("La data inserita non e' valida");

	}
	else if (anno_bisestile != 0 && b == 2 && a > 28) {
		printf("La data inserita non e' valida");

	} else printf("La  data inserita e' valida");

}

int main(void) {
	int g1, m1, a1;
	
	g1 = 29, m1 = 2, a1 = 2024;

	verifica_anno(g1, m1, a1);

	return 0;
}