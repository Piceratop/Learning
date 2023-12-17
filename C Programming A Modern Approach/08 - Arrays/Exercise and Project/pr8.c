#include <stdio.h>

int main(void) {
   int arr[5][5], i, j;
   for (i = 0; i < 5; i++) {
      printf("Enter grade of student %d: ", i + 1);
      for (j = 0; j < 5; j++) {
         scanf("%d", &arr[i][j]);
      }
   }
   printf("\n");

   int total_score_student[5] = { 0 };
   printf("Total grades for each student:");
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
         total_score_student[i] += arr[i][j];
      }
      printf(" %d", total_score_student[i]);
   }

   printf("\nAverage grades for each student:");
   for (i = 0; i < 5; i++) {
      printf(" %.2f", total_score_student[i] / 5.0);
   }

   int total_score_quiz[5] = { 0 };
   printf("\nAverage grades for each quiz:");
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
         total_score_quiz[i] += arr[j][i];
      }
      printf(" %.2f", total_score_quiz[i] / 5.0);
   }

   int highest, lowest;
   printf("\nHighest grades for each quiz:");
   for (i = 0; i < 5; i++) {
      highest = arr[0][i];
      for (j = 0; j < 5; j++) {
         if (arr[j][i] > highest) {
            highest = arr[j][i];
         }
      }
      printf(" %d", highest);
   }

   printf("\nLowest grades for each quiz:");
   for (i = 0; i < 5; i++) {
      lowest = arr[0][i];
      for (j = 0; j < 5; j++) {
         if (arr[j][i] < lowest) {
            lowest = arr[j][i];
         }
      }
      printf(" %d", lowest);
   }

   return 0;
}