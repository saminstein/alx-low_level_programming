#include "hash_tables.h"

/**
 * function that retrieves a value associated with
 * a key
 * @ht: is the hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with the element, or N
 * ULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
