#include <stdio.h>

int main() {
    int hour, minute;
    char ch;
    printf("Enter a 12-hour time: ");
    scanf("%d : %d", &hour, &minute);
    int time_from_midnight = hour * 60 + minute;
    do {
        ch = getchar();
        if (ch == 'p' || ch == 'P') {
            time_from_midnight += 720;
        }
    } while (ch != '\n');
    if (time_from_midnight < 173 || time_from_midnight >= 1223) {
        printf("Closet departure time is 9:45 p.m., arriving at 11.58 p.m.");
    } else if (time_from_midnight < 532) {
        printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.");
    } else if (time_from_midnight < 631) {
        printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.");
    } else if (time_from_midnight < 723) {
        printf("Closet departure time is 11:19 a.m., arriving at 1:31 p.m.");
    } else if (time_from_midnight < 804) {
        printf("Closet departure time is 12:47 p.m., arriving at 3:00 p.m.");
    } else if (time_from_midnight < 893) {
        printf("Closet departure time is 2:00 p.m., arriving at 4:08 p.m.");
    } else if (time_from_midnight < 1043) {
        printf("Closet departure time is 3:45 p.m., arriving at 5:55 p.m.");
    } else {
        printf("Closet departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    return 0;
}