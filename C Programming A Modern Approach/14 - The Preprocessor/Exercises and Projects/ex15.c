#include <stdio.h>

#define ENGLISH
#define FRENCH
#define SPANISH

#ifdef ENGLISH
#define INSERT(x) ("Insert Disk " #x)
#elif defined FRENCH
#define INSERT(x) ("Insérez le disque " #x)
#elif defined SPANISH
#define INSERT(x) ("Inserte el disco " #x)
#else
#error "Unknown language"
#endif

int main(void) {
   printf("%s\n", INSERT(1));
   return 0;
}