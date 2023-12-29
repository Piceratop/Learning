#include <stdio.h>

double evaluate(double x) {
   return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}

int main(void) {
   double x;
   printf("Enter a number: ");
   scanf("%lf", &x);
   printf("%f\n", evaluate(x));
   return 0;
}