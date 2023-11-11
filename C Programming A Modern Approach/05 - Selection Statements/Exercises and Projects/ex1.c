#include <stdio.h>

int main()
{
    int i, j, k;
    // Part a
    i = 2;
    j = 3;
    k = i * j == 6;
    printf("%d\n", k);
    // Part b
    i = 5;
    j = 10;
    k = 1;
    printf("%d\n", k > i < j);
    // Part c
    i = 3;
    j = 2;
    k = 1;
    printf("%d\n", i < j == j < k);
    // Part d
    i = 3;
    j = 4;
    k = 5;
    printf("%d\n", i % j + i < k);
    return 0;
}