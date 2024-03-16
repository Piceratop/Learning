#include <stdio.h>

int gcd(int a, int b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

typedef struct {
   int numerator, denominator;
} fraction;

fraction reduce_fraction(fraction f);
fraction add_fraction(fraction f1, fraction f2);
fraction subtract_fraction(fraction f1, fraction f2);
fraction multiply_fraction(fraction f1, fraction f2);
fraction divide_fraction(fraction f1, fraction f2);

int main(void) {
   fraction f1 = { 1, 2 }, f2 = { 1, 3 }, f3 = { 2, 3 };
   printf("%d/%d + %d/%d = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, add_fraction(f1, f2).numerator, add_fraction(f1, f2).denominator);
   printf("%d/%d - %d/%d = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, subtract_fraction(f1, f2).numerator, subtract_fraction(f1, f2).denominator);
   printf("%d/%d * %d/%d = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, multiply_fraction(f1, f2).numerator, multiply_fraction(f1, f2).denominator);
   printf("%d/%d / %d/%d = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, divide_fraction(f1, f2).numerator, divide_fraction(f1, f2).denominator);
   return 0;
}

fraction reduce_fraction(fraction f) {
   int t = gcd(f.numerator, f.denominator);
   return (fraction) { f.numerator / t, f.denominator / t };
}

fraction add_fraction(fraction f1, fraction f2) {
   fraction f3;
   f3.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
   f3.denominator = f1.denominator * f2.denominator;
   return reduce_fraction(f3);
}

fraction subtract_fraction(fraction f1, fraction f2) {
   fraction f3;
   f3.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
   f3.denominator = f1.denominator * f2.denominator;
   return reduce_fraction(f3);
}

fraction multiply_fraction(fraction f1, fraction f2) {
   fraction f3;
   f3.numerator = f1.numerator * f2.numerator;
   f3.denominator = f1.denominator * f2.denominator;
   return reduce_fraction(f3);
}

fraction divide_fraction(fraction f1, fraction f2) {
   fraction f3;
   f3.numerator = f1.numerator * f2.denominator;
   f3.denominator = f1.denominator * f2.numerator;
   return reduce_fraction(f3);
}