#include "main.h"

/**
* _strchr - Entry point
* @s: ptr
* @c: char 
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	return (s);
}
