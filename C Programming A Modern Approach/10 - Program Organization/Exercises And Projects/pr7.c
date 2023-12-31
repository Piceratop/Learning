#include <stdio.h>

#define MAX_DIGITS 10

int segment[10][7] = {
   {1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1},
   {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
   {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1},
   {1, 1, 1, 1, 0, 1, 1}
};

void clear_digits_array(char digits[3][MAX_DIGITS * 4]);
void process_digits(char digits[3][MAX_DIGITS * 4], int digit, int position);
void print_digits_array(char digits[3][MAX_DIGITS * 4]);

int main(void) {
   int top = 0;
   char digits[3][MAX_DIGITS * 4] = { 0 };

   clear_digits_array(digits);

   char ch;
   printf("Enter a number: ");
   while ((ch = getchar()) != '\n') {
      if (ch >= '0' && ch <= '9') {
         process_digits(digits, ch - '0', top);
         top += 4;
      }
   }

   print_digits_array(digits);

   return 0;
}

void clear_digits_array(char digits[3][MAX_DIGITS * 4]) {
   for (int i = 0; i < MAX_DIGITS * 4; i++)
      for (int j = 0; j < 3; j++)
         digits[j][i] = ' ';
}

void process_digits(char digits[3][MAX_DIGITS * 4], int digit, int position) {
   if (position < MAX_DIGITS * 4) {
      digits[0][position + 1] = segment[digit][0] ? '_' : ' ';

      digits[1][position + 0] = segment[digit][5] ? '|' : ' ';
      digits[1][position + 1] = segment[digit][6] ? '_' : ' ';
      digits[1][position + 2] = segment[digit][1] ? '|' : ' ';

      digits[2][position + 0] = segment[digit][4] ? '|' : ' ';
      digits[2][position + 1] = segment[digit][3] ? '_' : ' ';
      digits[2][position + 2] = segment[digit][2] ? '|' : ' ';
   }
}

void print_digits_array(char digits[3][MAX_DIGITS * 4]) {
   for (int j = 0; j < 3; j++) {
      for (int i = 0; i < MAX_DIGITS * 4; i++) {
         printf("%c", digits[j][i]);
      }
      printf("\n");
   }
}