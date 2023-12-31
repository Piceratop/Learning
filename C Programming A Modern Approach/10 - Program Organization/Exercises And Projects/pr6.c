#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 1000

/* external variables */

char brackets[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);


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

void make_empty(void) {
   top = 0;
}

bool is_empty(void) {
   return top == 0;
}

bool is_full(void) {
   return top == STACK_SIZE;
}

void push(char i) {
   if (is_full()) {
      stack_overflow();
   } else {
      brackets[top++] = i;
   }
}

char pop(void) {
   if (is_empty()) {
      stack_underflow();
   } else {
      return brackets[--top];
   }
}

void stack_overflow(void) {
   printf("Expression is too complex\n");
   exit(1);
}

void stack_underflow(void) {
   printf("Not enough operands in expression\n");
   exit(0);
}