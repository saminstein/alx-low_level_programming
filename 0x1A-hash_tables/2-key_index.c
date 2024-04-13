#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: The key, string
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should b
 * e stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
