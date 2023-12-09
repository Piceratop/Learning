#include <stdio.h>

int main() {
    printf("Enter a first and last name: ");
    char initial, ch;
    initial = getchar();
    while ((ch = getchar()) != ' ')
        ;
    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }
    printf(", %c.", initial);
    return 0;
}