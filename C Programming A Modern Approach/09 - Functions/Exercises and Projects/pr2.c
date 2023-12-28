#include <stdio.h>

float calculate_tax(float income) {
   float tax;
   if (income < 750.00f) {
      tax = income * 0.01f;
   } else if (income < 2250.00f) {
      tax = 7.5f + (income - 750.00f) * 0.02f;
   } else if (income < 3750.00f) {
      tax = 37.5f + (income - 2250.00f) * 0.03f;
   } else if (income < 5250.00f) {
      tax = 82.5f + (income - 3750.00f) * 0.04f;
   } else if (income < 7000.00f) {
      tax = 142.5f + (income - 5250.00f) * 0.05f;
   } else {
      tax = 230.0f + (income - 7000.00f) * 0.06f;
   }
   return tax;
}

int main() {
   float income, tax;
   printf("Enter taxable income: ");
   scanf("%f", &income);
   tax = calculate_tax(income);
   printf("Tax: $%.2f\n", tax);
   return 0;
}
