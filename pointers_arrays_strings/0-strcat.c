#include "main.h"

/**
* _strcat - Entry point
* @dest: p
* @src: p
* Return: char
*/

char *_strcat(char *dest, char *src)
{
	
	while (*dest)
		++dest;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';


	return (dest);
}
