#include <stdio.h>
#include <ctype.h>

int main(void) {
   char ch, message[1000];
   char* top = message, * bottom = message; // Use pointers instead of integers
   printf("Enter a message: ");
   while ((ch = getchar()) != '\n' && top < message + 1000) {
      *top = ch; // Use pointer dereference to assign value
      top++;
   }
   top--;
   while (top > bottom) {
      if (!isalpha(*top)) { // Use pointer dereference for comparison
         top--;
         continue;
      }
      if (!isalpha(*bottom)) { // Use pointer dereference for comparison
         bottom++;
         continue;
      }
      if (tolower(*top) != tolower(*bottom)) { // Use pointer dereference for comparison
         printf("Not a palindrome");
         return 0;
      }
      top--;
      bottom++;
   }

   printf("Palindrome");

   return 0;
}