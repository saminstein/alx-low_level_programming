#include "main.h"

/**
 * get_bit - function that gets the value of a bit
 * at a given index
 * @n: number input
 * @index: index of the bit, starts from 0
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	unsigned long int mask;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	mask = 1UL << index;

	return ((n & mask) != 0);
}
