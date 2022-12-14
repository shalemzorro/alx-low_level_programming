#include "main.h"

/**
 * _abs - function that prints an absolute value of a number
 * @n : takes in an integer
 * Return: 1 if greater than zero, 0 if zero and -1 if less than 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
