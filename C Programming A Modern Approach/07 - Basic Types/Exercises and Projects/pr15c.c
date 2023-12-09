#include <stdio.h>

int main() {
   printf("Enter a positive integer: ");
   int n;
   long factorial = 1;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++) {
      factorial *= i;
   }
   // Failure at 13
   printf("Factorial of %d: %ld", n, factorial);
   return 0;
}