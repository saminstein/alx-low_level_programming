#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array of the hash table
 * Return: pointer to the newly created hash table or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *new_table;
  hash_node_t **array;
  unsigned int i;
  
  new_table = malloc(sizeof(hash_table_t));
  if (new_table == NULL)
    return NULL;
    
  array = malloc(sizeof(hash_node_t *) * size);
  if (array == NULL)
    return NULL;
    
  for (i = 0; i < size; i++)
    array[i] = NULL;

  new_table->array = array;
  new_table->size = size;
  
  return (new_table);
}
