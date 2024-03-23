#include <stdio.h>

/**
 * add - function adds two numbers
 * @a: first num
 * @b: second num
 * Return: result
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function subtracts two numbers
 * @a: first num
 * @b: second num
 * Return: result
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function multiplies two numbers
 * @a: first num
 * @b: second num
 * Return: result
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function divides two numbers
 * @a: first num
 * @b: second num
 * Return: result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: divide by a number greater than zero");
	}
	else
	{
		return (a / b);
	}
}

/**
 * mod - function returns the remainder of two num
 * bers
 * @a: first num
 * @b: second num
 * Return: result
 */
int mod(int a, int b)
{
	return (a % b);
}
