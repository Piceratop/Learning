#include <stdio.h>

int main() {
    // Example using escape sequences
    printf("Hello\bWorld!\n");  // Output: HelloWorld!
    printf("Hello\nWorld!\n");  // Output: Hello
                                //         World!

    printf("Hello\rWorld!\n");  // Output: World!

    printf("Hello\tWorld!\n");  // Output: Hello     World!

    // Example using equivalent octal escapes
    printf("Hello\x08World!\n");  // Output: HelloWorld!
    printf("Hello\x0aWorld!\n");  // Output: Hello
                                  //         World!

    printf("Hello\x0dWorld!\n");  // Output: World!

    printf("Hello\x09World!\n");  // Output: Hello     World!

    return 0;
}