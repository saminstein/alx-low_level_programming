#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: The source string
 * @accept: The accepted character
 * Return: The string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
