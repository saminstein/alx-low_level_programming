#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a
 * value associated with a key
 * @ht: is the hash table you want to look int
 * o
 * @key: the key you are looking for
 * Return: value associated with the element,o
 * r NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
