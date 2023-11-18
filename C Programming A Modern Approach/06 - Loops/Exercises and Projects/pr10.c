#include <stdio.h>

int main() {
    int month, day, year;
    int earliest_month = 99, earliest_day = 99, earliest_year = 99;
    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        if (month == 0 && day == 0 && year == 0) break;
        if (year < earliest_year || (year == earliest_year && month < earliest_month) || (year == earliest_year && month == earliest_month && day < earliest_day)) {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }
    }
    printf("%d/%d/%.02d is the earliest date.\n", earliest_month, earliest_day, earliest_year);
    return 0;
}