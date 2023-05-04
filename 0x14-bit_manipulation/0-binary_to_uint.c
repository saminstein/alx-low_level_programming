#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary string to an unsi
 * gned int
 * @b: The binary string to convert
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '0')
			result = result * 2 + 0;
		else if (*b == '1')
			result = result * 2 + 1;
		b++;
	}
	return (result);
}
