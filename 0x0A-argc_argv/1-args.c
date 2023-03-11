#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the strings in command line argument
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
