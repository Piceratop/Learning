#include <stdio.h>

int main() {
    long num1, num2, denom1, denom2, result_num, result_denom;
    char operation;
    printf("Enter an equation with two fractions: ");
    scanf("%ld / %ld %c %ld / %ld", &num1, &denom1, &operation, &num2, &denom2);
    switch (operation) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
            break;
    }
    printf("Result: %ld/%ld\n", result_num, result_denom);
    return 0;
}