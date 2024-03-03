#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 1000

char brackets[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif