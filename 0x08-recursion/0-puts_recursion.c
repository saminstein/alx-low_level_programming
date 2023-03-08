#include "main.h"

/**
 * _puts_recursion - writes a function that prints a string follo
 * wed by a new line
 * @s: The string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
