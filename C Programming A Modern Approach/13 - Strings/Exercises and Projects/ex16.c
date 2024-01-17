#include <stdio.h>

int count_space(const char*);

int main(void) {
   char str[100] = "This  is a    sample string.   ";
   printf("The string %s has %d spaces.\n", str, count_space(str));
   return 0;
}

int count_space(const char* str) {
   int count = 0;
   while (*str) {
      if (*str == ' ')
         count++;
      str++;
   }
   return count;
}