#include <stdio.h>

int main() {
    float loan, interest, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("\n");
    loan = loan * (1 + interest / 100 / 12) - payment;
    printf("Balance remaining after the first payment: $%.2f", loan);
    loan = loan * (1 + interest / 100 / 12) - payment;
    printf("\nBalance remaining after the second payment: $%.2f", loan);
    loan = loan * (1 + interest / 100 / 12) - payment;
    printf("\nBalance remaining after the third payment: $%.2f", loan);
    return 0;
}