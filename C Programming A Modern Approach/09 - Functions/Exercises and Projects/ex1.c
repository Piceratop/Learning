#include <stdio.h>

double triangle_area(double base, double height) {
   double product;
   product = base * height;
   return product / 2;
}

int main() {
   double base, height;
   printf("Enter the base: ");
   scanf("%lf", &base);
   printf("Enter the height: ");
   scanf("%lf", &height);
   printf("%f\n", triangle_area(base, height));
   return 0;
}