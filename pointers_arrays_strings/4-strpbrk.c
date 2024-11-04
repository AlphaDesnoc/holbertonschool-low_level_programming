#include "main.h"

/**
* _strpbrk - Entry point
* @s: ptr
* @accept: ptr
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}

	return (0);
}
