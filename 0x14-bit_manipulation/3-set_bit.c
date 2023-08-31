#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: pointer to a number
 * @index: index to change in the number
 * Return: 1 if it worked, or -1 if an error occur
 * red
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned long int mask;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = mask | *n;

	return (1);
}
