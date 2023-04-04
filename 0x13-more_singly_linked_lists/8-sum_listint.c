#include <stdlib.h>
#include "lists.h"


/**
 *  sum_listint - function that returns the sum of all the data (n) o
 *  f a "listint_t" linked list
 *  @head: Head of the linked list
 *  Return: sum of all the data(n), if list empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
