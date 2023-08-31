#include "main.h"

/**
 * binary_to_uint - function that converts a binar
 * string to an unsigned int
 * @b: The binary string to convert
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '0')
		{
			decimal = decimal << 1;
		}
		else if (b[i] == '1')
		{
			decimal = decimal << 1 | 1;
		}
		i++;
	}
	return (decimal);
}
