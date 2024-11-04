#include "main.h"

/**
* _memset - Entry point
* @s: adress
* @b: char
* @n: size
* Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	if (n <= 0)
		return (s);

	while (*ptr && n--)
	{
		*ptr++ = b;
	}

	return (s);
}
