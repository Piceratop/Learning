#include <stdio.h>

int main(void) {
   printf("Enter message to be encrypted: ");
   char ch, message[1000];
   int i = 0, shift;
   while ((ch = getchar()) != '\n')
   {
      message[i++] = ch;
   }

   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);

   printf("Encrypted message: ");
   for (int j = 0; j < i; j++) {
      char current_char = message[j];
      if (current_char >= 'a' && current_char <= 'z') {
         current_char = (current_char - 'a' + shift) % 26 + 'a';
      } else if (current_char >= 'A' && current_char <= 'Z') {
         current_char = (current_char - 'A' + shift) % 26 + 'A';
      }
      printf("%c", current_char);
   }

   return 0;
}