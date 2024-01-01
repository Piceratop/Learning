#include <stdio.h>

void split_date(int day_of_year, int year, int* month, int* day);

int main(void) {
   int day_of_year, year, month = 1, day;
   printf("Enter day of year: ");
   scanf("%d", &day_of_year);
   printf("Enter year: ");
   scanf("%d", &year);

   split_date(day_of_year, year, &month, &day);

   printf("The date is %d/%.2d/%.2d\n", year, month, day);
   return 0;
}

void split_date(int day_of_year, int year, int* month, int* day) {
   int month_length[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
      month_length[1]++;
   while (day_of_year > month_length[*month - 1]) {
      day_of_year -= month_length[*month - 1];
      (*month)++;
   }
   *day = day_of_year;
}