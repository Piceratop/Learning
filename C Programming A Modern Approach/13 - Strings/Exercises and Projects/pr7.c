#include <stdio.h>

int main() {
   int first_digit, second_digit;
   printf("Enter a two-digit number: ");
   scanf("%1d%1d", &first_digit, &second_digit);
   printf("You entered the number ");
   char* first_digit_arr[] = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
   char* teen_arr[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
   char* second_digit_arr[] = { "", "-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine" };
   if (first_digit == 1) {
      printf("%s", teen_arr[second_digit]);
   } else {
      printf("%s%s", first_digit_arr[first_digit - 2], second_digit_arr[second_digit]);
   }
   printf(".");
   return 0;
}