#include <stdio.h>

#define N 10

int main() {
	double ident[N][N];
	int zero = 0;
	for (double *p = ident[0]; p < ident[0] + (N * N); p++)
		if (zero) {
			*p = 0.0;
			zero--;
		} else {
			*p = 1;
			zero = N;
		}

	zero = N;
	for (double *p = ident[0]; p < ident[0] + (N * N); p++) {
		printf("%.2lf ", *p);
		zero--;
		if (!zero) {
			zero = N;
			printf("\n");
		}
	}
	return 0;
}
