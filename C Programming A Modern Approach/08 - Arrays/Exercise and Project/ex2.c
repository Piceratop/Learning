#include <stdio.h>

int main(void) {
   int digit_count[10] = { 0 };
   char ch;
   while ((ch = getchar()) != EOF && ch != '\n') {
      if (ch >= '0' && ch <= '9')
         digit_count[ch - '0']++;
   }
   for (int i = 0; i < 10; i++)
      printf("%d ", digit_count[i]);
   return 0;
}