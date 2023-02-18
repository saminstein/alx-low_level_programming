#include <stdio.h>
/**
 * main - A c program that prints all the numbers of base
 * 16 in lowercase, first print 0-9 & a-f in lowercase
 * Return: always 0
 */
int main(void)
{
	int n;
	char h;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}

