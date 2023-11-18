#include <stdio.h>

int main() {
    float loan, interest, payment, num_payments;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%f", &num_payments);
    printf("\n");
    for (int i = 1; i <= num_payments; i++) {
        float interest_rate = interest / 1200;
        loan = loan * (1 + interest_rate) - payment;
        printf("Amount due on payment #%d: $%.2f\n", i, loan);
    }
    return 0;
}