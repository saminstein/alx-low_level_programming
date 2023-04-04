#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - function that deletes the node at in
 * dex of a "listint_t" linked list
 * @head: head of the linked list
 * @index: is the index of the node that should be deleted. Index sta
 * rts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		return (-1);
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
