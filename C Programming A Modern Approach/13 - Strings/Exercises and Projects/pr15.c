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
int read_line(char str[], int n);
int evaluate_RPN_expression(const char* expression);

int main(void) {
   char expression[1000];
   int result;

   printf("Enter an RPN expression: ");
   read_line(expression, 1000);

   result = evaluate_RPN_expression(expression);
   printf("The result is %d\n", result);

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

int read_line(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n)
         str[i++] = ch;
   str[i] = '\0';
   return i;
}

int evaluate_RPN_expression(const char* expression) {
   for (int i = 0; expression[i] != '\0'; i++) {
      char ch = expression[i];
      if (ch >= '0' && ch <= '9')
         push(ch - '0');
      else if (ch != ' ') {
         int b = pop();
         int a = pop();
         switch (ch)
         {
         case '+':
            push(a + b);
            break;
         case '-':
            push(a - b);
            break;
         case '*':
            push(a * b);
            break;
         case '/':
            push(a / b);
            break;
         default:
            push(a);
            push(b);
            break;
         }
      }
   }

   return pop();
}