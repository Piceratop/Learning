#include <stdio.h>

void split_time(long total_sec, int* hr, int* min, int* sec);

int main(void) {
   long total_sec;
   printf("Enter total seconds: ");
   scanf("%ld", &total_sec);

   int hr, min, sec;
   split_time(total_sec, &hr, &min, &sec);
   printf("%ld seconds is %.2d:%.2d:%.2d\n", total_sec, hr, min, sec);
   return 0;
}

void split_time(long total_sec, int* hr, int* min, int* sec) {
   *sec = total_sec % 60;
   total_sec /= 60;
   *min = total_sec % 60;
   total_sec /= 60;
   *hr = total_sec;
}