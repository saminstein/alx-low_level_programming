#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @t: the integer to be computed
 * Return: The absolute value
 */
int _abs(int t)
{
	if (t < 0)
		t = -(t);
	else if (t >= 0)
		t = t;
	return (t);
}
