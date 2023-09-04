#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;

    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0F;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    // Failed formatting
    printf("%d %d\n", i);
    printf("%d\n", i, j);
    printf("%f %d\n", i, x);
}