#include "lists.h"

/**
<<<<<<< HEAD
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
=======
 * dlistint_len - function that returns the nu
 * mber of elements in a linked dlistint_t lis
 * t
>>>>>>> 2264b2ca82335f61013b93406997f02063a352d2
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

<<<<<<< HEAD
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
=======
  	while (h != NULL)
  	{
    		count++;
    		h = h->next;
  	}
    	return (count);
>>>>>>> 2264b2ca82335f61013b93406997f02063a352d2
}
