#include <stdio.h>
/**
 * main - A c program that prints lowercase and uppercase
 *
 * Return: always 0
 */
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		for (y = 'A'; y <= 'Z'; y++)
		{
			putchar(y);
		}
	putchar("\n");
	return (0);
	}
}
