#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main() {
	int n = 7;
	double a[] = {2.3, 4,7, 0.2, -0.6, -9.7, 6.9, 8.2};
	double b[] = {1, 2, 4.5, 3.4, -6, -0.2, 0, 12};

	printf("%lf\n", inner_product(a, b, n));

	return 0;
}

double inner_product(double a[], double b[], int n) {
	double product = 0;
	for (int i = 0; i < n; i++) {
		product += a[i] * b[i];
	}
	return product;
}
