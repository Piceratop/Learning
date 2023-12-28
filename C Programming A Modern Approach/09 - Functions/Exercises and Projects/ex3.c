#include <stdio.h>

int gcd(int m, int n) {
   if (n == 0) {
      return m;
   }
   return gcd(n, m % n);
}

int main() {
   int m, n;
   printf("Enter the value of m: ");
   scanf("%d", &m);
   printf("Enter the value of n: ");
   scanf("%d", &n);
   printf("%d\n", gcd(m, n));
   return 0;
}