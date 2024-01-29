#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER4(n) ((n) % 4)
#define PRODUCT_LESS_THAN_100(x, y) ((x) * (y) < 100)

int main(void) {
   int result = CUBE(5);
   int remainder = REMAINDER4(17);
   int productLessThan100 = PRODUCT_LESS_THAN_100(5, 20);

   printf("Result: %d\n", result);
   printf("Remainder: %d\n", remainder);
   printf("Product less than 100: %d\n", productLessThan100);

   return 0;
}