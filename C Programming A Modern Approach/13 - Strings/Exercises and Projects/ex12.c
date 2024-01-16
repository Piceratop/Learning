#include <stdio.h>
#include <string.h>

void get_extension(const char* file_name, char* extension);

int main(void) {
   char file_name[100];
   char extension[100];
   printf("Enter a file name: ");
   scanf("%s", file_name);
   get_extension(file_name, extension);
   printf("%s\n", extension);
   return 0;
}

void get_extension(const char* file_name, char* extension) {
   int i = strlen(file_name) - 1;
   for (; file_name[i] != '.' && i >= 0; i--);
   if (i < 0)
      strcpy(extension, "");
   else
      strcpy(extension, file_name + i + 1);
}