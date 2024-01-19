#include <ctype.h>
#include <stdio.h>

int compute_scrabble_value(const char* word);

int main() {
   char word[100];
   printf("Enter a word: ");
   scanf("%15s", word);
   printf("Scrabble value: %d\n", compute_scrabble_value(word));
   return 0;
}

int compute_scrabble_value(const char* word) {
   int sum_point = 0;
   for (int i = 0; word[i]; i++)
      switch (toupper(word[i])) {
      case 'A':
      case 'E':
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
         sum_point += 1;
         break;
      case 'D':
      case 'G':
         sum_point += 2;
         break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
         sum_point += 3;
         break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
         sum_point += 4;
         break;
      case 'K':
         sum_point += 5;
         break;
      case 'J':
      case 'X':
         sum_point += 8;
         break;
      case 'Q':
      case 'Z':
         sum_point += 10;
         break;
      default:
         break;
      }

   return sum_point;
}