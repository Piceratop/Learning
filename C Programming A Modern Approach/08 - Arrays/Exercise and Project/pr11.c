#include <stdio.h>

int main(void) {
   printf("Enter phone number: ");
   char ch, phone_number[100];
   int i = 0;
   while ((ch = getchar()) != '\n') {
      phone_number[i++] = ch;
   }

   printf("In numeric form: ");
   for (int j = 0; j < i; j++) {
      switch (phone_number[j]) {
      case 'A': case 'B': case 'C':
         printf("2");
         break;
      case 'D': case 'E': case 'F':
         printf("3");
         break;
      case 'G': case 'H': case 'I':
         printf("4");
         break;
      case 'J': case 'K': case 'L':
         printf("5");
         break;
      case 'M': case 'N': case 'O':
         printf("6");
         break;
      case 'P': case 'Q': case 'R': case 'S':
         printf("7");
         break;
      case 'T': case 'U': case 'V':
         printf("8");
         break;
      case 'W': case 'X': case 'Y': case 'Z':
         printf("9");
         break;
      default:
         printf("%c", phone_number[j]);
      }
   }

   return 0;
}