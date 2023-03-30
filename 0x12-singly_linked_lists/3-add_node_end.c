#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The original linked list
 * @str: string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *tmp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
		{
			return (NULL);
		}
		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new_list;
			return (tmp);
		}
	}
	return (NULL);
}

/**
 * _strlen - returns the length of a string
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
