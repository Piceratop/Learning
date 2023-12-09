#include <ctype.h>
#include <stdio.h>

int main() {
    printf("Enter a sentence: ");
    int count_vowels = 0;
    char cur_letter;
    while ((cur_letter = getchar()) != '\n') {
        switch (toupper(cur_letter)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count_vowels++;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %d vowels.\n", count_vowels);
    return 0;
}