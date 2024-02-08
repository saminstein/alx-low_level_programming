#include "main.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one num
 * ber to another.
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_count = 0;

	while (n || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			bits_count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (bits_count);
}
