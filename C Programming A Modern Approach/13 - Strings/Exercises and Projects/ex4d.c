#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);

int main(void) {
   char str[100];
   read_line(str, 100);

   printf("%s\n", str);
   return 0;
}

int read_line(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n - 1)
         str[i++] = ch;
      else
         break;
   str[i] = '\0';
   return i;
}