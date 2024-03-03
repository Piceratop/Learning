#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

/* external variables */

int main(void) {
   char ch;
   printf("Enter an RPN expression: ");
   do {
      scanf(" %c", &ch);
      if (ch >= '0' && ch <= '9')
         push(ch);
      else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
         int b = pop() - '0';
         int a = pop() - '0';
         switch (ch) {
         case '+':
            push(a + b + '0');
            break;
         case '-':
            push(a - b + '0');
            break;
         case '*':
            push(a * b + '0');
            break;
         case '/':
            push(a / b + '0');
            break;
         default:
            break;
         }
      } else if (ch == '=') {
         if (top == 1) {
            printf("Value of expression is %d\n", pop() - '0');
            printf("Enter an RPN expression: ");
         } else {
            printf("Not enough operands in expression\n");
            exit(0);
         }
      } else {
         exit(0);
      }
   } while (ch != '\n');
   return 0;
}

