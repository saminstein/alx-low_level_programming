#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int j;
	int k;

	int x;
	int y;
	int z;

	while (i <= 98)
	{
		j = (i / 10 + '0');
		k = (i % 10 + '0');
		x = 0;
		while (x <= 99)
		{
			y = (x / 10 + '0');
			z = (x % 10 + '0');

			if (i < x)
			{
				putchar(j);
				putchar(k);
				putchar(' ');
				putchar(y);
				putchar(z);

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
