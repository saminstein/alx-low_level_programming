#include <stdio.h>

/**
 * main - prints all argument it recieves
 * @argc: number of command line arguments
 * @argv: array that contains the strings in command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
