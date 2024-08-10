#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
   system("cls");
   double a, b, c, d;
   printf("Nhap vao 4 so thuc: ");
   scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
   printf("Tich cua 4 so thuc la: %lf", a * b * c * d);
   getch();
   return 0;
}