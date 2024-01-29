#include <stdio.h>

#define GENERIC_MAX(type) \
type type##_max(type x, type y) { \
   return x > y ? x : y; \
}
GENERIC_MAX(long)

typedef unsigned long ULONG;
GENERIC_MAX(ULONG)

int main(void) {
   long x = 22102345, y = 23456789;
   printf("%ld\n", long_max(x, y));
   ULONG z = 192102345, w = 123456789;
   printf("%lu\n", ULONG_max(z, w));
   return 0;
}