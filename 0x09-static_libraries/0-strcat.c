#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (0);
}
