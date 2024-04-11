#include "header.h"

int isfull()
{
  if (top == MAX - 1)
    return 1;
  else
    return 0;
}