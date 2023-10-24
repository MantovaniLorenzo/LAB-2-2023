#include <stdio.h>

int orario(a, b, c, d, e, f) {
	if (a < 0 || d < 0 || a >= 24 || d >= 24 || b < 0 || c < 0 || e < 0 || f < 0 || b >= 60 || c >= 60 || e >= 60 || f >= 60) {
		printf("Gli orari inseriti non sono validi");
		return -1;
	} else if (a == d && b == e && c == f) {
		printf("Gli orari coincidono");
	}
	else if (a < d || a == d && b < e || a== d && b == e && c < f) {
		printf("Il primo orario viene prima");
	}
	else if (a > d || a == d && b > e || a == d && b == e && c > f) {
		printf(" Il secondo orario viene prima");
	}

}

int main(void) {
	int h1, m1, s1, h2, m2, s2;

	h1 = 7, m1 = 50, s1 = 23, h2 = 7, m2 = 50, s2 = 22;

	int ris = orario(h1, m1, s1, h2, m2, s2);
	return 0;
}