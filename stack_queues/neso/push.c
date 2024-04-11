#include "header.h"

void push(int data)
{
  if (isfull())
  {
    printf("stack overflow\n");
  }
  top = top + 1;
  stack_arr[top] = data;
}
