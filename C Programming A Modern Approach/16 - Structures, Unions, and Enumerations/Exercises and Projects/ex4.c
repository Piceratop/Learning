#include <stdio.h>
typedef struct {
   double real, imaginary;
} Complex;

Complex make_complex(double x, double y) {
   Complex z;
   z.real = x;
   z.imaginary = y;
   return z;
}

Complex add_complex(Complex x, Complex y) {
   Complex z;
   z.real = x.real + y.real;
   z.imaginary = x.imaginary + y.imaginary;
   return z;
}

int main(void) {
   Complex c1, c2, c3;
   c1 = make_complex(0.0, 1.0);
   c2 = make_complex(1.0, 0.0);
   c3 = add_complex(c1, c2);
   printf("%f + %fi\n", c3.real, c3.imaginary);
   return 0;
}