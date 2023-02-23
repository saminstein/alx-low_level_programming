#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0-9 exclud
 * ing 2 and 4
 * Return: The numbers 0-9
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
