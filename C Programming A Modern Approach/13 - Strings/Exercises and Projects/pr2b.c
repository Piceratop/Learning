#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder messages */

int read_line(char str[], int n);

int main(void) {
   char reminders[MAX_REMIND][MSG_LEN + 3];
   char time_str[9], msg_str[MSG_LEN + 1];
   int day, hour, minute, total_time, i, j, num_remind = 0;

   for (;;) {
      if (num_remind == MAX_REMIND) {
         printf("-- No space left --\n");
         break;
      }

      printf("Enter day, time, and reminder: ");
      scanf("%d", &day);
      if (day == 0)
         break;
      scanf("%d : %d", &hour, &minute);

      sprintf(time_str, "%2d %02d:%02d", day, hour, minute);
      read_line(msg_str, MSG_LEN);

      if (day < 0 || day > 31 || hour < 0 || hour > 23 || minute < 0 || minute > 59) {
         printf("-- Invalid time --\n");
         continue;
      }

      for (i = 0; i < num_remind; i++)
         if (strcmp(time_str, reminders[i]) < 0)
            break;
      for (j = num_remind; j > i; j--)
         strcpy(reminders[j], reminders[j - 1]);

      strcpy(reminders[i], time_str);
      strcat(reminders[i], msg_str);

      num_remind++;
   }

   printf("\nDay Time  Reminder\n");
   for (i = 0; i < num_remind; i++)
      printf(" %s\n", reminders[i]);

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
