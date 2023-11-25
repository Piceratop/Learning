/* Prints a table of squares using a for statement */

#include <stdio.h>

int main() {
    int i, n;
    char c;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
            do {
                printf("Press Enter to continue...");
            } while ((c = getchar()) != '\n');
        }
    }

    return 0;
}