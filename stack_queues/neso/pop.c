#include "header.h"

int pop()
{
  int value;

  if (isEmpty())
  {
    printf("stack overflow\n");
    exit(1);
  }
  value = stack_arr[top];
  top = top - 1;
  return (value);
}
