#include "main.h"

/**
 * _puts - write a function that prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
