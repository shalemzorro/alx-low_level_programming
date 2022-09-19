#include "main.h"
#include <string.h>

/**
 * print_rev- prints a string in reverse
 * @s: string to reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar(10);
}
