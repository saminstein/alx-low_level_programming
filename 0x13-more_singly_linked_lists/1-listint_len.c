#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that counts/returns the number of element
 * s in a linked "listint_t" list.
 * @h: The head of the linked list
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
