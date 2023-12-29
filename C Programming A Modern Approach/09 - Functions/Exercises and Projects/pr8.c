#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int roll_dice(void);
bool play_dice(void);

int main(void) {
   srand(time(NULL));
   int replay = 'y', win_count = 0, lose_count = 0;
   do {
      bool win = play_dice();
      if (win) {
         printf("You win!\n");
         win_count++;
      } else {
         printf("You lose!\n");
         lose_count++;
      }
      printf("\nPlay again? ");
      scanf(" %c", &replay);
   } while ((replay == 'y' || replay == 'Y'));
   printf("Wins: %d  Losses: %d\n", win_count, lose_count);
   return 0;
}

int roll_dice(void) {
   return rand() % 6 + 1;
}

bool play_dice(void) {
   int sum = roll_dice() + roll_dice();
   printf("\nYou rolled: %d\n", sum);
   switch (sum) {
   case 7:
   case 11:
      return true;
   case 2:
   case 3:
   case 12:
      return false;
   default:
      int point = sum;
      printf("Your point is %d\n", point);
      do {
         sum = roll_dice() + roll_dice();
         printf("You rolled: %d\n", sum);
      } while (sum != 7 && sum != point);
      return sum == point;
   }
}