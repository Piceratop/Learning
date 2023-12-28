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

   int magic[size][size];
   for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
         magic[i][j] = 0;
      }
   }

   int row = 0, col = size / 2;

   for (int num = 1; num <= size * size; num++) {
      magic[row][col] = num;
      int a = row, b = col;
      row = (row - 1 + size) % size;
      col = (col + 1) % size;
      if (magic[row][col] != 0) {
         row = (a + 1) % size;
         col = b;
      }
   }

   for (row = 0; row < size; row++) {
      for (col = 0; col < size; col++) {
         printf("%5d", magic[row][col]);
      }
      printf("\n");
   }

   return 0;
}