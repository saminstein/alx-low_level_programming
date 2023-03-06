#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: The value to modify
 * @to: The value to assign
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
