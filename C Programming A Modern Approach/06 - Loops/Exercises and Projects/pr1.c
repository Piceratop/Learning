#include <stdio.h>

int main(void) {
    float x, max = 0;
    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &x);
        if (x <= 0) break;
        if (x > max) max = x;
    }
    printf("The largest number entered was %.2f\n", max);
    return 0;
}