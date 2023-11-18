#include <stdio.h>
int main() {
    int factorial = 1, i = 1;
    float error, sum = 1;
    printf("Enter the error: ");
    scanf("%f", &error);
    while (1.0 / factorial > error) {
        factorial *= i++;
        sum += 1.0 / factorial;
    }
    printf("e is approximately %.5f", sum);
    return 0;
}