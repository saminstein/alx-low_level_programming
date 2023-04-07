#include "main.h"


/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int w;
	char *b;

	w = 0x0001;
	b = (char *) &w;
	return ((int) *b);
}
