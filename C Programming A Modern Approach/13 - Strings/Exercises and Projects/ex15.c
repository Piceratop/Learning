#include <stdio.h>

int f(char*, char*);

int main(void) {
   printf("%d %d\n", f("abcd", "babc"), f("abcd", "bcd"));
   return 0;
}

// In general, f returns the index of the first character in s that is not present in t.

int f(char* s, char* t) {
   char* p1, * p2;

   for (p1 = s; *p1; p1++) {
      for (p2 = t; *p2; p2++)
         if (*p1 == *p2) break;
      if (*p2 == '\0') break;
   }

   return p1 - s;
}