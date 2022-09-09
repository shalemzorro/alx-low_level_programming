#include <stdio.h>

/**
 * main - Print all possible combinations of 2 two digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i;

	c = i = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(c);
			putchar(c);
			putchar(' ');
			putchar(i);
			putchar(i);

			if ((c != '9') || (c == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
