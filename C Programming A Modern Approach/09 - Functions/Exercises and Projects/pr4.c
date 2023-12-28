#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
   int first_word_count[26] = { 0 };
   int second_word_count[26] = { 0 };
   printf("Enter first word: ");
   read_word(first_word_count);
   printf("Enter second word: ");
   read_word(second_word_count);

   if (equal_array(first_word_count, second_word_count))
      printf("The words are anagrams.\n");
   else
      printf("The words are not anagrams.\n");

   return 0;
}

void read_word(int counts[26]) {
   char ch;
   while ((ch = getchar()) != '\n') {
      if (isalpha(ch))
         counts[tolower(ch) - 'a']++;
   }
}

bool equal_array(int counts1[26], int counts2[26]) {
   for (int i = 0; i < 26; i++) {
      if (counts1[i] != counts2[i])
         return false;
   }
   return true;
}