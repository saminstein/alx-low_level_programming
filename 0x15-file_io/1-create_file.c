#include "main.h"


/**
 * create_file - function that creates a file
 * @filename: The name of the file
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | 0644);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
 * _strlen - calculates the length of a string
 * @s: string to count
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
