#include "main.h"

/**
 * print_binary - function that prints the bin
 * ary representation of a number
 * @n: number to represent in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
