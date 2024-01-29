#include <stdio.h>
#define AVG(x,y) (x-y)/2
#define AREA(x,y) (x)*(y)

int main(void) {
   // Part a:
   printf("7.5/AVG(5.0,10.0) = %f\n", 7.5 / AVG(5.0, 10.0));
#undef AVG
#define AVG(x,y) (((x)-(y))/2)
   printf("7.5/AVG(5.0,10.0) = %f\n", 7.5 / AVG(5.0, 10.0));
   // Part b:
   printf("7.5/AREA(5.0,10.0) = %f\n", 7.5 / AREA(5.0, 10.0));
#undef AREA
#define AREA(x,y) ((x)*(y))
   printf("7.5/AREA(5.0,10.0) = %f\n", 7.5 / AREA(5.0, 10.0));
   return 0;
}