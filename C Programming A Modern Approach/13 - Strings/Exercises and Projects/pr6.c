#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main(int argc, char* argv[]) {
   char* planets[] = { "Mercury", "Venus", "Earth",
            "Mars", "Jupiter", "Saturn",
            "Uranus", "Neptune", "Pluto" };
   int i, j;

   for (i = 1; i < argc; i++) {
      for (int k = 0; argv[i][k]; k++) {
         if (k == 0)
            argv[i][k] = toupper(argv[i][k]);
         else
            argv[i][k] = tolower(argv[i][k]);
      }

      for (j = 0; j < NUM_PLANETS; j++)
         if (strcmp(argv[i], planets[j]) == 0) {
            printf("%s is planet %d\n", argv[i], j + 1);
            break;
         }
      if (j == NUM_PLANETS)
         printf("%s is not a planet\n", argv[i]);
   }

   return 0;
}