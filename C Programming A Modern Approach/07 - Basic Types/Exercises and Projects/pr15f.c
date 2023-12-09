#include <stdio.h>

int main() {
   printf("Enter a positive integer: ");
   double n;
   double factorial = 1;
   scanf("%lf", &n);
   for (int i = 1; i <= n; i++) {
      factorial *= i;
   }
   // Failure at 171
   printf("Factorial of %.0lf: %lf", n, factorial);
   return 0;
}