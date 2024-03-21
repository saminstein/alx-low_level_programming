#include "lists.h"

/**
 * insert_dnodeint_at_index - function that in
 * serts a new node at a given position.
 * @h: idx is the index of the list where th
 * e new node should be added
 * @idx: The index of the list where the new node
 * should be added
 * @n: data that will be inserted
 * Return: the address of the new node, or NULL if
 * it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int position = 0;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	while (current && position < idx - 1)
	{
		current = current->next;
		position++;
	}

	if (position < idx - 1 || current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}
