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
  
  /*malloc(sizeof(struct node))
  
  head->prev = NULL;
  head->data = 10;
  head->next = NULL*/
  head = addToEmpty(head, 45);
  printf("%d\n", head->data);
  return (0);
}

struct node *addToEmpty(struct node *head, int n)
{
  struct node *temp;
  
  temp = malloc(sizeof(struct node));
  temp->prev = NULL;
  temp->data = n;
  temp->next = NULL;
  head = temp;
  
  return (head);
}
