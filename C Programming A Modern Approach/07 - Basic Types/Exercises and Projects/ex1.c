#include <stdio.h>

int main(void) {
    int i;
    // Part a
    i = 077;
    printf("%d\n", i);
    // Part b
    i = 0x77;
    printf("%d\n", i);
    // Part c
    i = 0XABC;
    printf("%d\n", i);
    return 0;
}