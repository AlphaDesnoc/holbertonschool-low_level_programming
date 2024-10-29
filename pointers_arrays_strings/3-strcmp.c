#include "main.h"

/**
* _strcmp - Entry point
* @s1: p
* @s2: p
* Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len1 == len2)
		return (0);
	
	else if (len1 > len2)
		return (1);

	else
		return (-1);

}
