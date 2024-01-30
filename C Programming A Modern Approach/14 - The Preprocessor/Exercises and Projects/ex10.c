#include <stdio.h>
#define ERROR(...) fprintf(stderr, __VA_ARGS__)

int main(void) {
   ERROR("Error message\n");
   return 0;
}