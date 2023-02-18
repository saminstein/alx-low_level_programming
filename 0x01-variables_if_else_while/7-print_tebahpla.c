#include <stdio.h>
/**
 * main - A c program that prints lowercase alphabets in r
 * everse
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
