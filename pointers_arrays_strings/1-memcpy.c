#include "main.h"

/**
* _memcpy - Entry point
* @dest: dest
* @src: src
* @n: size
* Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0 && n--)
		dest[n] = src[n];

	return (dest);
}
