#include "header.h"

void print()
{
  int i;
  if (top == -1)
  {
    printf("stack overflow\n");
    return;
  }
  for (i=top; i>=0; i--)
  {
    printf("%d ", stack_arr[i]);
  }
  printf("\n");
}
