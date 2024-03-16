#include <stdio.h>

struct time {
   int hours, minutes, seconds;
};

struct time split_time(long seconds) {
   struct time t;
   t.hours = seconds / 3600;
   t.minutes = (seconds % 3600) / 60;
   t.seconds = seconds % 60;
   return t;
}

int main(void) {
   struct time t;
   long seconds;
   printf("Enter the number of seconds: ");
   scanf("%ld", &seconds);
   t = split_time(seconds);
   printf("%d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
   return 0;
}