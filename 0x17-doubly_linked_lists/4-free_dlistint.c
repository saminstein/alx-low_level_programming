#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: head of the linked list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp = NULL;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	head = NULL;
}
