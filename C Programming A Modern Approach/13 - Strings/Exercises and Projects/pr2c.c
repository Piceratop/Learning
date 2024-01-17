#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder messages */

int read_line(char str[], int n);
int get_month_index(char* month);

int main(void) {
   char reminders[MAX_REMIND][MSG_LEN + 3];
   char month[10], time_str[11], msg_str[MSG_LEN + 1];
   int month_index, day, hour, minute, total_time, i, j, num_remind = 0;

   for (;;) {
      if (num_remind == MAX_REMIND) {
         printf("-- No space left --\n");
         break;
      }

      printf("Enter time (month, date, hour, minute) and reminder: ");
      scanf("%s", month);

      if (month[0] == '0')
         break;
      scanf("%d %d : %d", &day, &hour, &minute);

      sprintf(time_str, " %2d %02d:%02d", day, hour, minute);
      read_line(msg_str, MSG_LEN);

      month_index = get_month_index(month);
      if (month_index == -1) {
         printf("-- Invalid month --\n");
         continue;
      }

      if (day < 0 || day > 31 || hour < 0 || hour > 23 || minute < 0 || minute > 59) {
         printf("-- Invalid time --\n");
         continue;
      }

      for (i = 0; i < num_remind; i++) {
         char reminder_month[4];
         for (j = 0; j < 3; j++)
            reminder_month[j] = reminders[i][j];
         reminder_month[j] = '\0';
         if (month_index < get_month_index(reminder_month))
            break;
         if (month_index == get_month_index(reminder_month) && strcmp(time_str, reminders[i] + 3) < 0)
            break;
      }
      for (j = num_remind; j > i; j--)
         strcpy(reminders[j], reminders[j - 1]);

      strcpy(reminders[i], month);
      strcat(reminders[i], time_str);
      strcat(reminders[i], msg_str);

      num_remind++;
   }

   printf("\n%-6s %-5s Reminder\n", "Date", "Time");
   for (i = 0; i < num_remind; i++)
      printf("%s\n", reminders[i]);

   return 0;
}

int read_line(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n)
         str[i++] = ch;
   str[i] = '\0';
   return i;
}

int get_month_index(char* month) {
   char* month_list[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

   for (int i = 0; i < 12; i++)
      if (strcmp(month_list[i], month) == 0)
         return i;
   return -1;
}

