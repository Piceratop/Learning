#include <stdio.h>

int main() {
    int month1, day1, year1;
    int month2, day2, year2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    int time_count1 = year1 * 365 + month1 * 30 + day1;
    int time_count2 = year2 * 365 + month2 * 30 + day2;
    if (time_count1 < time_count2) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
    } else if (time_count1 > time_count2) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
    } else {
        printf("%d/%d/%.2d and %d/%d/%.2d are the same time", month1, day1, year1, month2, day2, year2);
    }
    return 0;
}