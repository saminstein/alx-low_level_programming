#include <stdio.h>
#include "main.h"

void copy_files(const char *src, const char *dest);

/**
 * main - checks the code
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_files(av[1], av[2]);
	exit(0);
}


/**
 * copy_files - program that copies the content of a file to another
 * file
 * @src: copy from
 * @dest: copy into
 * Return: void
 */
void copy_files(const char *src, const char *dest)
{
	int file_from, file_to, read_ch = 0;
	char buffer[1024];

	file_from = open(src, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	file_to = open(dest, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while (read_ch > 0)
	{
		read_ch = read(file_from, buffer, 1024);
		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (read_ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
