#include <stdio.h>

/**
 * main - Print all possible combinations of 2 two digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c = 0, i;

	while (c <= '9')
	{
		i = c;
		while (i <= '9')
		{
			if (i != c)
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				putchar(' ');
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');

				if ((c != '9') || (c == '9' && i != '9'))
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
