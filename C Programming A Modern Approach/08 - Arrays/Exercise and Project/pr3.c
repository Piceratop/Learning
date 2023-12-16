#include <stdbool.h>
#include <stdio.h>

int main() {
   bool digit_seen[10] = { false };
   int digit;
   long n;

   while (true) {
      printf("Enter a positive integer (enter a non-positive integer to end): ");
      scanf("%ld", &n);

      if (n <= 0)
         break;

      while (n > 0) {
         digit = n % 10;
         if (digit_seen[digit])
            break;
         digit_seen[digit] = true;
         n /= 10;
      }

      if (n > 0)
         printf("Repeated digit\n");
      else
         printf("No repeated digit\n");
   }

   return 0;
}