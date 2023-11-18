#include <stdio.h>

int main(void) {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("All the even squares between 1 and %d are:\n", n);
    for (i = 2; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }
    return 0;
}