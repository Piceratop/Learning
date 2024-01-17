#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char* file_name, const char* extension);

int main(void) {
   char file_name[100] = "index.cpp";
   char extension[100] = "c";
   printf("%s\n", test_extension(file_name, extension) ? "Yes" : "No");
   return 0;
}

bool test_extension(const char* file_name, const char* extension) {
   int i = strlen(file_name) - 1;
   for (; file_name[i] != '.' && i >= 0; i--);
   if (i < 0)
      return false;
   else {
      char file_extension_upper[100], extension_upper[100];
      int j = 0;
      for (i++; file_name[i] != '\0'; i++)
         file_extension_upper[j++] = toupper(file_name[i]);
      file_extension_upper[j] = '\0';
      for (i = 0; extension[i] != '\0'; i++)
         extension_upper[i] = toupper(extension[i]);
      extension_upper[i] = '\0';
      return !strcmp(file_extension_upper, extension_upper);
   }
}