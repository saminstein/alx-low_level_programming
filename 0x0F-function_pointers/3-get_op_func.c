#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that selects the correct function to perfor
 * m the operation asked by the user.
 * @s: The operator passed as argument
 * Return: pointer to the function that corresponds to the operator g
 * iven
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}

	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
