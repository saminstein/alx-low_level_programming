#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: always 0
 */
int main(int ac, char **av)
{
	int file_fr, file_to,  rd, written;
	char buf[1024];

	if (ac < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_fr = open(av[1], O_RDONLY);
	if (file_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(file_fr, buf, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		}
		written = write(file_to, buf, rd);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(file_fr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_fr), exit(100);
	}
	else if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to), exit(100);
	}
	return (0);
}
