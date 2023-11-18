#include <stdio.h>

int main(void) {
    int d, n;
    n = 113;
    for (d = 2; d * d <= n; d++)
        if (n % d == 0)
            break;
    if (d * d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
}