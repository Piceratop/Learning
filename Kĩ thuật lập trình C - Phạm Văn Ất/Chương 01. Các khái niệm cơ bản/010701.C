#include <stdio.h>   /* 010701.C */
#include <stdlib.h>
#include <conio.h>

int main() {
   system("cls");
   printf("123456789... (hang nay dung de danh so cot)\n");
   printf("%d \n", -456);
   printf("%d \n", 456);
   printf("%5d \n", 456);
   printf("%5d \n", -456);
   printf("%8.0f \n", 45.71);
   printf("%f \n", -45.63);
   printf("%f \n", 45.63);
   printf("%8.3f \n", -45.63);
   printf("%8.3f \n", 45.6375);
   printf("%0.3f \n", -45.63);
   printf("%0.3f \n", 45.63);
   printf("%.2f \n", -0.345);
   printf("%.2f \n", 0.345);
   getch();
   return 0;
}