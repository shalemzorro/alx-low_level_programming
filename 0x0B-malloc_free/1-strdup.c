#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	i = 0;
	if (!str)
		return (NULL);
	while (*(str + i))
		i++;
	len = i;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	for (i = 0; i <= len; ++i)
		*(s + i) = *(str + i);
	return (s);
}
