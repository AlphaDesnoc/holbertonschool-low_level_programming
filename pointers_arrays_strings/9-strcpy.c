#include "main.h"

/**
* _strcpy - Entry point
* @dest: p
* @src: p
* Return: char
*/

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
