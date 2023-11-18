#include <stdio.h>

int main(void) {
    int i = 10;
    // Answer a
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    // Answer b
    for (; i < 10;) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    // Answer c
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");
    return 0;
}