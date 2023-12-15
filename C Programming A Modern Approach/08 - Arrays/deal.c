#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main() {
   bool in_hand[NUM_SUITS][NUM_RANKS] = { false };
   int num_cards, rank, suit;
   const char rank_code[] = { '2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a' };
   const char suit_code[] = { 'c', 'd', 'h', 's' };

   srand((unsigned)time(NULL));

   printf("Enter number of cards in hand: ");
   scanf("%d", &num_cards);

   while (num_cards > 0) {
      suit = rand() % NUM_SUITS; /* Pick a random suit*/
      rank = rand() % NUM_RANKS; /* Pick a random rank*/

   }
   return 0;
}