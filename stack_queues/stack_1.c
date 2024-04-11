#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct 
{
  int *collection;
  int capacity;
  int size;
} Stack;

Stack *create_stack(int capacity);
void destroy_stack(Stack *stack);
int is_full(Stack *stack);
int is_empty(Stack *stack);
int pop(Stack *stack, int *item);
int push(Stack *stack, int item);
int peek(Stack *stack, int *item);

int main(void)
{
  Stack *stack = create_stack(0);
  if (stack == NULL)
  {
     printf("Error creating stack\n");
     return (1);
  }
  if (is_empty(stack))
  {
    printf("Stack is empty\n");
  }
  
  push(stack, 2);
  printf("stack size: %d\n", stack->size);
  
  destroy_stack(stack);
  
  return (0);
}


Stack *create_stack(int capacity)
{
  Stack *stack;

  if (capacity <= 0)
    return (NULL);
    
  stack = malloc(sizeof(stack));
  if (stack == NULL)
    return (NULL);
    
  stack->collection = malloc(sizeof(int) * capacity);
  if (stack->collection == NULL)
  {
    free(stack);
    return (NULL);
  }
    
  stack->capacity = capacity;
  stack->size = 0;
  
  return (stack);
}

void destroy_stack(Stack *stack)
{
  free(stack->collection);
  free(stack);
}


int is_full(Stack *stack)
{
  if (stack->capacity == stack->size)
    return (1);
  else 
    return (0);
}

int is_empty(Stack *stack)
{
  if (stack->size == 0)
    return (1);
  else
    return (0);
}


int push(Stack *stack, int item)
{
  if (is_full(stack)) return (0);

  stack->collection[stack->size] = item;
  stack->size++;
  
  return (1);
}
