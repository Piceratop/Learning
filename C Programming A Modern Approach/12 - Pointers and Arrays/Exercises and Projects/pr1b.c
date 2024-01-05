#include <stdio.h>

int main(void) {
   char ch, message[1000], * ptr = message;
   printf("Enter a message: ");
   while ((ch = getchar()) != '\n' && ptr < message + 1000) {
      *ptr = ch;
      ptr++;
   }
   printf("Reversal is: ");
   for (ptr--; ptr >= message; ptr--)
      printf("%c", *ptr);

   return 0;
}