#include <stdio.h>
#include <ctype.h>

void capitalize(char* str);

int main(void) {
   char str[100], ch;
   printf("Enter a string: ");
   int i = 0;
   while ((ch = getchar()) != '\n')
      str[i++] = ch;

   capitalize(str);
   printf("%s\n", str);
   return 0;
}

void  capitalize(char* str) {
   while (*str != '\0') {
      if (islower(*str))
         *str = toupper(*str);
      str++;
   }
}