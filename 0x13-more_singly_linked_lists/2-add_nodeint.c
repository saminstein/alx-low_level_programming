#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a "listint_t" list.
 * @head: The head of the linked list
 * @n: value to add to new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	if (head != NULL)
	{
		temp->n = n;
		temp->next = *head;

		*head = temp;
		return (temp);
	}
	return (0);
}
