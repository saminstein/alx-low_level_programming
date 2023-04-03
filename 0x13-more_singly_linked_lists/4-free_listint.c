#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a "listint_t" list
 * @head: The head of the linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
