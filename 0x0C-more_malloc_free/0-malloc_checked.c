#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes to allocate
 * Return: pointer to the allocated memory.
 * if malloc fails, status value should be equals 98
 */
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
