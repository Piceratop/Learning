#include <stdio.h>
#define PI 3.14f
#define RATIO (4.0f / 3.0f)

int main(void)
{
  float r = 10.0;
  printf("Volume of the sphere: %f", RATIO * PI * r * r * r);
  return 0;
}