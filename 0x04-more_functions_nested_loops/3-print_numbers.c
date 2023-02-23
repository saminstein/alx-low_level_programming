#include "main.h"
/**
 * print_numbers - prints the numbers btw 0-9 and new line
 * Return: The numbers
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
