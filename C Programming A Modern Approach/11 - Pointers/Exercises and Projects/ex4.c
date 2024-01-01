#include <stdio.h>

void swap(int* a, int* b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main(void) {
   int a = 5, b = 10;
   swap(&a, &b);
   printf("a = %d, b = %d\n", a, b);
   return 0;
}