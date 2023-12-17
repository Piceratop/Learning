#include <stdio.h>

int main(void) {
   printf("Enter message: ");
   char ch, message[1000];
   int i, j;
   i = 0;
   while ((ch = getchar()) != '\n')
   {
      message[i] = ch;
      i++;
   }
   message[i] = '\0';
   printf("In B1FF-speak: ");
   for (j = 0; j < i; j++) {
      char current_char = message[j];
      switch (current_char) {
      case 'a': case 'A':
         printf("4");
         break;
      case 'b': case 'B':
         printf("8");
         break;
      case 'e': case 'E':
         printf("3");
         break;
      case 'i': case 'I':
         printf("1");
         break;
      case 'o': case 'O':
         printf("0");
         break;
      case 's': case 'S':
         printf("5");
         break;
      default:
         if (current_char >= 'a' && current_char <= 'z') {
            printf("%c", current_char - 32);
         } else {
            printf("%c", current_char);
         }
         break;
      }
   }
   printf("!!!!!!!!!!!!");
   return 0;
}