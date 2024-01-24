#include <stdio.h>

int main(void) {
   char* months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
   printf("Enter a date (mm/dd/yyyy): ");
   int month, day, year;
   scanf("%d/%d/%d", &month, &day, &year);
   printf("You enter the date %s %d, %d", months[month - 1], day, year);
   return 0;
}