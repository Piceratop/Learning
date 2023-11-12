#include <stdio.h>

int main() {
    int n, number_length;
    printf("Enter an number: ");
    scanf("%d", &n);
    if (0 <= n && n <= 9) {
        number_length = 1;
    } else if (10 <= n && n <= 99) {
        number_length = 2;
    } else if (100 <= n && n <= 999) {
        number_length = 3;
    } else {
        number_length = 4;
    }
    printf("The number %d has %d digits\n", n, number_length);
    return 0;
}