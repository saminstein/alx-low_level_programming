#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a "listint_t"
 * linked list, and returns the head node’s data (n).
 * @head: head of a linked list
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *h = NULL;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;

	h = temp->next;
	free(temp);
	*head = h;

	return (data);
}
