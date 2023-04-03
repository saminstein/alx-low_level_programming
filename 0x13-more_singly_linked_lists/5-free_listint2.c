#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a "listint_t" list
 * @head: The head of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = *head;
		while ((temp = ptr) != NULL)
		{
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
