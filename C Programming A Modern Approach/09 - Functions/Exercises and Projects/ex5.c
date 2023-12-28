#include <stdio.h>

int num_digits(int n) {
   int count = 0;
   do {
      n /= 10;
      count++;
   } while (n > 0);

   return count;
}

int main(void) {
   int n;
   printf("Enter an integer: ");
   scanf("%d", &n);

   printf("The number of digits in %d is %d\n", n, num_digits(n));

   return 0;
}