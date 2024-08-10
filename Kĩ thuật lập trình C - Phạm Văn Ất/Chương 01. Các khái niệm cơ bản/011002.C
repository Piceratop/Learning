/* Chuong trinh minh hoa cac kha nang dua ra (011002.C) */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
   int a, c, t; float b, d;
   a = 123; c = -4685; t = 12;
   b = -45.855; d = 123.425;
   system("cls");
   printf("\n \'Chuc cac ban may man\'\n");
   printf("\n \"Chuc cac ban may man\"");
   printf("\n\n \\Chuc cac ban may man\\");
   printf("\n \"Tong san lung hang nam tang %2d%%\"", t);
   /* Giua cac so dua ra khong co khoang cach */
   printf("\n\n %d%f%d%f", a, b, c, d);
   /* Giua cac so dua ra co nhung khoang trong */
   printf("\n\n %6d%8.2f%7d%8.2f", a, b, c, d);
   /* Giua cac so dua ra co dat nhung ky tu khac */
   printf("\n\n a = %d, b = %0.2f, c = %d, d = %.2f", a, b, c, d);
   getch();
   return 0;
}