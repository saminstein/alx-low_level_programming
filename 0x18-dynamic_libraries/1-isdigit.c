#include "main.h"

/**
 * _isdigit - function that checks for a digit 0-9
 * @c: The digit checked
 * Return: 1 if number (0-9), 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
