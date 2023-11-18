#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The reversal is: ");
    do {
        printf("%d", n % 10);
    } while ((n /= 10) > 0);
    return 0;
}