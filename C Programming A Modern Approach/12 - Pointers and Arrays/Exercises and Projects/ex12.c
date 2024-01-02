#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main() {
	int n = 5, largest, second_largest;
	int arr[] = {65, 96, 74, 24, 97};
	find_two_largest(arr, 5, &largest, &second_largest);
	printf("The largest number is %d.\n", largest);
	printf("The second largest number is %d.\n", second_largest);
	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
	*largest = *a;
	*second_largest = *a;

	const int *p;
	for (p = a + 1; p < a + n; p++) {
		if (*p > *second_largest) {
			*second_largest = *p;
			if (*second_largest > *largest) {
				int temp = *second_largest;
				*second_largest = *largest;
				*largest = temp;
			}
		}
	}
}

