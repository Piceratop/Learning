#include <stdio.h> /* (010402.C) */
#include <conio.h>
#include <stdlib.h>
#include <math.h> /* Su dung them thu vien cac ham toan hoc */

int main()
{
   float r, cv, dt; /* Khai bao 3 bieu thuc */
   system("cls");
   /* Dua ra man hinh thong bao ve yeu cau nhap du lieu */
   printf("\n Ban kinh r = ");
   /* Nhap mot gia tri thuc dua vao bien r */
   scanf("%f", &r);
   /* Tinh chu vi va dien tich hinh tron,
   dung ham M_PI (PI) da dinh nghia trong math.h */
   cv = 2 * M_PI * r; dt = M_PI * r * r;
   /* In ket qua */
   printf("\n Chu vi = %0.2f\n Dien tich = %0.2f", cv, dt);
   getch(); /* Tam dung may de xem ket qua */
   return 0;
}