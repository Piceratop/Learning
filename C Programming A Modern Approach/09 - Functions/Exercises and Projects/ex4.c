#include <stdio.h>

int day_of_year(int month, int day, int year) {
   int month_length[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
      month_length[1]++;
   }

   int day_count = 0;
   for (int i = 0; i < month - 1; i++) {
      day_count += month_length[i];
   }
   day_count += day;

   return day_count;
}

int main() {
   int month, day, year;
   printf("Enter the month: ");
   scanf("%d", &month);
   printf("Enter the day: ");
   scanf("%d", &day);
   printf("Enter the year: ");
   scanf("%d", &year);

   printf("%d\n", day_of_year(month, day, year));

   return 0;
}