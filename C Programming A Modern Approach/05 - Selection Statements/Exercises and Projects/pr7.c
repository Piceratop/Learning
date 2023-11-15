#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int largest = a, smallest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (d > largest) {
        largest = d;
    }
    printf("Largest: %d\n", largest);
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    if (d < smallest) {
        smallest = d;
    }
    printf("Smallest: %d\n", smallest);
    return 0;
}