#include <stdio.h>

int* find_largest(int a[], int n);

int main(void) {
   int nums[] = { 10, 5, 7, 3, 8 };
   int size = 5;

   int* largest = find_largest(nums, size);
   printf("The largest number is: %d\n", *largest);
   printf("The address of the largest number is: %p\n", largest);

   return 0;
}

int* find_largest(int a[], int n) {
   int i;
   int* largest = &a[0];
   for (i = 0; i < n; i++) {
      if (a[i] > *largest) {
         largest = &a[i];
      }
   }
   return largest;
}