#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
