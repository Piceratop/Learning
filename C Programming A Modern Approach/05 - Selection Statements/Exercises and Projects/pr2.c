#include <stdio.h>

int main() {
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);
    printf("Equivalent 12-hour time: %d:%d %s\n", (hour % 12) ? hour % 12 : 12, minute, (hour < 12) ? "AM" : "PM");
}