#include <stdio.h>

int main()
{
    int n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    printf("The reversal is: %d", n % 10 * 100 + n / 10 % 10 * 10 + n / 100);
}