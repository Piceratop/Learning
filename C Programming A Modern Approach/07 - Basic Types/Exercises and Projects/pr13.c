#include <stdio.h>

int main() {
    int word_count = 0, char_count = 0, new_word = 1;
    char ch;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            new_word = 1;
        } else {
            if (new_word) {
                word_count++;
                new_word = 0;
            }
            char_count++;
        }
    }
    printf("Average word length: %.1f\n", (float)char_count / (float)word_count);
    return 0;
}