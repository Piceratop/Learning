#include <stdio.h>

int read_line(char str[], int n);
void encrypt(char* message, int shift);

int main(void) {
   printf("Enter message to be encrypted: ");
   char message[1000];
   int shift;

   read_line(message, 1000);

   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);

   printf("Encrypted message: ");
   encrypt(message, shift);

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

void encrypt(char* message, int shift) {
   for (; *message; message++) {
      char current_char = *message;
      if (current_char >= 'a' && current_char <= 'z') {
         *message = (current_char - 'a' + shift) % 26 + 'a';
      } else if (current_char >= 'A' && current_char <= 'Z') {
         *message = (current_char - 'A' + shift) % 26 + 'A';
      }
   }
}

