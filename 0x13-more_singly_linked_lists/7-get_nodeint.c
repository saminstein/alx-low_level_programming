#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a "li
 * stint_t" linked list
 * @head: head of the linked list
 * Return: nth node, if node doesnt exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
