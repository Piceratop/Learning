#include <stdio.h>
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define LINE_FILE "Line " TOSTRING(__LINE__) " in file " __FILE__

int main(void) {
   printf("%s\n", LINE_FILE);
   return 0;
}