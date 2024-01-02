#include <stdio.h>

#define ARR_LENGTH 5

double inner_product(const double *a, const double *b, int n);

int main() {
	double a[ARR_LENGTH] = {0.6, 9.3, 4.9, 4.7, 5.7};
	double b[ARR_LENGTH] = {8.4, 6, 4.3, 8.6, 2.2};
	printf("The inner product of two arrays is %lf.\n", inner_product(a, b, ARR_LENGTH));
	return 0;
}

double inner_product(const double *a, const double *b, int n) {
	const double *p, *q;
	double prod = 0;
	for (p = a, q = b; p < a + n; p++, q++)
		prod += *p * *q;
	return prod;
}
