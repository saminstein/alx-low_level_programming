#include <stdio.h>
/**
 * main - A c program that prints alphabets in lowercase
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{						          putchar(x);
	}
	putchar("\n");
	return (0);
}
