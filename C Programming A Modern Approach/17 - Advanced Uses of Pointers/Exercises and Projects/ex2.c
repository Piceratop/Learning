#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(char str[]);

int main(void) {
   char* str = duplicate("hello");
   printf("%s\n", str);
   free(str);
   return 0;
}

char* duplicate(char str[]) {
   char* duplicate = malloc(strlen(str) + 1);
   if (duplicate == NULL) {
      return NULL;
   }
   strcpy(duplicate, str);
   return duplicate;
}