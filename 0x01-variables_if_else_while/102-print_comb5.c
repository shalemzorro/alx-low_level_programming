#include <stdio.h>

/**
 * main - Print all possible combinations of 2 two digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c = 0, i;

	while (c <= '99')
	{
		i = c;
		while (i <= '99')
		{
			if (i != c)
			{
				putchar((c / 10) + '48');
				putchar((c % 10) + '48');
				putchar(' ');
				putchar((i / 10) + '48');
				putchar((i % 10) + '48');

				if (c != '98' || i != '98')
				{
					putchar(',');
					putchar(' ');
				}
			}
			++i;
		}
		++c;
	}

	putchar('\n');

	return (0);
}
