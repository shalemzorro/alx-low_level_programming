#include "main.h"

/**
 * print_last_digit - return last digit
 * @n: number to check
 * Return: result output
 */

int print_last_digit(int n)
{

	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
