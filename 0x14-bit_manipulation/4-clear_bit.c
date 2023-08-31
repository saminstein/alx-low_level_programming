#include "main.h"

/**
 * clear_bit - function that sets the value of a b
 * it to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occur
 * red
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned long int mask;

	size = sizeof(unsigned long int *) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = (*n & ~mask);

	return (1);
}
