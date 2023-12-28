#include <stdio.h>

int selection_sort(int arr[], int n) {
   if (n > 1) {
      int max = arr[0], max_id = 0;
      for (int i = 1; i < n; i++) {
         if (arr[i] > max) {
            max = arr[i];
            max_id = i;
         }
      }
      int t = arr[n - 1];
      arr[n - 1] = max;
      arr[max_id] = t;
      selection_sort(arr, n - 1);
   }
}

int main(void) {
   int n;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the elements of the array: ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   selection_sort(arr, n);
   printf("Sorted array: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}