#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);
void reverse(char* message);

int main(void) {
   char message[1000];
   printf("Enter a message: ");
   read_line(message, 1000);
   printf("Reversal is: ");
   reverse(message);
   printf("%s\n", message);

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


void reverse(char* message) {
   char* start = message;
   char* end = message + strlen(message) - 1;
   while (start < end) {
      char temp = *start;
      *start = *end;
      *end = temp;
      start++;
      end--;
   }
}