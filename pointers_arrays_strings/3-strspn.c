#include "main.h"

/**
 * _strspn - Entry point
 * @s: ptr
 * @accept: ptr
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
	}

	return (c);

}
