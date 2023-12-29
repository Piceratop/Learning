#include <stdio.h>

long long power(long long x, long long n) {
   if (n == 0) return 1;
   if (n % 2) return x * power(x, n - 1);
   long long a = power(x, n / 2);
   return (a * a);
}

int main(void) {
   long long x;
   int n;
   printf("Enter a number: ");
   scanf("%lld", &x);
   printf("Enter a power: ");
   scanf("%d", &n);
   printf("%lld\n", power(x, n));
   return 0;
}