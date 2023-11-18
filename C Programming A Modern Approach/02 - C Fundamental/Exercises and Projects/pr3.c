#include <stdio.h>
#define PI 3.14f
#define RATIO (4.0f / 3.0f)

int main(void) {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("Volume of the sphere: %f", RATIO * PI * radius * radius * radius);
    return 0;
}