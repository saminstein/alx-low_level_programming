#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *s;
	int j;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(*s) * ((max - min) + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		s[j] = min;

	return (s);
}
