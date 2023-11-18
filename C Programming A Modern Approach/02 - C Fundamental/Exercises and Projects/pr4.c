#include <stdio.h>

int main(void) {
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $");
    printf("%.2f", amount * 1.05);
    return 0;
}