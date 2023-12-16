#include <stdio.h>

void print_number(int num, int int_segment[10][7]) {
   char segments[3][3] = { 0 }; // Holds the characters for the 7-segment display

   // Top segment
   segments[0][1] = int_segment[num][0] ? '_' : ' ';

   // Top left, Middle, Top right segments
   segments[1][0] = int_segment[num][5] ? '|' : ' ';
   segments[1][1] = int_segment[num][6] ? '_' : ' ';
   segments[1][2] = int_segment[num][1] ? '|' : ' ';

   // Bottom left, Bottom, Bottom right segments
   segments[2][0] = int_segment[num][4] ? '|' : ' ';
   segments[2][1] = int_segment[num][3] ? '_' : ' ';
   segments[2][2] = int_segment[num][2] ? '|' : ' ';

   // Print the number in 7-segment display format
   printf(" %c \n", segments[0][1]);
   printf("%c%c%c\n", segments[1][0], segments[1][1], segments[1][2]);
   printf("%c%c%c\n", segments[2][0], segments[2][1], segments[2][2]);
}

int main(void) {
   int int_segment[10][7] = {
       {1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1},
       {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
       {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1},
       {1, 1, 1, 1, 0, 1, 1}
   };

   // Example of printing numbers 0 to 9
   for (int i = 0; i < 10; i++) {
      print_number(i, int_segment);
      printf("\n"); // Separate the numbers
   }

   return 0;
}