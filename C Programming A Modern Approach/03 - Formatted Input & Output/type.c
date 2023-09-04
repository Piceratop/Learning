#include <stdio.h>

int main()
{
    int i = 135, j = 13579;
    float x = 42343.2892f, y = 527.0f, z = 100000000000000000.0f;

    // %m.pX
    // m: width
    printf("i = %d, j = %d\n", i, j);
    printf("i = %4d, j = %4d\n", i, j);
    printf("i = %4d, j = %4d\n", -i, -j);
    printf("i = %-4d, j = %-4d\n", i, j);
    printf("i = %-4d, j = %-4d\n", -i, -j);

    // p: precision
    printf("i = %.4d, j = %.4d\n", i, j);
    printf("i = %.4d, j = %.4d\n", -i, -j);
    printf("x = %e, y = %e\n", x, y);
    printf("x = %20e, y = %20e\n", x, y);
    printf("x = %.2e, y = %.2e\n", x, y);
    printf("x = %f, y = %f\n", x, y);
    printf("x = %20f, y = %20f\n", x, y);
    printf("x = %.2f, y = %.2f\n", x, y);
    printf("x = %g, y = %g, z = %g\n", x, y, z);
    printf("x = %.20g, y = %.20g, z = %.20g\n", x, y, z);
}