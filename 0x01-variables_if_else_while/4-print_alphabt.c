#include <stdio.h>
/**
 * main - A c program that prints all the alphabets in low
 * ercase except for q & e
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
