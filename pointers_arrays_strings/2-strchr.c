#include "main.h"

/**
 * _strchr - Entry point
 * @s: ptr
 * @c: char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;

	if (*s == c)
		return (s);
	else
		return (NULL);
}
