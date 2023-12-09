#include <stdio.h>

int main() {
   printf("Enter a positive integer: ");
   long double n;
   long double factorial = 1;
   scanf("%Lf", &n);
   for (int i = 1; i <= n; i++) {
      factorial *= i;
   }
   // Failure at 1755
   printf("Factorial of %.0Lf: %Lf", n, factorial);
   return 0;
}