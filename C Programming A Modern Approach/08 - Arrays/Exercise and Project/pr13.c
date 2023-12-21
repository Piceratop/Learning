#include <stdio.h>

int main(void) {
   printf("Enter a sentence: ");
   char word[50][50];
   int i = 0, j = 0;
   char ch, punctuation_mark;
   while (1) {
      ch = getchar();
      if (ch == ' ') {
         word[j][i] = '\0';
         i = 0;
         j++;
      } else if (ch == '.' || ch == '!' || ch == '?') {
         punctuation_mark = ch;
         break;
      } else
         word[j][i++] = ch;
   }

   printf("Reversal of the sentence: ");
   for (int k = j; k >= 0; k--) {
      i = 0;
      while (word[k][i] != '\0') {
         printf("%c", word[k][i]);
         i++;
      }
      if (k != 0)
         printf(" ");
   }
   printf("%c\n", punctuation_mark); // Print a newline character after the punctuation mark
   return 0;
}