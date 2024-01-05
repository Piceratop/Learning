#include <stdio.h>

int main(void) {
   printf("Enter a sentence: ");
   char word[50][50], * p = word[0];
   int q = 0;
   char ch, punctuation_mark;
   while (1) {
      ch = getchar();
      if (ch == ' ') {
         *p = '\0';
         q++;
         p = (char*)(word + q);
      } else if (ch == '.' || ch == '!' || ch == '?') {
         punctuation_mark = ch;
         break;
      } else {
         *p = ch;
         p++;
      }
   }

   printf("Reversal of the sentence: ");
   while (q >= 0) {
      p = (char*)(word + q);
      printf("%s", p);
      if (q != 0)
         printf(" ");
      q--;
   }
   printf("%c\n", punctuation_mark);
   return 0;
}