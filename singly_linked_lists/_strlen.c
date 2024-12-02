#include "lists.h"

/**
 * _strlen - get lenght of string
 * @s: string
 * Return: lenght of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
