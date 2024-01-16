#include <stdio.h>
#include <string.h>

void build_index_url(const char* domain, char* index_url);

int main(void) {
   char domain[100];
   printf("Enter a domain: ");
   scanf("%s", domain);
   char index_url[1000];
   build_index_url(domain, index_url);
   printf("The index URL is: %s\n", index_url);

   return 0;
}

void build_index_url(const char* domain, char* index_url) {
   strcpy(index_url, "http://www.");
   strcat(index_url, domain);
   strcat(index_url, "/index.html");
}