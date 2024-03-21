#include "lists.h"

/**
 * print_dlistint - function that prints all the
 * elements of a linked list
 * @h: head of the linked list
 * Return: number of nodes of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}

