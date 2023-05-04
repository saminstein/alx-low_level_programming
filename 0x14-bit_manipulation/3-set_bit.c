#include "main.h"


/**
 * set_bit - function that sets the value of a bit to 1 at a given in
 * dex
 * @n: pointer to a number
 * @index: index to change in the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
