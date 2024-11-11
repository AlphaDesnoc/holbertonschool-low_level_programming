#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: char ptr
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *cpy;
	int len;

	register int index;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (NULL);

	for (index = 0; index <= len; index++)
		cpy[index] = str[index];

	return (cpy);
}
