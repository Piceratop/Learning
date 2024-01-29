#include <stdio.h>
#include <stdlib.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
   int array[] = { 1, 2, 3, 4, 5 };

   printf("NELEMS(array) = %d\n", NELEMS(array));

   return 0;
}