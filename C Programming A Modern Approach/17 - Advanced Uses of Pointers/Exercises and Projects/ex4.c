#include <stdio.h>
#include <stdlib.h>

struct point {
   int x, y;
};

struct rectangle {
   struct point upper_left, lower_right;
};

int main(void) {
   struct rectangle* p;
   p = malloc(sizeof(struct rectangle));
   if (p == NULL) {
      printf("Unable to allocate memory.\n");
      exit(1);
   }
   p->upper_left.x = 10;
   p->upper_left.y = 25;
   p->lower_right.x = 20;
   p->lower_right.y = 15;
   printf("Rectangle upper left point: (x: %d, y: %d)\n", p->upper_left.x, p->upper_left.y);
   printf("Rectangle lower right point: (x: %d, y: %d)\n", p->lower_right.x, p->lower_right.y);
   free(p);
   return 0;
}