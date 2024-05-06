#include <stdio.h>
#include <stdlib.h>

void* my_malloc(int size);

int main(void) {
   int* ptr = my_malloc(sizeof(int));
   *ptr = 10;
   printf("%d\n", *ptr);
   free(ptr);
   return 0;
}

void* my_malloc(int size) {
   void* ptr = malloc(size);
   if (ptr == NULL) {
      printf("Unable to allocate memory.\n");
      exit(1);
   }
   return ptr;
}