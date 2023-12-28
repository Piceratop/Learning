#include <stdio.h>

double median(double x, double y, double z) {
	double median;
	if ((x - y) * (y - z) >= 0) median = y;
	else if ((y - z) * (z - x) >= 0) median = z;
	else median = x;
	return median;
}

int main() {
	double x = 5.3, y = 4.7, z = 5;
	printf("%f\n", median(x, y, z));
	return 0;
}
