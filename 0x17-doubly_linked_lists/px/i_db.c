#include "main.h"

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};


int main(void)
{
  struct node *head = NULL;
  struct node *ptr;
  head = addToEmpty(head, 45);
  head = addAtBeg(head, 60);
  
  ptr = head;
  while (ptr != NULL)
  {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
  return (0);
}

struct node *addAtBeg(struct node *head, int n)
{
  struct node *temp;
  
  temp = malloc(sizeof(struct node));
  
  temp->prev = NULL;
  temp->data = n;
  temp->next = NULL;
  temp->next = head;
  head->prev = temp;
  head = temp;
  return (head);
}
