#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct {
  int value[STACK_LENGTH];
  int top;
} stack;


bool push(stack *mystack, int value)
{
  if (*mystack->top >= STACK_LENGTH-1) return false;
  
  top++;
  mystack[top] = value;
  return true;
}

int pop(stack *mystack)
{
  int result;
  
  if (top == EMPTY) return STACK_EMPTY;
  
  result = mystack[top];
  top--;
  return result;
}
int main(void)
{
  int t;

  push(56);
  push(78);
  push(13);
  
  while ((t = pop()) != STACK_EMPTY)
  {
    printf("t = %d\n", t);
  }
}
