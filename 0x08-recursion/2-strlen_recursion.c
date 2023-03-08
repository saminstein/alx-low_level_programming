#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: String to count
 * Return: numbee value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
