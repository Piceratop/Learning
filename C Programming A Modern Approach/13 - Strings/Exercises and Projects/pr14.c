#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool are_anagrams(const char* word1, const char* word2);

int main(void) {
   char first_word[100], second_word[100];
   printf("Enter first word: ");
   scanf("%s", first_word);
   printf("Enter second word: ");
   scanf("%s", second_word);

   if (are_anagrams(first_word, second_word))
      printf("The words are anagrams.\n");
   else
      printf("The words are not anagrams.\n");

   return 0;
}

bool are_anagrams(const char* word1, const char* word2) {
   char word1_copy[100], word2_copy[100];
   strcpy(word1_copy, word1);
   strcpy(word2_copy, word2);
   for (int i = 0; i < strlen(word1_copy); i++)
      word1_copy[i] = tolower(word1_copy[i]);
   for (int i = 0; i < strlen(word2_copy); i++)
      word2_copy[i] = tolower(word2_copy[i]);

   int word1_char_count[26] = { 0 }, word2_char_count[26] = { 0 };
   for (int i = 0; i < strlen(word1_copy); i++)
      word1_char_count[word1_copy[i] - 'a']++;
   for (int i = 0; i < strlen(word2_copy); i++)
      word2_char_count[word2_copy[i] - 'a']++;

   for (int i = 0; i < 26; i++)
      if (word1_char_count[i] != word2_char_count[i])
         return false;

   return true;
}

