#include <stdio.h>

int main()
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int a, b, c;
    scanf("(%d) %d-%d", &a, &b, &c);
    printf("You entered %d.%d.%d", a, b, c);
    return 0;
}