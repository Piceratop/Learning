#include <stdio.h>
#include <stdbool.h>

int main()
{
    _Bool flag = true;
    bool not_flag = false;
    printf("%s\n", flag ? "This is true" : "This is false");
    printf("%s\n", not_flag ? "This is true" : "This is false");
}