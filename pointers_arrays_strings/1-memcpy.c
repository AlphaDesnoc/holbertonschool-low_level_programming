#include "main.h"

/**
*  - Entry point
* 
* Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0 && n--)
		dest[n] = src[n];

	return (dest);
}
