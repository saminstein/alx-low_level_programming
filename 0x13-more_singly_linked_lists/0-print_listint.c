#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a "listin
 * t_t" list.
 * @h: The head of the linked list
 * Return: the number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
