#include <stdio.h>
int main() {
    int n, factorial = 1;
    float sum = 1;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += 1.0 / factorial;
    }
    printf("e is approximately %.2f", sum);
    return 0;
}