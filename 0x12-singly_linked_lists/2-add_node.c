#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a "li
 * st_t" list
 * @head: head of the link list
 * @str: string to store in the link listi
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;

		*head = new;

		return (new);
	}
	return (0);
}


/**
 * strlen - returns the length of a string
 * @s: string to count
 * Return: string length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
