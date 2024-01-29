#include <stdio.h>
#define CHECK(x, y, n) ((x) >= 0 && (y) >= 0 && (x) < (n) && (y) < (n))
#define MEDIAN(x, y, z) ((x) > (y) ? ((y) > (z) ? (y) : ((x) > (z) ? (z) : (x))) : ((x) > (z) ? (x) : ((y) > (z) ? (z) : (y))))
#define POLYNOMIAL(x) (-6 + (x) * (7 + (x) * (-1 + (x) * (-5 + (x) * (2 + (x) * 3)))))

int main(void) {
   int x = 3, y = 4, n = 5;
   printf("%d\n", CHECK(x, y, n));
   printf("%d\n", MEDIAN(x, y, n));
   printf("%d\n", POLYNOMIAL(x));
   return 0;
}