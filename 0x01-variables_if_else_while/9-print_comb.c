#include <stdio.h>
/**
 * main - A c program that prints single digits in ascendi
 * ng order, 0-9 using putchar() only 4 times
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
