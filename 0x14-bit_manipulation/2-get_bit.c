#include "main.h"

/**
 * get_bit - function that gets the value of a bit at a given ind
 * ex
 * @n: number input
 * @index: index of the bit, starts from 0
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (n)
	{
		if (n > 64)
			return ((n >> index) & 1);
	}
	return (-1);
}
