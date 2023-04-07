#include "main.h"


/**
 * clear_bit - function that sets the value of a bit to 0 at a gi
 * ven index
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 64)
		return (-1);

	b = 1 << index;
	*n = (*n & ~b);
	return (-1);
}
