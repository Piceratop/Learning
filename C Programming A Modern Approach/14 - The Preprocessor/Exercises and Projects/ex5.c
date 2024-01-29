#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void) {
   char s[5];
   int i;
   // Part a: D
   strcpy(s, "abcd");
   i = 0;
   putchar(TOUPPER(s[++i]));
   // Part b: 2
   strcpy(s, "0123");
   i = 0;
   putchar(TOUPPER(s[++i]));
   return 0;
}