#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int read_line(char str[], int n);
bool is_palindrome(const char* message);

int main(void) {
   char message[1000];
   printf("Enter a message: ");
   read_line(message, 1000);

   if (is_palindrome(message))
      printf("Palindrome");
   else
      printf("Not a palindrome");

   return 0;
}

int read_line(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n)
         str[i++] = ch;
   str[i] = '\0';
   return i;
}

bool is_palindrome(const char* message) {
   const char* top = message;
   const char* bottom = message + strlen(message) - 1;
   while (top > bottom) {
      if (!isalpha(*top)) {
         top--;
         continue;
      }
      if (!isalpha(*bottom)) {
         bottom++;
         continue;
      }
      if (tolower(*top) != tolower(*bottom))
         return false;
      top--;
      bottom++;
   }
   return true;
}