#include <stdio.h>

int main(void) {
   float temperature_readings[30][24] = { 0 };
   float sum = 0;
   for (int i = 0; i < 30; i++) {
      for (int j = 0; j < 24; j++) {
         sum += temperature_readings[i][j];
      }
   }
   printf("%f", sum / (30.0 * 24.0));
   return 0;
}