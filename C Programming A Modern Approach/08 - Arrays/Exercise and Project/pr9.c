#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
   char ch, random_walk[SIZE][SIZE];
   int i, j;
   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         random_walk[i][j] = '.';
      }
   }
   int x_position, y_position, direction;
   x_position = 0;
   y_position = 0;
   srand((unsigned)time(NULL));

   bool blocked[4] = { false };
   ch = 'A';
   while (ch <= 'Z') {
      random_walk[x_position][y_position] = ch;
      direction = rand() % 4;
      switch (direction) {
      case 0:
         if (x_position > 0 && random_walk[x_position - 1][y_position] == '.') {
            x_position--;
            ch++;
            for (i = 0; i < 4; i++) {
               blocked[i] = false;
            }
         } else {
            blocked[0] = true;
         }
         break;
      case 1:
         if (x_position < SIZE - 1 && random_walk[x_position + 1][y_position] == '.') {
            x_position++;
            ch++;
            for (i = 0; i < 4; i++) {
               blocked[i] = false;
            }
         } else {
            blocked[1] = true;
         }
         break;
      case 2:
         if (y_position > 0 && random_walk[x_position][y_position - 1] == '.') {
            y_position--;
            ch++;
            for (i = 0; i < 4; i++) {
               blocked[i] = false;
            }
         } else {
            blocked[2] = true;
         }
         break;
      case 3:
         if (y_position < SIZE - 1 && random_walk[x_position][y_position + 1] == '.') {
            y_position++;
            ch++;
            for (i = 0; i < 4; i++) {
               blocked[i] = false;
            }
         } else {
            blocked[3] = true;
         }
         break;
      }
      int count_blocked = 0;
      for (i = 0; i < 4; i++) {
         if (blocked[i]) {
            count_blocked++;
         }
      }
      if (count_blocked == 4) {
         break;
      }
   }

   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         printf("%c ", random_walk[i][j]);
      }
      printf("\n");
   }

   return 0;
}