#include <stdio.h>

int main() {
    char letter_phone_digit;
    printf("Enter phone number: ");
    while ((letter_phone_digit = getchar()) != '\n') {
        switch (letter_phone_digit) {
            case 'A':
            case 'B':
            case 'C':
                printf("2");
                break;
            case 'D':
            case 'E':
            case 'F':
                printf("3");
                break;
            case 'G':
            case 'H':
            case 'I':
                printf("4");
                break;
            case 'J':
            case 'K':
            case 'L':
                printf("5");
                break;
            case 'M':
            case 'N':
            case 'O':
                printf("6");
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                printf("7");
                break;
            case 'T':
            case 'U':
            case 'V':
                printf("8");
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                printf("9");
                break;
            default:
                printf("%c", letter_phone_digit);
                break;
        }
    }

    return 0;
}