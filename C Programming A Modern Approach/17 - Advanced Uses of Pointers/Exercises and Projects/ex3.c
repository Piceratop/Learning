#include <stdio.h>
#include <stdlib.h>

int* create_array(int n, int initial_value);

int main(void) {
   int* array = create_array(5, 10);
   for (int i = 0; i < 5; i++) {
      printf("%d ", array[i]);
   }
   free(array);
   return 0;
}

int* create_array(int n, int initial_value) {
   int* array = malloc(n * sizeof(int));
   if (array == NULL) {
      return NULL;
   }
   for (int i = 0; i < n; i++) {
      array[i] = initial_value;
   }
   return array;
}