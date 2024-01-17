#include <stdio.h>
#include <string.h>

void remove_filename(char* url);

int main(void) {
   char url[100] = "http://knking.com/index.html";
   remove_filename(url);
   printf("%s\n", url);
   return 0;
}

void remove_filename(char* url) {
   char* p = url + strlen(url) - 1;
   while (p >= url && *p != '/') p--;
   *p = '\0';
}