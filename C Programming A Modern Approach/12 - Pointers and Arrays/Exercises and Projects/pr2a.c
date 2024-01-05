#include <stdio.h>
#include <ctype.h>

int main(void) {
   char ch, message[1000];
   int top = 0, bottom = 0;
   printf("Enter a message: ");
   while ((ch = getchar()) != '\n' && top < 1000) {
      message[top] = ch;
      top++;
   }
   top--;
   while (top > bottom) {
      if (!isalpha(message[top])) {
         top--;
         continue;
      }
      if (!isalpha(message[bottom])) {
         bottom++;
         continue;
      }
      if (tolower(message[top]) != tolower(message[bottom])) {
         printf("Not a palindrome");
         return 0;
      }
      top--;
      bottom++;
   }

   printf("Palindrome");

   return 0;
}