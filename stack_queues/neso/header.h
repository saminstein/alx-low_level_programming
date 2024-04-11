#ifndef _HEADER
#define _HEADER

#include <stdio.h>
#include <stdlib.h>

#define MAX 4

extern int stack_arr[MAX];
extern int top;

void push(int data);
int pop();
void print();

int isEmpty();
int isfull();

int peek();

#endif
