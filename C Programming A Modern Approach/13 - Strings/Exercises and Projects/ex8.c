/* tired-or-wired? */

#include <stdio.h>
#include <string.h>

int main(void) {
   char str[100];
   strcpy(str, "tire-bouchon");
   strcpy(&str[4], "d-or-wi");
   strcat(str, "red?");
   printf("%s\n", str);
   return 0;
}