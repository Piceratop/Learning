#include <stdio.h>

int check(int x, int y, int n) {
   return 0 <= x && x <= n - 1 && 0 <= y && y <= n - 1;
}

int main() {
   int x, y, n;

   printf("Enter the value of x: ");
   scanf("%d", &x);
   printf("Enter the value of y: ");
   scanf("%d", &y);
   printf("Enter the value of n: ");
   scanf("%d", &n);

   printf("%d\n", check(x, y, n));

   return 0;
}