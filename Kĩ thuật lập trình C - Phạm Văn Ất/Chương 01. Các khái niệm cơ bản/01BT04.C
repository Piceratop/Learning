#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
   int n;
   double bl, lk1;
   system("cls");
   printf("Nhap bac luong: ");
   scanf("%lf", &bl);
   printf("Nhap so ngay cong trong thang: ");
   scanf("%d", &n);
   printf("Nhap khoan tien da linh tu ky mot: ");
   scanf("%lf", &lk1);
   printf("Luong ky hai: %lf", bl * n / 26 - lk1);
   return 0;
}