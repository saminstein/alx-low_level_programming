#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - function that inserts a new node a
 * t a given position.
 * @head: The head of the linked list
 * @idx: index of the list where the new node should be added, starts
 * at 0
 * @n: integer element
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size;
	listint_t *temp;
	listint_t *h;

	temp = malloc(sizeof(listint_t));
	h = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;

	if (idx < 1)
	{
		printf("invalid position");
	}
	for (size = 0; size < idx - 1; size++)
	{
		h = h->next;
	}
	if (head == NULL && idx != 0)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = h->next;
		h->next = temp;
	}
	return (temp);
}
