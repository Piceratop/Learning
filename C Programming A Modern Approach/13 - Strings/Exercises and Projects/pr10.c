#include <stdio.h>
#include <stdbool.h>

double compute_average_word_length(const char* sentence);

int main() {
   char sentence[100];
   printf("Enter a sentence: ");
   gets(sentence);
   printf("Average word length: %.1f\n", compute_average_word_length(sentence));
   return 0;
}

double compute_average_word_length(const char* sentence) {
   int word_count = 0;
   int character_count = 0;
   bool is_in_word = false;
   while (*sentence) {
      if (*sentence == ' ') {
         is_in_word = false;
      } else {
         if (!is_in_word) {
            is_in_word = true;
            word_count++;
         }
         character_count++;
      }
      sentence++;
   }
   if (word_count == 0)
      return 0;

   return (double)character_count / word_count;
}