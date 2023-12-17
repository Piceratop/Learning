#include <stdio.h>
#include <math.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main() {
   int i, low_rate, num_years, year;
   double value[5];

   printf("Enter interest rate: ");
   scanf("%d", &low_rate);
   printf("Enter number of years: ");
   scanf("%d", &num_years);

   printf("\nYears");
   for (i = 0; i < NUM_RATES; i++) {
      printf("%7d%%", low_rate + i);
      value[i] = INITIAL_BALANCE;
   }
   printf("\n");

   for (year = 1; year <= num_years; year++) {
      printf("%3d    ", year);
      for (i = 0; i < NUM_RATES; i++) {
         value[i] = pow((low_rate / 12.0 + i) / 100.0 + 1, 12) * value[i];
         printf("%8.2f", value[i]);
      }
      printf("\n");
   }

   return 0;
}