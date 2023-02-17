#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
#include <time.h>
/* betty style doc for function main goes there */
/**
* main - A c program that prints a + or - number
* Return: 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0}
	{
	 printf("%i is positive", n);
	}
	else if (n == 0)
	{
	printf("%i is zero", n);
	}
	else
	{
	printf("%i is negative", n);
	}
	printf("\n");
	return (0);
}
