#include "main.h"

/**
 * _islower - check whether a character is lowercase
 * @c: The character
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
