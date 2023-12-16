#include <stdio.h>

int main() {
   int arr[40] = { 0, 1 };
   for (int i = 2; i < 40; i++)
      arr[i] = arr[i - 1] + arr[i - 2];
   for (int i = 0; i < 40; i++)
      printf("%d ", arr[i]);
   return 0;
}