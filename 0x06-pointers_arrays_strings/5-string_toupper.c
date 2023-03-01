#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppe
 * rcase.
 * @i: The string to change
 * Return: char var
 */
char *string_toupper(char *i)
{
	int a = 0;

	while (i[a])
	{
		if (i[a] >= 97 && i[a] <= 122)
		{
			i[a] -= 32;
		}
		a++;
	}
	return (i);
}
