#include <stdio.h>

int main() {
    int hour, minute;
    char day_part;
    printf("Enter a 12-hour time: ");
    scanf("%d : %d", &hour, &minute);

    if (hour == 12) {
        hour = 0;
    }
    while ((day_part = getchar()) != '\n') {
        if (day_part == 'p' || day_part == 'P') {
            hour += 12;
        }
    }
    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
    return 0;
}