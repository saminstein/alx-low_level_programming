#include <stdio.h>
/**
 * main - A c program that prints all single digit numbers
 * of base 10, from 0 - 9 using putchar()
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
