#include <stdio.h>

#define MAX_SENTENCE_LENGTH 30
#define MAX_WORD_LENGTH 20

int main(void) {
   printf("Enter a sentence: ");
   char word[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH + 1];
   int i = 0, j = 0;
   char ch, punctuation_mark;
   while (1) {
      ch = getchar();
      if (ch == ' ') {
         word[j][i] = '\0';
         i = 0;
         j++;
      } else if (ch == '.' || ch == '!' || ch == '?') {
         word[j][i] = '\0';
         punctuation_mark = ch;
         break;
      } else if (i < MAX_WORD_LENGTH - 1)
         word[j][i++] = ch;
   }

   printf("Reversal of the sentence: ");
   for (;j >= 0; j--) {
      printf("%s ", word[j]);
   }
   printf("\b%c\n", punctuation_mark);
   return 0;
}