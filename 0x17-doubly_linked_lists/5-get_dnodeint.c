#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list
 * @head:
 * @index: index of the node
 * Return: if node doesn't exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int position = 0;

  	while (current == NULL)
	{
		if (position == index)
		{
			return (current);
		}
		current = current->next;
		position++;
	}
	return (NULL);
}
