
#include <stdio.h>

void store_zeros(int a[], int n);

int main() {
	int n = 7;
	int arr[n];
	store_zeros(arr, n);

	return 0;
}

void store_zeros(int a[], int n) {
	int *p;

	for (p = a; p < a + n; p++)
		*p = 0;
}
