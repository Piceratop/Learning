#include <stdio.h>
#include <stdbool.h>

struct color {
   int red;
   int green;
   int blue;
};

int normalize_color(int n);
struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color c1, struct color c2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void) {
   const struct color MAGENTA = { 255, .blue = 255 };
   struct color c = { 123, 145, 178 };
   printf("%d %d %d\n", c.red, c.green, c.blue);
   printf("%d\n", getRed(c));
   printf("%s\n", equal_color(c, MAGENTA) ? "true" : "false");
   printf("%d %d %d\n", brighter(c).red, brighter(c).green, brighter(c).blue);
   printf("%d %d %d\n", darker(c).red, darker(c).green, darker(c).blue);
   return 0;
}

int normalize_color(int n) {
   if (n < 0)
      return 0;
   if (n > 255)
      return 255;
   return n;
}

struct color make_color(int red, int green, int blue) {
   struct color c;
   c.red = normalize_color(red);
   c.green = normalize_color(green);
   c.blue = normalize_color(blue);
   return c;
}

int getRed(struct color c) {
   return c.red;
}

bool equal_color(struct color c1, struct color c2) {
   return c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue;
}

int brighten(int n) {
   if (n == 0)
      return 3;
   if (n < 3)
      return (int)(3 / 0.7);
   n = (int)(n / 0.7);
   if (n > 255)
      return 255;
   return n;
}

struct color brighter(struct color c) {
   return make_color(brighten(c.red), brighten(c.green), brighten(c.blue));
}

struct color darker(struct color c) {
   return make_color((int)(c.red * 0.7), (int)(c.green * 0.7), (int)(c.blue * 0.7));
}

