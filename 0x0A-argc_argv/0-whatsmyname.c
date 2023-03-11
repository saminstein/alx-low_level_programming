#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: number of arguments passed in the command line
 * @argv: array that contains the progran in a command line argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
