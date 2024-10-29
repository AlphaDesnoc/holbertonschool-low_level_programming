#include "main.h"

/**
* _strcpy - Entry point
* @dest: p
* @src: p
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int src_len = 1;
	int i;
	
	while (src_len != '\0')
		src_len++;

	for (i = 0; i < src_len; i++)
	{
		dest[i] = src[i];
	}
}
