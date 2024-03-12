#include "lists.h"

/**
 * print_dlistint: function that prints all the elements of a linked list.
 * @h: head of the linked list
 * Return: number of nodes of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
 	int num_of_nodes = 0;

  while (h != NULL)
  {
    printf("%d\n", h->n);
    num_of_nodes++;
    
    h = h->next;
  }
  return (num_of_nodes);
}
