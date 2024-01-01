/* Classifies a poker hand */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* prototypes */
bool card_exists(int hand[][2], int rank, int suit, int cards_read);
void read_cards(int hand[][2]);
void analyze_hand(int hand[][2], bool* flush, bool* four, bool* three, int* straight, int* pairs);
void print_result(int hand[][2], bool* flush, bool* four, bool* three, int* straight, int* pairs);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/

int main(void) {
   int hand[NUM_CARDS][2];
   bool flush, four, three;
   int straight, pairs;

   for (;;) {
      read_cards(hand);
      analyze_hand(hand, &flush, &four, &three, &straight, &pairs);
      print_result(hand, &flush, &four, &three, &straight, &pairs);
   }
   return 0;
}

/**********************************************************
 * card_exists: Returns true if the card exists in the    *
 *              hand; otherwise returns false.            *
 **********************************************************/

bool card_exists(int hand[][2], int rank, int suit, int cards_read) {
   for (int i = 0; i < cards_read; i++)
      if (hand[i][0] == rank && hand[i][1] == suit)
         return true;
   return false;
};

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/

void read_cards(int hand[][2]) {
   bool bad_card;
   char ch, rank_ch, suit_ch;
   int cards_read = 0;

   for (int i = 0; i < NUM_CARDS; i++) {
      hand[i][0] = -1;
      hand[i][1] = -1;
   }

   while (cards_read < NUM_CARDS) {
      bad_card = false;

      printf("Enter a card: ");

      rank_ch = getchar();
      switch (rank_ch) {
      case '0': exit(EXIT_SUCCESS);
      case '2': hand[cards_read][0] = 0; break;
      case '3': hand[cards_read][0] = 1; break;
      case '4': hand[cards_read][0] = 2; break;
      case '5': hand[cards_read][0] = 3; break;
      case '6': hand[cards_read][0] = 4; break;
      case '7': hand[cards_read][0] = 5; break;
      case '8': hand[cards_read][0] = 6; break;
      case '9': hand[cards_read][0] = 7; break;
      case 't': case'T': hand[cards_read][0] = 8; break;
      case 'j': case'J': hand[cards_read][0] = 9; break;
      case 'q': case'Q': hand[cards_read][0] = 10; break;
      case 'k': case'K': hand[cards_read][0] = 11; break;
      case 'a': case'A': hand[cards_read][0] = 12; break;
      default: bad_card = true;
      }

      suit_ch = getchar();
      switch (suit_ch) {
      case 'c': case'C': hand[cards_read][1] = 0; break;
      case 'd': case'D': hand[cards_read][1] = 1; break;
      case 'h': case'H': hand[cards_read][1] = 2; break;
      case 's': case'S': hand[cards_read][1] = 3; break;
      default: bad_card = true;
      }

      while ((ch = getchar()) != '\n')
         if (ch != ' ') bad_card = true;

      if (bad_card)
         printf("Bad card; ignored.\n");
      else if (card_exists(hand, hand[cards_read][0], hand[cards_read][1], cards_read))
         printf("Duplicate card; ignored.\n");
      else {
         cards_read++;
      }
   }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/

void analyze_hand(int hand[][2], bool* flush, bool* four, bool* three, int* straight, int* pairs) {
   *flush = true;
   *four = false;
   *three = false;
   *pairs = 0;
   int equal_mid = 0;

   /* check for flush */
   for (int i = 0; i < NUM_CARDS; i++)
      if (hand[i][1] != hand[0][1]) {
         *flush = false;
         break;
      }

   /* check for straight */
   for (int i = 0; i < NUM_CARDS - 1; i++) {
      for (int j = i + 1; j > 0; j--) {
         if (hand[j][0] < hand[j - 1][0]) {
            int temp = hand[j][0];
            hand[j][0] = hand[j - 1][0];
            hand[j - 1][0] = temp;
            temp = hand[j][1];
            hand[j][1] = hand[j - 1][1];
            hand[j - 1][1] = temp;
         } else
            break;
      }
   }

   for (int i = 0; i < NUM_CARDS - 1; i++)
      if (hand[i][0] != hand[i + 1][0] - 1) {
         if (hand[i][0] == 3 && hand[i + 1][0] == 12) *straight = 3;
         else *straight = false;
         break;
      } else *straight = hand[i + 1][0];

      /* check for 4-of-a-kind, 3-of-a-kind*/
      for (int i = 0; i < NUM_CARDS; i++)
         equal_mid += (hand[i][0] == hand[2][0]);

      if (equal_mid == 4)
         *four = true;
      else if (equal_mid == 3)
         *three = true;

      /* check for pairs */
      for (int i = 0; i < NUM_CARDS - 1; i++)
         *pairs += (hand[i][0] == hand[i + 1][0]);
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/

void print_result(int hand[][2], bool* flush, bool* four, bool* three, int* straight, int* pairs) {
   if (*straight == 12 && *flush)
      printf("Royal flush");
   else if (*straight && *flush)
      printf("Straight flush");
   else if (*four)
      printf("Four of a kind");
   else if (*three && *pairs >= 3)
      printf("Full house");
   else if (*flush)
      printf("Flush");
   else if (*straight)
      printf("Straight");
   else if (*three)
      printf("Three of a kind");
   else if (*pairs == 2)
      printf("Two pairs");
   else if (*pairs == 1)
      printf("Pair");
   else
      printf("High card");

   printf("\n\n");
}