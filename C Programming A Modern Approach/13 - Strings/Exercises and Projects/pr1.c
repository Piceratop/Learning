#include <stdio.h>
#include <string.h>

int main(void) {
   char smallest_word[21] = "", longest_word[21] = "", current_word[21];
   do {
      printf("Enter a word: ");
      scanf("%20s", current_word);
      if (strcmp(current_word, smallest_word) < 0 || strlen(smallest_word) == 0)
         strcpy(smallest_word, current_word);
      if (strcmp(current_word, longest_word) > 0)
         strcpy(longest_word, current_word);
   } while (strlen(current_word) != 4);

   printf("Smallest word: %s\n", smallest_word);
   printf("Longest word: %s\n", longest_word);

   return 0;
}