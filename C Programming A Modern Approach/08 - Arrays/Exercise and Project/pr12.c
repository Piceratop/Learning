#include <ctype.h>
#include <stdio.h>

int main() {
   char cur_letter;
   int sum_point = 0, letter_valus[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
   printf("Enter a word: ");
   while ((cur_letter = getchar()) != '\n') {
      if (isalpha(cur_letter)) {
         sum_point += letter_valus[tolower(cur_letter) - 'a'];
      }
   }
   printf("Scrabble value: %d\n", sum_point);
   return 0;
}