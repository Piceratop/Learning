#include <stdio.h>

int main()
{
    int i, j, k;
    // Part a
    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    // Part b
    i = 7;
    j = 8;
    k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    // Part c
    i = 7;
    j = 8;
    k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    // Part d
    i = 1;
    j = 1;
    k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);
    return 0;
}