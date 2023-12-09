#include <stdio.h>

int main() {
   printf("Enter a positive integer: ");
   short n, factorial = 1;
   scanf("%hd", &n);
   for (short i = 1; i <= n; i++) {
      factorial *= i;
   }
   // Failure at 8
   printf("Factorial of %hd: %hd", n, factorial);
   return 0;
}