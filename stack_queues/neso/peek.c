#include "header.h"

int peek()
{
  if (isEmpty())
  {
    printf("stack overflow\n");
    exit(1);
  }
  return stack_arr[top];
}
