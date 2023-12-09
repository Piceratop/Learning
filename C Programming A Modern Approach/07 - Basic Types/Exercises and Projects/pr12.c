#include <stdio.h>

int main() {
    float value, result;
    char operation;
    printf("Enter an expression: ");
    scanf("%f", &result);
    while ((operation = getchar()) != '\n') {
        switch (operation) {
            case '+':
                scanf("%f", &value);
                result += value;
                break;
            case '-':
                scanf("%f", &value);
                result -= value;
                break;
            case '*':
                scanf("%f", &value);
                result *= value;
                break;
            case '/':
                scanf("%f", &value);
                result /= value;
                break;
            default:
                break;
        }
    }
    printf("Value of expression: %f", result);
    return 0;
}