#include <stdio.h>

int main(void) {
   int numerator, denominator;
   printf("Enter a fraction: ");
   scanf("%d / %d", &numerator, &denominator);
   int m = numerator, n = denominator, gcd;
   while (n > 0) {
      gcd = n;
      n = m % n;
      m = gcd;
   }
   printf("In lowest term: %d/%d\n", numerator / gcd, denominator / gcd);
   return 0;
}