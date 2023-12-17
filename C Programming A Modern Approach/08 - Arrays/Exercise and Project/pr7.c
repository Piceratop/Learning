#include <stdio.h>

int main(void) {
   int arr[5][5], i, j;
   for (i = 0; i < 5; i++) {
      printf("Enter row %d: ", i + 1);
      for (j = 0; j < 5; j++) {
         scanf("%d", &arr[i][j]);
      }
   }
   printf("\n");
   int row_sum, col_sum;
   printf("Row totals:");
   for (i = 0; i < 5; i++) {
      row_sum = 0;
      for (j = 0; j < 5; j++) {
         row_sum += arr[i][j];
      }
      printf(" %d", row_sum);
   }
   printf("\nColumn totals:");
   for (i = 0; i < 5; i++) {
      col_sum = 0;
      for (j = 0; j < 5; j++) {
         col_sum += arr[j][i];
      }
      printf(" %d", col_sum);
   }

   return 0;
}