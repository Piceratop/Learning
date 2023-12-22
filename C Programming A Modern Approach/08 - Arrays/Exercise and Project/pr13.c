#include <stdio.h>

int main() {
   printf("Enter a first and last name: ");
   char initial, ch, last_name[100];
   initial = getchar();
   while ((ch = getchar()) != ' ');
   int i = 0;
   while ((ch = getchar()) != '\n') {
      last_name[i++] = ch;
   }
   printf("You entered the name: ");
   for (int j = 0; j < i; j++) {
      printf("%c", last_name[j]);
   }
   printf(", %c.", initial);
   return 0;
}