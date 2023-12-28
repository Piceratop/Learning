#include <stdbool.h>
#include <stdio.h>

bool has_zero(int a[], int n) {
	int i;

	for (i = 0; i < n; i++) 
		if (a[i] == 0)
			return true;
	return false;
}

int main() {
	int n = 5, arr[] = {9, 8, -7, 6, 0};
	printf("%d\n", has_zero(arr, n));

	return 0;
}
