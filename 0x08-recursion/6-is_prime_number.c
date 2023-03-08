#include "main.h"
#include <stdio.h>

int check_prime_num(int n, int i);

/**
 * is_prime_number - returns if an input number is prime number
 * @n: The number to check
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime_num(n, 1));
}

/**
 * check_prime_num - checks if number is prime
 * @n: The number to check
 * @i: The iteration times
 * Return: 1 prime, 0 composite
 */
int check_prime_num(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime_num(n, i + 1));
}

