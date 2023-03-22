#include "3-calc.h"

/**
 * op_add - function that adds two numbers
 * @a: The first number
 * @b: The second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: The first number
 * @b: The second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two numbers
 * @a: The first number
 * @b: The second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: result of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that calculates the modulos of two numbers
 * @a: The first number
 * @b: The second number
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
