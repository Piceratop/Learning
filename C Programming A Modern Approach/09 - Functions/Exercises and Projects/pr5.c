#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
   printf("This program creates a magic square of a specified size.\n");
   printf("This size must be an odd number between 1 and 99.\n");

   int size;
   printf("Enter size of magic square: ");
   scanf("%d", &size);

   if (size % 2 == 0 || size < 1 || size > 99) {
      printf("Invalid size. Size must be an odd number between 1 and 99.\n");
      return 1;
   }

   char magic[size][size];

   create_magic_square(size, magic);
   print_magic_square(size, magic);

   return 0;
}

void create_magic_square(int n, char magic_square[n][n]) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         magic_square[i][j] = 0;
      }
   }

   int row = 0, col = n / 2;

   for (int num = 1; num <= n * n; num++) {
      magic_square[row][col] = num;
      int a = row, b = col;
      row = (row - 1 + n) % n;
      col = (col + 1) % n;
      if (magic_square[row][col] != 0) {
         row = (a + 1) % n;
         col = b;
      }
   }
}

void print_magic_square(int n, char magic_square[n][n]) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%5d", magic_square[i][j]);
      }
      printf("\n");
   }
}