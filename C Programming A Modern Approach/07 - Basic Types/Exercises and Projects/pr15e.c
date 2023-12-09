#include <stdio.h>

int main() {
   printf("Enter a positive integer: ");
   float n;
   float factorial = 1;
   scanf("%f", &n);
   for (int i = 1; i <= n; i++) {
      factorial *= i;
   }
   // Failure at 35
   printf("Factorial of %.0f: %f", n, factorial);
   return 0;
}