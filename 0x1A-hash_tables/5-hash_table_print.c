#include "hash_tables.h"

/**
 * hash_table_print - function that prints a h
 * ash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *sepr;

	if (ht == NULL)
		return;

	printf("{");
	sepr = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sepr, tmp->key, tmp->value);
			sepr = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
