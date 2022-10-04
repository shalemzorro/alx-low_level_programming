#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: Number of command line arguments
 * @av: Array containing command line arguments
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			;
		len += j;
	}
	len += i;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j, ++k)
		{
			str[k] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
