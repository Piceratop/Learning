#include <stdio.h>

int sum_array(const int *, int);

int main() {
	int n = 5;
	int arr[] = {12, 42, 92, 67, 38};
	printf("The sum of all elements in the array is %d.\n", sum_array(arr, n));
	return 0;
}

int sum_array(const int *a, int n) {
	int sum = 0;
	const int *p;

	for (p = a; p < a + n; p++) 
		sum += *p;
	return sum;
}
