#include <stdio.h>

void find_two_largest(int a[], int n, int* largest, int* second_largest);

int main(void) {
   int array[] = { 5, 8, 3, 2, 9 };
   int largest, second_largest;

   find_two_largest(array, sizeof(array) / sizeof(array[0]), &largest, &second_largest);

   printf("Largest: %d\n", largest);
   printf("Second Largest: %d\n", second_largest);

   return 0;
}

void find_two_largest(int a[], int n, int* largest, int* second_largest) {
   int i;
   *largest = a[0];
   *second_largest = a[1];
   for (i = 0; i < n; i++) {
      if (a[i] > *largest) {
         *second_largest = *largest;
         *largest = a[i];
      } else if (a[i] > *second_largest) {
         *second_largest = a[i];
      }
   }
}