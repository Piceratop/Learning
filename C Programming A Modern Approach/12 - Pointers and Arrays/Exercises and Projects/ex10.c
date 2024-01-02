#include <stdio.h>

int *find_middle (int *a, int n);

int main() {
	int n = 6;
	int arr[] = {12, 22, 23, 34, 44, 45};
	printf("The position of the middle element is %p.\n", find_middle(arr, n));
	return 0;
}

int *find_middle (int *a, int n) {
	return a + (n / 2);
}
