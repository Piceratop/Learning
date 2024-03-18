#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int departure, arrival;
} fly_time;

int main() {
   fly_time t[] = { {480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438} };
   int hour, minute;
   printf("Enter a 24-hour time: ");
   scanf("%d : %d", &hour, &minute);
   int time_from_midnight = hour * 60 + minute;
   int closet_departure = 7, min_time_to_departure = abs(time_from_midnight + 24 * 60 - t[7].departure);
   for (int i = 0; i < 8; i++) {
      int time_to_departure = abs(time_from_midnight - t[i].departure);
      if (time_to_departure < min_time_to_departure) {
         min_time_to_departure = time_to_departure;
         closet_departure = i;
      }
   }
   printf("Closest departure time is %d:%02d, arriving at %d:%02d.\n", t[closet_departure].departure / 60, t[closet_departure].departure % 60, t[closet_departure].arrival / 60, t[closet_departure].arrival % 60);
   return 0;
}