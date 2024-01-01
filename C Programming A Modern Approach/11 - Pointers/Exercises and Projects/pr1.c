#include <stdio.h>

void pay_amount(int dollar, int* twenties, int* tens, int* fives, int* ones);

int main(void) {
   int dollar, twenties, tens, fives, ones;
   printf("Enter amount: ");
   scanf("%d", &dollar);

   pay_amount(dollar, &twenties, &tens, &fives, &ones);
   printf("20s: %d\n10s: %d\n5s: %d\n1s: %d\n", twenties, tens, fives, ones);
   return 0;
}

void pay_amount(int dollar, int* twenties, int* tens, int* fives, int* ones) {
   *twenties = dollar / 20;
   dollar %= 20;
   *tens = dollar / 10;
   dollar %= 10;
   *fives = dollar / 5;
   dollar %= 5;
   *ones = dollar;
}