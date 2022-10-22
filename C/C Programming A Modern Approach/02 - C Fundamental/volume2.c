/*
 * Ten chuong trinh: volume2.c
 * Muc dich: Tinh the tich hinh hop chu nhat voi gia tri nhap vao tu nguoi dung
 */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume;
  printf("Nhap chieu cao cua hop: ");
  scanf("%d", &height);
  printf("Nhap chieu dai day cua hop: ");
  scanf("%d", &length);
  printf("Nhap chieu rong day cua hop: ");
  scanf("%d", &width);
  volume = height * length * width;

  printf("Kich thuoc hinh hop chu nhat: %dx%dx%d\n", length, width, height);
  printf("The tich: %d", volume);

  return 0;
}