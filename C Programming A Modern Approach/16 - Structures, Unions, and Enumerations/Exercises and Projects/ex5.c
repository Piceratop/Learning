#include <stdio.h>
struct date {
   int day, month, year;
};

int day_of_year(struct date d) {
   int month_length[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
      month_length[1]++;
   int day_count = 0;
   for (int i = 0; i < d.month - 1; i++)
      day_count += month_length[i];
   return day_count + d.day;
}

int compare_dates(struct date d1, struct date d2) {
   int d1_count = day_of_year(d1);
   int d2_count = day_of_year(d2);
   return (d1_count > d2_count) - (d1_count < d2_count);
}

int main(void) {
   struct date d1 = { 1, 1, 2000 }, d2 = { 31, 12, 2000 };
   printf("%d\n", day_of_year(d1));
   printf("%d\n", day_of_year(d2));
   printf("%d\n", compare_dates(d1, d2));
   return 0;
}