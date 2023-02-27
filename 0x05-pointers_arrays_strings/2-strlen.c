#include "main.h"

/**
 * _strlen - a function that returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
