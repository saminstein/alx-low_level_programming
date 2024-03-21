#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert
 * s a new node at a given position.
 * @h: idx is the index of the list where the new 
 * node should be added
 * @n: data that will be inserted
 * Return: the address of the new node, or NULL if
 * it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;
	dlistint_t *prev =
