#include <stdio.h>
/**
 * main - A program that prints different types on a computer compiled
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

