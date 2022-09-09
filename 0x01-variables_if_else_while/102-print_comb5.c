#include <stdio.h>

/**
 * main - Print all possible combinations of 2 two digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c < '100'; c++)
	{
		for (i = '0'; i < '100'; i++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((c % 10) + '0');

			if (i != '98')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
