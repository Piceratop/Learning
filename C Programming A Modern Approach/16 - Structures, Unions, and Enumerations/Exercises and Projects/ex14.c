#include <stdio.h>
#define RECTANGLE 0
#define CIRCLE 1

struct point {
   int x, y;
};

struct shape {
   int shape_kind;
   struct point center;
   union {
      struct {
         int height, width;
      } rectangle;
      struct {
         int radius;
      } circle;
   } u;
} s;

double area() {
   if (s.shape_kind == RECTANGLE)
      return s.u.rectangle.height * s.u.rectangle.width;
   else
      return 3.14 * s.u.circle.radius * s.u.circle.radius;
}

void move(int x, int y) {
   s.center.x += x;
   s.center.y += y;
}

void scale(int c) {
   if (s.shape_kind == RECTANGLE) {
      s.u.rectangle.height *= c;
      s.u.rectangle.width *= c;
   } else
      s.u.circle.radius *= c;
}

int main(void) {
   s.shape_kind = CIRCLE;
   s.center.x = 0;
   s.center.y = 0;
   s.u.circle.radius = 10;
   printf("%f\n", area());
   move(5, 5);
   scale(2);
   return 0;
}