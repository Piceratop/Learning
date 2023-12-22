#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
   int first_word_count[26] = { 0 };
   int second_word_count[26] = { 0 };
   printf("Enter first word: ");
   char ch;
   while ((ch = getchar()) != '\n') {
      if (isalpha(ch))
         first_word_count[tolower(ch) - 'a']++;
   }
   printf("Enter second word: ");
   while ((ch = getchar()) != '\n') {
      if (isalpha(ch))
         second_word_count[tolower(ch) - 'a']++;
   }

   bool is_anagram = true;

   for (int i = 0; i < 26; i++) {
      if (first_word_count[i] != second_word_count[i]) {
         is_anagram = false;
         break;
      }
   }

   if (is_anagram)
      printf("The words are anagrams.\n");
   else
      printf("The words are not anagrams.\n");

   return 0;
}