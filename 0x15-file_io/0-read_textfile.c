#include "main.h"


/**
 * read_textfile - function that reads a text file and prints the let
 * ters
 * @filename: name of the file
 * @letters: number of characters to read from the file
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nwords;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nwords = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, nwords);

	free(buffer);
	close(fd);
	return (nwords);
}
