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
	while (n > 0 && n--)
		s[n] = b;

	return (s);
}
