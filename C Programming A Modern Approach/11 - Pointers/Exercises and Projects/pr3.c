#include <stdio.h>

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator);

int main(void) {
   int numerator, denominator, reduced_numerator, reduced_denominator;
   printf("Enter a fraction: ");
   scanf("%d / %d", &numerator, &denominator);

   reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
   printf("The reduced fraction is: %d / %d\n", reduced_numerator, reduced_denominator);

   return 0;
}

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator) {
   int m = numerator, n = denominator, gcd;
   while (n > 0) {
      gcd = n;
      n = m % n;
      m = gcd;
   }
   *reduced_numerator = numerator / gcd;
   *reduced_denominator = denominator / gcd;
}