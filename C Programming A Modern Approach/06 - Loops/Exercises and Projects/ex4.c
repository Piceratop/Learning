#include <stdio.h>

int main(void) {
    int i;
    // Answer a
    for (i = 0; i < 10; i++) printf("%d ", i);
    printf("\n");
    // Answer b
    for (i = 0; i < 10; ++i) printf("%d ", i);
    printf("\n");
    // Answer c
    for (i = 0; i++ < 10;) printf("%d ", i);
    printf("\n");
    return 0;
}