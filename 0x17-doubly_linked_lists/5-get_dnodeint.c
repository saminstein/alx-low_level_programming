#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list
 * @head:
 * @index: index of the node
 * Return: if node doesn't exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  if (*head == NULL)
  {
    return (NULL);
  }
  if (index < 0)
  {
    return (NULL);
  }

  while (*head != NULL && index > 0)
  {
}
