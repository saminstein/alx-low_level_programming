#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integer
 * @a: An array of integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *j, i, tmp, k;

	j = a;

	for (i = 1; i < n; i++)
	{
		j++;
	}
	for (k = 0; k < i / 2; k++)
	{
		tmp = a[k];
		a[k] = *j;
		*j = tmp;
		j--;
	}
}
