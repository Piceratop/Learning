#include <stdio.h>

int main() {
    // Example using escape sequences
    printf("Hello\bWorld!\n");  // Output: HelloWorld!
    printf("Hello\nWorld!\n");  // Output: Hello
                                //         World!

    printf("Hello\rWorld!\n");  // Output: World!

    printf("Hello\tWorld!\n");  // Output: Hello     World!

    // Example using equivalent octal escapes
    printf("Hello\010World!\n");  // Output: HelloWorld!
    printf("Hello\012World!\n");  // Output: Hello
                                  //         World!

    printf("Hello\015World!\n");  // Output: World!

    printf("Hello\011World!\n");  // Output: Hello     World!

    return 0;
}