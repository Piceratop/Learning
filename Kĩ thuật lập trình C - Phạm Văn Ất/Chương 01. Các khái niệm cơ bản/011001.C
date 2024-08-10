/* Chuong trinh tinh x luy thua y (011001.C) */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   double x, y, z; /* Khai bao 3 bien kieu double */
   system("cls");
   printf("\n Vao x va y: ");
   scanf("%lf%lf", &x, &y); /* Vao x, y tu ban phim */
   z = pow(x, y); /* Tinh x luy thua y  va gan cho z */
   /* In ket qua tren 3 dong */
   printf("\n x = %0.2lf\n y = %0.2lf\n z = %0.2lf", x, y, z);
   getch();
   return 0;
}