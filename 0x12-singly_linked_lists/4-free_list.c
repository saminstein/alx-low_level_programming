#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees "list_t" list
 * @head: The pointer to the first node of linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
