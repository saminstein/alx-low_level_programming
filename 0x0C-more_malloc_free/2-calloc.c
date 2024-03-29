#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocates memory
 * If nmemb or size is 0, return NULL
 * If malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}

