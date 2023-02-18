#include <stdio.h>
/**
 * main - A c program that prints alphabets in lowercase
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
