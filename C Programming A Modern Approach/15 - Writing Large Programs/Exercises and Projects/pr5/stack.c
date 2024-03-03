#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

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