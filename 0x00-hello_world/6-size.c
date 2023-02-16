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

printf("Size of a char: %lu byte(s)\n", sizeof(x));
printf("Size of an int: %lu byte(s)\n", sizeof(y));
printf("Size of a long int: %lu bytes(s)\n", sizeof(z));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(a));
printf("Size of a float: %lu bytes(s)\n", sizeof(f));
return (0);
}

