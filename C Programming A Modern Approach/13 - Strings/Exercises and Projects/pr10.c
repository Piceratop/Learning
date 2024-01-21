#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);
void reverse_name(char* name);

int main() {
   printf("Enter a first and last name: ");
   char full_name[100];
   read_line(full_name, 100);
   reverse_name(full_name);
   printf("%s\n", full_name);
   return 0;
}

int read_line(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n)
         str[i++] = ch;
   str[i] = '\0';
   return i;
}

void reverse_name(char* name) {
   int i, j;
   for (i = 0; name[i] == ' '; i++);
   char initial = name[i];
   for (j = strlen(name) - 1; name[j] == ' '; j--);
   name[j + 1] == '\0';
   for (; name[j] != ' '; j--);
   for (i = 0, j++; name[j]; i++, j++) {
      name[i] = name[j];
   }
   name[i] = ',';
   name[i + 1] = ' ';
   name[i + 2] = initial;
   name[i + 3] = '.';
   name[i + 4] = '\0';
}

