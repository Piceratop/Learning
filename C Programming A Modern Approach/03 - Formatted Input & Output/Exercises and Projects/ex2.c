#include <stdio.h>

int main()
{
    float x = 52.52471;
    printf("--%-8.1e--", x);
    printf("\n");
    printf("--%10.6e--", x);
    printf("\n");
    printf("--%-8.3f--", x);
    printf("\n");
    printf("--%6.0f--", x);
    printf("\n");
    return 0;
}