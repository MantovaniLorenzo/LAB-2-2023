#include <stdio.h>

int main(void) {
	unsigned int x0 = 0, x1 = 1, xi = x0 + x1, n = 20;
	printf("Serie di Fibonacci : %d %d ", x0, x1);

	for (int i = 3; i <= n; i++) {
		printf("%d ", xi);
		x0 = x1;
		x1 = xi;
		xi = x0 + x1;
	}
	return 0;
	}
	