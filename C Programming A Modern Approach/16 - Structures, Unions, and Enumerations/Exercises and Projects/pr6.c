#include <stdio.h>

struct date {
   int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main() {
   struct date d1, d2;
   printf("Enter first date (mm/dd/yy): ");
   scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
   printf("Enter second date (mm/dd/yy): ");
   scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
   int com = compare_dates(d1, d2);
   if (com > 0) {
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
   } else if (com < 0) {
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
   } else {
      printf("%d/%d/%.2d and %d/%d/%.2d are the same time", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
   }
   return 0;
}

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