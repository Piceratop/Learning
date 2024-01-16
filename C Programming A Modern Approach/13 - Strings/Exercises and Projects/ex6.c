#include <stdio.h>

void censor(char* str);

int main(void) {
   char str[100];
   printf("Enter a string: ");
   fgets(str, 100, stdin);

   censor(str);
   printf("%s\n", str);

   return 0;
}

void censor(char* str) {
   for (char* p = str; *p != '\0' && *(p + 1) != '\0' && *(p + 2) != '\0'; p++)
      if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o') {
         *p = 'x';
         *(p + 1) = 'x';
         *(p + 2) = 'x';
      }
}