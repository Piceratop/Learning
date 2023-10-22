#include <stdio.h>

int main()
{
    int year, month, day;
    printf("Enter a date: ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %4d%02d%02d\n", year, month, day);
    return 0;
}