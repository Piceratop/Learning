#include <stdio.h>
#include <stdbool.h>

struct point {
   int x, y;
};

struct rectangle {
   struct point upper_left, lower_right;
};

int area(struct rectangle r) {
   return (r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}

struct point center_x(struct rectangle r) {
   return (struct point) { (r.upper_left.x + r.lower_right.x) / 2, (r.upper_left.y + r.lower_right.y) / 2 };
}

struct rectangle move(struct rectangle r, int x, int y) {
   r.upper_left.x += x;
   r.lower_right.x += x;
   r.upper_left.y += y;
   r.lower_right.y += y;
   return r;
}

bool is_inside(struct rectangle r, struct point p) {
   return p.x >= r.upper_left.x && p.x <= r.lower_right.x && p.y >= r.upper_left.y && p.y <= r.lower_right.y;
}

int main(void) {
   struct rectangle r = {
      (struct point) {
 0, 0
},
(struct point) {
20, 10
}
   };

   printf("%d\n", area(r));
   printf("%d %d\n", center_x(r).x, center_x(r).y);
   printf("%d %d\n", move(r, 10, 10).upper_left.x, move(r, 10, 10).upper_left.y);
   printf("%s\n", is_inside(r, (struct point) { 5, 5 }) ? "true" : "false");

   return 0;
}