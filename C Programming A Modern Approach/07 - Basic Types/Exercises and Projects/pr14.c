#include <stdio.h>
#include <math.h>

int main() {
   double x, y = 1;
   printf("Enter a positive number: ");
   scanf("%lf", &x);
   while (fabs((x / y + y) / 2 - y) >= 0.00001 * y) {
      y = (x / y + y) / 2;
   }
   printf("Square root: %f", y);
   return 0;
}