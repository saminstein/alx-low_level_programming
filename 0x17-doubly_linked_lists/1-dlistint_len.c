#include "lists.h"

/**
 * dlistint_len - function that returns the nu
 * mber of elements in a linked dlistint_t lis
 * t
 * @h: head of the linked list
 * Return: number of elements in the linked li
 * st
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

  	while (h != NULL)
  	{
    		count++;
    		h = h->next;
  	}
    	return (count);
}
