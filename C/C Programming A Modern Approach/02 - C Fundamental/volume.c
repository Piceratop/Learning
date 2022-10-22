/*
 * Name: volume.c
 * Purpose: Prints the volume of a box
 */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume;
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;

  printf("Dimension: %dx%dx%d\n", height, length, width);
  printf("Volume: %d\n", volume);

  return 0;
}
