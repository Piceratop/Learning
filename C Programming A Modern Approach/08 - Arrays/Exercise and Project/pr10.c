#include <stdio.h>
#include <stdlib.h>

int main() {
   int hour, minute;
   printf("Enter a 24-hour time: ");
   scanf("%d : %d", &hour, &minute);
   int time_from_midnight = hour * 60 + minute;
   int departure_time[] = { -135, 480, 583, 679, 767, 840, 945, 1140, 1305 };
   int arrival_time[] = { 1438, 616, 712, 811, 900, 968, 1075, 1280, 1438 };

   int difference[9];
   for (int i = 0; i < 9; i++) {
      difference[i] = abs(time_from_midnight - departure_time[i]);
   }

   int min = difference[0], min_index = 0;
   for (int i = 1; i < 9; i++) {
      if (difference[i] < min) {
         min = difference[i];
         min_index = i;
      }
   }

   char departure_day_part, arrival_day_part;
   int departure_hour = (departure_time[min_index] + 1440) % 1440 / 60;
   if (departure_hour >= 12) {
      departure_hour = departure_hour == 12 ? 12 : departure_hour - 12;
      departure_day_part = 'p';
   } else {
      departure_hour = departure_hour == 0 ? 12 : departure_hour;
      departure_day_part = 'a';
   }
   int departure_minute = (departure_time[min_index] + 1440) % 60;
   int arrival_hour = (arrival_time[min_index] + 1440) % 1440 / 60;
   if (arrival_hour >= 12) {
      arrival_hour = arrival_hour == 24 ? 12 : arrival_hour - 12;
      arrival_day_part = 'p';
   } else {
      arrival_hour = arrival_hour == 0 ? 12 : arrival_hour;
      arrival_day_part = 'a';
   }
   int arrival_minute = (arrival_time[min_index] + 1440) % 60;
   printf("Closet departure time is %d:%02d %c.m., arriving at %d:%02d %c.m.\n", departure_hour, departure_minute, departure_day_part, arrival_hour, arrival_minute, arrival_day_part);

   return 0;
}