#include <stdio.h>

int main() {
   printf("Enter a positive integer: ");
   int n;
   long long factorial = 1;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++) {
      factorial *= i;
   }
   // Failure at 21
   printf("Factorial of %d: %lld", n, factorial);
   return 0;
}