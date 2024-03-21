#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of al
 * l the data (n) of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: The sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
