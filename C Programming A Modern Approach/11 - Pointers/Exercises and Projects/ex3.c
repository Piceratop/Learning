#include <stdio.h>

void avg_sum(double a[], int n, double* avg, double* sum) {
   int i;
   *sum = 0;
   *avg = 0;
   for (i = 0; i < n; i++) {
      *sum += a[i];
   }
   *avg = *sum / n;
}

int main(void) {
   double avg, sum;
   double arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   avg_sum(arr, 10, &avg, &sum);
   printf("The sum is %f and the average is %f\n", sum, avg);
   return 0;
}