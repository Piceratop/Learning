#include <ctype.h>
#include <stdio.h>

int compute_vowel_count(const char* sentence);

int main() {
   printf("Enter a sentence: ");
   char sentence[100];
   gets(sentence);
   printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
   return 0;
}

int compute_vowel_count(const char* sentence) {
   int vowel_count = 0;
   while (*sentence) {
      if (isalpha(*sentence) && (tolower(*sentence) == 'a' || tolower(*sentence) == 'e' || tolower(*sentence) == 'i' || tolower(*sentence) == 'o' || tolower(*sentence) == 'u'))
         vowel_count++;
      sentence++;
   }
   return vowel_count;
}
