#include <ctype.h>
#include <stdio.h>

float convert_to_number_grade(char letter);

float compute_GPA(char grades[], int n);

int main() {
	int n = 7;
	char grades[] = {'A', 'B', 'C', 'b', 'd', 'f', 'A'};

	printf("%.1f", compute_GPA(grades, n));

	return 0;
}

float compute_GPA(char grades[], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += convert_to_number_grade(grades[i]);
	}
	return sum / n;
}


float convert_to_number_grade(char letter) {
	switch (tolower(letter)) {
		case 'a':
			return 4;
		case 'b':
			return 3;
		case 'c':
			return 2;
		case 'd':
			return 1;
		default:
			return 0;
	}
}
