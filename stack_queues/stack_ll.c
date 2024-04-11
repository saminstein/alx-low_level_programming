#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct node {
  int value;
  struct node *next;
} node;

node* head = NULL;
 
int mystack[STACK_LENGTH];
int top = EMPTY;

bool push(int value)
{
  node *newnode = malloc(sizeof(newnode));
  if (newnode == NULL)
    return false;
    
  newnode->value = value;
  newnode->next = head;
  head = newnode;
  
  return true;
}


int pop()
{
  int result;
  
  if (head == NULL) return STACK_EMPTY;
  
  result = head->value;
  node *tmp = head;
  head = head->next;
  free(tmp);
  
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
