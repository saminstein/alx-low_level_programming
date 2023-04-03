#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end o
 * f a "listint_t" list.
 * @head: The head of the linked list
 * @n: The value to add at the end of the linked list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));

	ptr = *head;
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
