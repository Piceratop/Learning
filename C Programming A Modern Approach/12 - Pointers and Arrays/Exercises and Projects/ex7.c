#include <stdio.h>
#include <stdbool.h>

#define ARR_LENGTH 7

bool search(const int a[], int n, int key);

int main() {
	int arr[ARR_LENGTH] = {2, 4, 5, 2, 6, 7, 8};
	int key = 7;
	if (search(arr, ARR_LENGTH, key))
		printf("%d exists in the array.", key);
	else
		printf("%d does not exist in the array.", key);
	return 0;
}

bool search(const int a[], int n, int key) {
	const int *p;

	for (p = a; p < a + n; p++)
		if (*p == key) return true;

	return false;
}
