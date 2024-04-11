#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
  int value;
  struct Node *next;
} Node;

typedef struct
{
  Node *head;
  Node *tail;
  int size;
} Queue;

Queue *create_queue();
int size(Queue *queue);
bool is_empty(Queue *queue);
int peek(Queue *queue, bool *status);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);

int main(void)
{
  Queue *queue = create_queue();
  
  if (is_empty(queue))
    printf("Queue is empty.\n");
  
  enqueue(queue, 4);
  return 0;
}


Queue *create_queue()
{
  Queue *queue = malloc(sizeof(queue));
  
  queue->head = NULL;
  queue->tail = NULL;
  queue->size = 0;
  
  return queue;
}

int size(Queue *queue)
{
  return queue->size;
}

bool is_empty(Queue *queue)
{
  return (queue->size == 0);
}

int peek(Queue *queue, bool *status)
{
  if (is_empty(queue))
  {
     *status = false;
  }
  
  *status = true;
  return queue->head->value;
}

void enqueue(Queue *queue, int value)
{
   Node *newNode = malloc(sizeof(Node));
   
   newNode->value = value;
   newNode->next = NULL;
   
   if (is_empty(queue))
   {
     queue->head = newNode;
     queue->tail = newNode;
   }
   else 
   {
     queue->tail->next = newNode;
     queue->tail = newNode;
   }
   
   queue->size++;
}


int dequeue(Queue *queue, bool *status)
{
   int value;
   int *value_ptr = NULL;
  
   if (is_empty(queue))
   {
     *status = false;
     return *value_ptr;
   }
   *status = true;
   
   value = queue->head->value;
   value_ptr = &value;
   
   Node *oldHead = queue->head;
   if (queue->size == 1)
   {
     queue->head = NULL;
     queue->tail = NULL;
   }
   else
   {
     queue->head = queue->head->next;
   }
   
   free(oldHead);
   
   queue->size--;
   
   return *value_ptr;
}

void destroy_queue(Queue *queue)
{
   Node *currentNode = queue->head;
   
   while (currentNode != NULL)
   {
     Node *temp = currentNode;
     currentNode = currentNode->next;
     free(temp);
   }
   free(queue);
}
