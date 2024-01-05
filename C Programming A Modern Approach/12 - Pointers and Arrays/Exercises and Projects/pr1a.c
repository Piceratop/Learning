#include <stdio.h>

int main(void) {
   char ch, message[1000];
   int top = 0;
   printf("Enter a message: ");
   while ((ch = getchar()) != '\n' && top < 1000) {
      message[top] = ch;
      top++;
   }
   printf("Reversal is: ");
   for (int i = top - 1; i >= 0; i--)
      printf("%c", message[i]);

   return 0;
}