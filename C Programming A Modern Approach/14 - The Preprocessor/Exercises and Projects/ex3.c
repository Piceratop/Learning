#include <stdio.h>
#define DOUBLE(x) 2*x

int main(void) {
   // Part a: 4
   printf("%d\n", DOUBLE(1 + 2));
   // Part b: 4
   printf("%d\n", 4 / DOUBLE(2));
   // Part c:
#undef DOUBLE
#define DOUBLE(x) (2*(x))
   printf("%d\n", DOUBLE(1 + 2));
   printf("%d\n", 4 / DOUBLE(2));
   return 0;
}