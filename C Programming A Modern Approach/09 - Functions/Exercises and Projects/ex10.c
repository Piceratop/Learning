# include <stdio.h>

int largest_element(int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		max = max > a[i] ?  max : a[i];
	}
	return max;
}

double average(int a[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum / n;
}

int no_positive(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += a[i] > 0;
	}
	return count;
}

int main() {
	int n = 5;
	int a[] = {23, -12, 0, 53, 34};
	printf("%d\n", largest_element(a, n));
	printf("%.2f\n", average(a, n));
	printf("%d", no_positive(a, n));

	return 0;
}
