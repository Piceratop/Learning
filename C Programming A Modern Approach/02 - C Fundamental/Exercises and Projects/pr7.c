#include <stdio.h>

int main() {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    printf("\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", amount / 20, amount % 20 / 10, amount % 20 % 10 / 5, amount % 20 % 10 % 5 / 1);
    return 0;
}