#include <stdio.h>

int *find_largest(int *a, int n);

int main() {
	int n = 6;
	int arr[] = {3, 5, 2, 9 ,1, 8};
	printf("The pointer of the higest element is %p.\n", find_largest(arr, n));
	return 0;
}

int *find_largest(int *a, int n) {
	int max_value = *a;
	int *max_pointer = a;
	for (int *p = a + 1; p < a + n; p++) {
		if (*p > max_value) {
			max_value = *p;
			max_pointer = p;
		}
	}
	return max_pointer;
}
