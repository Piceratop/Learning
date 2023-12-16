#include <stdio.h>

int main()
{
   int i, j, k;
   // Part (a)
   scanf("%d", &i);
   printf("%d\n", i);
   scanf(" %d", &i);
   printf("%d\n", i);
   // Part (b)
   /* Input: 1 - 2 - 3*/
   scanf("%d-%d-%d", &i, &j, &k);
   printf("%d %d %d\n", i, j, k);
   scanf("%d -%d -%d", &i, &j, &k);
   printf("%d %d %d\n", i, j, k);
   // Part (c)
   /* The second scanf needs a non-space character to terminate the input */
   float x, y;
   scanf("%f", &x);
   printf("%f\n", x);
   scanf("%f ", &x);
   printf("%f\n", x);
   // Part (d)
   scanf("%f,%f", &x, &y);
   printf("%f %f\n", x, y);
   scanf("%f, %f", &x, &y);
   printf("%f %f\n", x, y);

   return 0;
}