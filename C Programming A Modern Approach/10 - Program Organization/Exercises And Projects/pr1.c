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
   char ch, compare;
   printf("Enter parentheses and/or braces: ");
   while ((ch = getchar()) != EOF && ch != '\n') {
      if (ch == '(' || ch == '[' || ch == '{') {
         push(ch);
      } else if (ch == ')' || ch == ']' || ch == '}') {
         compare = pop();
         if (compare == '(' && ch == ')') {
            continue;
         }
         if (compare == '[' && ch == ']') {
            continue;
         }
         if (compare == '{' && ch == '}') {
            continue;
         }
         printf("Parentheses/braces aren't nested properly\n");
         return 0;
      } else if (ch != ' ') {
         printf("Parentheses/braces aren't nested properly\n");
         return 0;
      }
   }

   if (is_empty()) {
      printf("Parentheses/braces are nested properly\n");
      return 0;
   }

   printf("Parentheses/braces aren't nested properly\n");
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
   printf("Stack overflow\n");
   exit(1);
}

void stack_underflow(void) {
   printf("Parentheses/braces aren't nested properly\n");
   exit(0);
}