#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number to find the factorial
 * Return: number value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
