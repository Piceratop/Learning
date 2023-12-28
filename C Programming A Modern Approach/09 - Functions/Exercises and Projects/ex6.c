#include <stdio.h>

int digit(int n, int k) {
   while (--k > 0) {
      n /= 10;
   }
   return n % 10;
}

int main(void) {
   int n;
   printf("Enter an integer: ");
   scanf("%d", &n);
   int k;
   printf("Enter a position: ");
   scanf("%d", &k);
   printf("%d\n", digit(n, k));
   return 0;
}